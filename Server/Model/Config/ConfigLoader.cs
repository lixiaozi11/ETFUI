using Luban;
using System.Collections.Generic;
using System.IO;

namespace ET
{
    public class ConfigLoader: IConfigLoader
    {
        public void GetAllConfigBytes(Dictionary<string, ByteBuf> output)
        {
            foreach (string file in Directory.GetFiles($"../Config", "*.bytes"))
            {
                string key = Path.GetFileNameWithoutExtension(file);
                output[key] = new ByteBuf(File.ReadAllBytes(file));
            }

            output["StartMachineConfigCategory"] = new ByteBuf(File.ReadAllBytes($"../Config/{Game.Options.StartConfig}/StartMachineConfigCategory.bytes"));
            output["StartProcessConfigCategory"] = new ByteBuf(File.ReadAllBytes($"../Config/{Game.Options.StartConfig}/StartProcessConfigCategory.bytes"));
            output["StartSceneConfigCategory"] = new ByteBuf(File.ReadAllBytes($"../Config/{Game.Options.StartConfig}/StartSceneConfigCategory.bytes"));
            output["StartZoneConfigCategory"] = new ByteBuf(File.ReadAllBytes($"../Config/{Game.Options.StartConfig}/StartZoneConfigCategory.bytes"));
        }
        
        public ByteBuf GetOneConfigBytes(string configName)
        {
            ByteBuf configBytes = new ByteBuf(File.ReadAllBytes($"../Config/{configName}.bytes"));
            return configBytes;
        }
    }
}