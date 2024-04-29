using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using YooAsset;

namespace ET
{
    public class YooAssetHandleComponentAwakeSystem : AwakeSystem<YooAssetHandleComponent>
    {
        public override void Awake(YooAssetHandleComponent self)
        {
           self.Awake();
        }
    }

    public class YooAssetHandleComponentDestroySystem : DestroySystem<YooAssetHandleComponent>
    {
        public override void Destroy(YooAssetHandleComponent self)
        {
           self.Destroy();
        }
    }

    public class YooAssetHandleComponentUpdateSystem : UpdateSystem<YooAssetHandleComponent>
    {
        public override void Update(YooAssetHandleComponent self)
        {
            self.Update();
        }
    }
    [FriendClass(typeof(ET.YooAssetHandleComponent))]
    public static class YooAssetHandleComponentSystem
    {
        #region 生命周期

        public static void Awake(this YooAssetHandleComponent self)
        {
            YooAssetHandleComponent.Instance = self;
        }

        public static void Destroy(this YooAssetHandleComponent self)
        {
            self.ForceUnloadAllAssets();

            YooAssetHandleComponent.Instance = null;
            self.PackageVersion = string.Empty;
            self.DownloaderOperation = null;

            self.AssetHandles.Clear();
            self.SubAssetHandles.Clear();
            self.RawFileHandles.Clear();
            self.AllAssetsHandles.Clear();
            self.HandleProgresses.Clear();
            self.DoneHandlesQueue.Clear();
        }

        public static void Update(this YooAssetHandleComponent self)
        {
            foreach (var kv in self.HandleProgresses)
            {
                HandleBase handleBase = kv.Key;
                Action<float> progress = kv.Value;

                if (!handleBase.IsValid)
                {
                    continue;
                }
                if (handleBase.IsDone)
                {
                    self.DoneHandlesQueue.Enqueue(handleBase);
                    progress?.Invoke(1);
                    continue;
                }

                progress?.Invoke(handleBase.Progress);
            }

            while (self.HandleProgresses.Count > 0)
            {
                var handle = self.DoneHandlesQueue.Dequeue();
                self.HandleProgresses.Remove(handle);
            }
        }

        #endregion

        #region 热更相关

        public static async ETTask<int> UpdateVersionAsync(this YooAssetHandleComponent self,int timeout = 30)
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            var operation = package.UpdatePackageVersionAsync();

            //await operation.GetAwaiter();
            await operation;

            if (operation.Status != EOperationStatus.Succeed)
            {
                return ErrorCode.ERR_UpdateVersionError;
            }
            
            self.PackageVersion = operation.PackageVersion;

            return ErrorCode.ERR_Success;
        }

        public static async ETTask<int> UpdateManifestAsync(this YooAssetHandleComponent self)
        {
            var package = YooAssets.GetPackage("DefaultPackage");
            var operation = package.UpdatePackageManifestAsync(self.PackageVersion);

            await operation;

            if (operation.Status != EOperationStatus.Succeed)
            {
                return ErrorCode.ERR_UpdateManifestError;
            }

            return ErrorCode.ERR_Success;
            
        }
        public static int CreateDownloader(this YooAssetHandleComponent self)
        {
            int downloadingMaxNum = 10;
            int failedTryAgain = 3;

            ResourceDownloaderOperation downloader = YooAssets.CreateResourceDownloader(downloadingMaxNum,failedTryAgain);

            if (downloader.TotalDownloadCount == 0)
            {
                Log.Info("没有发现需要下载的资源");
            }
            else
            {
                Log.Info("一共发现了{0}个资源需要更新下载。".Fmt(downloader.TotalDownloadCount));
                self.DownloaderOperation = downloader;
            }

            return ErrorCode.ERR_Success;

        }

        public static async ETTask<int> DownloadWebFileAsync(this YooAssetHandleComponent self,
            DownloaderOperation.OnStartDownloadFile onStartDownloadFile = null,
            DownloaderOperation.OnDownloadProgress onDownloadProgress = null,
            DownloaderOperation.OnDownloadError onDownloadError = null,
            DownloaderOperation.OnDownloadOver onDownloadOver = null)
        {
            if (self.DownloaderOperation == null)
            {
                return ErrorCode.ERR_Success;

            }

            self.DownloaderOperation.OnStartDownloadFileCallback = onStartDownloadFile;
            self.DownloaderOperation.OnDownloadErrorCallback = onDownloadError;
            self.DownloaderOperation.OnDownloadOverCallback = onDownloadOver;
            self.DownloaderOperation.OnDownloadProgressCallback = onDownloadProgress;

            self.DownloaderOperation.BeginDownload();

            await self.DownloaderOperation;

            // 检测下载结果
            if (self.DownloaderOperation.Status != EOperationStatus.Succeed)
            {
                return ErrorCode.ERR_ResourceUpdateDownloadError;
            }

            return ErrorCode.ERR_Success;
        }

