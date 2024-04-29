using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using YooAsset;

namespace ET
{
    [CreateAssetMenu(menuName = "ET/CreateGlobalConfig", fileName = "GlobalConfig", order = 0)]
    public class GlobalConfig:ScriptableObject
    {
        public static GlobalConfig Instance;

        public int CodeVersion = 1;

    }
}
