
using System.Collections;
using System.IO;
using UnityEngine;
using YooAsset;

namespace ET
{
    public class YooAssetResComponent
    {
        public static YooAssetResComponent Instance { get; private set; }= new YooAssetResComponent();

        private ResourcePackage defaultPackage;

        public IEnumerator InitYooAssetAsync(EPlayMode playMode)
        {
            string packageName = "DefaultPackage";
            
            // 初始化资源系统
            YooAssets.Initialize();

            //YooAssets.SetOperationSystemMaxTimeSlice(30);
            // 创建默认的资源包
            defaultPackage = YooAssets.TryGetPackage(packageName);

            if (defaultPackage == null)
            {
                defaultPackage = YooAssets.CreatePackage(packageName);
                YooAssets.SetDefaultPackage(defaultPackage);
            }

            InitializationOperation initializationOperation = null;

            //编辑器模拟模式
            if (playMode == EPlayMode.EditorSimulateMode)
            {
                var initParameters = new EditorSimulateModeParameters();
                initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(EDefaultBuildPipeline.BuiltinBuildPipeline,packageName);
                //initParameters.CacheFileAppendExtension = true;
                initializationOperation = defaultPackage.InitializeAsync(initParameters);
            }
            //单机运行模式
            else if (playMode == EPlayMode.OfflinePlayMode)
            {
                var initParameters = new OfflinePlayModeParameters();
                //initParameters.CacheFileAppendExtension = true;
                initializationOperation = defaultPackage.InitializeAsync(initParameters);
            }
            //联机运行模式
            else if (playMode == EPlayMode.HostPlayMode)
            {
                var initParameters                  = new HostPlayModeParameters();
                initParameters.BuildinQueryServices = new GameQueryServices();
                initParameters.DecryptionServices   = new FileOffsetDecryption();
                initParameters.RemoteServices       = new RemoteServices(GetHostServerURL(),GetHostServerURL());
                //initParameters.CacheFileAppendExtension = true;
                initializationOperation             = defaultPackage.InitializeAsync(initParameters);
            }

            yield return initializationOperation;

            if (defaultPackage.InitializeStatus != EOperationStatus.Succeed)
            {
                Debug.LogError($"{initializationOperation.Error}");
            }

            yield return LoadGlobalConfig();
            Debug.Log(GlobalConfig.Instance.CodeVersion);

        }

        private IEnumerator LoadGlobalConfig()
        {
            AssetHandle handle = YooAssets.LoadAssetAsync<GlobalConfig>("GlobalConfig");
            yield return handle;
            GlobalConfig.Instance = handle.AssetObject as GlobalConfig;
            handle.Release();
            defaultPackage.UnloadUnusedAssets();
        }

        public async ETTask LoadGlobalConfigAsync()
        {
            AssetHandle handle = YooAssets.LoadAssetAsync<GlobalConfig>("GlobalConfig");
            await handle;
            GlobalConfig.Instance = handle.AssetObject as GlobalConfig;
            handle.Release();
            defaultPackage.UnloadUnusedAssets();
        }


        public byte[] LoadTextAsset(string location)
        {
            AssetHandle assetHandle = YooAssets.LoadAssetSync<UnityEngine.TextAsset>(location);
            return (assetHandle.AssetObject as UnityEngine.TextAsset).bytes;
        }

        public async ETTask<byte[]> LoadTextAssetAsync(string location)
        {
            AssetHandle assetHandle = YooAssets.LoadAssetAsync<UnityEngine.TextAsset>(location);

            await assetHandle;

            return (assetHandle.AssetObject as UnityEngine.TextAsset).bytes;
        }

        public byte[] LoadRawFile(string Location)
        {
            RawFileHandle handle = YooAssets.LoadRawFileSync(Location);
            return handle.GetRawFileData();
        }

        public async ETTask<byte[]> LoadRawFileAsync(string Location)
        {
            RawFileHandle handle = YooAssets.LoadRawFileAsync(Location);
            await handle;
            return handle.GetRawFileData();
        }

        public string[] GetAssetLocationsByTag(string tag)
        {
            AssetInfo[] assetInfos = YooAssets.GetAssetInfos(tag);
            string[] locations = new string[assetInfos.Length];
            for (int i = 0; i < assetInfos.Length; i++)
            {
                locations[i] = assetInfos[i].Address;
            }
            return locations;
        }

