
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using Luban;
using System.Collections.Generic;

namespace ET
{
[Config]
public partial class UnitConfigCategory
{
    public static UnitConfigCategory Instance;

    private Dictionary<int, UnitConfig> dict;
    private List<UnitConfig> list;
    
    public UnitConfigCategory(ByteBuf _buf)
    {
        Instance = this;
        dict = new Dictionary<int, UnitConfig>();
        list = new List<UnitConfig>();
        
        for(int n = _buf.ReadSize() ; n > 0 ; --n)
        {
            UnitConfig _v;
            _v = UnitConfig.DeserializeUnitConfig(_buf);
            list.Add(_v);
            dict.Add(_v.Id, _v);
        }
        this.AfterEndInit();
    }

    public Dictionary<int, UnitConfig> Dict => dict;
    public List<UnitConfig> List => list;

    public UnitConfig GetOrDefault(int key) => dict.TryGetValue(key, out var v) ? v : null;
    public UnitConfig Get(int key) => dict[key];
    public UnitConfig this[int key] => dict[key];

    public void ResolveRef()
    {
        foreach(var _v in list)
        {
            _v.ResolveRef();
        }
    }

    partial void AfterEndInit();

}

}

