using System;
using System.Collections.Generic;
using YooAsset;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class YooAssetHandleComponent:Entity,IAwake,IDestroy,IUpdate
    {
        public static YooAssetHandleComponent Instance { get; set; }

        public string PackageVersion { get; set; }

        public ResourceDownloaderOperation DownloaderOperation { get; set; }

        public Dictionary<string,AssetHandle> AssetHandles = new Dictionary<string,AssetHandle>(100);

        public Dictionary<string,SubAssetsHandle> SubAssetHandles = new Dictionary<string,SubAssetsHandle>();

        public Dictionary<string,RawFileHandle> RawFileHandles = new Dictionary<string,RawFileHandle>(100);

        public Dictionary<string,AllAssetsHandle> AllAssetsHandles = new Dictionary<string,AllAssetsHandle>(100);

        public Dictionary<HandleBase,Action<float>> HandleProgresses = new Dictionary<HandleBase,Action<float>>();

        public Queue<HandleBase> DoneHandlesQueue = new Queue<HandleBase>();
    }
}