        /// <summary>
        /// 获取资源服务器地址
        /// </summary>
        private string GetHostServerURL()
        {
            //string hostServerIP = "http://10.0.2.2:9999"; //安卓模拟器地址
            string hostServerIP = "http://192.168.3.182:9999"; 
            //string hostServerIP = "http://127.0.0.1:9999";
            string appVersion = "v1.0";

#if UNITY_EDITOR
            if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
                return $"{hostServerIP}/CDN/Android/{appVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
                return $"{hostServerIP}/CDN/IPhone/{appVersion}";
            else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
                return $"{hostServerIP}/CDN/WebGL/{appVersion}";
            else
                return $"{hostServerIP}/CDN/PC/{appVersion}";
#else
        if (Application.platform == RuntimePlatform.Android)
            return $"{hostServerIP}/CDN/Android/{appVersion}";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            return $"{hostServerIP}/CDN/IPhone/{appVersion}";
        else if (Application.platform == RuntimePlatform.WebGLPlayer)
            return $"{hostServerIP}/CDN/WebGL/{appVersion}";
        else
            return $"{hostServerIP}/CDN/PC/{appVersion}";
#endif
        }

        /// <summary>
        /// 远端资源地址查询服务类
        /// </summary>
        private class RemoteServices : IRemoteServices
        {
            private readonly string _defaultHostServer;
            private readonly string _fallbackHostServer;

            public RemoteServices(string defaultHostServer, string fallbackHostServer)
            {
                _defaultHostServer = defaultHostServer;
                _fallbackHostServer = fallbackHostServer;
            }
            string IRemoteServices.GetRemoteMainURL(string fileName)
            {
                return $"{_defaultHostServer}/{fileName}";
            }
            string IRemoteServices.GetRemoteFallbackURL(string fileName)
            {
                return $"{_fallbackHostServer}/{fileName}";
            }
        }

        /// <summary>
        /// 资源文件流加载解密类
        /// </summary>
        private class FileStreamDecryption : IDecryptionServices
        {
            /// <summary>
            /// 同步方式获取解密的资源包对象
            /// 注意：加载流对象在资源包对象释放的时候会自动释放
            /// </summary>
            AssetBundle IDecryptionServices.LoadAssetBundle(DecryptFileInfo fileInfo, out Stream managedStream)
            {
                BundleStream bundleStream = new BundleStream(fileInfo.FileLoadPath, FileMode.Open, FileAccess.Read, FileShare.Read);
                managedStream = bundleStream;
                return AssetBundle.LoadFromStream(bundleStream, fileInfo.ConentCRC, GetManagedReadBufferSize());
            }

            /// <summary>
            /// 异步方式获取解密的资源包对象
            /// 注意：加载流对象在资源包对象释放的时候会自动释放
            /// </summary>
            AssetBundleCreateRequest IDecryptionServices.LoadAssetBundleAsync(DecryptFileInfo fileInfo, out Stream managedStream)
            {
                BundleStream bundleStream = new BundleStream(fileInfo.FileLoadPath, FileMode.Open, FileAccess.Read, FileShare.Read);
                managedStream = bundleStream;
                return AssetBundle.LoadFromStreamAsync(bundleStream, fileInfo.ConentCRC, GetManagedReadBufferSize());
            }

            private static uint GetManagedReadBufferSize()
            {
                return 1024;
            }
        }

        /// <summary>
        /// 资源文件偏移加载解密类
        /// </summary>
        private class FileOffsetDecryption : IDecryptionServices
        {
            /// <summary>
            /// 同步方式获取解密的资源包对象
            /// 注意：加载流对象在资源包对象释放的时候会自动释放
            /// </summary>
            AssetBundle IDecryptionServices.LoadAssetBundle(DecryptFileInfo fileInfo, out Stream managedStream)
            {
                managedStream = null;
                return AssetBundle.LoadFromFile(fileInfo.FileLoadPath, fileInfo.ConentCRC, GetFileOffset());
            }

            /// <summary>
            /// 异步方式获取解密的资源包对象
            /// 注意：加载流对象在资源包对象释放的时候会自动释放
            /// </summary>
            AssetBundleCreateRequest IDecryptionServices.LoadAssetBundleAsync(DecryptFileInfo fileInfo, out Stream managedStream)
            {
                managedStream = null;
                return AssetBundle.LoadFromFileAsync(fileInfo.FileLoadPath, fileInfo.ConentCRC, GetFileOffset());
            }

            private static ulong GetFileOffset()
            {
                return 32;
            }
        }
    }

    /// <summary>
    /// 资源文件解密流
    /// </summary>
    public class BundleStream : FileStream
    {
        public const byte KEY = 64;

        public BundleStream(string path, FileMode mode, FileAccess access, FileShare share) : base(path, mode, access, share)
        {
        }
        public BundleStream(string path, FileMode mode) : base(path, mode)
        {
        }

        public override int Read(byte[] array, int offset, int count)
        {
            var index = base.Read(array, offset, count);
            for (int i = 0; i < array.Length; i++)
            {
                array[i] ^= KEY;
            }
            return index;
        }
    }
}
