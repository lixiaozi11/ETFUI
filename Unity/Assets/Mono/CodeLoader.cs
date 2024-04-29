﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;
using System.Linq;
using HybridCLR;

namespace ET
{
	public class CodeLoader: IDisposable
	{
		public static CodeLoader Instance = new CodeLoader();

		public Action Update = delegate{ };
		public Action LateUpdate = delegate{ };
		public Action OnApplicationQuit;

		private Assembly assembly;

		
		public CodeMode CodeMode { get; set; }
		
		// 所有mono的类型
		private readonly Dictionary<string, Type> monoTypes = new Dictionary<string, Type>();
		
		// 热更层的类型
		private readonly Dictionary<string, Type> hotfixTypes = new Dictionary<string, Type>();
		private ILRuntime.Runtime.Enviorment.AppDomain appDomain;

		private CodeLoader()
		{
			Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
			foreach (Assembly ass in assemblies)
			{
				foreach (Type type in ass.GetTypes())
				{
					this.monoTypes[type.FullName] = type;
					this.monoTypes[type.AssemblyQualifiedName] = type;
				}
			}
		}
		
		public Type GetMonoType(string fullName)
		{
			this.monoTypes.TryGetValue(fullName, out Type type);
			return type;
		}
		
		public Type GetHotfixType(string fullName)
		{
			this.hotfixTypes.TryGetValue(fullName, out Type type);
			return type;
		}

		public void Dispose()
		{
			this.appDomain?.Dispose();
		}
		
		public async void Start()
		{
			switch (this.CodeMode)
			{
				case CodeMode.Mono:
				{

					byte[] assBytes = await YooAssetResComponent.Instance.LoadTextAssetAsync("Code.dll");
					byte[] pdbBytes = await YooAssetResComponent.Instance.LoadTextAssetAsync("Code.pdb");

					assembly = Assembly.Load(assBytes, pdbBytes);
					foreach (Type type in this.assembly.GetTypes())
					{
						this.monoTypes[type.FullName] = type;
						this.hotfixTypes[type.FullName] = type;
					}
					IStaticMethod start = new MonoStaticMethod(assembly, "ET.Entry", "Start");
					start.Run();
					break;
				}
				case CodeMode.ILRuntime:
				{
					(AssetBundle assetsBundle, Dictionary<string, UnityEngine.Object> dictionary) = AssetsBundleHelper.LoadBundle("code.unity3d");
					byte[] assBytes = ((TextAsset)dictionary["Code.dll"]).bytes;
					byte[] pdbBytes = ((TextAsset)dictionary["Code.pdb"]).bytes;
					
					if (assetsBundle != null)
					{
						assetsBundle.Unload(true);	
					}
					
					//byte[] assBytes = File.ReadAllBytes(Path.Combine("../Unity/", Define.BuildOutputDir, "Code.dll"));
					//byte[] pdbBytes = File.ReadAllBytes(Path.Combine("../Unity/", Define.BuildOutputDir, "Code.pdb"));
				
					appDomain = new ILRuntime.Runtime.Enviorment.AppDomain(ILRuntime.Runtime.ILRuntimeJITFlags.JITOnDemand);
#if DEBUG && (UNITY_EDITOR || UNITY_ANDROID || UNITY_IPHONE)
					this.appDomain.UnityMainThreadID = System.Threading.Thread.CurrentThread.ManagedThreadId;
#endif
					MemoryStream assStream = new MemoryStream(assBytes);
					MemoryStream pdbStream = new MemoryStream(pdbBytes);
					appDomain.LoadAssembly(assStream, pdbStream, new ILRuntime.Mono.Cecil.Pdb.PdbReaderProvider());

					Type[] types = appDomain.LoadedTypes.Values.Select(x => x.ReflectionType).ToArray();
					foreach (Type type in types)
					{
						this.hotfixTypes[type.FullName] = type;
					}
					
					ILHelper.InitILRuntime(appDomain);
					
					IStaticMethod start = new ILStaticMethod(appDomain, "ET.Entry", "Start", 0);
					start.Run();
					break;
				}
				case CodeMode.Reload:
				{
					byte[] assBytes = File.ReadAllBytes(Path.Combine(Define.BuildOutputDir, "Data.dll"));
					byte[] pdbBytes = File.ReadAllBytes(Path.Combine(Define.BuildOutputDir, "Data.pdb"));
					
					assembly = Assembly.Load(assBytes, pdbBytes);
					this.LoadLogic();
					IStaticMethod start = new MonoStaticMethod(assembly, "ET.Entry", "Start");
					start.Run();
					break;
				}
                case CodeMode.HybridCLR:
                {
					System.Runtime.Serialization.IgnoreDataMemberAttribute ignoreDataMemberAttribute;
                    byte[] assBytes = await YooAssetResComponent.Instance.LoadTextAssetAsync("Code.dll");
					byte[] pdbBytes = await YooAssetResComponent.Instance.LoadTextAssetAsync("Code.pdb");

					LoadMetadataForAOTAssemblies("aotdll");

                    assembly = Assembly.Load(assBytes, pdbBytes);
                    foreach (Type type in this.assembly.GetTypes())
                    {
                        this.monoTypes[type.FullName] = type;
                        this.hotfixTypes[type.FullName] = type;
                    }
                    IStaticMethod start = new MonoStaticMethod(assembly, "ET.Entry", "Start");
                    start.Run();
                    break;
                }
            }
		}
        private static void LoadMetadataForAOTAssemblies(string aotTag)
        {
            /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
            /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
            /// 
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            foreach (var aotDllLocation in YooAssetResComponent.Instance.GetAssetLocationsByTag(aotTag))
            {
                byte[] dllBytes = YooAssetResComponent.Instance.LoadTextAsset(aotDllLocation);
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:{aotDllLocation}. mode:{mode} ret:{err}");
            }
        }
        // 热重载调用下面三个方法
        // CodeLoader.Instance.LoadLogic();
        // Game.EventSystem.Add(CodeLoader.Instance.GetTypes());
        // Game.EventSystem.Load();
        public void LoadLogic()
		{
			if (this.CodeMode != CodeMode.Reload)
			{
				throw new Exception("CodeMode != Reload!");
			}
			
			// 傻屌Unity在这里搞了个傻逼优化，认为同一个路径的dll，返回的程序集就一样。所以这里每次编译都要随机名字
			string[] logicFiles = Directory.GetFiles(Define.BuildOutputDir, "Logic_*.dll");
			if (logicFiles.Length != 1)
			{
				throw new Exception("Logic dll count != 1");
			}

			string logicName = Path.GetFileNameWithoutExtension(logicFiles[0]);
			byte[] assBytes = File.ReadAllBytes(Path.Combine(Define.BuildOutputDir, $"{logicName}.dll"));
			byte[] pdbBytes = File.ReadAllBytes(Path.Combine(Define.BuildOutputDir, $"{logicName}.pdb"));

			Assembly hotfixAssembly = Assembly.Load(assBytes, pdbBytes);
			
			foreach (Type type in this.assembly.GetTypes())
			{
				this.monoTypes[type.FullName] = type;
				this.hotfixTypes[type.FullName] = type;
			}
			
			foreach (Type type in hotfixAssembly.GetTypes())
			{
				this.monoTypes[type.FullName] = type;
				this.hotfixTypes[type.FullName] = type;
			}
		}

		public Dictionary<string, Type> GetHotfixTypes()
		{
			return this.hotfixTypes;
		}
	}
}