
using UnityEngine;

namespace ET
{
    public class HotUpdateStart:AEvent<EventType.HotUpdate>
    {
        protected override async void Run(EventType.HotUpdate args)
        {
            //显示更新界面

            //更新版本号
            int errorCode = await YooAssetHandleComponent.Instance.UpdateVersionAsync();
            if (errorCode!= ErrorCode.ERR_Success)
            {
                Log.Error("UpdateStaticVersion 出错！{0}".Fmt(errorCode));
                return;
            }

            // 更新资源清单
            errorCode = await YooAssetHandleComponent.Instance.UpdateManifestAsync();
            if (errorCode != ErrorCode.ERR_Success)
            {
                Log.Error("UpdateManifest 出错！{0}".Fmt(errorCode));
                return;
            }

            // 创建下载器
            errorCode = YooAssetHandleComponent.Instance.CreateDownloader();
            if (errorCode != ErrorCode.ERR_Success)
            {
                Log.Error("CreateDownloader 出错！{0}".Fmt(errorCode));
                return;
            }

            // Downloader不为空，说明有需要下载的资源
            if (YooAssetHandleComponent.Instance.DownloaderOperation != null)
            {
                await DownloadPatch(args.ZoneScene);
            }
            else
            {
                Game.EventSystem.Publish(new EventType.AfterCreateZoneScene() { ZoneScene = args.ZoneScene });
            }
        }

        private static async ETTask DownloadPatch(Scene zonescene)
        {
            Log.Info("Count: {0}, Bytes: {1}".Fmt(YooAssetHandleComponent.Instance.DownloaderOperation.TotalDownloadCount, YooAssetHandleComponent.Instance.DownloaderOperation.TotalDownloadBytes));

            int errorCode = await YooAssetHandleComponent.Instance.DownloadWebFileAsync(
                // 开始下载回调
                null,

                // 下载进度回调
                (totalDownloadCount, currentDownloadCount, totalDownloadBytes, currentDownloadBytes) =>
                {
                    // 更新进度条
                    Log.Info("下载进度：{0}/{1},{2}%".Fmt(currentDownloadCount,totalDownloadCount,100*currentDownloadBytes/totalDownloadBytes));
                },

                // 下载失败回调
                (fileName, error) =>
                {
                    // 下载失败
                    Log.Info("{0} 下载失败！{1}".Fmt(fileName,error));
                },
                //下载完成
                null);

            if (errorCode != ErrorCode.ERR_Success)
            {
                // todo: 弹出错误提示，确定后重试。
                Log.Error("DonwloadWebFiles 出错！{0}".Fmt(errorCode));
                return;
            }

            int codeVersion = GlobalConfig.Instance.CodeVersion;
            await YooAssetResComponent.Instance.LoadGlobalConfigAsync();

            bool codeChanged = codeVersion!= GlobalConfig.Instance.CodeVersion;

            Log.Info("{0} 全局配置!".Fmt(GlobalConfig.Instance.CodeVersion));

            if (codeChanged)
            {
                GameObject.Find("Global").GetComponent<Init>().Restart();
            }
            else
            {
                Game.EventSystem.Publish(new EventType.AfterCreateZoneScene() { ZoneScene = zonescene });
            }
        }
    }
}
