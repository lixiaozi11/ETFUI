
using YooAsset;

namespace ET
{
    public static class YooAssetHelper
    {
        public static ETTask GetAwaiter(this AssetHandle assetHandle)
        {
            ETTask task = ETTask.Create(true);
            assetHandle.Completed += _ => { task.SetResult(); };
            return task;
        }

        public static ETTask GetAwaiter(this RawFileHandle rawFileHandle)
        {
            ETTask task = ETTask.Create(true);
            rawFileHandle.Completed += _ => { task.SetResult(); };
            return task;
        }

        public static ETTask GetAwaiter(this SceneHandle sceneHandle)
        {
            ETTask task = ETTask.Create(true);
            sceneHandle.Completed += _ => { task.SetResult(); };
            return task;
        }

        public static ETTask GetAwaiter(this AllAssetsHandle allAssetsHandle)
        {
            ETTask task = ETTask.Create(true);
            allAssetsHandle.Completed += _ => { task.SetResult(); };
            return task;
        }

        public static ETTask GetAwaiter(this SubAssetsHandle subAssetsHandle)
        {
            ETTask task = ETTask.Create(true);
            subAssetsHandle.Completed += _ => { task.SetResult(); };
            return task;
        }

        public static ETTask GetAwaiter(this AsyncOperationBase operation)
        {
            ETTask task = ETTask.Create(true);
            operation.Completed += _ => { task.SetResult(); };
            return task;
        }

    }
}
