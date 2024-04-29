using System.Collections;
using System.Threading;
using UnityEngine;
using YooAsset;

namespace ET
{
	// 1 mono模式 2 ILRuntime模式 3 mono热重载模式
	public enum CodeMode
	{
		Mono = 1,
		ILRuntime = 2,
		Reload = 3,
		HybridCLR = 4,
	}
	
	public class Init: MonoBehaviour
	{
        public EPlayMode playMode = EPlayMode.EditorSimulateMode;

        public CodeMode CodeMode = CodeMode.Mono;
		
		private void Awake()
		{
#if ENABLE_IL2CPP
			//this.CodeMode = CodeMode.ILRuntime;
			//this.CodeMode = CodeMode.HybridCLR;
#endif
			System.AppDomain.CurrentDomain.UnhandledException += (sender, e) =>
			{
				Log.Error(e.ExceptionObject.ToString());
			};

			DontDestroyOnLoad(gameObject);
			
			SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);
			
			
			LitJson.UnityTypeBindings.Register();

			ETTask.ExceptionHandler += Log.Error;

			Log.ILog = new UnityLogger();

			Options.Instance = new Options();

			CodeLoader.Instance.CodeMode = this.CodeMode;
			Options.Instance.Develop = 1;
			Options.Instance.LogLevel = 0;
		}

        public void Restart()
        {
			Log.Info("Restart!");
			CodeLoader.Instance.OnApplicationQuit();
			CodeLoader.Instance.Dispose();

            SynchronizationContext.SetSynchronizationContext(ThreadSynchronizationContext.Instance);


            //LitJson.UnityTypeBindings.Register();

            //Log.ILog = new UnityLogger();

            //Options.Instance = new Options();

            CodeLoader.Instance.CodeMode = this.CodeMode;
            Options.Instance.Develop = 1;
            Options.Instance.LogLevel = 0;

            CodeLoader.Instance.Start();
        }

        private IEnumerator Start()
		{
            yield return YooAssetResComponent.Instance.InitYooAssetAsync(playMode);
            CodeLoader.Instance.Start();

        }

        private void Update()
		{
			CodeLoader.Instance.Update();
		}

		private void LateUpdate()
		{
			CodeLoader.Instance.LateUpdate();
		}

		private void OnApplicationQuit()
		{
			CodeLoader.Instance.OnApplicationQuit();
			CodeLoader.Instance.Dispose();
		}
	}
}