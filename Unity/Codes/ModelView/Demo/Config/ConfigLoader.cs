using Luban;
using System;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

namespace ET
{
       public class ConfigLoader: IConfigLoader
    {
        public void GetAllConfigBytes(Dictionary<string,ByteBuf> output)
        {
            AllAssetsHandle allAssetsHandle = YooAssets.LoadAllAssetsSync<UnityEngine.TextAsset>("AIConfigCategory");
            foreach(var obj in allAssetsHandle.AllAssetObjects)
            {
                UnityEngine.TextAsset textAsset = obj as UnityEngine.TextAsset;
                output[textAsset.name] = new ByteBuf(textAsset.bytes);
            }
            allAssetsHandle.Release();
        }

        public ByteBuf GetOneConfigBytes(string configName)
        {
            AssetHandle assetHandle = YooAssets.LoadAssetSync(configName);
            TextAsset v =assetHandle.AssetObject as TextAsset;
            return new ByteBuf(v.bytes);
        }
    }
}