        #endregion

        #region 卸载

        public static void UnloadUnusedAssets(this YooAssetHandleComponent self)
        {
            ResourcePackage package = YooAssets.GetPackage("DefaultPackage");
            package.UnloadUnusedAssets();
        }

        public static void TryUnloadUnusedAssets(this YooAssetHandleComponent self,string location)
        {
            ResourcePackage package = YooAssets.GetPackage("DefaultPackage");
            package.TryUnloadUnusedAsset(location);
        }

        public static void ForceUnloadAllAssets(this YooAssetHandleComponent self)
        {
            ResourcePackage package = YooAssets.GetPackage("DefaultPackage");
            package.ForceUnloadAllAssets();
        }

        public static void UnLoadAsset(this YooAssetHandleComponent self, string location)
        {
            if (self.AssetHandles.TryGetValue(location, out AssetHandle assetHandle))
            {
                assetHandle.Release();
                self.AssetHandles.Remove(location);
            }
            else if (self.RawFileHandles.TryGetValue(location,out RawFileHandle rawFileHandle))
            {
                rawFileHandle.Release();
                self.RawFileHandles.Remove(location);
            }
            else if (self.SubAssetHandles.TryGetValue(location,out SubAssetsHandle subAssetsHandle))
            {
                subAssetsHandle.Release();
                self.SubAssetHandles.Remove(location);
            }
            else if (self.AllAssetsHandles.TryGetValue(location, out AllAssetsHandle allAssetsHandle))
            {
                allAssetsHandle.Release();
                self.AllAssetsHandles.Remove(location);
            }
            else
            {
                Log.Error($"资源{location}不存在");
            }

        }

        #endregion

        #region 异步加载

        public static async ETTask<T> LoadAssetAsync<T>(this YooAssetHandleComponent self, string location) where T : UnityEngine.Object
        {

            if (!self.AssetHandles.TryGetValue(location, out AssetHandle handle))
            {
                handle = YooAssets.LoadAssetAsync<T>(location);
                self.AssetHandles[location] = handle;
            }

            await handle;

            return handle.GetAssetObject<T>();
        }

        public static async ETTask<UnityEngine.Object> LoadAssetAsync(this YooAssetHandleComponent self, string location, Type type)
        {
            if (!self.AssetHandles.TryGetValue(location, out AssetHandle handle))
            {
                handle = YooAssets.LoadAssetAsync(location,type);
                self.AssetHandles[location] = handle;
            }

            await handle;

            return handle.AssetObject;
        }

        public static async ETTask<UnityEngine.SceneManagement.Scene> LoadSceneAsync(this YooAssetHandleComponent self, string location,Action<float> progressCallback=null,LoadSceneMode loadSceneMode = LoadSceneMode.Single,bool suspendLoad = false, uint priority = 100)
        {
            SceneHandle sceneHandle = YooAssets.LoadSceneAsync(location,loadSceneMode,suspendLoad,priority);

            if (progressCallback != null)
            {
                self.HandleProgresses.Add(sceneHandle,progressCallback);
            }

            await sceneHandle;

            return sceneHandle.SceneObject;
        }

        public static async ETTask<byte[]> LoadRawFileDataAsync(this YooAssetHandleComponent self, string location)
        {
            if (!self.RawFileHandles.TryGetValue(location,out RawFileHandle rawFileHandle))
            {
                rawFileHandle = YooAssets.LoadRawFileAsync(location);
                self.RawFileHandles[location] = rawFileHandle;
            }

            await rawFileHandle;

            return rawFileHandle.GetRawFileData();
        }

        public static async ETTask<string> LoadRawFileTextAsync(this YooAssetHandleComponent self, string location)
        {
            if (!self.RawFileHandles.TryGetValue(location,out RawFileHandle rawFileHandle))
            {
                rawFileHandle = YooAssets.LoadRawFileAsync(location);
                self.RawFileHandles[location] = rawFileHandle;
            }

            await rawFileHandle;

            return rawFileHandle.GetRawFileText();
        }

        //根据包内的任意location加载包内所有资源
        public static async ETTask<UnityEngine.Object[]> LoadAllAssetsAsync(this YooAssetHandleComponent self, string location, string packageName)
        {
            if (!self.AllAssetsHandles.TryGetValue(packageName, out AllAssetsHandle allAssetsHandle))
            {
                allAssetsHandle = YooAssets.LoadAllAssetsAsync(location);
                self.AllAssetsHandles[packageName] = allAssetsHandle;
            }

            await allAssetsHandle;

            return allAssetsHandle.AllAssetObjects;
        }

