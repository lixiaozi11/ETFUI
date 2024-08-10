using Luban;
using System;
using System.Collections.Generic;

namespace ET
{
    public interface IConfigLoader
    {
        void GetAllConfigBytes(Dictionary<string,ByteBuf> output);
        ByteBuf GetOneConfigBytes(string configName);
    }
}