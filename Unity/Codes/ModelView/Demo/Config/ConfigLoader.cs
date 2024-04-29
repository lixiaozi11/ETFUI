using System;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

namespace ET
{
       public class ConfigLoader: IConfigLoader
    {
        public void GetAllConfigBytes(Dictionary<string, byte[]> output)
        {
            AllAssetsHandle allAssetsHandle = YooAssets.LoadAllAssetsSync<UnityEngine.TextAsset>("StartMachineConfigCategory");
            foreach(var obj in allAssetsHandle.AllAssetObjects)
            {
                UnityEngine.TextAsset textAsset = obj as UnityEngine.TextAsset;
                output[textAsset.name] = textAsset.bytes;
            }
            allAssetsHandle.Release();
        }

        public byte[] GetOneConfigBytes(string configName)
        {
            AssetHandle assetHandle = YooAssets.LoadAssetSync(configName);
            TextAsset v =assetHandle.AssetObject as TextAsset;
            return v.bytes;
        }
    }
}