        public static async ETTask<T[]> LoadAllAssetsAsync<T>(this YooAssetHandleComponent self, string location, string packageAndTypeName) where T : UnityEngine.Object
        {
            if (!self.AllAssetsHandles.TryGetValue(packageAndTypeName, out AllAssetsHandle allAssetsHandle))
            {
                allAssetsHandle = YooAssets.LoadAllAssetsAsync<T>(location);
                self.AllAssetsHandles[packageAndTypeName] = allAssetsHandle;
            }

            await allAssetsHandle;

            return allAssetsHandle.AllAssetObjects as T[];
        }

        public static async ETTask<T> LoadSubAssetAsync<T>(this YooAssetHandleComponent self, string location) where T : UnityEngine.Object
        {
            if (!self.SubAssetHandles.TryGetValue(location, out SubAssetsHandle subAssetsHandle))
            {
                subAssetsHandle = YooAssets.LoadSubAssetsAsync<T>(location);
                self.SubAssetHandles[location] = subAssetsHandle;
            }

            await subAssetsHandle;

            return subAssetsHandle.GetSubAssetObject<T>(location);
        }

        public static async ETTask<GameObject> LoadGameObjectAsync(this YooAssetHandleComponent self, string location)
        {
            if (!self.AssetHandles.TryGetValue(location, out AssetHandle assetHandle))
            {
                assetHandle = YooAssets.LoadAssetAsync<GameObject>(location);
                self.AssetHandles[location] = assetHandle;
            }

            await assetHandle;

            return assetHandle.InstantiateSync();
        }
        #endregion

        #region 同步加载

        public static T LoadAsset<T>(this YooAssetHandleComponent self, string location) where T:UnityEngine.Object
        {
            if (!self.AssetHandles.TryGetValue(location, out AssetHandle assetHandle))
            {
                assetHandle = YooAssets.LoadAssetSync<T>(location);
                self.AssetHandles[location] = assetHandle;
            }

            return assetHandle.AssetObject as T;
        }

        public static UnityEngine.Object LoadAsset(this YooAssetHandleComponent self,string location)
        {
            if (!self.AssetHandles.TryGetValue(location,out AssetHandle assetHandle))
            {
                assetHandle = YooAssets.LoadAssetSync(location);
                self.AssetHandles[location] = assetHandle;
            }

            return assetHandle.AssetObject;
        }

        public static byte[] LoadRawFileDataSync(this YooAssetHandleComponent self,string location)
        {
            if (!self.RawFileHandles.TryGetValue(location,out RawFileHandle rawFileHandle))
            {
                rawFileHandle = YooAssets.LoadRawFileSync(location);
                self.RawFileHandles[location] = rawFileHandle;
            }

            return rawFileHandle.GetRawFileData();
        }

        public static string LoadRawFileText(this YooAssetHandleComponent self, string location)
        {
            if (!self.RawFileHandles.TryGetValue(location,out RawFileHandle rawFileHandle))
            {
                rawFileHandle = YooAssets.LoadRawFileSync(location);
                self.RawFileHandles[location] = rawFileHandle;
            }

            return rawFileHandle.GetRawFileText();
        }

        //根据包内的任意location加载包内所有资源
        public static UnityEngine.Object[] LoadAllAssets(this YooAssetHandleComponent self, string location,string packageName)
        {
            if (!self.AllAssetsHandles.TryGetValue(packageName,out AllAssetsHandle allAssetsHandle))
            {
                allAssetsHandle = YooAssets.LoadAllAssetsSync(location);
            }

            return allAssetsHandle.AllAssetObjects;
        }

        public static T[] LoadAllAssets<T>(this YooAssetHandleComponent self, string location, string packageName) where T:UnityEngine.Object
        {
            if (!self.AllAssetsHandles.TryGetValue(packageName, out AllAssetsHandle allAssetsHandle))
            {
                allAssetsHandle = YooAssets.LoadAllAssetsSync<T>(location);
            }

            return allAssetsHandle.AllAssetObjects as T[];
        }

        public static T LoadSubAsset<T>(this YooAssetHandleComponent self , string location)where T:UnityEngine.Object
        {
            if (!self.SubAssetHandles.TryGetValue(location,out SubAssetsHandle subAssetsHandle))
            {
                subAssetsHandle = YooAssets.LoadSubAssetsSync<T>(location);
                self.SubAssetHandles[location] = subAssetsHandle;
            }

            return subAssetsHandle.GetSubAssetObject<T>(location);
        }

        public static GameObject LoadGameObject(this YooAssetHandleComponent self,string location)
        {
            if (!self.AssetHandles.TryGetValue(location, out AssetHandle assetHandle))
            {
                assetHandle = YooAssets.LoadAssetSync<GameObject>(location);
                self.AssetHandles[location] = assetHandle;
            }

            return assetHandle.InstantiateSync();
        }

        #endregion

    }
}
