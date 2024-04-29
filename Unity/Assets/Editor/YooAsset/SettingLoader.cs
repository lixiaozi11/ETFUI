using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;

namespace YooAsset.Editor
{
    public class SettingLoader
    {
        /// <summary>
        /// 加载相关的配置文件
        /// </summary>
        public static TSetting LoadSettingData<TSetting>() where TSetting : ScriptableObject
        {
            var settingType = typeof(TSetting);
            var guids = AssetDatabase.FindAssets($"t:{settingType.Name}");
            if (guids.Length == 0)
            {
                Debug.LogWarning($"Create new {settingType.Name}.asset");
                var setting = ScriptableObject.CreateInstance<TSetting>();
                string filePath = $"Assets/{settingType.Name}.asset";
                AssetDatabase.CreateAsset(setting, filePath);
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
                return setting;
            }
            else
            {
                if (guids.Length != 1)
                {
                    foreach (var guid in guids)
                    {
                        string path = AssetDatabase.GUIDToAssetPath(guid);
                        Debug.LogWarning($"Found multiple file : {path}");
                    }
                    throw new System.Exception($"Found multiple {settingType.Name} files !");
                }

                string filePath = AssetDatabase.GUIDToAssetPath(guids[0]);
                var setting = AssetDatabase.LoadAssetAtPath<TSetting>(filePath);
                return setting;
            }
        }
    }
    public class Tools {
        [MenuItem("YooAsset/构建内置资源清单")]
        public static void BuildinFileManifest()
        {
            string saveFilePath = "Assets/Resources/BuildinFileManifest.asset";
            if (File.Exists(saveFilePath))
            {
                File.Delete(saveFilePath);
                UnityEditor.AssetDatabase.SaveAssets();
                UnityEditor.AssetDatabase.Refresh();
            }

            string folderPath = $"{Application.dataPath}/StreamingAssets/{StreamingAssetsDefine.RootFolderName}";
            DirectoryInfo root = new DirectoryInfo(folderPath);
            if (root.Exists == false)
            {
                Debug.LogWarning($"没有发现YooAsset内置目录 : {folderPath}");
                return;
            }

            var manifest = ScriptableObject.CreateInstance<BuildinFileManifest>();
            FileInfo[] files = root.GetFiles("*", SearchOption.AllDirectories);
            foreach (var fileInfo in files)
            {
                if (fileInfo.Extension == ".meta")
                    continue;
                if (fileInfo.Name.StartsWith("PackageManifest_"))
                    continue;

                BuildinFileManifest.Element element = new BuildinFileManifest.Element();
                element.PackageName = fileInfo.Directory.Name;
                element.FileCRC32 = YooAsset.Editor.EditorTools.GetFileCRC32(fileInfo.FullName);
                element.FileName = fileInfo.Name;
                manifest.BuildinFiles.Add(element);
            }

            if (Directory.Exists("Assets/Resources") == false)
                Directory.CreateDirectory("Assets/Resources");
            UnityEditor.AssetDatabase.CreateAsset(manifest, saveFilePath);
            UnityEditor.AssetDatabase.SaveAssets();
            UnityEditor.AssetDatabase.Refresh();
            Debug.Log($"一共{manifest.BuildinFiles.Count}个内置文件，内置资源清单保存成功 : {saveFilePath}");
        }

    }

}