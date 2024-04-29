﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// <>f__AnonymousType11`2<System.Int32Enum,System.Object>
struct U3CU3Ef__AnonymousType11_2_t636D7095C5060339144BD004D89601CD7B9FD535;
// <>f__AnonymousType11`2<CommandLine.Core.TokenType,System.String>
struct U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030;
// <>f__AnonymousType12`2<System.Object,System.Object>
struct U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C;
// <>f__AnonymousType12`2<System.Type,System.Object[]>
struct U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0;
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Exception>>
struct Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C;
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5;
// System.Action`1<CommandLine.Error>
struct Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Exception>>
struct Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152;
// System.Action`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Action_2_t8DA9252F38DB808FBB55E0B4DFB630C3CAECEB8C;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Type>
struct Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872;
// System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Tuple`2<CommandLine.Core.Verb,System.Type>>
struct Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802;
// System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Boolean>
struct Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2;
// System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>
struct Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434;
// System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E;
// System.Func`2<CSharpx.Just`1<CommandLine.Error>,CommandLine.Error>
struct Func_2_t874E1386B69DF45699CC4000DE63D36B26211637;
// System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Boolean>
struct Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401;
// System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Int32>
struct Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7;
// System.Func`2<CSharpx.Maybe`1<System.Object>,System.Boolean>
struct Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6;
// System.Func`2<CSharpx.Maybe`1<System.Object>,System.Object>
struct Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93;
// System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,System.Boolean>
struct Func_2_t17D4FD603BB1794F907857320DD481279B35439C;
// System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,CommandLine.Core.Token>
struct Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20;
// System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592;
// System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Boolean>
struct Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7;
// System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CSharpx.Maybe`1<CommandLine.Error>>
struct Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802;
// System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CommandLine.Core.SpecificationProperty>
struct Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC;
// System.Func`2<System.Char,System.Tuple`2<System.Int32,System.Char>>
struct Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492;
// System.Func`2<System.Char,System.Object>
struct Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>
struct Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Int32Enum>
struct Func_2_t213311159653563BDCC21CC060B449705C96791F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,CommandLine.Core.TypeDescriptor>
struct Func_2_tC9D399DCE2568B50495C4638AA443F222D68C792;
// System.Func`2<CommandLine.Core.OptionSpecification,System.Boolean>
struct Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A;
// System.Func`2<CommandLine.Core.OptionSpecification,CommandLine.Core.TypeDescriptor>
struct Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45;
// System.Func`2<CommandLine.Core.SpecificationProperty,System.Boolean>
struct Func_2_tF992B196B281719D9879CB0C0636001879FA8608;
// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222;
// System.Func`2<System.String,CSharpx.Maybe`1<System.Char>>
struct Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021;
// System.Func`2<System.String,CSharpx.Maybe`1<System.Object>>
struct Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF;
// System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>
struct Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<System.String,CommandLine.Core.NameLookupResult>
struct Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2;
// System.Func`2<System.String,CommandLine.Core.Token>
struct Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8;
// System.Func`2<CommandLine.Core.Token,System.Boolean>
struct Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42;
// System.Func`2<CommandLine.Core.Token,System.String>
struct Func_2_t032101450B841A2B90EFD393694408DFFF48D87A;
// System.Func`2<CommandLine.Core.Token,CommandLine.UnknownOptionError>
struct Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA;
// System.Func`2<System.Type,<>f__AnonymousType12`2<System.Type,System.Object[]>>
struct Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1;
// System.Func`2<CommandLine.Core.TypeDescriptor,System.Boolean>
struct Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42;
// System.Func`3<System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>
struct Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7;
// System.Func`3<System.Object,System.Int32,System.Object>
struct Func_3_tA23F5D62E264071C33C09639DD065B0B691A804D;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<System.String,CommandLine.Core.Token,CommandLine.Core.Token>
struct Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02;
// System.Func`3<CommandLine.Core.Token,System.Int32,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956;
// System.Func`3<CommandLine.Core.Token,System.Int32,CSharpx.Maybe`1<System.Int32>>
struct Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5;
// System.Func`3<CommandLine.Core.Token,System.Int32,CSharpx.Maybe`1<CommandLine.Core.Token>>
struct Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B;
// System.Func`3<CommandLine.Core.Token,System.Int32,System.Tuple`2<System.Int32,System.Char>>
struct Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192;
// System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>>
struct Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1;
// System.Func`4<System.Object,System.Object,System.Boolean,System.Object>
struct Func_4_t7868C163F386DC1EE76E0249D7EBB3A64555B0E7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<CommandLine.Core.Token>
struct HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8;
// System.Collections.Generic.IEnumerable`1<<>f__AnonymousType12`2<System.Type,System.Object[]>>
struct IEnumerable_1_tC1FABB3FA87D604915128B7AB0927F97241CA411;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct IEnumerable_1_t6DFE0C8F6B50663AC85C588465C5DAD20C594515;
// System.Collections.Generic.IEnumerable`1<CSharpx.Just`1<CommandLine.Error>>
struct IEnumerable_1_t05710D1E3291338601DED208CD3EE30E652A0C5C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>>
struct IEnumerable_1_t28E648697811C66B9CB3C4CC103C5DAF27BC54A7;
// System.Collections.Generic.IEnumerable`1<CSharpx.Maybe`1<CommandLine.Error>>
struct IEnumerable_1_tCCE48C514BECF3AEE7CA82330B07CBE583EAF24C;
// System.Collections.Generic.IEnumerable`1<CSharpx.Maybe`1<System.Int32>>
struct IEnumerable_1_t6F0E85EC1D571C43801BE40C8CFFC89A040859FE;
// System.Collections.Generic.IEnumerable`1<CSharpx.Maybe`1<System.Object>>
struct IEnumerable_1_t52656A18CE4BF3FB2708DB41861A763B744B2671;
// System.Collections.Generic.IEnumerable`1<CSharpx.Maybe`1<CommandLine.Core.Token>>
struct IEnumerable_1_t1A7B0904B31204DBEC266A6B7930AAFDA43009DD;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Int32,System.Char>>
struct IEnumerable_1_tB90654FC6A02FC19EF98B04CA686ADECAE5A8283;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>
struct IEnumerable_1_t075CABA99C8023BC195B544B83AB361A2564FA68;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<CommandLine.Core.Verb,System.Type>>
struct IEnumerable_1_t83F3BA7C3CC5A9D6F79985A9CFD76ED915A9EE57;
// System.Collections.Generic.IEnumerable`1<CommandLine.Error>
struct IEnumerable_1_t612A335C2BE020F21731A17DEB8A3480F4371417;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>
struct IEnumerable_1_tEC5741C32C51F12942925ACCC15A81EEF0618176;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>
struct IEnumerable_1_t9873E60E636CF6C24981EA1505A698B5EEAB4A4D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>
struct IEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerable`1<CommandLine.UnknownOptionError>
struct IEnumerable_1_t203A0E7FD973B2D9DA13AA519A193D5297DD0289;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>
struct IEnumerator_1_tDCD9BAE94CF930DF72158205C65F1044926B81F5;
// System.Collections.Generic.IEnumerator`1<CommandLine.Core.Token>
struct IEnumerator_1_tF30C8176B786E8C6F2AC0799F9BC390A33201C97;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<CommandLine.Core.Token>
struct IEqualityComparer_1_t5FE35490394B027DFA0425F6D98133284C6158D8;
// CSharpx.Just`1<CommandLine.Error>
struct Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED;
// CSharpx.Just`1<System.Int32>
struct Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9;
// CSharpx.Just`1<System.Object>
struct Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD;
// CSharpx.Just`1<CommandLine.Core.Token>
struct Just_1_tC2A7C7C965B16B956337D3D6330A14106C8D9587;
// System.Collections.Generic.List`1<CommandLine.Error>
struct List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// CSharpx.Maybe`1<System.Tuple`2<System.Int32,System.Char>>
struct Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8;
// CSharpx.Maybe`1<System.Char>
struct Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5;
// CSharpx.Maybe`1<CommandLine.Error>
struct Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683;
// CSharpx.Maybe`1<System.Int32>
struct Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B;
// CSharpx.Maybe`1<System.Object>
struct Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9;
// CSharpx.Maybe`1<CommandLine.Core.OptionSpecification>
struct Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E;
// CSharpx.Maybe`1<CommandLine.Core.SpecificationProperty>
struct Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D;
// CSharpx.Maybe`1<CommandLine.Core.Token>
struct Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F;
// CSharpx.Maybe`1<System.Type>
struct Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2;
// CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>
struct Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC;
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,CommandLine.Error>
struct Result_2_tCAE178BE49E65721DC8561A72C56938C2FBAA7A1;
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>
struct Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB;
// RailwaySharp.ErrorHandling.Result`2<System.Object,System.Exception>
struct Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50;
// RailwaySharp.ErrorHandling.Result`2<System.Object,System.Object>
struct Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E;
// System.Tuple`2<System.Int32,System.Char>
struct Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>
struct Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C;
// System.Tuple`2<CommandLine.Core.Verb,System.Type>
struct Tuple_2_t32430302606D9C516782A886D451215A6B93D875;
// System.Tuple`3<System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Tuple_3_t3BCC36CBF6D92721D91A53654BE19F2F7CD585A8;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF;
// System.Collections.Generic.HashSet`1/Slot<CommandLine.Core.Token>[]
struct SlotU5BU5D_t600479C69964EDDBBD4800A5C8D9E9246ADEC00C;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// CommandLine.Error[]
struct ErrorU5BU5D_t6A09DA2A107D0F342CE8DD5CB5D5A70E8621EBEC;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// CommandLine.BadFormatConversionError
struct BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C;
// CommandLine.BadFormatTokenError
struct BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43;
// CommandLine.BaseAttribute
struct BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// CommandLine.Error
struct Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// CommandLine.Infrastructure.LocalizableAttributeProperty
struct LocalizableAttributeProperty_t4B12E689A223D4917102F6B1F77A87CD68DC925E;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// CommandLine.Core.Name
struct Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9;
// CommandLine.NameInfo
struct NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// CommandLine.Core.OptionSpecification
struct OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// CommandLine.SequenceOutOfRangeError
struct SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// CommandLine.Core.Specification
struct Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E;
// CommandLine.Core.SpecificationProperty
struct SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// CommandLine.Core.Token
struct Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// CommandLine.UnknownOptionError
struct UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873;
// CommandLine.Core.Value
struct Value_t40CD443232B5F17874C367F8409A296A446E287A;
// CommandLine.ValueAttribute
struct ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB;
// CommandLine.Core.ValueSpecification
struct ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F;
// CommandLine.Core.Verb
struct Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A;
// CommandLine.VerbAttribute
struct VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CommandLine.Core.Switch/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3;
// CommandLine.Core.Switch/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA;
// CommandLine.Core.TokenPartitioner/<>c
struct U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4;
// CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D;
// CommandLine.Core.Tokenizer/<>c
struct U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A;
// CommandLine.Core.Tokenizer/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290;
// CommandLine.Core.Tokenizer/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B;
// CommandLine.Core.Tokenizer/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225;
// CommandLine.Core.Tokenizer/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C;
// CommandLine.Core.Tokenizer/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E;
// CommandLine.Core.Tokenizer/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F;
// CommandLine.Core.Tokenizer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80;
// CommandLine.Core.Tokenizer/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94;
// CommandLine.Core.Tokenizer/<TokenizeLongName>d__7
struct U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D;
// CommandLine.Core.Tokenizer/<TokenizeShortName>d__6
struct U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED;
// CommandLine.Core.TypeConverter/<>c
struct U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325;
// CommandLine.Core.TypeConverter/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF;
// CommandLine.Core.TypeConverter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D;
// CommandLine.Core.TypeConverter/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9;
// CommandLine.Core.TypeLookup/<>c
struct U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC;
// CommandLine.Core.TypeLookup/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5;
// CommandLine.Core.TypeLookup/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3;
// CommandLine.Core.ValueMapper/<>c
struct U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA;
// CommandLine.Core.ValueMapper/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1;
// CommandLine.Core.ValueMapper/<MapValuesImpl>d__1
struct U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552;
// CommandLine.Core.Verb/<>c
struct U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t032101450B841A2B90EFD393694408DFFF48D87A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t17D4FD603BB1794F907857320DD481279B35439C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t874E1386B69DF45699CC4000DE63D36B26211637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF992B196B281719D9879CB0C0636001879FA8608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t075CABA99C8023BC195B544B83AB361A2564FA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDCD9BAE94CF930DF72158205C65F1044926B81F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeDescriptor_tC36C76617F823DE4F887E1D17846077CE7B0C3D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D7823BF0CD9AE546A16FE2BC1A09802931A2EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA2C7B00FC82A6D013B0A5C720D49CB34032C95CC;
IL2CPP_EXTERN_C String_t* _stringLiteralA36EEF03956240FAA92A386D8DB07DE4F783B96B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9CAD30E436DEEAC72C4C8B6128EC49BE031AA3;
IL2CPP_EXTERN_C String_t* _stringLiteralFB91FF859F0EDBA61B28AD47F1B10B1AF2D6342F;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableExtensions_Empty_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m09A228A17DFE16E68AB9171FA41A0628D3F64639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableExtensions_Empty_TisString_t_m00BE48ACF6A0DCC24ACEF8996A28C1F7541B0CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableExtensions_Memoize_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m287450A40C739A356FAD1BC40ECBF40F26333D2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_mC32CE0C741F47DD393658A722D21D87EB6746246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_m493DED3A0645F25D908B2B9825C90E6ED8FF8C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_m5D996C56476B6F24D173C202AA19623C7F31358E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4512DD387EE03073B8256F1F1250B37F1A0824F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAtOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mD88AA5D3AE4D3CC3CF3061082B7AAB58E444A30D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3E495AA125B5178F1E35D7B5D60BD458103913A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Except_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m2B48997F343A8872A4E4EDDA1C9CDDE174ABD618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mC69E253B03B56E600F352CECC99AFABBD34139B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m703873462535B33C9784D510DB71F748507C53EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisException_t_m79F26C101F742089351CE407131592334A76625C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m688F2F296300E6204B536781AED3B278BC7E1D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_mC788ADED4F3C65F80FE37D4AA33F4422CDDCB3CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m34DEA08D2AB5A0C62BAB543E47A205505A4810C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3198B5DD515B4F934A3E771F5E87306124299636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mC32E4207DED79724850ECEC880D450E7DD06E244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8453327247DFB5F0A576241C87F10D526A252AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_TisRuntimeObject_m0D9D137CC0EF36ABAFF2D2B7A0EC3762A3BD8D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mB651E4618FC5A2633583FDDD0C294D82AC156275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_m79E3E96F936CAD07BAF4C9BAC3976BEB34C582F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m831E68573FEA5319952564D8155E87BF4B675C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_mA1A798FE8D867B7E65477C20818FA6DA56C55595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_mD132B87776788C1D64B01BD3353D1F457D39B558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisString_t_mBC4195FF792783DAB33C91FD903CB350D5B1B403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mD72006ADE21AEB922EEEBDE3E3B03B700B46597C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisUnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_mA76F8389221334501D966E65515E70ADF57AC09F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m24F7CF7072447E328CB4754644F99DA18AF6DFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mAE9B382DF70ACDDD5870BEB4FA043396F3247200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF543BEAB0F358F24B0932150C1DA422E05761523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_TisTuple_2_t32430302606D9C516782A886D451215A6B93D875_mD2412A43FC4AC1E05597595A1C1C281DC3C17B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisType_t_m478BF4AA3917E16B9CB9A81763623368852E7D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisString_t_mFA7EBD74BAF0E8DA89C3C9628F55288FD9EA3116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SkipWhile_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_mF7D747541F4D3B480A49254D305B904DC013C40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SkipWhile_TisString_t_mA868A4B796E9D5DB4404F2DBA301439CB5DF6484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SkipWhile_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mEEA5BCFEAA66D0D9D859E1817873ED5F162B062E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_TakeWhile_TisString_t_mF17587EF9A9B83B868D9AA3C1BA4EAC6F8671AD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m1B0B49622D3C25B1B2555CA8B37D737287E70179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisString_t_m504EA8E24F95EBFBA4FD475BFEC97F72C31384F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_m0B8A70142D6D7D26F8C492A74DE18E4B1F206575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_m82914181FA43555E6515E070E6FA395BCD9033E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF20BE212C3917A7992365E19D4396D7A521F2A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Just_1_get_Value_m6D0CB08DE6D9A5611CA307A08684D83DF151FAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9AA65688BE58B500E14CF65D74FE986268EF6178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_FromJustOrFail_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m017EB02A618249E073C6A6571E0163A9708FA6C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_FromJustOrFail_TisType_t_m1049EBC8DEBCB88FCC0296F8D4C00A6E4F721351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_IsJust_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0060CA121E1BBF225745C9AD49F38401CE70B22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_IsNothing_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m07BBEE3A5B76EABAA2227106A4DAA4FE4BE88428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m4914616492F85C9524FBC863C83D0D3EEAD1560B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_mAB60A1601A5FA2A59C3540E20D645F88D9C2EC46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_MapValueOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6822042AC412018BA64A0AB53FCCAD0A7FCD8A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_MapValueOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m7FB4DDDC847AE568B36E57985C04987026152335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m14E221986EB897EAE27DED07C95E8EB2C402F48D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m82538F8BF405DFA18CA332A9E47EBC28F802C02F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m22C6A55323425704D4B732816F3361064053FEEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeExtensions_ToMaybe_TisType_t_mD324ABAFF880B06DDF4853DA18FEAD572229D113_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Just_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mC4DA126ECDECDA869D8DF0305B49C8903232A509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Maybe_Nothing_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m14447577B8EC32DA699B2FBCAA44A29E02946C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResultExtensions_Map_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_mBC40D62ACFA8778D035BFAC06F24FADD68E933DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResultExtensions_Match_TisRuntimeObject_TisException_t_mDD6EF1FB3C9D50615B4FF3B991A1533059242CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResultExtensions_SucceededWith_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mE814312D3D08CDDB8F3C8D042DA416C002FD2780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResultExtensions_SuccessMessages_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m596E7B68372F8901F4084300B73051D3FE0E8802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResultExtensions_ToMaybe_TisRuntimeObject_TisException_t_mC5E4EF0893E17B6959711A6DDEB2AD0F57B58407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Result_Succeed_TisIEnumerable_1_t9873E60E636CF6C24981EA1505A698B5EEAB4A4D_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m57673798B36D467BE981503CC6566658AEF0B870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m9F3675BBE8D527CAF0E311E8AC18DFBAFF35D93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m37FB30CEC18128308EDEE03A1F1CE3CE6369A9F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisIEnumerable_1_t28E648697811C66B9CB3C4CC103C5DAF27BC54A7_TisIEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m33CADF52D8A7889DEDFFA33E6009318CAA7F054E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisVerb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_TisType_t_m615D0390421E522E71E3FDAFBC7ED4D8613E734C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeConverter_ToEnum_m00C7C502B7B0722319347604514CB2E2BEAA4302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMapValuesImplU3Ed__1_System_Collections_IEnumerator_Reset_m8C08DFADB2546A475344CA4ADA5F44922804E9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenizeLongNameU3Ed__7_System_Collections_IEnumerator_Reset_mD05F333E376913D94DA0E9F064824ED6C5A2C9B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenizeShortNameU3Ed__6_System_Collections_IEnumerator_Reset_mAC86B8697C22579CA6C7394F614E363AD93C6F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CChangeTypeScalarImplU3Eb__4_5_m9113DC250A359166145BCA2D0F991D1A38581AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CChangeTypeScalarU3Eb__2_0_mB7AEAEB210B679019E110E50D91F2B2485E601F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CChangeTypeScalarU3Eb__2_1_m696FA4D48CA0BEED8899C2305B5EF21FD5D9198D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_1_mB29AAF96A3B93363AD0AD39B5FBD4CA994F87656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_2_mC4C1A96562DFE3C957B48F57F2CBD92B2B140307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConfigureTokenizerU3Eb__5_2_m50F6F5606DF60D111B73CDE76CE599E7E15F852A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExplodeOptionListU3Eb__3_1_m6CF6A210D73EB5E1507F17491044FE7B2EC7B646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExplodeOptionListU3Eb__3_3_m02FA417F2E14FD56E1B677F61795C3B668B18B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_3_mAAB36AE43724E69BA8D6B5CC3E9A1497E3A1A7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_4_mE74C4B3DDAB434290A0F9392A7D032593BE208B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMapValuesImplU3Eb__1_0_m967760B84AF8EAC9206F516E532C106EBC2BE42C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMapValuesU3Eb__0_0_m3B1E06FA9CEC4D1F0C5E41307CD93EA4AA029EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMapValuesU3Eb__0_1_mD42BCEFD3ADF5E3DC7FCBEB6E19148F86C4FE0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMapValuesU3Eb__0_2_mF26B7381C3235E9D08FF7DFEB6710BF20C37B358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CNormalizeU3Eb__4_1_mF4EA8C99AB48639258819FB5F502D0777C7EE320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CNormalizeU3Eb__4_2_mFF8552880BA839BBD0DB920D25A7A5095EF3A141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CNormalizeU3Eb__4_4_mDA44554AB69CC88C99436AF5AA71ABBC97795593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CNormalizeU3Eb__4_5_mEDC9C74B894617B8813DDB81B48F81F58F0BF6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPartitionU3Eb__0_3_m5335833FE82A94D0D3C384F4A61D59044A87796B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPartitionU3Eb__0_4_m797D06E28A17F954D73DE27F9C995FF780660ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPreprocessDashDashU3Eb__2_0_mCAB3A794843CDF9F5BF6E811AA7582C7BD1AB6F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPreprocessDashDashU3Eb__2_1_m269D8869B3DD8338E0954BA841578800C2517168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPreprocessDashDashU3Eb__2_2_mC47FCAD8B2E491FFA55A043EC95C0B2A8F8BF23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSelectFromTypesU3Eb__14_0_mB8B1C25A1FCC3977EFB7DF1B2BDFDC6D0DB00F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSelectFromTypesU3Eb__14_1_m0CF11F7873DC8F00C939C9997260DF9DF1EAFB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSelectFromTypesU3Eb__14_2_m56C536F7979C8637AB096CB0AF8F9C102101F277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTokenizeU3Eb__0_0_m88300B8824F784F7B8B3D4E22FB91556763EA2A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTokenizeU3Eb__1_1_mD2E363B3C550CE13BF30C9E13018055E000F9B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTokenizeU3Eb__1_4_mDAF7ED2AFDA50045988D3D38E104A48A523A93F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__0_m6F5071A6E4C2B39C3F8E297687606D9E5CD722F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__1_m12FADBC03D8E66D3BE7FF37D570ED009987463D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m0ECAAF87A3E15F2B2BAD3100F3CC49885C07A75C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m17ACA06CCAB484AA9FF3859445087C9FBB9B7252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__1_m09C01067F84D29CE1EB12713332DF23194745413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__2_m5E1D1C8823BEE6043DB43F080909F7ACEA3C3BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CFindTypeDescriptorAndSiblingU3Eb__2_m5DF7BEB37F6803D8C191A76B8B6716A3F211928D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CPartitionU3Eb__1_m7FE034A6602969730EAEDE4C6AB4FAA4DA4BF572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CChangeTypeSequenceU3Eb__0_mBE13217BFE7040249630E07A6E0BA254C2F2A5B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CMapValuesImplU3Eb__1_m85AC134CA900C2A74C54E490F05F8B6F30EB4ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__0_mB09A57728ABE0636752ECC19E815859E074F909C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__2_m68030B26EDCE85223A5BB2AF9EB641F201BA1309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__3_m9477CEF5C487BE7AC028062871E5C481D671247D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CPreprocessDashDashU3Eb__3_m10E497548AC753F41FCFEF4FCB98E7CBF027F496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__0_m36267AE060D5E323DA6CF5C7FEF60532415391F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__2_m4DA06E8D76E97A3739A4221B1DD97C80FF501D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3CExplodeOptionListU3Eb__4_m9E2C058F76546142ABEF6709D36CB4694FC6B9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__5_m50900272D5A153E67DCB8917129D08D9BB0E067E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__6_m497D05BC84C37EF05169652125E93D4788890CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__0_m840F90865F0DDFFF85842E0EA6153F95B6931DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__1_mD19DEF828E4B02D4460029EDC1FDF72DD6DC9C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__2_m0220AF3963A3966AC8818AE4FAB434F1C8A640A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__3_mF7876E4952E8564DDCAC771D9C5F61A51F4760F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__0_m09CD14600A9A47061404DE31BD615E102A370DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__3_m90EBA244CAD67EB313FDB135613CD4130B17B786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__6_mF87B40278254DF955F4DCCBDEAEEC9AE6DCB857E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__7_mD070843458E9AEA2093EDF58339169A723587AB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CChangeTypeScalarImplU3Eb__4_m2318CF40A707AF3A25CFFFDC1C6154D75906D2A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CConfigureTokenizerU3Eb__0_m964B924F47EBFE326BCED97344A378AEF0EE8EAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__1_m6E6122FF6B153D30162649736ADAF44D73A377D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__3_mF0902AC36BB9AE5131FBBA28D85B4DB83ACBA8F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__4_m5612641E47CFCF8E7173DB6DD8912CE87DF6FF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__5_mA665DFC7111477D87E1A50F53806B946B6EADB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__6_m6C7562BA2AD25D2310C4D50166C56B519397FFDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__7_mC1D33A9BAF0069330C07DB77C933AC3DE015AC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType12_2__ctor_mE311EB8268AA271B7E48D7FAB89D64E40675640B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType12_2_get_type_mC0BF3FFA552D26E4FF485E4F3FE6BBB9F9D3AF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Verb__ctor_mF852C13835032365B14A9CA8224B21CD3F29B4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <>f__AnonymousType11`2<CommandLine.Core.TokenType,System.String>
struct U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030  : public RuntimeObject
{
	// <Tag>j__TPar <>f__AnonymousType11`2::<Tag>i__Field
	int32_t ___U3CTagU3Ei__Field_0;
	// <Text>j__TPar <>f__AnonymousType11`2::<Text>i__Field
	String_t* ___U3CTextU3Ei__Field_1;
};

// <>f__AnonymousType12`2<System.Object,System.Object>
struct U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C  : public RuntimeObject
{
	// <type>j__TPar <>f__AnonymousType12`2::<type>i__Field
	RuntimeObject* ___U3CtypeU3Ei__Field_0;
	// <attrs>j__TPar <>f__AnonymousType12`2::<attrs>i__Field
	RuntimeObject* ___U3CattrsU3Ei__Field_1;
};

// <>f__AnonymousType12`2<System.Type,System.Object[]>
struct U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0  : public RuntimeObject
{
	// <type>j__TPar <>f__AnonymousType12`2::<type>i__Field
	Type_t* ___U3CtypeU3Ei__Field_0;
	// <attrs>j__TPar <>f__AnonymousType12`2::<attrs>i__Field
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CattrsU3Ei__Field_1;
};

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E  : public RuntimeObject
{
};

struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Instance_0;
};

// System.Collections.Generic.HashSet`1<CommandLine.Core.Token>
struct HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t600479C69964EDDBBD4800A5C8D9E9246ADEC00C* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<CommandLine.Error>
struct List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ErrorU5BU5D_t6A09DA2A107D0F342CE8DD5CB5D5A70E8621EBEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ErrorU5BU5D_t6A09DA2A107D0F342CE8DD5CB5D5A70E8621EBEC* ___s_emptyArray_5;
};

// CSharpx.Maybe`1<System.Tuple`2<System.Int32,System.Char>>
struct Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<System.Char>
struct Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<CommandLine.Error>
struct Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<System.Int32>
struct Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<System.Object>
struct Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<CommandLine.Core.OptionSpecification>
struct Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<CommandLine.Core.SpecificationProperty>
struct Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<CommandLine.Core.Token>
struct Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<System.Type>
struct Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>
struct Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC  : public RuntimeObject
{
	// CSharpx.MaybeType CSharpx.Maybe`1::tag
	int32_t ___tag_0;
};

// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,CommandLine.Error>
struct Result_2_tCAE178BE49E65721DC8561A72C56938C2FBAA7A1  : public RuntimeObject
{
	// RailwaySharp.ErrorHandling.ResultType RailwaySharp.ErrorHandling.Result`2::_tag
	int32_t ____tag_0;
};

// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>
struct Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB  : public RuntimeObject
{
	// RailwaySharp.ErrorHandling.ResultType RailwaySharp.ErrorHandling.Result`2::_tag
	int32_t ____tag_0;
};

// RailwaySharp.ErrorHandling.Result`2<System.Object,System.Exception>
struct Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50  : public RuntimeObject
{
	// RailwaySharp.ErrorHandling.ResultType RailwaySharp.ErrorHandling.Result`2::_tag
	int32_t ____tag_0;
};

// System.Tuple`2<System.Int32,System.Char>
struct Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>
struct Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* ___m_Item2_1;
};

// System.Tuple`2<CommandLine.Core.Verb,System.Type>
struct Tuple_2_t32430302606D9C516782A886D451215A6B93D875  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Type_t* ___m_Item2_1;
};

// System.Tuple`3<System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Tuple_3_t3BCC36CBF6D92721D91A53654BE19F2F7CD585A8  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject* ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject* ___m_Item3_2;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// CommandLine.Error
struct Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A  : public RuntimeObject
{
	// CommandLine.ErrorType CommandLine.Error::tag
	int32_t ___tag_0;
	// System.Boolean CommandLine.Error::stopsProcessing
	bool ___stopsProcessing_1;
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// CommandLine.NameInfo
struct NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF  : public RuntimeObject
{
	// System.String CommandLine.NameInfo::longName
	String_t* ___longName_1;
	// System.String CommandLine.NameInfo::shortName
	String_t* ___shortName_2;
};

struct NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_StaticFields
{
	// CommandLine.NameInfo CommandLine.NameInfo::EmptyName
	NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* ___EmptyName_0;
};

// CommandLine.Infrastructure.ReferenceEqualityComparer
struct ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48  : public RuntimeObject
{
};

struct ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_StaticFields
{
	// CommandLine.Infrastructure.ReferenceEqualityComparer CommandLine.Infrastructure.ReferenceEqualityComparer::Default
	ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48* ___Default_0;
};

// CommandLine.Core.Specification
struct Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E  : public RuntimeObject
{
	// CommandLine.Core.SpecificationType CommandLine.Core.Specification::tag
	int32_t ___tag_0;
	// System.Boolean CommandLine.Core.Specification::required
	bool ___required_1;
	// System.Boolean CommandLine.Core.Specification::hidden
	bool ___hidden_2;
	// CSharpx.Maybe`1<System.Int32> CommandLine.Core.Specification::min
	Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___min_3;
	// CSharpx.Maybe`1<System.Int32> CommandLine.Core.Specification::max
	Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___max_4;
	// CSharpx.Maybe`1<System.Object> CommandLine.Core.Specification::defaultValue
	Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___defaultValue_5;
	// System.String CommandLine.Core.Specification::helpText
	String_t* ___helpText_6;
	// System.String CommandLine.Core.Specification::metaValue
	String_t* ___metaValue_7;
	// System.Collections.Generic.IEnumerable`1<System.String> CommandLine.Core.Specification::enumValues
	RuntimeObject* ___enumValues_8;
	// System.Type CommandLine.Core.Specification::conversionType
	Type_t* ___conversionType_9;
	// CommandLine.Core.TargetType CommandLine.Core.Specification::targetType
	int32_t ___targetType_10;
};

// CommandLine.Core.SpecificationProperty
struct SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8  : public RuntimeObject
{
	// CommandLine.Core.Specification CommandLine.Core.SpecificationProperty::specification
	Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* ___specification_0;
	// System.Reflection.PropertyInfo CommandLine.Core.SpecificationProperty::property
	PropertyInfo_t* ___property_1;
	// CSharpx.Maybe`1<System.Object> CommandLine.Core.SpecificationProperty::value
	Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___value_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// CommandLine.Core.Switch
struct Switch_t0BCB505BA61ABAB63BEAAF92976AA964E348CA50  : public RuntimeObject
{
};

// CommandLine.Core.Token
struct Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68  : public RuntimeObject
{
	// CommandLine.Core.TokenType CommandLine.Core.Token::tag
	int32_t ___tag_0;
	// System.String CommandLine.Core.Token::text
	String_t* ___text_1;
};

// CommandLine.Core.TokenExtensions
struct TokenExtensions_t43D1DEF65F3A8C6B3B77E226096C8781EA0029F4  : public RuntimeObject
{
};

// CommandLine.Core.TokenPartitioner
struct TokenPartitioner_t9AFE657A512126315855CED09FAB2C26C2C200D9  : public RuntimeObject
{
};

// CommandLine.Core.Tokenizer
struct Tokenizer_t33D988E60F6DB194990A8FF6395B9F3128EFA80E  : public RuntimeObject
{
};

// CommandLine.Core.TypeConverter
struct TypeConverter_tB8AEE89BEE10E0DD1D479285CD07FC8D3FF19554  : public RuntimeObject
{
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// CommandLine.Core.TypeDescriptorExtensions
struct TypeDescriptorExtensions_tBE5318E746FD386DE2E83F4D8A38A1AB0534D2F2  : public RuntimeObject
{
};

// CommandLine.Core.TypeLookup
struct TypeLookup_t596127DF873672088819DB8A89D0DC96C0647664  : public RuntimeObject
{
};

// CommandLine.Core.ValueMapper
struct ValueMapper_t211FEF96E28D26A6360367B3393D86693172A5B4  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// CommandLine.Core.Verb
struct Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A  : public RuntimeObject
{
	// System.String CommandLine.Core.Verb::name
	String_t* ___name_0;
	// System.String CommandLine.Core.Verb::helpText
	String_t* ___helpText_1;
	// System.Boolean CommandLine.Core.Verb::hidden
	bool ___hidden_2;
	// System.Boolean CommandLine.Core.Verb::isDefault
	bool ___isDefault_3;
};

// CommandLine.Core.Switch/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3  : public RuntimeObject
{
	// System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>> CommandLine.Core.Switch/<>c__DisplayClass0_0::typeLookup
	Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* ___typeLookup_0;
};

// CommandLine.Core.Switch/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA  : public RuntimeObject
{
	// CommandLine.Core.Token CommandLine.Core.Switch/<>c__DisplayClass0_1::t
	Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t_0;
};

// CommandLine.Core.TokenPartitioner/<>c
struct U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4  : public RuntimeObject
{
};

struct U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields
{
	// CommandLine.Core.TokenPartitioner/<>c CommandLine.Core.TokenPartitioner/<>c::<>9
	U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* ___U3CU3E9_0;
	// System.Func`2<CommandLine.Core.Token,System.Boolean> CommandLine.Core.TokenPartitioner/<>c::<>9__0_3
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* ___U3CU3E9__0_3_1;
	// System.Func`2<CommandLine.Core.Token,System.String> CommandLine.Core.TokenPartitioner/<>c::<>9__0_4
	Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* ___U3CU3E9__0_4_2;
};

// CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<CommandLine.Core.Token> CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::switches
	HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* ___switches_0;
	// System.Collections.Generic.HashSet`1<CommandLine.Core.Token> CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::scalars
	HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* ___scalars_1;
	// System.Collections.Generic.HashSet`1<CommandLine.Core.Token> CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::sequences
	HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* ___sequences_2;
};

// CommandLine.Core.Tokenizer/<>c
struct U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A  : public RuntimeObject
{
};

struct U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields
{
	// CommandLine.Core.Tokenizer/<>c CommandLine.Core.Tokenizer/<>c::<>9
	U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>> CommandLine.Core.Tokenizer/<>c::<>9__0_0
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___U3CU3E9__0_0_1;
	// System.Func`3<System.String,CommandLine.Core.Token,CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c::<>9__1_1
	Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* ___U3CU3E9__1_1_2;
	// System.Func`2<CommandLine.Core.Token,CommandLine.UnknownOptionError> CommandLine.Core.Tokenizer/<>c::<>9__1_4
	Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* ___U3CU3E9__1_4_3;
	// System.Func`2<System.String,System.Boolean> CommandLine.Core.Tokenizer/<>c::<>9__2_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__2_0_4;
	// System.Func`2<System.String,System.Boolean> CommandLine.Core.Tokenizer/<>c::<>9__2_1
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__2_1_5;
	// System.Func`2<System.String,System.Boolean> CommandLine.Core.Tokenizer/<>c::<>9__2_2
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__2_2_6;
	// System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Boolean> CommandLine.Core.Tokenizer/<>c::<>9__3_1
	Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* ___U3CU3E9__3_1_7;
	// System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>> CommandLine.Core.Tokenizer/<>c::<>9__3_3
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___U3CU3E9__3_3_8;
	// System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Boolean> CommandLine.Core.Tokenizer/<>c::<>9__4_1
	Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* ___U3CU3E9__4_1_9;
	// System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Int32> CommandLine.Core.Tokenizer/<>c::<>9__4_2
	Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* ___U3CU3E9__4_2_10;
	// System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,System.Boolean> CommandLine.Core.Tokenizer/<>c::<>9__4_4
	Func_2_t17D4FD603BB1794F907857320DD481279B35439C* ___U3CU3E9__4_4_11;
	// System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c::<>9__4_5
	Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* ___U3CU3E9__4_5_12;
	// System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>> CommandLine.Core.Tokenizer/<>c::<>9__5_2
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___U3CU3E9__5_2_13;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290  : public RuntimeObject
{
	// System.Action`1<CommandLine.Error> CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::onError
	Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* ___onError_0;
	// System.Func`2<System.String,CommandLine.Core.NameLookupResult> CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::nameLookup
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup_1;
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::unkTokens
	RuntimeObject* ___unkTokens_2;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass2_0::values
	RuntimeObject* ___values_0;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225  : public RuntimeObject
{
	// System.Func`2<System.String,CSharpx.Maybe`1<System.Char>> CommandLine.Core.Tokenizer/<>c__DisplayClass3_0::optionSequenceWithSeparatorLookup
	Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* ___optionSequenceWithSeparatorLookup_0;
	// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Int32,System.Char>> CommandLine.Core.Tokenizer/<>c__DisplayClass3_0::replaces
	RuntimeObject* ___replaces_1;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass3_1
struct U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C  : public RuntimeObject
{
	// System.Int32 CommandLine.Core.Tokenizer/<>c__DisplayClass3_1::i
	int32_t ___i_0;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass3_2
struct U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E  : public RuntimeObject
{
	// System.Int32 CommandLine.Core.Tokenizer/<>c__DisplayClass3_2::i
	int32_t ___i_0;
	// CommandLine.Core.Token CommandLine.Core.Tokenizer/<>c__DisplayClass3_2::t
	Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t_1;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::tokens
	RuntimeObject* ___tokens_0;
	// System.Func`2<System.String,System.Boolean> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::nameLookup
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___nameLookup_1;
	// System.Collections.Generic.IEnumerable`1<System.Int32> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::indexes
	RuntimeObject* ___indexes_2;
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::toExclude
	RuntimeObject* ___toExclude_3;
	// System.Func`2<CommandLine.Core.Token,System.Boolean> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::<>9__7
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* ___U3CU3E9__7_4;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80  : public RuntimeObject
{
	// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass5_0::ignoreUnknownArguments
	bool ___ignoreUnknownArguments_0;
	// System.StringComparer CommandLine.Core.Tokenizer/<>c__DisplayClass5_0::nameComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___nameComparer_1;
	// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass5_0::enableDashDash
	bool ___enableDashDash_2;
};

// CommandLine.Core.Tokenizer/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::optionSpecs
	RuntimeObject* ___optionSpecs_0;
	// System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::normalize
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___normalize_1;
	// CommandLine.Core.Tokenizer/<>c__DisplayClass5_0 CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* ___CSU24U3CU3E8__locals1_2;
	// System.Func`2<System.String,System.Boolean> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<>9__6
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__6_3;
	// System.Func`2<System.String,CommandLine.Core.NameLookupResult> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<>9__7
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___U3CU3E9__7_4;
};

// CommandLine.Core.Tokenizer/<TokenizeLongName>d__7
struct U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D  : public RuntimeObject
{
	// System.Int32 CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// CommandLine.Core.Token CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::<>2__current
	Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___U3CU3E2__current_1;
	// System.Int32 CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::value
	String_t* ___value_3;
	// System.String CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::<>3__value
	String_t* ___U3CU3E3__value_4;
	// System.Action`1<CommandLine.Error> CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::onError
	Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* ___onError_5;
	// System.Action`1<CommandLine.Error> CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::<>3__onError
	Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* ___U3CU3E3__onError_6;
	// System.Text.RegularExpressions.Match CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::<tokenMatch>5__2
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CtokenMatchU3E5__2_7;
};

// CommandLine.Core.Tokenizer/<TokenizeShortName>d__6
struct U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED  : public RuntimeObject
{
	// System.Int32 CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// CommandLine.Core.Token CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>2__current
	Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___U3CU3E2__current_1;
	// System.Int32 CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::value
	String_t* ___value_3;
	// System.String CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>3__value
	String_t* ___U3CU3E3__value_4;
	// System.Func`2<System.String,CommandLine.Core.NameLookupResult> CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::nameLookup
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup_5;
	// System.Func`2<System.String,CommandLine.Core.NameLookupResult> CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>3__nameLookup
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___U3CU3E3__nameLookup_6;
	// System.String CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<text>5__2
	String_t* ___U3CtextU3E5__2_7;
	// System.Int32 CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_8;
	// System.String CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>7__wrap3
	String_t* ___U3CU3E7__wrap3_9;
	// System.Int32 CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_10;
	// CommandLine.Core.NameLookupResult CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::<r>5__6
	int32_t ___U3CrU3E5__6_11;
};

// CommandLine.Core.TypeConverter/<>c
struct U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325  : public RuntimeObject
{
};

struct U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields
{
	// CommandLine.Core.TypeConverter/<>c CommandLine.Core.TypeConverter/<>c::<>9
	U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* ___U3CU3E9_0;
	// System.Func`2<CSharpx.Maybe`1<System.Object>,System.Boolean> CommandLine.Core.TypeConverter/<>c::<>9__1_1
	Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* ___U3CU3E9__1_1_1;
	// System.Func`2<CSharpx.Maybe`1<System.Object>,System.Object> CommandLine.Core.TypeConverter/<>c::<>9__1_2
	Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* ___U3CU3E9__1_2_2;
	// System.Action`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Exception>> CommandLine.Core.TypeConverter/<>c::<>9__2_0
	Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* ___U3CU3E9__2_0_3;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Exception>> CommandLine.Core.TypeConverter/<>c::<>9__2_1
	Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* ___U3CU3E9__2_1_4;
	// System.Func`1<System.Object> CommandLine.Core.TypeConverter/<>c::<>9__4_5
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__4_5_5;
};

// CommandLine.Core.TypeConverter/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF  : public RuntimeObject
{
	// System.Type CommandLine.Core.TypeConverter/<>c__DisplayClass1_0::type
	Type_t* ___type_0;
	// System.Globalization.CultureInfo CommandLine.Core.TypeConverter/<>c__DisplayClass1_0::conversionCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture_1;
	// System.Boolean CommandLine.Core.TypeConverter/<>c__DisplayClass1_0::ignoreValueCase
	bool ___ignoreValueCase_2;
};

// CommandLine.Core.TypeConverter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D  : public RuntimeObject
{
	// System.Type CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::conversionType
	Type_t* ___conversionType_0;
	// System.String CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::value
	String_t* ___value_1;
	// System.Globalization.CultureInfo CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::conversionCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture_2;
	// System.Boolean CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::ignoreValueCase
	bool ___ignoreValueCase_3;
	// System.Func`1<System.Type> CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::<>9__3
	Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* ___U3CU3E9__3_4;
	// System.Func`1<System.Object> CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::<>9__2
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__2_5;
};

// CommandLine.Core.TypeConverter/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9  : public RuntimeObject
{
	// System.Type CommandLine.Core.TypeConverter/<>c__DisplayClass4_1::type
	Type_t* ___type_0;
	// CommandLine.Core.TypeConverter/<>c__DisplayClass4_0 CommandLine.Core.TypeConverter/<>c__DisplayClass4_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* ___CSU24U3CU3E8__locals1_1;
};

// CommandLine.Core.TypeLookup/<>c
struct U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC  : public RuntimeObject
{
};

struct U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields
{
	// CommandLine.Core.TypeLookup/<>c CommandLine.Core.TypeLookup/<>c::<>9
	U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* ___U3CU3E9_0;
	// System.Func`2<CommandLine.Core.OptionSpecification,System.Boolean> CommandLine.Core.TypeLookup/<>c::<>9__0_3
	Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* ___U3CU3E9__0_3_1;
	// System.Func`2<CommandLine.Core.OptionSpecification,CommandLine.Core.TypeDescriptor> CommandLine.Core.TypeLookup/<>c::<>9__0_4
	Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* ___U3CU3E9__0_4_2;
};

// CommandLine.Core.TypeLookup/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5  : public RuntimeObject
{
	// System.String CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::name
	String_t* ___name_0;
	// System.StringComparer CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::comparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer_1;
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification> CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::specifications
	RuntimeObject* ___specifications_2;
};

// CommandLine.Core.TypeLookup/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3  : public RuntimeObject
{
	// CommandLine.Core.OptionSpecification CommandLine.Core.TypeLookup/<>c__DisplayClass0_1::first
	OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___first_0;
};

// CommandLine.Core.ValueMapper/<>c
struct U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA  : public RuntimeObject
{
};

struct U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields
{
	// CommandLine.Core.ValueMapper/<>c CommandLine.Core.ValueMapper/<>c::<>9
	U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* ___U3CU3E9_0;
	// System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CommandLine.Core.SpecificationProperty> CommandLine.Core.ValueMapper/<>c::<>9__0_0
	Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* ___U3CU3E9__0_0_1;
	// System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CSharpx.Maybe`1<CommandLine.Error>> CommandLine.Core.ValueMapper/<>c::<>9__0_1
	Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* ___U3CU3E9__0_1_2;
	// System.Func`2<CSharpx.Just`1<CommandLine.Error>,CommandLine.Error> CommandLine.Core.ValueMapper/<>c::<>9__0_2
	Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* ___U3CU3E9__0_2_3;
	// System.Func`2<CommandLine.Core.SpecificationProperty,System.Boolean> CommandLine.Core.ValueMapper/<>c::<>9__1_0
	Func_2_tF992B196B281719D9879CB0C0636001879FA8608* ___U3CU3E9__1_0_4;
};

// CommandLine.Core.ValueMapper/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1  : public RuntimeObject
{
	// CommandLine.Core.SpecificationProperty CommandLine.Core.ValueMapper/<>c__DisplayClass1_0::pt
	SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* ___pt_0;
};

// CommandLine.Core.ValueMapper/<MapValuesImpl>d__1
struct U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552  : public RuntimeObject
{
	// System.Int32 CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>2__current
	Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* ___U3CU3E2__current_1;
	// System.Int32 CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::specProps
	RuntimeObject* ___specProps_3;
	// System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>3__specProps
	RuntimeObject* ___U3CU3E3__specProps_4;
	// System.Collections.Generic.IEnumerable`1<System.String> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::values
	RuntimeObject* ___values_5;
	// System.Collections.Generic.IEnumerable`1<System.String> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>3__values
	RuntimeObject* ___U3CU3E3__values_6;
	// System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::converter
	Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* ___converter_7;
	// System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>3__converter
	Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* ___U3CU3E3__converter_8;
	// System.Collections.Generic.IEnumerable`1<System.String> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<taken>5__2
	RuntimeObject* ___U3CtakenU3E5__2_9;
	// System.Collections.Generic.IEnumerator`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_10;
};

// CommandLine.Core.Verb/<>c
struct U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1  : public RuntimeObject
{
};

struct U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields
{
	// CommandLine.Core.Verb/<>c CommandLine.Core.Verb/<>c::<>9
	U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* ___U3CU3E9_0;
	// System.Func`2<System.Type,<>f__AnonymousType12`2<System.Type,System.Object[]>> CommandLine.Core.Verb/<>c::<>9__14_0
	Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* ___U3CU3E9__14_0_1;
	// System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Boolean> CommandLine.Core.Verb/<>c::<>9__14_1
	Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* ___U3CU3E9__14_1_2;
	// System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Tuple`2<CommandLine.Core.Verb,System.Type>> CommandLine.Core.Verb/<>c::<>9__14_2
	Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* ___U3CU3E9__14_2_3;
};

// CSharpx.Just`1<CommandLine.Error>
struct Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED  : public Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683
{
	// T CSharpx.Just`1::value
	Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* ___value_1;
};

// CSharpx.Just`1<System.Int32>
struct Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9  : public Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B
{
	// T CSharpx.Just`1::value
	int32_t ___value_1;
};

// CSharpx.Just`1<System.Object>
struct Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD  : public Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9
{
	// T CSharpx.Just`1::value
	RuntimeObject* ___value_1;
};

// CSharpx.Just`1<CommandLine.Core.Token>
struct Just_1_tC2A7C7C965B16B956337D3D6330A14106C8D9587  : public Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F
{
	// T CSharpx.Just`1::value
	Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___value_1;
};

// CommandLine.BaseAttribute
struct BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 CommandLine.BaseAttribute::min
	int32_t ___min_0;
	// System.Int32 CommandLine.BaseAttribute::max
	int32_t ___max_1;
	// System.Object CommandLine.BaseAttribute::default
	RuntimeObject* ___default_2;
	// CommandLine.Infrastructure.LocalizableAttributeProperty CommandLine.BaseAttribute::helpText
	LocalizableAttributeProperty_t4B12E689A223D4917102F6B1F77A87CD68DC925E* ___helpText_3;
	// System.String CommandLine.BaseAttribute::metaValue
	String_t* ___metaValue_4;
	// System.Type CommandLine.BaseAttribute::resourceType
	Type_t* ___resourceType_5;
	// System.Boolean CommandLine.BaseAttribute::<Required>k__BackingField
	bool ___U3CRequiredU3Ek__BackingField_6;
	// System.Boolean CommandLine.BaseAttribute::<Hidden>k__BackingField
	bool ___U3CHiddenU3Ek__BackingField_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// CommandLine.Core.Name
struct Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9  : public Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68
{
};

// CommandLine.NamedError
struct NamedError_t88D502871A8F9165F3B3A556B0527C9954FC91B0  : public Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A
{
	// CommandLine.NameInfo CommandLine.NamedError::nameInfo
	NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* ___nameInfo_2;
};

// CommandLine.Core.OptionSpecification
struct OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92  : public Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E
{
	// System.String CommandLine.Core.OptionSpecification::shortName
	String_t* ___shortName_11;
	// System.String CommandLine.Core.OptionSpecification::longName
	String_t* ___longName_12;
	// System.Char CommandLine.Core.OptionSpecification::separator
	Il2CppChar ___separator_13;
	// System.String CommandLine.Core.OptionSpecification::setName
	String_t* ___setName_14;
	// System.String CommandLine.Core.OptionSpecification::group
	String_t* ___group_15;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// CommandLine.TokenError
struct TokenError_t51DB47B5CDF5E11906E96DA24FEB4236856C213F  : public Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A
{
	// System.String CommandLine.TokenError::token
	String_t* ___token_2;
};

// CommandLine.Core.TypeDescriptor
struct TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 
{
	// CommandLine.Core.TargetType CommandLine.Core.TypeDescriptor::targetType
	int32_t ___targetType_0;
	// CSharpx.Maybe`1<System.Int32> CommandLine.Core.TypeDescriptor::maxItems
	Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maxItems_1;
	// CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor> CommandLine.Core.TypeDescriptor::nextValue
	Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue_2;
};
// Native definition for P/Invoke marshalling of CommandLine.Core.TypeDescriptor
struct TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_pinvoke
{
	int32_t ___targetType_0;
	Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maxItems_1;
	Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue_2;
};
// Native definition for COM marshalling of CommandLine.Core.TypeDescriptor
struct TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_com
{
	int32_t ___targetType_0;
	Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maxItems_1;
	Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue_2;
};

// CommandLine.Core.Value
struct Value_t40CD443232B5F17874C367F8409A296A446E287A  : public Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68
{
	// System.Boolean CommandLine.Core.Value::explicitlyAssigned
	bool ___explicitlyAssigned_2;
};

// CommandLine.Core.ValueSpecification
struct ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F  : public Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E
{
	// System.Int32 CommandLine.Core.ValueSpecification::index
	int32_t ___index_11;
	// System.String CommandLine.Core.ValueSpecification::metaName
	String_t* ___metaName_12;
};

// CommandLine.VerbAttribute
struct VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String CommandLine.VerbAttribute::name
	String_t* ___name_0;
	// System.Boolean CommandLine.VerbAttribute::isDefault
	bool ___isDefault_1;
	// CommandLine.Infrastructure.LocalizableAttributeProperty CommandLine.VerbAttribute::helpText
	LocalizableAttributeProperty_t4B12E689A223D4917102F6B1F77A87CD68DC925E* ___helpText_2;
	// System.Type CommandLine.VerbAttribute::resourceType
	Type_t* ___resourceType_3;
	// System.Boolean CommandLine.VerbAttribute::<Hidden>k__BackingField
	bool ___U3CHiddenU3Ek__BackingField_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// CommandLine.BadFormatConversionError
struct BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C  : public NamedError_t88D502871A8F9165F3B3A556B0527C9954FC91B0
{
};

// CommandLine.BadFormatTokenError
struct BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43  : public TokenError_t51DB47B5CDF5E11906E96DA24FEB4236856C213F
{
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// CommandLine.SequenceOutOfRangeError
struct SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2  : public NamedError_t88D502871A8F9165F3B3A556B0527C9954FC91B0
{
};

// CommandLine.UnknownOptionError
struct UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873  : public TokenError_t51DB47B5CDF5E11906E96DA24FEB4236856C213F
{
};

// CommandLine.ValueAttribute
struct ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB  : public BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0
{
	// System.Int32 CommandLine.ValueAttribute::index
	int32_t ___index_8;
	// System.String CommandLine.ValueAttribute::metaName
	String_t* ___metaName_9;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Exception>>
struct Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C  : public MulticastDelegate_t
{
};

// System.Action`1<CommandLine.Error>
struct Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Exception>>
struct Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.Type>
struct Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872  : public MulticastDelegate_t
{
};

// System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Tuple`2<CommandLine.Core.Verb,System.Type>>
struct Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802  : public MulticastDelegate_t
{
};

// System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Boolean>
struct Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>
struct Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Just`1<CommandLine.Error>,CommandLine.Error>
struct Func_2_t874E1386B69DF45699CC4000DE63D36B26211637  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Boolean>
struct Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Int32>
struct Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Maybe`1<System.Object>,System.Boolean>
struct Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Maybe`1<System.Object>,System.Object>
struct Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,System.Boolean>
struct Func_2_t17D4FD603BB1794F907857320DD481279B35439C  : public MulticastDelegate_t
{
};

// System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,CommandLine.Core.Token>
struct Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20  : public MulticastDelegate_t
{
};

// System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592  : public MulticastDelegate_t
{
};

// System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Boolean>
struct Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7  : public MulticastDelegate_t
{
};

// System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CSharpx.Maybe`1<CommandLine.Error>>
struct Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802  : public MulticastDelegate_t
{
};

// System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CommandLine.Core.SpecificationProperty>
struct Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,System.Tuple`2<System.Int32,System.Char>>
struct Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>
struct Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32Enum>
struct Func_2_t213311159653563BDCC21CC060B449705C96791F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.OptionSpecification,System.Boolean>
struct Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.OptionSpecification,CommandLine.Core.TypeDescriptor>
struct Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.SpecificationProperty,System.Boolean>
struct Func_2_tF992B196B281719D9879CB0C0636001879FA8608  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,CSharpx.Maybe`1<System.Char>>
struct Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,CSharpx.Maybe`1<System.Object>>
struct Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>
struct Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,CommandLine.Core.NameLookupResult>
struct Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,CommandLine.Core.Token>
struct Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.Token,System.Boolean>
struct Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.Token,System.String>
struct Func_2_t032101450B841A2B90EFD393694408DFFF48D87A  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.Token,CommandLine.UnknownOptionError>
struct Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,<>f__AnonymousType12`2<System.Type,System.Object[]>>
struct Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1  : public MulticastDelegate_t
{
};

// System.Func`2<CommandLine.Core.TypeDescriptor,System.Boolean>
struct Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42  : public MulticastDelegate_t
{
};

// System.Func`3<System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>
struct Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,CommandLine.Core.Token,CommandLine.Core.Token>
struct Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02  : public MulticastDelegate_t
{
};

// System.Func`3<CommandLine.Core.Token,System.Int32,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>
struct Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956  : public MulticastDelegate_t
{
};

// System.Func`3<CommandLine.Core.Token,System.Int32,CSharpx.Maybe`1<System.Int32>>
struct Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5  : public MulticastDelegate_t
{
};

// System.Func`3<CommandLine.Core.Token,System.Int32,CSharpx.Maybe`1<CommandLine.Core.Token>>
struct Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B  : public MulticastDelegate_t
{
};

// System.Func`3<CommandLine.Core.Token,System.Int32,System.Tuple`2<System.Int32,System.Char>>
struct Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192  : public MulticastDelegate_t
{
};

// System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>>
struct Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Object,System.Boolean,System.Object>
struct Func_4_t7868C163F386DC1EE76E0249D7EBB3A64555B0E7  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CommandLine.Core.Token[]
struct TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8  : public RuntimeArray
{
	ALIGN_FIELD (8) Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* m_Items[1];

	inline Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<CommandLine.Core.TypeDescriptor,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD038205C12B64FDA6235D08CAEF640B230B47D28_gshared (Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<CommandLine.Core.TypeDescriptor,System.Boolean>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598_gshared (Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___maybe0, Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42* ___func1, bool ___noneValue2, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType11`2<System.Int32Enum,System.Object>::.ctor(<Tag>j__TPar,<Text>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType11_2__ctor_m3428AB39F700FB4A0602569CB4C054A14DD9E5EB_gshared (U3CU3Ef__AnonymousType11_2_t636D7095C5060339144BD004D89601CD7B9FD535* __this, int32_t ___Tag0, RuntimeObject* ___Text1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TCollection>>,System.Func`3<TSource,TCollection,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m0904AFA160986F057E087D63FC60AE0154824C69_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___collectionSelector1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___resultSelector2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> CSharpx.EnumerableExtensions::Memoize<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumerableExtensions_Memoize_TisRuntimeObject_m185BF6502AE0229F04CB0CC9B336E16D38B0C701_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mA8ADB041F0D522A7D98DCC2759A79A6E98BADE85_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage> RailwaySharp.ErrorHandling.Result::Succeed<System.Object,System.Object>(TSuccess,System.Collections.Generic.IEnumerable`1<TMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* Result_Succeed_TisRuntimeObject_TisRuntimeObject_m2643BBCD022A0CA7EDFE3548234686803950FAD3_gshared (RuntimeObject* ___value0, RuntimeObject* ___messages1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeWhile<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_TakeWhile_TisRuntimeObject_mC4E836221C69D52B37AB4F47C3AB33AAFAF870C5_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::SkipWhile<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SkipWhile_TisRuntimeObject_m78CABE37CFE2D415C3C94BB1A86ED96BC4F964C3_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_m345C7E1745D8C331E382A2C4DC2CB9FB6E4D4CEC_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// RailwaySharp.ErrorHandling.Result`2<TResult,TMessage> RailwaySharp.ErrorHandling.ResultExtensions::Map<System.Object,System.Object,System.Object>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>,System.Func`2<TSuccess,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* ResultExtensions_Map_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8F73857DAB75AB85C1A045951F983B7D3885A778_gshared (Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* ___result0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___func1, const RuntimeMethod* method) ;
// TSuccess RailwaySharp.ErrorHandling.ResultExtensions::SucceededWith<System.Object,System.Object>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultExtensions_SucceededWith_TisRuntimeObject_TisRuntimeObject_mCEFCF1895B2D13B6A00AA4B806A0EE413A8B98E0_gshared (Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* ___result0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m8411CFF2BC76BE5C0B5F4237F89BCB1F18EE2F01_gshared (Func_3_tA23F5D62E264071C33C09639DD065B0B691A804D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1C77C54191E021E6F57106D66CC50686CF0E9B7C_gshared (RuntimeObject* ___source0, Func_3_tA23F5D62E264071C33C09639DD065B0B691A804D* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m4052F60F13DF530E12A56A34BC921BA5E262B711_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TMessage> RailwaySharp.ErrorHandling.ResultExtensions::SuccessMessages<System.Object,System.Object>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultExtensions_SuccessMessages_TisRuntimeObject_TisRuntimeObject_m6831902C0D286128A4FB7310350C9B08979B73AA_gshared (Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* ___result0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06C41A0BCC8CA77BEED141CC1FE12566BAABAD59_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector1, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Int32,System.Char>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_gshared_inline (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* __this, const RuntimeMethod* method) ;
// System.Boolean CSharpx.MaybeExtensions::IsJust<System.Int32>(CSharpx.Maybe`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_gshared (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maybe0, const RuntimeMethod* method) ;
// T CSharpx.MaybeExtensions::FromJustOrFail<System.Int32>(CSharpx.Maybe`1<T>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_gshared (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maybe0, Exception_t* ___exceptionToThrow1, const RuntimeMethod* method) ;
// System.Boolean CSharpx.MaybeExtensions::IsJust<System.Object>(CSharpx.Maybe`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeExtensions_IsJust_TisRuntimeObject_m716CF0558DA9EB2582C9C040B6FAB780B7B09648_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, const RuntimeMethod* method) ;
// T CSharpx.MaybeExtensions::FromJustOrFail<System.Object>(CSharpx.Maybe`1<T>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MaybeExtensions_FromJustOrFail_TisRuntimeObject_m1631B47BCF8347E48D496DF71F3F87A625A20F56_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, Exception_t* ___exceptionToThrow1, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1FDB82A936AD6A68F455DE792FD9454CE1A4FC9F_gshared_inline (Func_2_t213311159653563BDCC21CC060B449705C96791F* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Char,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2C555A786E4CFEF44D9118337A905F9DFB44CF64_gshared (Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Int32,System.Char>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_gshared (int32_t ___item10, Il2CppChar ___item21, const RuntimeMethod* method) ;
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<System.Char,System.Object>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisRuntimeObject_m190B41C52560C7C8AFE6B962C6F4F277A70FE52B_gshared (Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* ___maybe0, Func_2_t4012A4804CEF770533B75F684A4E0713C46C35CC* ___func1, RuntimeObject* ___noneValue2, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline (const RuntimeMethod* method) ;
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<System.Object,System.Object>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisRuntimeObject_m6F7C4A8ECA98F08083DA0E434F159E6A5AF402BE_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___func1, RuntimeObject* ___noneValue2, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Int32,System.Char>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_gshared_inline (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAtOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ElementAtOrDefault_TisRuntimeObject_m7076A18F1DBB5126EFE54CEF7A3004198B9964F2_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method) ;
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<System.Object,System.Boolean>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m08881FF3719A39AE5744FDD27A4C05CBA7FA3E45_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___func1, bool ___noneValue2, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.Maybe::Nothing<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_gshared (const RuntimeMethod* method) ;
// CSharpx.Just`1<T> CSharpx.Maybe::Just<System.Int32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_gshared (int32_t ___value0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.Maybe::Nothing<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_gshared (const RuntimeMethod* method) ;
// CSharpx.Just`1<T> CSharpx.Maybe::Just<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEFB19C6918BFCF7702199988CE08C7B1608A8343_gshared (Func_2_t213311159653563BDCC21CC060B449705C96791F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___collection0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Except_TisRuntimeObject_mB8C1B79120FCD0543A0C7C778A918E67F476ADBB_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m402F8F7A533735CE5F1906A640B63D24FA1548B7_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<System.Object,System.Object,System.Object>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* Tuple_Create_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mB63DE33C49478C5DDC9208B959EFB9BC53C2E21E_gshared (RuntimeObject* ___item10, RuntimeObject* ___item21, RuntimeObject* ___item32, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SingleOrDefault_TisRuntimeObject_m3B8BD7166B8DD26E05C0A3C8127047580A54FDC0_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void RailwaySharp.ErrorHandling.ResultExtensions::Match<System.Object,System.Object>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>,System.Action`2<TSuccess,System.Collections.Generic.IEnumerable`1<TMessage>>,System.Action`1<System.Collections.Generic.IEnumerable`1<TMessage>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultExtensions_Match_TisRuntimeObject_TisRuntimeObject_m5C10CD163DF8E264A29A6EFAA4B2F8EBF277DA7E_gshared (Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* ___result0, Action_2_t8DA9252F38DB808FBB55E0B4DFB630C3CAECEB8C* ___ifSuccess1, Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___ifFailure2, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<TSuccess> RailwaySharp.ErrorHandling.ResultExtensions::ToMaybe<System.Object,System.Object>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ResultExtensions_ToMaybe_TisRuntimeObject_TisRuntimeObject_mA01E8579AF57C43EA068E50CF2DB997D542890A3_gshared (Result_2_t9FF53E986BDC1137413EBB91FA058B8B79E8E76E* ___result0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// RailwaySharp.ErrorHandling.Result`2<TSuccess,System.Exception> RailwaySharp.ErrorHandling.Result::Try<System.Object>(System.Func`1<TSuccess>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___func0, const RuntimeMethod* method) ;
// System.Boolean CSharpx.Maybe`1<System.Object>::MatchNothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* __this, const RuntimeMethod* method) ;
// T CSharpx.Just`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_gshared_inline (Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<CommandLine.Core.TypeDescriptor>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF_gshared (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___value0, const RuntimeMethod* method) ;
// T CSharpx.MaybeExtensions::GetValueOrDefault<CommandLine.Core.TypeDescriptor>(CSharpx.Maybe`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6_gshared (Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___maybe0, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___noneValue1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SingleOrDefault_TisRuntimeObject_m79F141F20F85C2AC7A37F39B332426E4021F65D4_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,CommandLine.Core.TypeDescriptor>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m62D268097C5E8C26BBC4318249D6E746270798FE_gshared (Func_2_tC9D399DCE2568B50495C4638AA443F222D68C792* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T2> CSharpx.MaybeExtensions::Map<System.Object,CommandLine.Core.TypeDescriptor>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* MaybeExtensions_Map_TisRuntimeObject_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m5BF596538A44CCB648829F656DE4C8A54FF602F7_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, Func_2_tC9D399DCE2568B50495C4638AA443F222D68C792* ___func1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_m9494E17B12DD111245E43C25E910F359F00E4B14_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_m1185C3D02620CC5F26786D9BE962850A28346DD2_gshared (RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Infrastructure.EnumerableExtensions::Empty<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumerableExtensions_Empty_TisRuntimeObject_m6D33804F1C52526A4F6DD6E654A2968B722B9746_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mFE2578389AAD1579F88DF0952810FE9CC535D2DE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T CSharpx.MaybeExtensions::GetValueOrDefault<System.Int32>(CSharpx.Maybe`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA_gshared (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maybe0, int32_t ___noneValue1, const RuntimeMethod* method) ;
// System.Boolean CSharpx.MaybeExtensions::IsNothing<System.Object>(CSharpx.Maybe`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeExtensions_IsNothing_TisRuntimeObject_m7F75D0EE6C56FA241F6D7FA379077DAE7470B4DA_gshared (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TResult System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_4_Invoke_m11C46A95BF0E4E6EA682B45E6DA7504AE2FE8756_gshared_inline (Func_4_t7868C163F386DC1EE76E0249D7EBB3A64555B0E7* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, bool ___arg32, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType12`2<System.Object,System.Object>::.ctor(<type>j__TPar,<attrs>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType12_2__ctor_mFD8D2E7CCAAB7E9B9796945D076BB6B16BF43D3B_gshared (U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C* __this, RuntimeObject* ___type0, RuntimeObject* ___attrs1, const RuntimeMethod* method) ;
// <attrs>j__TPar <>f__AnonymousType12`2<System.Object,System.Object>::get_attrs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ef__AnonymousType12_2_get_attrs_m9C2EBE5F135EF8A0994DB223D8044B7D5D0888FA_gshared_inline (U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C* __this, const RuntimeMethod* method) ;
// <type>j__TPar <>f__AnonymousType12`2<System.Object,System.Object>::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ef__AnonymousType12_2_get_type_m5B75400ADAF8678C7290649380EE6B0A6257A8E3_gshared_inline (U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C* __this, const RuntimeMethod* method) ;

// System.Void CommandLine.Core.Switch/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m427A2A96F645F0DD933966F1BAEFC964758CEAA2 (U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<CommandLine.Core.Token,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD (RuntimeObject* ___source0, Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Switch/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mE868DE0354BFC532397BE0AF09B50A2CB2679A89 (U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* __this, const RuntimeMethod* method) ;
// System.String CommandLine.Core.Token::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>::Invoke(T)
inline Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* Func_2_Invoke_mEC6AE1C276A3E46322D615450E12B4D0745FE8CF_inline (Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* __this, String_t* ___arg0, const RuntimeMethod* method)
{
	return ((  Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* (*) (Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369*, String_t*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Func`2<CommandLine.Core.TypeDescriptor,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD038205C12B64FDA6235D08CAEF640B230B47D28 (Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mD038205C12B64FDA6235D08CAEF640B230B47D28_gshared)(__this, ___object0, ___method1, method);
}
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<CommandLine.Core.TypeDescriptor,System.Boolean>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
inline bool MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598 (Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___maybe0, Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42* ___func1, bool ___noneValue2, const RuntimeMethod* method)
{
	return ((  bool (*) (Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC*, Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42*, bool, const RuntimeMethod*))MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598_gshared)(___maybe0, ___func1, ___noneValue2, method);
}
// System.Boolean CommandLine.Core.TokenExtensions::IsName(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenExtensions_IsName_m1674A9A51A89132EE273921FC254A5FD7C6C3F4D (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___token0, const RuntimeMethod* method) ;
// CommandLine.Core.TargetType CommandLine.Core.TypeDescriptor::get_TargetType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C_inline (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Name::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Name__ctor_m73233850C5B0B0BF010D92E2F7F1BDF5DEE4BD0D (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Value::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_m50348A28DF5C9B6BCB74BBA1F97F2199BC476890 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Value::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_m617579FCB704C0194FCDD1FEBA7FDBAE808D2C04 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, String_t* ___text0, bool ___explicitlyAssigned1, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Token::.ctor(CommandLine.Core.TokenType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m1D53336832504228F8034AC677AE869A72D7018C (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, int32_t ___tag0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Core.Name::Equals(CommandLine.Core.Name)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Name_Equals_m2C6FC0C8D93B558F0D6BD5EDBDB3EA3F1664D96F (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* __this, Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// CommandLine.Core.TokenType CommandLine.Core.Token::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType11`2<CommandLine.Core.TokenType,System.String>::.ctor(<Tag>j__TPar,<Text>j__TPar)
inline void U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC (U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030* __this, int32_t ___Tag0, String_t* ___Text1, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030*, int32_t, String_t*, const RuntimeMethod*))U3CU3Ef__AnonymousType11_2__ctor_m3428AB39F700FB4A0602569CB4C054A14DD9E5EB_gshared)(__this, ___Tag0, ___Text1, method);
}
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Core.Value::Equals(CommandLine.Core.Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Value_Equals_mED5E9713ACD8C796E0C1108033C978DD7A7CC4B7 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, Value_t40CD443232B5F17874C367F8409A296A446E287A* ___other0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m496B86733092A06ABDF4DF8BA3B1F28234309FC2 (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::Tokenize(System.Collections.Generic.IEnumerable`1<System.String>,System.Func`2<System.String,CommandLine.Core.NameLookupResult>,System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_Tokenize_m05C4337BEF2ECF5FF942EB39A299793518FDC013 (RuntimeObject* ___arguments0, Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup1, Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___normalize2, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m108EE076E1947844C8145F1565FD7803B5F1635C (U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CommandLine.Error>::.ctor()
inline void List_1__ctor_m9AA65688BE58B500E14CF65D74FE986268EF6178 (List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action`1<CommandLine.Error>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m85C15848977E87A976978E191FF23BE7775A4118 (Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m414264C4FF67A33065801950BBA1BEF4C8F0B123 (Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`3<System.String,CommandLine.Core.Token,CommandLine.Core.Token>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m2AB8348125405BEDF0D17C117A09D626AE8CE2E7 (Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.String,CommandLine.Core.Token,CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TCollection>>,System.Func`3<TSource,TCollection,TResult>)
inline RuntimeObject* Enumerable_SelectMany_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3198B5DD515B4F934A3E771F5E87306124299636 (RuntimeObject* ___source0, Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222* ___collectionSelector1, Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* ___resultSelector2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222*, Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m0904AFA160986F057E087D63FC60AE0154824C69_gshared)(___source0, ___collectionSelector1, ___resultSelector2, method);
}
// System.Collections.Generic.IEnumerable`1<T> CSharpx.EnumerableExtensions::Memoize<CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<T>)
inline RuntimeObject* EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))EnumerableExtensions_Memoize_TisRuntimeObject_m185BF6502AE0229F04CB0CC9B336E16D38B0C701_gshared)(___source0, method);
}
// TResult System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m94C2F81E42B6776E77B16119652C9E45AA82267F_inline (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Func`2<CommandLine.Core.Token,CommandLine.UnknownOptionError>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC1CDA7F6881095B7536C0B5866A014AF4C8A979C (Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CommandLine.Core.Token,CommandLine.UnknownOptionError>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisUnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_mA76F8389221334501D966E65515E70ADF57AC09F (RuntimeObject* ___source0, Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<CommandLine.Error>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4512DD387EE03073B8256F1F1250B37F1A0824F5 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mA8ADB041F0D522A7D98DCC2759A79A6E98BADE85_gshared)(___first0, ___second1, method);
}
// RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage> RailwaySharp.ErrorHandling.Result::Succeed<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>(TSuccess,System.Collections.Generic.IEnumerable`1<TMessage>)
inline Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82 (RuntimeObject* ___value0, RuntimeObject* ___messages1, const RuntimeMethod* method)
{
	return ((  Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Result_Succeed_TisRuntimeObject_TisRuntimeObject_m2643BBCD022A0CA7EDFE3548234686803950FAD3_gshared)(___value0, ___messages1, method);
}
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisString_t_m5D996C56476B6F24D173C202AA19623C7F31358E (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared)(___source0, ___predicate1, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m596D0B56FB7A00FAB89379A8DF708E4EE29CA375 (U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeWhile<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_TakeWhile_TisString_t_mF17587EF9A9B83B868D9AA3C1BA4EAC6F8671AD4 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_TakeWhile_TisRuntimeObject_mC4E836221C69D52B37AB4F47C3AB33AAFAF870C5_gshared)(___source0, ___predicate1, method);
}
// TResult System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>::Invoke(T)
inline Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Func_2_Invoke_m7C2E67321FBD59A3514233B38B564EF7E8272480_inline (Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* (*) (Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::SkipWhile<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_SkipWhile_TisString_t_mA868A4B796E9D5DB4404F2DBA301439CB5DF6484 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_SkipWhile_TisRuntimeObject_m78CABE37CFE2D415C3C94BB1A86ED96BC4F964C3_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_m345C7E1745D8C331E382A2C4DC2CB9FB6E4D4CEC_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`2<System.String,CommandLine.Core.Token>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE95FC9AA2EFB8E59D21DA856980C6BF21C8D2CC7 (Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07 (RuntimeObject* ___source0, Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// RailwaySharp.ErrorHandling.Result`2<TResult,TMessage> RailwaySharp.ErrorHandling.ResultExtensions::Map<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>,System.Func`2<TSuccess,TResult>)
inline Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* ResultExtensions_Map_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_mBC40D62ACFA8778D035BFAC06F24FADD68E933DB (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* ___result0, Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___func1, const RuntimeMethod* method)
{
	return ((  Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* (*) (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB*, Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*, const RuntimeMethod*))ResultExtensions_Map_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8F73857DAB75AB85C1A045951F983B7D3885A778_gshared)(___result0, ___func1, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4319A9A9D0CCA6DCEF5290A1EBBFF59F83FCA707 (U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* __this, const RuntimeMethod* method) ;
// TSuccess RailwaySharp.ErrorHandling.ResultExtensions::SucceededWith<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>)
inline RuntimeObject* ResultExtensions_SucceededWith_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mE814312D3D08CDDB8F3C8D042DA416C002FD2780 (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* ___result0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB*, const RuntimeMethod*))ResultExtensions_SucceededWith_TisRuntimeObject_TisRuntimeObject_mCEFCF1895B2D13B6A00AA4B806A0EE413A8B98E0_gshared)(___result0, method);
}
// System.Void System.Func`3<CommandLine.Core.Token,System.Int32,System.Tuple`2<System.Int32,System.Char>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mA67A938935A578AA0A39CFB1867C6327D64E3DAC (Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m8411CFF2BC76BE5C0B5F4237F89BCB1F18EE2F01_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CommandLine.Core.Token,System.Tuple`2<System.Int32,System.Char>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
inline RuntimeObject* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mD72006ADE21AEB922EEEBDE3E3B03B700B46597C (RuntimeObject* ___source0, Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1C77C54191E021E6F57106D66CC50686CF0E9B7C_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC3C12250BB81902E02ECE41463C35D834899B04D (Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::SkipWhile<System.Tuple`2<System.Int32,System.Char>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_SkipWhile_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mEEA5BCFEAA66D0D9D859E1817873ED5F162B062E (RuntimeObject* ___source0, Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7*, const RuntimeMethod*))Enumerable_SkipWhile_TisRuntimeObject_m78CABE37CFE2D415C3C94BB1A86ED96BC4F964C3_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<T> CSharpx.EnumerableExtensions::Memoize<System.Tuple`2<System.Int32,System.Char>>(System.Collections.Generic.IEnumerable`1<T>)
inline RuntimeObject* EnumerableExtensions_Memoize_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m287450A40C739A356FAD1BC40ECBF40F26333D2A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))EnumerableExtensions_Memoize_TisRuntimeObject_m185BF6502AE0229F04CB0CC9B336E16D38B0C701_gshared)(___source0, method);
}
// System.Void System.Func`3<CommandLine.Core.Token,System.Int32,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mDB50F0662454B2E442ABB3109CC409F2B44C6E3F (Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m8411CFF2BC76BE5C0B5F4237F89BCB1F18EE2F01_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CommandLine.Core.Token,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
inline RuntimeObject* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m831E68573FEA5319952564D8155E87BF4B675C93 (RuntimeObject* ___source0, Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1C77C54191E021E6F57106D66CC50686CF0E9B7C_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m34DEA08D2AB5A0C62BAB543E47A205505A4810C1 (RuntimeObject* ___source0, Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_m4052F60F13DF530E12A56A34BC921BA5E262B711_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TMessage> RailwaySharp.ErrorHandling.ResultExtensions::SuccessMessages<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>)
inline RuntimeObject* ResultExtensions_SuccessMessages_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m596E7B68372F8901F4084300B73051D3FE0E8802 (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* ___result0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB*, const RuntimeMethod*))ResultExtensions_SuccessMessages_TisRuntimeObject_TisRuntimeObject_m6831902C0D286128A4FB7310350C9B08979B73AA_gshared)(___result0, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m65C37DC854A2882A79A306E1FB7AA5A29E6B9A6F (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<CommandLine.Core.Token,System.Int32,CSharpx.Maybe`1<System.Int32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m1FD7919B520A302DBD09D542DB21C94221E25BB2 (Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m8411CFF2BC76BE5C0B5F4237F89BCB1F18EE2F01_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CommandLine.Core.Token,CSharpx.Maybe`1<System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
inline RuntimeObject* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_mA1A798FE8D867B7E65477C20818FA6DA56C55595 (RuntimeObject* ___source0, Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1C77C54191E021E6F57106D66CC50686CF0E9B7C_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8A608FE26AC6AF2CA512CF9AB250D12A8C89607D (Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<CSharpx.Maybe`1<System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_m0B8A70142D6D7D26F8C492A74DE18E4B1F206575 (RuntimeObject* ___source0, Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<CSharpx.Maybe`1<System.Int32>,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA63FAB036FEF343598F947D3BCAF77020A937E92 (Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CSharpx.Maybe`1<System.Int32>,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8453327247DFB5F0A576241C87F10D526A252AD8 (RuntimeObject* ___source0, Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06C41A0BCC8CA77BEED141CC1FE12566BAABAD59_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`3<CommandLine.Core.Token,System.Int32,CSharpx.Maybe`1<CommandLine.Core.Token>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mD01C8503E535E25B4CB1BA2D29E033DDBA75D8D3 (Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m8411CFF2BC76BE5C0B5F4237F89BCB1F18EE2F01_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CommandLine.Core.Token,CSharpx.Maybe`1<CommandLine.Core.Token>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
inline RuntimeObject* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_mD132B87776788C1D64B01BD3353D1F457D39B558 (RuntimeObject* ___source0, Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1C77C54191E021E6F57106D66CC50686CF0E9B7C_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC1B4A3F80046E4B1AAD5138040B2AF75FE83C6F7 (Func_2_t17D4FD603BB1794F907857320DD481279B35439C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t17D4FD603BB1794F907857320DD481279B35439C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<CSharpx.Maybe`1<CommandLine.Core.Token>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_m82914181FA43555E6515E070E6FA395BCD9033E2 (RuntimeObject* ___source0, Func_2_t17D4FD603BB1794F907857320DD481279B35439C* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t17D4FD603BB1794F907857320DD481279B35439C*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<CSharpx.Maybe`1<CommandLine.Core.Token>,CommandLine.Core.Token>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD9BC8E774D13A20FE3C69DF4B63A746B3635C92B (Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CSharpx.Maybe`1<CommandLine.Core.Token>,CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mB651E4618FC5A2633583FDDD0C294D82AC156275 (RuntimeObject* ___source0, Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m52F7E1F9303DE17EDE71CA19428697EB39D45F1B (U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m4263A9576AF8680AD717340BBF12DBE5A85C3D10 (Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeShortNameU3Ed__6__ctor_m990348B43111E27DA35709ED4ACB1763A84B8FAC (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeLongNameU3Ed__7__ctor_mCAF4B8B95D360AC491A81A69CC9C75042E297BD0 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Tokenizer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7B7F2A963C71D52C3E7A8C8934E81C4082E5C3F (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.UnknownOptionError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownOptionError__ctor_m4C46CC0953C4EF492FAE4E5D852FFCE8409047C8 (UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873* __this, String_t* ___token0, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Infrastructure.StringExtensions::EqualsOrdinal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExtensions_EqualsOrdinal_mCC48D9AF00BD7F0E371E77604969C95982E979CD (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Int32,System.Char>::get_Item1()
inline int32_t Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_inline (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8*, const RuntimeMethod*))Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_gshared_inline)(__this, method);
}
// System.Boolean CSharpx.MaybeExtensions::IsJust<System.Int32>(CSharpx.Maybe`1<T>)
inline bool MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maybe0, const RuntimeMethod* method)
{
	return ((  bool (*) (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B*, const RuntimeMethod*))MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_gshared)(___maybe0, method);
}
// T CSharpx.MaybeExtensions::FromJustOrFail<System.Int32>(CSharpx.Maybe`1<T>,System.Exception)
inline int32_t MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maybe0, Exception_t* ___exceptionToThrow1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B*, Exception_t*, const RuntimeMethod*))MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_gshared)(___maybe0, ___exceptionToThrow1, method);
}
// System.Boolean CSharpx.MaybeExtensions::IsJust<CommandLine.Core.Token>(CSharpx.Maybe`1<T>)
inline bool MaybeExtensions_IsJust_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0060CA121E1BBF225745C9AD49F38401CE70B22F (Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* ___maybe0, const RuntimeMethod* method)
{
	return ((  bool (*) (Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F*, const RuntimeMethod*))MaybeExtensions_IsJust_TisRuntimeObject_m716CF0558DA9EB2582C9C040B6FAB780B7B09648_gshared)(___maybe0, method);
}
// T CSharpx.MaybeExtensions::FromJustOrFail<CommandLine.Core.Token>(CSharpx.Maybe`1<T>,System.Exception)
inline Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* MaybeExtensions_FromJustOrFail_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m017EB02A618249E073C6A6571E0163A9708FA6C2 (Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* ___maybe0, Exception_t* ___exceptionToThrow1, const RuntimeMethod* method)
{
	return ((  Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* (*) (Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F*, Exception_t*, const RuntimeMethod*))MaybeExtensions_FromJustOrFail_TisRuntimeObject_m1631B47BCF8347E48D496DF71F3F87A625A20F56_gshared)(___maybe0, ___exceptionToThrow1, method);
}
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer::TokenizeShortName(System.String,System.Func`2<System.String,CommandLine.Core.NameLookupResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_TokenizeShortName_mACD0DC681EED08BE4D19B48CE0B3331A847F4602 (String_t* ___value0, Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer::TokenizeLongName(System.String,System.Action`1<CommandLine.Error>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_TokenizeLongName_mD612CD518A32D3862C37E75124C28FF0FD99DE7E (String_t* ___value0, Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* ___onError1, const RuntimeMethod* method) ;
// CommandLine.Core.Token CommandLine.Core.Token::Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492 (String_t* ___text0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.String,CommandLine.Core.NameLookupResult>::Invoke(T)
inline int32_t Func_2_Invoke_m1DC58E00CBA84F2648A5D9BB419145024F5B3518_inline (Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* __this, String_t* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2*, String_t*, const RuntimeMethod*))Func_2_Invoke_m1FDB82A936AD6A68F455DE792FD9454CE1A4FC9F_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Linq.Enumerable::Contains<CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A (RuntimeObject* ___source0, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared)(___source0, ___value1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mA8ADB041F0D522A7D98DCC2759A79A6E98BADE85_gshared)(___first0, ___second1, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m140DB7727ED31B1A1DFC940C7D81C4A748B6E8CE (U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.String,CSharpx.Maybe`1<System.Char>>::Invoke(T)
inline Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* Func_2_Invoke_mB48A870159DEE7F46625F8F463B028490EEA563B_inline (Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* __this, String_t* ___arg0, const RuntimeMethod* method)
{
	return ((  Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* (*) (Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021*, String_t*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Func`2<System.Char,System.Tuple`2<System.Int32,System.Char>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6CC46F39C3A0E35CD3912C9D4B9894CCB86BAB12 (Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m2C555A786E4CFEF44D9118337A905F9DFB44CF64_gshared)(__this, ___object0, ___method1, method);
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Int32,System.Char>(T1,T2)
inline Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F (int32_t ___item10, Il2CppChar ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* (*) (int32_t, Il2CppChar, const RuntimeMethod*))Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_gshared)(___item10, ___item21, method);
}
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<System.Char,System.Tuple`2<System.Int32,System.Char>>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
inline Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m4914616492F85C9524FBC863C83D0D3EEAD1560B (Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* ___maybe0, Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492* ___func1, Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* ___noneValue2, const RuntimeMethod* method)
{
	return ((  Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* (*) (Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5*, Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492*, Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8*, const RuntimeMethod*))MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisRuntimeObject_m190B41C52560C7C8AFE6B962C6F4F277A70FE52B_gshared)(___maybe0, ___func1, ___noneValue2, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_mE0BD339E862C13275F6B5FE1661F7C4CD4BE810D (U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Tuple`2<System.Int32,System.Char>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* Enumerable_FirstOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m703873462535B33C9784D510DB71F748507C53EC (RuntimeObject* ___source0, Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* ___predicate1, const RuntimeMethod* method)
{
	return ((  Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* (*) (RuntimeObject*, Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<System.Tuple`2<System.Int32,System.Char>>(T)
inline Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8* MaybeExtensions_ToMaybe_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m22C6A55323425704D4B732816F3361064053FEEF (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8* (*) (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8*, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared)(___value0, method);
}
// System.Void System.Func`2<System.Tuple`2<System.Int32,System.Char>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m46602B870F11632D2BBF7E04717B1B755A121566 (Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<CommandLine.Core.Token>()
inline RuntimeObject* Enumerable_Empty_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3E495AA125B5178F1E35D7B5D60BD458103913A3_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline)(method);
}
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<System.Tuple`2<System.Int32,System.Char>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
inline RuntimeObject* MaybeExtensions_MapValueOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m7FB4DDDC847AE568B36E57985C04987026152335 (Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8* ___maybe0, Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592* ___func1, RuntimeObject* ___noneValue2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8*, Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592*, RuntimeObject*, const RuntimeMethod*))MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisRuntimeObject_m6F7C4A8ECA98F08083DA0E434F159E6A5AF402BE_gshared)(___maybe0, ___func1, ___noneValue2, method);
}
// T2 System.Tuple`2<System.Int32,System.Char>::get_Item2()
inline Il2CppChar Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_inline (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8*, const RuntimeMethod*))Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_gshared_inline)(__this, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAtOrDefault<CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Enumerable_ElementAtOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mD88AA5D3AE4D3CC3CF3061082B7AAB58E444A30D (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAtOrDefault_TisRuntimeObject_m7076A18F1DBB5126EFE54CEF7A3004198B9964F2_gshared)(___source0, ___index1, method);
}
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<CommandLine.Core.Token>(T)
inline Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* MaybeExtensions_ToMaybe_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m82538F8BF405DFA18CA332A9E47EBC28F802C02F (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* (*) (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68*, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared)(___value0, method);
}
// System.Boolean CommandLine.Core.TokenExtensions::IsValue(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenExtensions_IsValue_m427ECAAD03CC157CB0C527AB3118DBD1833B571B (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___token0, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Core.Value::get_ExplicitlyAssigned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Value_get_ExplicitlyAssigned_m41A1A51FB301E3BCE00EB298C7EB7FBDA7D3A353_inline (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, const RuntimeMethod* method) ;
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<CommandLine.Core.Token,System.Boolean>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
inline bool MaybeExtensions_MapValueOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6822042AC412018BA64A0AB53FCCAD0A7FCD8A84 (Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* ___maybe0, Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* ___func1, bool ___noneValue2, const RuntimeMethod* method)
{
	return ((  bool (*) (Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F*, Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*, bool, const RuntimeMethod*))MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m08881FF3719A39AE5744FDD27A4C05CBA7FA3E45_gshared)(___maybe0, ___func1, ___noneValue2, method);
}
// CSharpx.Maybe`1<T> CSharpx.Maybe::Nothing<System.Int32>()
inline Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91 (const RuntimeMethod* method)
{
	return ((  Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* (*) (const RuntimeMethod*))Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_gshared)(method);
}
// CSharpx.Just`1<T> CSharpx.Maybe::Just<System.Int32>(T)
inline Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB (int32_t ___value0, const RuntimeMethod* method)
{
	return ((  Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* (*) (int32_t, const RuntimeMethod*))Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_gshared)(___value0, method);
}
// TResult System.Func`2<System.String,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m83412BAAC0A78D63D3CC86949C694E9211106045_inline (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, String_t* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, String_t*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Linq.Enumerable::Contains<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957_gshared)(___source0, ___value1, method);
}
// CSharpx.Maybe`1<T> CSharpx.Maybe::Nothing<CommandLine.Core.Token>()
inline Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* Maybe_Nothing_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m14447577B8EC32DA699B2FBCAA44A29E02946C2C (const RuntimeMethod* method)
{
	return ((  Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* (*) (const RuntimeMethod*))Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_gshared)(method);
}
// CSharpx.Just`1<T> CSharpx.Maybe::Just<CommandLine.Core.Token>(T)
inline Just_1_tC2A7C7C965B16B956337D3D6330A14106C8D9587* Maybe_Just_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mC4DA126ECDECDA869D8DF0305B49C8903232A509 (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___value0, const RuntimeMethod* method)
{
	return ((  Just_1_tC2A7C7C965B16B956337D3D6330A14106C8D9587* (*) (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68*, const RuntimeMethod*))Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_gshared)(___value0, method);
}
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_m91DF09C1C09D754881C4B42F6F8A76BCA1082A41 (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,CommandLine.Core.NameLookupResult>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD48F2C4FBBF0D146FDB2E1B9C585DE1D88ABAD28 (Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEFB19C6918BFCF7702199988CE08C7B1608A8343_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1D4A229B089A0B39365086561BD175D21C2B82BE (Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::PreprocessDashDash(System.Collections.Generic.IEnumerable`1<System.String>,System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_PreprocessDashDash_m5FB22752E94DE091D59216B572EDE70D2963C982 (RuntimeObject* ___arguments0, Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* ___tokenizer1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,CSharpx.Maybe`1<System.Char>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8B831D51253EBDC12E299CB6AB60F79DC7E8B22E (Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::ExplodeOptionList(RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>,System.Func`2<System.String,CSharpx.Maybe`1<System.Char>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_ExplodeOptionList_mCA737EFF4C32125A67DD0B85652726C82F997E37 (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* ___tokenizerResult0, Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* ___optionSequenceWithSeparatorLookup1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer::Normalize(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_Normalize_mBC2B6413DDA6184E7AFCE4168B65EC0F204361B0 (RuntimeObject* ___tokens0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___nameLookup1, const RuntimeMethod* method) ;
// CommandLine.Core.NameLookupResult CommandLine.Core.NameLookup::Contains(System.String,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NameLookup_Contains_m6E19C659CE41F7629845075FCB327055EFA34A0C (String_t* ___name0, RuntimeObject* ___specifications1, StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer2, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<System.Char> CommandLine.Core.NameLookup::HavingSeparator(System.String,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* NameLookup_HavingSeparator_m193B21EC2854DE159993BBC928BEEBEE0BE7AEB3 (String_t* ___name0, RuntimeObject* ___specifications1, StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer2, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// CommandLine.Core.Token CommandLine.Core.Token::Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Token_Name_m9B02BCD77095F339C8837D34E24B1CF65775E87F (String_t* ___text0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.Collections.Generic.IEnumerable<CommandLine.Core.Token>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeShortNameU3Ed__6_System_Collections_Generic_IEnumerableU3CCommandLine_Core_TokenU3E_GetEnumerator_m52FDBCB3234454770C9F4117A256CE04BEF555C6 (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void CommandLine.BadFormatTokenError::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadFormatTokenError__ctor_mC05066E13BE0B6A8C59B792FFF9323A5F9658592 (BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43* __this, String_t* ___token0, const RuntimeMethod* method) ;
// System.Void System.Action`1<CommandLine.Error>::Invoke(T)
inline void Action_1_Invoke_m5697C0ED1CE04C4561DFFA07BEBB152DFE7DB3E1_inline (Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* __this, Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF*, Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3 (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, int32_t ___groupnum0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// CommandLine.Core.Token CommandLine.Core.Token::Value(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Token_Value_mFB814726AA332D62A6ED42925E4F8C2B57969A74 (String_t* ___text0, bool ___explicitlyAssigned1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.Collections.Generic.IEnumerable<CommandLine.Core.Token>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeLongNameU3Ed__7_System_Collections_Generic_IEnumerableU3CCommandLine_Core_TokenU3E_GetEnumerator_mA1972489FB2BBA8E70E097730626685F9F52C0E9 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m9E9B36D2D7AD5DBFBBEB8210838CEC0FF51EDC2C (U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Switch::Partition(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Switch_Partition_mD9B489B63592E69B740773D8D5934916EF253657 (RuntimeObject* ___tokens0, Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* ___typeLookup1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<CommandLine.Core.Token>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
inline void HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* __this, RuntimeObject* ___collection0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared)(__this, ___collection0, ___comparer1, method);
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Scalar::Partition(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scalar_Partition_mC237188AADB8E02350818CD2A453166EAA1A90BD (RuntimeObject* ___tokens0, Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* ___typeLookup1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Sequence::Partition(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sequence_Partition_m8693844F54E976A40BEDF52DEA7171432D4A1FEA (RuntimeObject* ___tokens0, Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* ___typeLookup1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except<CommandLine.Core.Token>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
inline RuntimeObject* Enumerable_Except_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m2B48997F343A8872A4E4EDDA1C9CDDE174ABD618 (RuntimeObject* ___first0, RuntimeObject* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Except_TisRuntimeObject_mB8C1B79120FCD0543A0C7C778A918E67F476ADBB_gshared)(___first0, ___second1, ___comparer2, method);
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>> CommandLine.Core.KeyValuePairHelper::ForSwitch(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePairHelper_ForSwitch_m1DD91F0AE2C3D5CE15186AD6EA640D335F654602 (RuntimeObject* ___tokens0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>> CommandLine.Core.KeyValuePairHelper::ForScalar(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePairHelper_ForScalar_mAD6D274CACD7B5A8EC9A4F4832ED8C80FC68D619 (RuntimeObject* ___tokens0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m402F8F7A533735CE5F1906A640B63D24FA1548B7_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>> CommandLine.Core.KeyValuePairHelper::ForSequence(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePairHelper_ForSequence_mA08A16FFB950684F22FDEF504C265E0178E70EE2 (RuntimeObject* ___tokens0, const RuntimeMethod* method) ;
// System.Void System.Func`2<CommandLine.Core.Token,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA8AE36C6DAD6556EB6BE3AF161D2B38648E77DE0 (Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t032101450B841A2B90EFD393694408DFFF48D87A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CommandLine.Core.Token,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisString_t_mBC4195FF792783DAB33C91FD903CB350D5B1B403 (RuntimeObject* ___source0, Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t032101450B841A2B90EFD393694408DFFF48D87A*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>(T1,T2,T3)
inline Tuple_3_t3BCC36CBF6D92721D91A53654BE19F2F7CD585A8* Tuple_Create_TisIEnumerable_1_t28E648697811C66B9CB3C4CC103C5DAF27BC54A7_TisIEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m33CADF52D8A7889DEDFFA33E6009318CAA7F054E (RuntimeObject* ___item10, RuntimeObject* ___item21, RuntimeObject* ___item32, const RuntimeMethod* method)
{
	return ((  Tuple_3_t3BCC36CBF6D92721D91A53654BE19F2F7CD585A8* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mB63DE33C49478C5DDC9208B959EFB9BC53C2E21E_gshared)(___item10, ___item21, ___item32, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<CommandLine.Core.Token>::Contains(T)
inline bool HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8*, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Void CommandLine.Core.TokenPartitioner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13202C9A3BB25A06FB51CAF6F399C4C2C7854C98 (U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* __this, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<System.Object> CommandLine.Core.TypeConverter::ChangeTypeSequence(System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* TypeConverter_ChangeTypeSequence_mEB36C39CBDABCDA074C64CBA694A1F57B11208E6 (RuntimeObject* ___values0, Type_t* ___conversionType1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, bool ___ignoreValueCase3, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_Single_TisString_t_mFA7EBD74BAF0E8DA89C3C9628F55288FD9EA3116 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E_gshared)(___source0, method);
}
// CSharpx.Maybe`1<System.Object> CommandLine.Core.TypeConverter::ChangeTypeScalar(System.String,System.Type,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* TypeConverter_ChangeTypeScalar_mDC61CBAA82B5B04274920C5120D18B6E4E8711FA (String_t* ___value0, Type_t* ___conversionType1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, bool ___ignoreValueCase3, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeConverter/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCA79EBBB57A01CF7B92FF484D700D810577D0208 (U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870 (Type_t* ___type0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Type_t* Enumerable_SingleOrDefault_TisType_t_m478BF4AA3917E16B9CB9A81763623368852E7D13 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m3B8BD7166B8DD26E05C0A3C8127047580A54FDC0_gshared)(___source0, method);
}
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<System.Type>(T)
inline Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2* MaybeExtensions_ToMaybe_TisType_t_mD324ABAFF880B06DDF4853DA18FEAD572229D113 (Type_t* ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2* (*) (Type_t*, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared)(___value0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T CSharpx.MaybeExtensions::FromJustOrFail<System.Type>(CSharpx.Maybe`1<T>,System.Exception)
inline Type_t* MaybeExtensions_FromJustOrFail_TisType_t_m1049EBC8DEBCB88FCC0296F8D4C00A6E4F721351 (Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2* ___maybe0, Exception_t* ___exceptionToThrow1, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2*, Exception_t*, const RuntimeMethod*))MaybeExtensions_FromJustOrFail_TisRuntimeObject_m1631B47BCF8347E48D496DF71F3F87A625A20F56_gshared)(___maybe0, ___exceptionToThrow1, method);
}
// System.Void System.Func`2<System.String,CSharpx.Maybe`1<System.Object>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD51C97F21AEB7B4B3B00E9B051402FC45BC9E149 (Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,CSharpx.Maybe`1<System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_m79E3E96F936CAD07BAF4C9BAC3976BEB34C582F1 (RuntimeObject* ___source0, Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<CSharpx.Maybe`1<System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA597F799B2D5EC43C8875425B390DDC503186E10 (Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<CSharpx.Maybe`1<System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_mC32CE0C741F47DD393658A722D21D87EB6746246 (RuntimeObject* ___source0, Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<CSharpx.Maybe`1<System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m700EB03A49E9CF96D7AC07C44B47F2C7FA79FA5F (Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CSharpx.Maybe`1<System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_TisRuntimeObject_m0D9D137CC0EF36ABAFF2D2B7A0EC3762A3BD8D2C (RuntimeObject* ___source0, Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Object CommandLine.Infrastructure.EnumerableExtensions::ToUntypedArray(System.Collections.Generic.IEnumerable`1<System.Object>,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumerableExtensions_ToUntypedArray_m73499DFCAF367BDFDE4A3120D2B22E79EB48593D (RuntimeObject* ___value0, Type_t* ___type1, const RuntimeMethod* method) ;
// CSharpx.Just`1<T> CSharpx.Maybe::Just<System.Object>(T)
inline Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* (*) (RuntimeObject*, const RuntimeMethod*))Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_gshared)(___value0, method);
}
// CSharpx.Maybe`1<T> CSharpx.Maybe::Nothing<System.Object>()
inline Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19 (const RuntimeMethod* method)
{
	return ((  Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* (*) (const RuntimeMethod*))Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_gshared)(method);
}
// RailwaySharp.ErrorHandling.Result`2<System.Object,System.Exception> CommandLine.Core.TypeConverter::ChangeTypeScalarImpl(System.String,System.Type,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* TypeConverter_ChangeTypeScalarImpl_m881B6A8189407F71C6C90051CD5442A442C0A62B (String_t* ___value0, Type_t* ___conversionType1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, bool ___ignoreValueCase3, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Exception>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4EF2E22B17BBCFD4D70776918EF7C9CB1BE41996 (Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Collections.Generic.IEnumerable`1<System.Exception>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m86D48E56A74C816F2F8A131EB27B279C757C27FE (Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void RailwaySharp.ErrorHandling.ResultExtensions::Match<System.Object,System.Exception>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>,System.Action`2<TSuccess,System.Collections.Generic.IEnumerable`1<TMessage>>,System.Action`1<System.Collections.Generic.IEnumerable`1<TMessage>>)
inline void ResultExtensions_Match_TisRuntimeObject_TisException_t_mDD6EF1FB3C9D50615B4FF3B991A1533059242CBF (Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* ___result0, Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* ___ifSuccess1, Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* ___ifFailure2, const RuntimeMethod* method)
{
	((  void (*) (Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50*, Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152*, Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C*, const RuntimeMethod*))ResultExtensions_Match_TisRuntimeObject_TisRuntimeObject_m5C10CD163DF8E264A29A6EFAA4B2F8EBF277DA7E_gshared)(___result0, ___ifSuccess1, ___ifFailure2, method);
}
// CSharpx.Maybe`1<TSuccess> RailwaySharp.ErrorHandling.ResultExtensions::ToMaybe<System.Object,System.Exception>(RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage>)
inline Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ResultExtensions_ToMaybe_TisRuntimeObject_TisException_t_mC5E4EF0893E17B6959711A6DDEB2AD0F57B58407 (Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* ___result0, const RuntimeMethod* method)
{
	return ((  Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* (*) (Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50*, const RuntimeMethod*))ResultExtensions_ToMaybe_TisRuntimeObject_TisRuntimeObject_mA01E8579AF57C43EA068E50CF2DB997D542890A3_gshared)(___result0, method);
}
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m237EF4F56EC5DE52FCDAD2E27DEEEBB21549B1F4 (RuntimeObject* ___value0, Type_t* ___conversionType1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* TypeDescriptor_GetConverter_mBF37D89915F76D19765E81387D62B0B407432EC6 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m292C97D9180D8130C24BA686483CABB24E6969CC (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean CommandLine.Core.ReflectionExtensions::IsCustomStruct(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsCustomStruct_mF93E4F3E0D5FE8B248D70E286CB2C9F92E295AF3 (Type_t* ___type0, const RuntimeMethod* method) ;
// RailwaySharp.ErrorHandling.Result`2<TSuccess,System.Exception> RailwaySharp.ErrorHandling.Result::Try<System.Object>(System.Func`1<TSuccess>)
inline Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___func0, const RuntimeMethod* method)
{
	return ((  Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1_gshared)(___func0, method);
}
// System.Boolean CommandLine.Core.ReflectionExtensions::IsPrimitiveEx(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsPrimitiveEx_m04EE4491D3BEAA8EAD57F2ACA9BF4DFDD4EFA91F (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Infrastructure.ReflectionHelper::IsFSharpOptionType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionHelper_IsFSharpOptionType_mAF794D1DD603FE92B469931BE39DF4A7969CD2E0 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585 (Type_t* ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m715E9AAD26B4AAA4B08E4D6AED73237174E82BB4 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeConverter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF863DB295ACB1F61571DD4DDE4F26A4738FFDC1B (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, const RuntimeMethod* method) ;
// System.Boolean CSharpx.Maybe`1<System.Object>::MatchNothing()
inline bool Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376 (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9*, const RuntimeMethod*))Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376_gshared)(__this, method);
}
// T CSharpx.Just`1<System.Object>::get_Value()
inline RuntimeObject* Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_inline (Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD*, const RuntimeMethod*))Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_gshared_inline)(__this, method);
}
// TSource System.Linq.Enumerable::First<System.Exception>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Exception_t* Enumerable_First_TisException_t_m79F26C101F742089351CE407131592334A76625C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void CommandLine.Infrastructure.ExceptionExtensions::RethrowWhenAbsentIn(System.Exception,System.Collections.Generic.IEnumerable`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionExtensions_RethrowWhenAbsentIn_mDABC1D7F51704BC5847C8C40BA1DD90451CB40A5 (Exception_t* ___exception0, RuntimeObject* ___validExceptions1, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Infrastructure.StringExtensions::IsBooleanString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExtensions_IsBooleanString_mDAC05E5069EAE1C93731C6D79BB1131E1AC83A53 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
inline RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Object CommandLine.Core.TypeConverter::ToEnum(System.String,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ToEnum_m00C7C502B7B0722319347604514CB2E2BEAA4302 (String_t* ___value0, Type_t* ___conversionType1, bool ___ignoreValueCase2, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Infrastructure.StringExtensions::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExtensions_ToBoolean_m2FE8D8DB4307823BC60507F0877223AFB351CCD7 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeConverter/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_mAC105AA3F85BE1F2E6F2B7BDD43954DF6D5BDAB7 (U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCE5505EB20216ED352B9E1770CD1C31BE39F8367 (Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// TResult System.Func`1<System.Type>::Invoke()
inline Type_t* Func_1_Invoke_m3A89A924C92BA380B90227900892524991B93645_inline (Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_m3162A4F48AE683C74A9419644E40C05595BA41E7 (Type_t* ___nullableType0, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types0, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object CommandLine.Core.TypeConverter::ConvertString(System.String,System.Type,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ConvertString_mFC1D978CDFB1CB0EECDEF080BEA6844D1294690D (String_t* ___value0, Type_t* ___type1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeDescriptor::.ctor(CommandLine.Core.TargetType,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptor__ctor_mCE9ADCF9EB72F1DB7B7E05880A7F113220214290 (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, int32_t ___targetType0, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maxItems1, Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue2, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.TypeDescriptor::get_MaxItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* TypeDescriptor_get_MaxItems_mCC7C4B7A6EE9D322883F7C4DA90923F9773D6F10_inline (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor> CommandLine.Core.TypeDescriptor::get_NextValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* TypeDescriptor_get_NextValue_mE05E1FDB44A0F4BAB550EB42720DB324B4DE61EC_inline (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<CommandLine.Core.TypeDescriptor>(T)
inline Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* (*) (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF_gshared)(___value0, method);
}
// T CSharpx.MaybeExtensions::GetValueOrDefault<CommandLine.Core.TypeDescriptor>(CSharpx.Maybe`1<T>,T)
inline TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6 (Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___maybe0, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___noneValue1, const RuntimeMethod* method)
{
	return ((  TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 (*) (Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC*, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3, const RuntimeMethod*))MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6_gshared)(___maybe0, ___noneValue1, method);
}
// CommandLine.Core.TypeDescriptor CommandLine.Core.TypeDescriptor::Create(CommandLine.Core.TargetType,CSharpx.Maybe`1<System.Int32>,CommandLine.Core.TypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B (int32_t ___tag0, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maximumItems1, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___next2, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mE6CD1571C4CD9F0717FBADF0F7A9214F99CACEDD (U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<CommandLine.Core.OptionSpecification,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m676ABAF5B214E04737E1EC6A792765839D74DE5A (Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::SingleOrDefault<CommandLine.Core.OptionSpecification>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC (RuntimeObject* ___source0, Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* ___predicate1, const RuntimeMethod* method)
{
	return ((  OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* (*) (RuntimeObject*, Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m79F141F20F85C2AC7A37F39B332426E4021F65D4_gshared)(___source0, ___predicate1, method);
}
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<CommandLine.Core.OptionSpecification>(T)
inline Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31 (OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* (*) (OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92*, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared)(___value0, method);
}
// System.Void System.Func`2<CommandLine.Core.OptionSpecification,CommandLine.Core.TypeDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF0F4BED8120081D6D8E5B1F2A1F4BAAB39BF81C7 (Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m62D268097C5E8C26BBC4318249D6E746270798FE_gshared)(__this, ___object0, ___method1, method);
}
// CSharpx.Maybe`1<T2> CSharpx.MaybeExtensions::Map<CommandLine.Core.OptionSpecification,CommandLine.Core.TypeDescriptor>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>)
inline Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325 (Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* ___maybe0, Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* ___func1, const RuntimeMethod* method)
{
	return ((  Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* (*) (Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E*, Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45*, const RuntimeMethod*))MaybeExtensions_Map_TisRuntimeObject_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m5BF596538A44CCB648829F656DE4C8A54FF602F7_gshared)(___maybe0, ___func1, method);
}
// System.String CommandLine.Core.OptionSpecification::get_ShortName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionSpecification_get_ShortName_m8CE982353B36EC4F8E8407AAB90D48374029EF03_inline (OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* __this, const RuntimeMethod* method) ;
// System.String CommandLine.Core.OptionSpecification::get_LongName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionSpecification_get_LongName_m87EF967278092D6328F17BC562D7150FC02358B1_inline (OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* __this, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Core.NameExtensions::MatchName(System.String,System.String,System.String,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameExtensions_MatchName_mF8CCDF53FB2A84221DACE3718ADBD7B266C5C473 (String_t* ___value0, String_t* ___shortName1, String_t* ___longName2, StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer3, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeLookup/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m9445C85527D82F634D51C7484A7143BA7F0EE11D (U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* __this, const RuntimeMethod* method) ;
// CommandLine.Core.TargetType CommandLine.Core.Specification::get_TargetType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Specification_get_TargetType_mA3C78F74141DB26147C69DEF964117990648B5F6_inline (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.Specification::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::SkipWhile<CommandLine.Core.OptionSpecification>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_SkipWhile_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_mF7D747541F4D3B480A49254D305B904DC013C40D (RuntimeObject* ___source0, Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A*, const RuntimeMethod*))Enumerable_SkipWhile_TisRuntimeObject_m78CABE37CFE2D415C3C94BB1A86ED96BC4F964C3_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<CommandLine.Core.OptionSpecification>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m1B0B49622D3C25B1B2555CA8B37D737287E70179 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m9494E17B12DD111245E43C25E910F359F00E4B14_gshared)(___source0, ___count1, method);
}
// CommandLine.Core.TypeDescriptor CommandLine.Core.TypeDescriptorExtensions::WithNextValue(CommandLine.Core.TypeDescriptor,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 TypeDescriptorExtensions_WithNextValue_m5F7D53FCC267FE216AE477A561C4FBFDBAD585CC (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___descriptor0, Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue1, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.TypeLookup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m311FE7A2D068047C98EDE018F1CF87C4DD18BDD5 (U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* __this, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Core.SpecificationExtensions::IsValue(CommandLine.Core.Specification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecificationExtensions_IsValue_m184338291421E414DF437E54488BDCE7D91C765F (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* ___specification0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>> CommandLine.Core.ValueMapper::MapValuesImpl(System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,System.Collections.Generic.IEnumerable`1<System.String>,System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueMapper_MapValuesImpl_m7744B28FA1375A4AC9BEB004E35F1555193462A3 (RuntimeObject* ___specProps0, RuntimeObject* ___values1, Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* ___converter2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CommandLine.Core.SpecificationProperty>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD77D23EEA6D26E18061E86189F3D52E06F53C0B8 (Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CommandLine.Core.SpecificationProperty>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mAE9B382DF70ACDDD5870BEB4FA043396F3247200 (RuntimeObject* ___source0, Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CSharpx.Maybe`1<CommandLine.Error>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD5E10CA368A4E439AEC7FFC52576DAEFB8EA39EB (Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>,CSharpx.Maybe`1<CommandLine.Error>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m24F7CF7072447E328CB4754644F99DA18AF6DFB2 (RuntimeObject* ___source0, Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<CSharpx.Just`1<CommandLine.Error>>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_mC788ADED4F3C65F80FE37D4AA33F4422CDDCB3CA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared)(___source0, method);
}
// System.Void System.Func`2<CSharpx.Just`1<CommandLine.Error>,CommandLine.Error>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB524569C3D54733BA48411D64C4D5AC1A1671D8F (Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t874E1386B69DF45699CC4000DE63D36B26211637*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CSharpx.Just`1<CommandLine.Error>,CommandLine.Error>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mC32E4207DED79724850ECEC880D450E7DD06E244 (RuntimeObject* ___source0, Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t874E1386B69DF45699CC4000DE63D36B26211637*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// RailwaySharp.ErrorHandling.Result`2<TSuccess,TMessage> RailwaySharp.ErrorHandling.Result::Succeed<System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,CommandLine.Error>(TSuccess,System.Collections.Generic.IEnumerable`1<TMessage>)
inline Result_2_tCAE178BE49E65721DC8561A72C56938C2FBAA7A1* Result_Succeed_TisIEnumerable_1_t9873E60E636CF6C24981EA1505A698B5EEAB4A4D_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m57673798B36D467BE981503CC6566658AEF0B870 (RuntimeObject* ___value0, RuntimeObject* ___messages1, const RuntimeMethod* method)
{
	return ((  Result_2_tCAE178BE49E65721DC8561A72C56938C2FBAA7A1* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Result_Succeed_TisRuntimeObject_TisRuntimeObject_m2643BBCD022A0CA7EDFE3548234686803950FAD3_gshared)(___value0, ___messages1, method);
}
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1__ctor_m52A1FFA7449F671FC94B9016494ADBE68A3FE49A (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.Specification::get_Min()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* Specification_get_Min_m8CB7BE46187311D7747D02DA3FC0F52BC348B398_inline (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.Maybe::Nothing<CommandLine.Error>()
inline Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193 (const RuntimeMethod* method)
{
	return ((  Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* (*) (const RuntimeMethod*))Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_gshared)(method);
}
// System.Void CommandLine.SequenceOutOfRangeError::.ctor(CommandLine.NameInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceOutOfRangeError__ctor_m77CFFCB3D80FC055F44F658988F01EB640E4BB0D (SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2* __this, NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* ___nameInfo0, const RuntimeMethod* method) ;
// CSharpx.Just`1<T> CSharpx.Maybe::Just<CommandLine.Error>(T)
inline Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55 (Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* ___value0, const RuntimeMethod* method)
{
	return ((  Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* (*) (Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A*, const RuntimeMethod*))Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_gshared)(___value0, method);
}
// System.Void CommandLine.Core.ValueMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71BFF2307A8646A4104307538380CC4945F5B255 (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>::get_Item1()
inline SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* Tuple_2_get_Item1_m9F3675BBE8D527CAF0E311E8AC18DFBAFF35D93E_inline (Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* __this, const RuntimeMethod* method)
{
	return ((  SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* (*) (Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>::get_Item2()
inline Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* Tuple_2_get_Item2_m37FB30CEC18128308EDEE03A1F1CE3CE6369A9F0_inline (Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* __this, const RuntimeMethod* method)
{
	return ((  Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* (*) (Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// T CSharpx.Just`1<CommandLine.Error>::get_Value()
inline Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* Just_1_get_Value_m6D0CB08DE6D9A5611CA307A08684D83DF151FAA0_inline (Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* __this, const RuntimeMethod* method)
{
	return ((  Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* (*) (Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED*, const RuntimeMethod*))Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_gshared_inline)(__this, method);
}
// CommandLine.Core.Specification CommandLine.Core.SpecificationProperty::get_Specification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* __this, const RuntimeMethod* method) ;
// CommandLine.Core.SpecificationProperty CommandLine.Core.SpecificationPropertyExtensions::WithValue(CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* SpecificationPropertyExtensions_WithValue_m09D09E244BC2EAD243DE80BC66CA7B6BC0B63672 (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* ___specProp0, Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___newValue1, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>(T1,T2)
inline Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5 (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* ___item10, Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* (*) (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8*, Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683*, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_m1185C3D02620CC5F26786D9BE962850A28346DD2_gshared)(___item10, ___item21, method);
}
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1_U3CU3Em__Finally1_mAFD93D841953BADF371B2694E1ED75A23D0D3BAD (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1_System_IDisposable_Dispose_m330C81CF6AA718A3508058DAECB42FE17C433A1D (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.ValueMapper/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m5C5DD29621B34CE4DCFCC0F4F6EB14BA77C4C610 (U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* __this, const RuntimeMethod* method) ;
// System.Boolean CommandLine.Infrastructure.EnumerableExtensions::Empty<CommandLine.Core.SpecificationProperty>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool EnumerableExtensions_Empty_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m09A228A17DFE16E68AB9171FA41A0628D3F64639 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))EnumerableExtensions_Empty_TisRuntimeObject_m6D33804F1C52526A4F6DD6E654A2968B722B9746_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::First<CommandLine.Core.SpecificationProperty>(System.Collections.Generic.IEnumerable`1<TSource>)
inline SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* Enumerable_First_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m688F2F296300E6204B536781AED3B278BC7E1D72 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.ValueMapper::CountOfMaxNumberOfValues(CommandLine.Core.Specification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ValueMapper_CountOfMaxNumberOfValues_m46D646C6D0FD8EC72523F8B35F30E58B6CE9D427 (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* ___specification0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mFE2578389AAD1579F88DF0952810FE9CC535D2DE_gshared)(___source0, method);
}
// T CSharpx.MaybeExtensions::GetValueOrDefault<System.Int32>(CSharpx.Maybe`1<T>,T)
inline int32_t MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maybe0, int32_t ___noneValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B*, int32_t, const RuntimeMethod*))MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA_gshared)(___maybe0, ___noneValue1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisString_t_m504EA8E24F95EBFBA4FD475BFEC97F72C31384F4 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m9494E17B12DD111245E43C25E910F359F00E4B14_gshared)(___source0, ___count1, method);
}
// System.Boolean CommandLine.Infrastructure.EnumerableExtensions::Empty<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool EnumerableExtensions_Empty_TisString_t_m00BE48ACF6A0DCC24ACEF8996A28C1F7541B0CA9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))EnumerableExtensions_Empty_TisRuntimeObject_m6D33804F1C52526A4F6DD6E654A2968B722B9746_gshared)(___source0, method);
}
// CSharpx.Maybe`1<CommandLine.Error> CommandLine.Core.ValueMapper::MakeErrorInCaseOfMinConstraint(CommandLine.Core.Specification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* ValueMapper_MakeErrorInCaseOfMinConstraint_m41C48F6C50C9766ED95F80FA580F45EC14A7C535 (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* ___specification0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<CommandLine.Core.SpecificationProperty>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_m345C7E1745D8C331E382A2C4DC2CB9FB6E4D4CEC_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`2<CommandLine.Core.SpecificationProperty,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC715C426634F40495118674E8347ADF487069A92 (Func_2_tF992B196B281719D9879CB0C0636001879FA8608* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF992B196B281719D9879CB0C0636001879FA8608*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<CommandLine.Core.SpecificationProperty>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* Enumerable_FirstOrDefault_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mC69E253B03B56E600F352CECC99AFABBD34139B7 (RuntimeObject* ___source0, Func_2_tF992B196B281719D9879CB0C0636001879FA8608* ___predicate1, const RuntimeMethod* method)
{
	return ((  SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* (*) (RuntimeObject*, Func_2_tF992B196B281719D9879CB0C0636001879FA8608*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<CommandLine.Core.SpecificationProperty>(T)
inline Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D* MaybeExtensions_ToMaybe_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m14E221986EB897EAE27DED07C95E8EB2C402F48D (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D* (*) (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8*, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared)(___value0, method);
}
// System.Boolean CSharpx.MaybeExtensions::IsNothing<CommandLine.Core.SpecificationProperty>(CSharpx.Maybe`1<T>)
inline bool MaybeExtensions_IsNothing_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m07BBEE3A5B76EABAA2227106A4DAA4FE4BE88428 (Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D* ___maybe0, const RuntimeMethod* method)
{
	return ((  bool (*) (Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D*, const RuntimeMethod*))MaybeExtensions_IsNothing_TisRuntimeObject_m7F75D0EE6C56FA241F6D7FA379077DAE7470B4DA_gshared)(___maybe0, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisString_t_m493DED3A0645F25D908B2B9825C90E6ED8FF8C50 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared)(___source0, method);
}
// System.Reflection.PropertyInfo CommandLine.Core.SpecificationProperty::get_Property()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* SpecificationProperty_get_Property_m1EBE86A045D2AE8EB7A450FA9511B299A25E0C48_inline (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* __this, const RuntimeMethod* method) ;
// TResult System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>>::Invoke(T1,T2,T3)
inline Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* Func_4_Invoke_mDA9ABEE812382C874A21A144ADD9E1719F9A7E5D_inline (Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* __this, RuntimeObject* ___arg10, Type_t* ___arg21, bool ___arg32, const RuntimeMethod* method)
{
	return ((  Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* (*) (Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1*, RuntimeObject*, Type_t*, bool, const RuntimeMethod*))Func_4_Invoke_m11C46A95BF0E4E6EA682B45E6DA7504AE2FE8756_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Func`2<System.Object,System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCC286BFEDEAC546437B09F8DBB609F433690460D (Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void CommandLine.BadFormatConversionError::.ctor(CommandLine.NameInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadFormatConversionError__ctor_m71D659D9478F91E6DBEB2345B2A193C3C001BEE1 (BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C* __this, NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* ___nameInfo0, const RuntimeMethod* method) ;
// T2 CSharpx.MaybeExtensions::MapValueOrDefault<System.Object,System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>(CSharpx.Maybe`1<T1>,System.Func`2<T1,T2>,T2)
inline Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_mAB60A1601A5FA2A59C3540E20D645F88D9C2EC46 (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___maybe0, Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7* ___func1, Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* ___noneValue2, const RuntimeMethod* method)
{
	return ((  Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* (*) (Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9*, Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7*, Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C*, const RuntimeMethod*))MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisRuntimeObject_m6F7C4A8ECA98F08083DA0E434F159E6A5AF402BE_gshared)(___maybe0, ___func1, ___noneValue2, method);
}
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.Collections.Generic.IEnumerable<System.Tuple<CommandLine.Core.SpecificationProperty,CSharpx.Maybe<CommandLine.Error>>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMapValuesImplU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_TupleU3CCommandLine_Core_SpecificationPropertyU2CCSharpx_MaybeU3CCommandLine_ErrorU3EU3EU3E_GetEnumerator_mA1E692B9059507B0EA94DE0B9C7357C586322353 (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Specification::.ctor(CommandLine.Core.SpecificationType,System.Boolean,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<System.Object>,System.String,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Type,CommandLine.Core.TargetType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Specification__ctor_mF972681624620524322D90A429CF10636DFB2735 (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, int32_t ___tag0, bool ___required1, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___min2, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___max3, Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___defaultValue4, String_t* ___helpText5, String_t* ___metaValue6, RuntimeObject* ___enumValues7, Type_t* ___conversionType8, int32_t ___targetType9, bool ___hidden10, const RuntimeMethod* method) ;
// System.Int32 CommandLine.ValueAttribute::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueAttribute_get_Index_mB7432C8FE4119F24B7DDC7249C4B67F00D9220EC_inline (ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* __this, const RuntimeMethod* method) ;
// System.String CommandLine.ValueAttribute::get_MetaName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueAttribute_get_MetaName_m08BF643273CC73FBC5E820E204EAA76900E54FDF_inline (ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* __this, const RuntimeMethod* method) ;
// System.Boolean CommandLine.BaseAttribute::get_Required()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseAttribute_get_Required_m32F3BB3F7C40F92BE8D31FD04C50EAE22972C8CA_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// System.Int32 CommandLine.BaseAttribute::get_Min()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseAttribute_get_Min_m733DC7C4879B5EA2635011AFE0504F8DF98CA3D7_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// System.Int32 CommandLine.BaseAttribute::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseAttribute_get_Max_m0D184E9D2747223B993BFD0B9301852C5DB52919_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// System.Object CommandLine.BaseAttribute::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseAttribute_get_Default_m94D0085FF0599F4C0E8A99AECA09BA94EF60C2E2_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// CSharpx.Maybe`1<T> CSharpx.MaybeExtensions::ToMaybe<System.Object>(T)
inline Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* (*) (RuntimeObject*, const RuntimeMethod*))MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_gshared)(___value0, method);
}
// System.String CommandLine.BaseAttribute::get_HelpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseAttribute_get_HelpText_mFB0AFAACF4DCA87A61EB82540D47B954BFB7D6EE (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// System.String CommandLine.BaseAttribute::get_MetaValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BaseAttribute_get_MetaValue_m28E3B7B0E528D9D2DFFC368192A9540CC22F4994_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// CommandLine.Core.TargetType CommandLine.Core.ReflectionExtensions::ToTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionExtensions_ToTargetType_m46B6B6FE5F42166E06F31FB6DD01EB971781B97C (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean CommandLine.BaseAttribute::get_Hidden()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseAttribute_get_Hidden_mCC368F2255941BA1715CA0BED558F82E6F3725C0_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.ValueSpecification::.ctor(System.Int32,System.String,System.Boolean,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<System.Object>,System.String,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Type,CommandLine.Core.TargetType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueSpecification__ctor_m97218449928E1EEF79F2B33D5D323239977F2340 (ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F* __this, int32_t ___index0, String_t* ___metaName1, bool ___required2, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___min3, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___max4, Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___defaultValue5, String_t* ___helpText6, String_t* ___metaValue7, RuntimeObject* ___enumValues8, Type_t* ___conversionType9, int32_t ___targetType10, bool ___hidden11, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B (String_t* ___value0, const RuntimeMethod* method) ;
// System.String CommandLine.VerbAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VerbAttribute_get_Name_m455F29E03D19313B80FCEE882069E582220C2659_inline (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) ;
// System.String CommandLine.VerbAttribute::get_HelpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VerbAttribute_get_HelpText_m6E32B62F941FA9854779C1DD6896E17E9DFE3829 (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) ;
// System.Boolean CommandLine.VerbAttribute::get_Hidden()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VerbAttribute_get_Hidden_m5E6DAE17F0CC3FBCAC567C6182E1B3B826CC9008_inline (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) ;
// System.Boolean CommandLine.VerbAttribute::get_IsDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VerbAttribute_get_IsDefault_mEE56C8EF2A790B441A7906C152BD136DCCEFB63D_inline (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) ;
// System.Void CommandLine.Core.Verb::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Verb__ctor_mF852C13835032365B14A9CA8224B21CD3F29B4E4 (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* __this, String_t* ___name0, String_t* ___helpText1, bool ___hidden2, bool ___isDefault3, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,<>f__AnonymousType12`2<System.Type,System.Object[]>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB7699B41E236D68B50700FC685BBC4D335ED2C63 (Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,<>f__AnonymousType12`2<System.Type,System.Object[]>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF543BEAB0F358F24B0932150C1DA422E05761523 (RuntimeObject* ___source0, Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8C5182168B42D654F9C0CCE71D92B378DB60E813 (Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<<>f__AnonymousType12`2<System.Type,System.Object[]>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF20BE212C3917A7992365E19D4396D7A521F2A75 (RuntimeObject* ___source0, Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Tuple`2<CommandLine.Core.Verb,System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC294218E988E85A8808865528BC97AF061A3295C (Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<<>f__AnonymousType12`2<System.Type,System.Object[]>,System.Tuple`2<CommandLine.Core.Verb,System.Type>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_TisTuple_2_t32430302606D9C516782A886D451215A6B93D875_mD2412A43FC4AC1E05597595A1C1C281DC3C17B28 (RuntimeObject* ___source0, Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void CommandLine.Core.Verb/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0591489FA13FB9EC1B9709CBFBF5213B15E69B4 (U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void <>f__AnonymousType12`2<System.Type,System.Object[]>::.ctor(<type>j__TPar,<attrs>j__TPar)
inline void U3CU3Ef__AnonymousType12_2__ctor_mE311EB8268AA271B7E48D7FAB89D64E40675640B (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* __this, Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___attrs1, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0*, Type_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))U3CU3Ef__AnonymousType12_2__ctor_mFD8D2E7CCAAB7E9B9796945D076BB6B16BF43D3B_gshared)(__this, ___type0, ___attrs1, method);
}
// <attrs>j__TPar <>f__AnonymousType12`2<System.Type,System.Object[]>::get_attrs()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_inline (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0*, const RuntimeMethod*))U3CU3Ef__AnonymousType12_2_get_attrs_m9C2EBE5F135EF8A0994DB223D8044B7D5D0888FA_gshared_inline)(__this, method);
}
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E_gshared)(___source0, method);
}
// CommandLine.Core.Verb CommandLine.Core.Verb::FromAttribute(CommandLine.VerbAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* Verb_FromAttribute_m3545D664C752DF71904EAAA4E59DED892D60911E (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* ___attribute0, const RuntimeMethod* method) ;
// <type>j__TPar <>f__AnonymousType12`2<System.Type,System.Object[]>::get_type()
inline Type_t* U3CU3Ef__AnonymousType12_2_get_type_mC0BF3FFA552D26E4FF485E4F3FE6BBB9F9D3AF9D_inline (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0*, const RuntimeMethod*))U3CU3Ef__AnonymousType12_2_get_type_m5B75400ADAF8678C7290649380EE6B0A6257A8E3_gshared_inline)(__this, method);
}
// System.Tuple`2<T1,T2> System.Tuple::Create<CommandLine.Core.Verb,System.Type>(T1,T2)
inline Tuple_2_t32430302606D9C516782A886D451215A6B93D875* Tuple_Create_TisVerb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_TisType_t_m615D0390421E522E71E3FDAFBC7ED4D8613E734C (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* ___item10, Type_t* ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_t32430302606D9C516782A886D451215A6B93D875* (*) (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A*, Type_t*, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_m1185C3D02620CC5F26786D9BE962850A28346DD2_gshared)(___item10, ___item21, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Switch::Partition(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Switch_Partition_mD9B489B63592E69B740773D8D5934916EF253657 (RuntimeObject* ___tokens0, Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* ___typeLookup1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m17ACA06CCAB484AA9FF3859445087C9FBB9B7252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* L_0 = (U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m427A2A96F645F0DD933966F1BAEFC964758CEAA2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* L_1 = V_0;
		Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* L_2 = ___typeLookup1;
		NullCheck(L_1);
		L_1->___typeLookup_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___typeLookup_0), (void*)L_2);
		RuntimeObject* L_3 = ___tokens0;
		U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* L_4 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_5 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m17ACA06CCAB484AA9FF3859445087C9FBB9B7252_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_3, L_5, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Switch/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m427A2A96F645F0DD933966F1BAEFC964758CEAA2 (U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.Switch/<>c__DisplayClass0_0::<Partition>b__0(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m17ACA06CCAB484AA9FF3859445087C9FBB9B7252 (U3CU3Ec__DisplayClass0_0_tD6B79C361567BABF66F500153B53978BBE9637F3* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_U3CPartitionU3Eb__1_m7FE034A6602969730EAEDE4C6AB4FAA4DA4BF572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* L_0 = (U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_1__ctor_mE868DE0354BFC532397BE0AF09B50A2CB2679A89(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* L_1 = V_0;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_2 = ___t0;
		NullCheck(L_1);
		L_1->___t_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___t_0), (void*)L_2);
		Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* L_3 = __this->___typeLookup_0;
		U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* L_4 = V_0;
		NullCheck(L_4);
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_5 = L_4->___t_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_5, NULL);
		NullCheck(L_3);
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_7;
		L_7 = Func_2_Invoke_mEC6AE1C276A3E46322D615450E12B4D0745FE8CF_inline(L_3, L_6, NULL);
		U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* L_8 = V_0;
		Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42* L_9 = (Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42*)il2cpp_codegen_object_new(Func_2_tABF776BEC3B7C4206055F3702853FC8F13E07E42_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_mD038205C12B64FDA6235D08CAEF640B230B47D28(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass0_1_U3CPartitionU3Eb__1_m7FE034A6602969730EAEDE4C6AB4FAA4DA4BF572_RuntimeMethod_var), NULL);
		bool L_10;
		L_10 = MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598(L_7, L_9, (bool)0, MaybeExtensions_MapValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFC605AAE989CFCE616C2208944870E1B87E55598_RuntimeMethod_var);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Switch/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mE868DE0354BFC532397BE0AF09B50A2CB2679A89 (U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.Switch/<>c__DisplayClass0_1::<Partition>b__1(CommandLine.Core.TypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_1_U3CPartitionU3Eb__1_m7FE034A6602969730EAEDE4C6AB4FAA4DA4BF572 (U3CU3Ec__DisplayClass0_1_t4F983EF0FE59CDFFDB26E6A0D63D1EC044A0A0AA* __this, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___info0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = __this->___t_0;
		bool L_1;
		L_1 = TokenExtensions_IsName_m1674A9A51A89132EE273921FC254A5FD7C6C3F4D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C_inline((&___info0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Token::.ctor(CommandLine.Core.TokenType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_m1D53336832504228F8034AC677AE869A72D7018C (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, int32_t ___tag0, String_t* ___text1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___tag0;
		__this->___tag_0 = L_0;
		String_t* L_1 = ___text1;
		__this->___text_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)L_1);
		return;
	}
}
// CommandLine.Core.Token CommandLine.Core.Token::Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Token_Name_m9B02BCD77095F339C8837D34E24B1CF65775E87F (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* L_1 = (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9*)il2cpp_codegen_object_new(Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Name__ctor_m73233850C5B0B0BF010D92E2F7F1BDF5DEE4BD0D(L_1, L_0, NULL);
		return L_1;
	}
}
// CommandLine.Core.Token CommandLine.Core.Token::Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492 (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_1 = (Value_t40CD443232B5F17874C367F8409A296A446E287A*)il2cpp_codegen_object_new(Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Value__ctor_m50348A28DF5C9B6BCB74BBA1F97F2199BC476890(L_1, L_0, NULL);
		return L_1;
	}
}
// CommandLine.Core.Token CommandLine.Core.Token::Value(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* Token_Value_mFB814726AA332D62A6ED42925E4F8C2B57969A74 (String_t* ___text0, bool ___explicitlyAssigned1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		bool L_1 = ___explicitlyAssigned1;
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_2 = (Value_t40CD443232B5F17874C367F8409A296A446E287A*)il2cpp_codegen_object_new(Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Value__ctor_m617579FCB704C0194FCDD1FEBA7FDBAE808D2C04(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// CommandLine.Core.TokenType CommandLine.Core.Token::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9 (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___tag_0;
		return L_0;
	}
}
// System.String CommandLine.Core.Token::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93 (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___text_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Name::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Name__ctor_m73233850C5B0B0BF010D92E2F7F1BDF5DEE4BD0D (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___text0;
		Token__ctor_m1D53336832504228F8034AC677AE869A72D7018C(__this, 0, L_0, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.Name::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Name_Equals_m62653FB597B148BA654E4A0DC2412DFF3E0A03BF (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9*)IsInstClass((RuntimeObject*)L_0, Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9_il2cpp_TypeInfo_var));
		Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* L_2 = V_0;
		bool L_3;
		L_3 = Name_Equals_m2C6FC0C8D93B558F0D6BD5EDBDB3EA3F1664D96F(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		RuntimeObject* L_4 = ___obj0;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 CommandLine.Core.Name::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Name_GetHashCode_m759EB4DBC3C29B070208998A385A44D5A2A9DCA0 (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(__this, NULL);
		String_t* L_1;
		L_1 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(__this, NULL);
		U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030* L_2 = (U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC(L_2, L_0, L_1, U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Boolean CommandLine.Core.Name::Equals(CommandLine.Core.Name)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Name_Equals_m2C6FC0C8D93B558F0D6BD5EDBDB3EA3F1664D96F (Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* __this, Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		int32_t L_1;
		L_1 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(__this, NULL);
		V_0 = L_1;
		Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var, &L_4);
		Il2CppFakeBox<int32_t> L_6(TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var, (&V_0));
		bool L_7;
		L_7 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), L_5, NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8;
		L_8 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(__this, NULL);
		Name_t98C2ED1F511D0AEB1DC6249F566243D74A3E3DB9* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_10, NULL);
		return L_11;
	}

IL_0038:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Value::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_m50348A28DF5C9B6BCB74BBA1F97F2199BC476890 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___text0;
		Value__ctor_m617579FCB704C0194FCDD1FEBA7FDBAE808D2C04(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void CommandLine.Core.Value::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_m617579FCB704C0194FCDD1FEBA7FDBAE808D2C04 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, String_t* ___text0, bool ___explicitlyAssigned1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___text0;
		Token__ctor_m1D53336832504228F8034AC677AE869A72D7018C(__this, 1, L_0, NULL);
		bool L_1 = ___explicitlyAssigned1;
		__this->___explicitlyAssigned_2 = L_1;
		return;
	}
}
// System.Boolean CommandLine.Core.Value::get_ExplicitlyAssigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Value_get_ExplicitlyAssigned_m41A1A51FB301E3BCE00EB298C7EB7FBDA7D3A353 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___explicitlyAssigned_2;
		return L_0;
	}
}
// System.Boolean CommandLine.Core.Value::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Value_Equals_m8F1F0688B0653A7C9F344EB3DCBCD0665703C717 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Value_t40CD443232B5F17874C367F8409A296A446E287A* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((Value_t40CD443232B5F17874C367F8409A296A446E287A*)IsInstClass((RuntimeObject*)L_0, Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var));
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_2 = V_0;
		bool L_3;
		L_3 = Value_Equals_mED5E9713ACD8C796E0C1108033C978DD7A7CC4B7(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		RuntimeObject* L_4 = ___obj0;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 CommandLine.Core.Value::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Value_GetHashCode_m663D61A8CDE23E99B00C0AA9662BD2B017A92B69 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(__this, NULL);
		String_t* L_1;
		L_1 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(__this, NULL);
		U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030* L_2 = (U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType11_2_tFE399B6716BADC4521807A5077BC69451B8AB030_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC(L_2, L_0, L_1, U3CU3Ef__AnonymousType11_2__ctor_m89392239619943AABFF1C4B9BE6DD51166E288EC_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Boolean CommandLine.Core.Value::Equals(CommandLine.Core.Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Value_Equals_mED5E9713ACD8C796E0C1108033C978DD7A7CC4B7 (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, Value_t40CD443232B5F17874C367F8409A296A446E287A* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		int32_t L_1;
		L_1 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(__this, NULL);
		V_0 = L_1;
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var, &L_4);
		Il2CppFakeBox<int32_t> L_6(TokenType_t5E11138FDC09144CFE03DAC7D2278172F635DC3A_il2cpp_TypeInfo_var, (&V_0));
		bool L_7;
		L_7 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), L_5, NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8;
		L_8 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(__this, NULL);
		Value_t40CD443232B5F17874C367F8409A296A446E287A* L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_10, NULL);
		return L_11;
	}

IL_0038:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CommandLine.Core.TokenExtensions::IsName(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenExtensions_IsName_m1674A9A51A89132EE273921FC254A5FD7C6C3F4D (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___token0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___token0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CommandLine.Core.TokenExtensions::IsValue(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenExtensions_IsValue_m427ECAAD03CC157CB0C527AB3118DBD1833B571B (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___token0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___token0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::Tokenize(System.Collections.Generic.IEnumerable`1<System.String>,System.Func`2<System.String,CommandLine.Core.NameLookupResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_Tokenize_m52D68475225DB130AED57F6F8D4959F03570826D (RuntimeObject* ___arguments0, Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTokenizeU3Eb__0_0_m88300B8824F784F7B8B3D4E22FB91556763EA2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* G_B2_0 = NULL;
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* G_B1_0 = NULL;
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	{
		RuntimeObject* L_0 = ___arguments0;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_1 = ___nameLookup1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_2 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_4 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_5 = (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*)il2cpp_codegen_object_new(Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m496B86733092A06ABDF4DF8BA3B1F28234309FC2(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CTokenizeU3Eb__0_0_m88300B8824F784F7B8B3D4E22FB91556763EA2A6_RuntimeMethod_var), NULL);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_6 = L_5;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_7;
		L_7 = Tokenizer_Tokenize_m05C4337BEF2ECF5FF942EB39A299793518FDC013(G_B2_2, G_B2_1, G_B2_0, NULL);
		return L_7;
	}
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::Tokenize(System.Collections.Generic.IEnumerable`1<System.String>,System.Func`2<System.String,CommandLine.Core.NameLookupResult>,System.Func`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_Tokenize_m05C4337BEF2ECF5FF942EB39A299793518FDC013 (RuntimeObject* ___arguments0, Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup1, Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* ___normalize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4512DD387EE03073B8256F1F1250B37F1A0824F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3198B5DD515B4F934A3E771F5E87306124299636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisUnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_mA76F8389221334501D966E65515E70ADF57AC09F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9AA65688BE58B500E14CF65D74FE986268EF6178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTokenizeU3Eb__1_1_mD2E363B3C550CE13BF30C9E13018055E000F9B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTokenizeU3Eb__1_4_mDAF7ED2AFDA50045988D3D38E104A48A523A93F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__0_mB09A57728ABE0636752ECC19E815859E074F909C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__2_m68030B26EDCE85223A5BB2AF9EB641F201BA1309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__3_m9477CEF5C487BE7AC028062871E5C481D671247D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* V_0 = NULL;
	List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* G_B2_0 = NULL;
	Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* G_B1_0 = NULL;
	Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* G_B4_2 = NULL;
	RuntimeObject* G_B4_3 = NULL;
	Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* G_B3_2 = NULL;
	RuntimeObject* G_B3_3 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_0 = (U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m108EE076E1947844C8145F1565FD7803B5F1635C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_1 = V_0;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_2 = ___nameLookup1;
		NullCheck(L_1);
		L_1->___nameLookup_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___nameLookup_1), (void*)L_2);
		List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* L_3 = (List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571*)il2cpp_codegen_object_new(List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m9AA65688BE58B500E14CF65D74FE986268EF6178(L_3, List_1__ctor_m9AA65688BE58B500E14CF65D74FE986268EF6178_RuntimeMethod_var);
		V_1 = L_3;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_4 = V_0;
		List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* L_5 = V_1;
		List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* L_6 = L_5;
		Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* L_7 = (Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF*)il2cpp_codegen_object_new(Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m85C15848977E87A976978E191FF23BE7775A4118(L_7, L_6, (intptr_t)((void*)GetVirtualMethodInfo(L_6, 11)), NULL);
		NullCheck(L_4);
		L_4->___onError_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onError_0), (void*)L_7);
		RuntimeObject* L_8 = ___arguments0;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_9 = V_0;
		Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222* L_10 = (Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222*)il2cpp_codegen_object_new(Func_2_tEE51F2125EB030AAA08F032C6482199E40C39222_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m414264C4FF67A33065801950BBA1BEF4C8F0B123(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__0_mB09A57728ABE0636752ECC19E815859E074F909C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* L_11 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2;
		Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* L_12 = L_11;
		G_B1_0 = L_12;
		G_B1_1 = L_10;
		G_B1_2 = L_8;
		if (L_12)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_10;
			G_B2_2 = L_8;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_13 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* L_14 = (Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02*)il2cpp_codegen_object_new(Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_3__ctor_m2AB8348125405BEDF0D17C117A09D626AE8CE2E7(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CTokenizeU3Eb__1_1_mD2E363B3C550CE13BF30C9E13018055E000F9B35_RuntimeMethod_var), NULL);
		Func_3_t26D5EA4AA7CE2DEE9A2625ABC009C3A68274BC02* L_15 = L_14;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2), (void*)L_15);
		G_B2_0 = L_15;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0052:
	{
		RuntimeObject* L_16;
		L_16 = Enumerable_SelectMany_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3198B5DD515B4F934A3E771F5E87306124299636(G_B2_2, G_B2_1, G_B2_0, Enumerable_SelectMany_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3198B5DD515B4F934A3E771F5E87306124299636_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_16, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		V_2 = L_17;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_18 = ___normalize2;
		RuntimeObject* L_19 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = Func_2_Invoke_m94C2F81E42B6776E77B16119652C9E45AA82267F_inline(L_18, L_19, NULL);
		RuntimeObject* L_21;
		L_21 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_20, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		V_3 = L_21;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_22 = V_0;
		RuntimeObject* L_23 = V_3;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_24 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_25 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__2_m68030B26EDCE85223A5BB2AF9EB641F201BA1309_RuntimeMethod_var), NULL);
		RuntimeObject* L_26;
		L_26 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_23, L_25, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		RuntimeObject* L_27;
		L_27 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_26, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		NullCheck(L_22);
		L_22->___unkTokens_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___unkTokens_2), (void*)L_27);
		RuntimeObject* L_28 = V_3;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_29 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_30 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__3_m9477CEF5C487BE7AC028062871E5C481D671247D_RuntimeMethod_var), NULL);
		RuntimeObject* L_31;
		L_31 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_28, L_30, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		List_1_t4038E30D7337325FE02C49D41C87BA76F2E80571* L_32 = V_1;
		U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* L_33 = V_0;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___unkTokens_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* L_35 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__1_4_3;
		Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* L_36 = L_35;
		G_B3_0 = L_36;
		G_B3_1 = L_34;
		G_B3_2 = L_32;
		G_B3_3 = L_31;
		if (L_36)
		{
			G_B4_0 = L_36;
			G_B4_1 = L_34;
			G_B4_2 = L_32;
			G_B4_3 = L_31;
			goto IL_00bf;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_37 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* L_38 = (Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA*)il2cpp_codegen_object_new(Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Func_2__ctor_mC1CDA7F6881095B7536C0B5866A014AF4C8A979C(L_38, L_37, (intptr_t)((void*)U3CU3Ec_U3CTokenizeU3Eb__1_4_mDAF7ED2AFDA50045988D3D38E104A48A523A93F2_RuntimeMethod_var), NULL);
		Func_2_tBFA8F595EA43F55A51A8543FF945C63F4ED7B1FA* L_39 = L_38;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__1_4_3 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__1_4_3), (void*)L_39);
		G_B4_0 = L_39;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_00bf:
	{
		RuntimeObject* L_40;
		L_40 = Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisUnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_mA76F8389221334501D966E65515E70ADF57AC09F(G_B4_1, G_B4_0, Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisUnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_mA76F8389221334501D966E65515E70ADF57AC09F_RuntimeMethod_var);
		RuntimeObject* L_41;
		L_41 = Enumerable_Concat_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4512DD387EE03073B8256F1F1250B37F1A0824F5(G_B4_2, L_40, Enumerable_Concat_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4512DD387EE03073B8256F1F1250B37F1A0824F5_RuntimeMethod_var);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_42;
		L_42 = Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82(G_B4_3, L_41, Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82_RuntimeMethod_var);
		return L_42;
	}
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::PreprocessDashDash(System.Collections.Generic.IEnumerable`1<System.String>,System.Func`2<System.Collections.Generic.IEnumerable`1<System.String>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_PreprocessDashDash_m5FB22752E94DE091D59216B572EDE70D2963C982 (RuntimeObject* ___arguments0, Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* ___tokenizer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_m5D996C56476B6F24D173C202AA19623C7F31358E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SkipWhile_TisString_t_mA868A4B796E9D5DB4404F2DBA301439CB5DF6484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_TakeWhile_TisString_t_mF17587EF9A9B83B868D9AA3C1BA4EAC6F8671AD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultExtensions_Map_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_mBC40D62ACFA8778D035BFAC06F24FADD68E933DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPreprocessDashDashU3Eb__2_0_mCAB3A794843CDF9F5BF6E811AA7582C7BD1AB6F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPreprocessDashDashU3Eb__2_1_m269D8869B3DD8338E0954BA841578800C2517168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPreprocessDashDashU3Eb__2_2_mC47FCAD8B2E491FFA55A043EC95C0B2A8F8BF23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CPreprocessDashDashU3Eb__3_m10E497548AC753F41FCFEF4FCB98E7CBF027F496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* V_0 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* G_B5_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* G_B4_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* G_B7_2 = NULL;
	Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* G_B7_3 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* G_B6_2 = NULL;
	Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* G_B6_3 = NULL;
	{
		RuntimeObject* L_0 = ___arguments0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_1 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_4;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_3 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CPreprocessDashDashU3Eb__2_0_mCAB3A794843CDF9F5BF6E811AA7582C7BD1AB6F4_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = L_4;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_4), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisString_t_m5D996C56476B6F24D173C202AA19623C7F31358E(G_B2_1, G_B2_0, Enumerable_Any_TisString_t_m5D996C56476B6F24D173C202AA19623C7F31358E_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_00af;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* L_7 = (U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U3CU3Ec__DisplayClass2_0__ctor_m596D0B56FB7A00FAB89379A8DF708E4EE29CA375(L_7, NULL);
		V_0 = L_7;
		Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* L_8 = ___tokenizer1;
		RuntimeObject* L_9 = ___arguments0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_10 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_5;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = L_9;
		G_B4_2 = L_8;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_9;
			G_B5_2 = L_8;
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_12 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_13 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CPreprocessDashDashU3Eb__2_1_m269D8869B3DD8338E0954BA841578800C2517168_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_14 = L_13;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_5), (void*)L_14);
		G_B5_0 = L_14;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0051:
	{
		RuntimeObject* L_15;
		L_15 = Enumerable_TakeWhile_TisString_t_mF17587EF9A9B83B868D9AA3C1BA4EAC6F8671AD4(G_B5_1, G_B5_0, Enumerable_TakeWhile_TisString_t_mF17587EF9A9B83B868D9AA3C1BA4EAC6F8671AD4_RuntimeMethod_var);
		NullCheck(G_B5_2);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_16;
		L_16 = Func_2_Invoke_m7C2E67321FBD59A3514233B38B564EF7E8272480_inline(G_B5_2, L_15, NULL);
		U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* L_17 = V_0;
		RuntimeObject* L_18 = ___arguments0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_19 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_6;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_20 = L_19;
		G_B6_0 = L_20;
		G_B6_1 = L_18;
		G_B6_2 = L_17;
		G_B6_3 = L_16;
		if (L_20)
		{
			G_B7_0 = L_20;
			G_B7_1 = L_18;
			G_B7_2 = L_17;
			G_B7_3 = L_16;
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_21 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_22 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CPreprocessDashDashU3Eb__2_2_mC47FCAD8B2E491FFA55A043EC95C0B2A8F8BF23A_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_23 = L_22;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_6), (void*)L_23);
		G_B7_0 = L_23;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}

IL_007c:
	{
		RuntimeObject* L_24;
		L_24 = Enumerable_SkipWhile_TisString_t_mA868A4B796E9D5DB4404F2DBA301439CB5DF6484(G_B7_1, G_B7_0, Enumerable_SkipWhile_TisString_t_mA868A4B796E9D5DB4404F2DBA301439CB5DF6484_RuntimeMethod_var);
		RuntimeObject* L_25;
		L_25 = Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0(L_24, 1, Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0_RuntimeMethod_var);
		Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8* L_26 = (Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8*)il2cpp_codegen_object_new(Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Func_2__ctor_mE95FC9AA2EFB8E59D21DA856980C6BF21C8D2CC7(L_26, NULL, (intptr_t)((void*)Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492_RuntimeMethod_var), NULL);
		RuntimeObject* L_27;
		L_27 = Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07(L_25, L_26, Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07_RuntimeMethod_var);
		NullCheck(G_B7_2);
		G_B7_2->___values_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_2->___values_0), (void*)L_27);
		U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* L_28 = V_0;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_29 = (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*)il2cpp_codegen_object_new(Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Func_2__ctor_m496B86733092A06ABDF4DF8BA3B1F28234309FC2(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CPreprocessDashDashU3Eb__3_m10E497548AC753F41FCFEF4FCB98E7CBF027F496_RuntimeMethod_var), NULL);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_30;
		L_30 = ResultExtensions_Map_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_mBC40D62ACFA8778D035BFAC06F24FADD68E933DB(G_B7_3, L_29, ResultExtensions_Map_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_mBC40D62ACFA8778D035BFAC06F24FADD68E933DB_RuntimeMethod_var);
		return L_30;
	}

IL_00af:
	{
		Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* L_31 = ___tokenizer1;
		RuntimeObject* L_32 = ___arguments0;
		NullCheck(L_31);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_33;
		L_33 = Func_2_Invoke_m7C2E67321FBD59A3514233B38B564EF7E8272480_inline(L_31, L_32, NULL);
		return L_33;
	}
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer::ExplodeOptionList(RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>,System.Func`2<System.String,CSharpx.Maybe`1<System.Char>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* Tokenizer_ExplodeOptionList_mCA737EFF4C32125A67DD0B85652726C82F997E37 (Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* ___tokenizerResult0, Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* ___optionSequenceWithSeparatorLookup1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_Memoize_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m287450A40C739A356FAD1BC40ECBF40F26333D2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m34DEA08D2AB5A0C62BAB543E47A205505A4810C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m831E68573FEA5319952564D8155E87BF4B675C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mD72006ADE21AEB922EEEBDE3E3B03B700B46597C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SkipWhile_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mEEA5BCFEAA66D0D9D859E1817873ED5F162B062E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultExtensions_SucceededWith_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mE814312D3D08CDDB8F3C8D042DA416C002FD2780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultExtensions_SuccessMessages_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m596E7B68372F8901F4084300B73051D3FE0E8802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExplodeOptionListU3Eb__3_1_m6CF6A210D73EB5E1507F17491044FE7B2EC7B646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExplodeOptionListU3Eb__3_3_m02FA417F2E14FD56E1B677F61795C3B668B18B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__0_m36267AE060D5E323DA6CF5C7FEF60532415391F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__2_m4DA06E8D76E97A3739A4221B1DD97C80FF501D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* G_B2_2 = NULL;
	Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* G_B1_2 = NULL;
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* L_0 = (U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m4319A9A9D0CCA6DCEF5290A1EBBFF59F83FCA707(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* L_1 = V_0;
		Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* L_2 = ___optionSequenceWithSeparatorLookup1;
		NullCheck(L_1);
		L_1->___optionSequenceWithSeparatorLookup_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___optionSequenceWithSeparatorLookup_0), (void*)L_2);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_3 = ___tokenizerResult0;
		RuntimeObject* L_4;
		L_4 = ResultExtensions_SucceededWith_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mE814312D3D08CDDB8F3C8D042DA416C002FD2780(L_3, ResultExtensions_SucceededWith_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mE814312D3D08CDDB8F3C8D042DA416C002FD2780_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_4, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		V_1 = L_5;
		U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* L_6 = V_0;
		RuntimeObject* L_7 = V_1;
		U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* L_8 = V_0;
		Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192* L_9 = (Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192*)il2cpp_codegen_object_new(Func_3_t730361ADBC10441E0C3C20B45ABD1E64B59D4192_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_3__ctor_mA67A938935A578AA0A39CFB1867C6327D64E3DAC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__0_m36267AE060D5E323DA6CF5C7FEF60532415391F0_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mD72006ADE21AEB922EEEBDE3E3B03B700B46597C(L_7, L_9, Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mD72006ADE21AEB922EEEBDE3E3B03B700B46597C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* L_11 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_7;
		Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* L_12 = L_11;
		G_B1_0 = L_12;
		G_B1_1 = L_10;
		G_B1_2 = L_6;
		if (L_12)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_10;
			G_B2_2 = L_6;
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_13 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* L_14 = (Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7*)il2cpp_codegen_object_new(Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_mC3C12250BB81902E02ECE41463C35D834899B04D(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CExplodeOptionListU3Eb__3_1_m6CF6A210D73EB5E1507F17491044FE7B2EC7B646_RuntimeMethod_var), NULL);
		Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* L_15 = L_14;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_7), (void*)L_15);
		G_B2_0 = L_15;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_004b:
	{
		RuntimeObject* L_16;
		L_16 = Enumerable_SkipWhile_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mEEA5BCFEAA66D0D9D859E1817873ED5F162B062E(G_B2_1, G_B2_0, Enumerable_SkipWhile_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_mEEA5BCFEAA66D0D9D859E1817873ED5F162B062E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = EnumerableExtensions_Memoize_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m287450A40C739A356FAD1BC40ECBF40F26333D2A(L_16, EnumerableExtensions_Memoize_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m287450A40C739A356FAD1BC40ECBF40F26333D2A_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___replaces_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___replaces_1), (void*)L_17);
		RuntimeObject* L_18 = V_1;
		U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* L_19 = V_0;
		Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956* L_20 = (Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956*)il2cpp_codegen_object_new(Func_3_tFF5998A3F887A49431C8C35C25A4D3362C193956_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_3__ctor_mDB50F0662454B2E442ABB3109CC409F2B44C6E3F(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__2_m4DA06E8D76E97A3739A4221B1DD97C80FF501D71_RuntimeMethod_var), NULL);
		RuntimeObject* L_21;
		L_21 = Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m831E68573FEA5319952564D8155E87BF4B675C93(L_18, L_20, Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m831E68573FEA5319952564D8155E87BF4B675C93_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_22 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__3_3_8;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_23 = L_22;
		G_B3_0 = L_23;
		G_B3_1 = L_21;
		if (L_23)
		{
			G_B4_0 = L_23;
			G_B4_1 = L_21;
			goto IL_008b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_24 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_25 = (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*)il2cpp_codegen_object_new(Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_m496B86733092A06ABDF4DF8BA3B1F28234309FC2(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3CExplodeOptionListU3Eb__3_3_m02FA417F2E14FD56E1B677F61795C3B668B18B23_RuntimeMethod_var), NULL);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_26 = L_25;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__3_3_8 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__3_3_8), (void*)L_26);
		G_B4_0 = L_26;
		G_B4_1 = G_B3_1;
	}

IL_008b:
	{
		RuntimeObject* L_27;
		L_27 = Enumerable_SelectMany_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m34DEA08D2AB5A0C62BAB543E47A205505A4810C1(G_B4_1, G_B4_0, Enumerable_SelectMany_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m34DEA08D2AB5A0C62BAB543E47A205505A4810C1_RuntimeMethod_var);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_28 = ___tokenizerResult0;
		RuntimeObject* L_29;
		L_29 = ResultExtensions_SuccessMessages_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m596E7B68372F8901F4084300B73051D3FE0E8802(L_28, ResultExtensions_SuccessMessages_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m596E7B68372F8901F4084300B73051D3FE0E8802_RuntimeMethod_var);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_30;
		L_30 = Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82(L_27, L_29, Result_Succeed_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m4D89D6E6116A11B1AED30DCB24F0C6D35EEA9A82_RuntimeMethod_var);
		return L_30;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer::Normalize(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_Normalize_mBC2B6413DDA6184E7AFCE4168B65EC0F204361B0 (RuntimeObject* ___tokens0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___nameLookup1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8453327247DFB5F0A576241C87F10D526A252AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mB651E4618FC5A2633583FDDD0C294D82AC156275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_mA1A798FE8D867B7E65477C20818FA6DA56C55595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_mD132B87776788C1D64B01BD3353D1F457D39B558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_m0B8A70142D6D7D26F8C492A74DE18E4B1F206575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_m82914181FA43555E6515E070E6FA395BCD9033E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t17D4FD603BB1794F907857320DD481279B35439C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CNormalizeU3Eb__4_1_mF4EA8C99AB48639258819FB5F502D0777C7EE320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CNormalizeU3Eb__4_2_mFF8552880BA839BBD0DB920D25A7A5095EF3A141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CNormalizeU3Eb__4_4_mDA44554AB69CC88C99436AF5AA71ABBC97795593_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CNormalizeU3Eb__4_5_mEDC9C74B894617B8813DDB81B48F81F58F0BF6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__0_m09CD14600A9A47061404DE31BD615E102A370DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__3_m90EBA244CAD67EB313FDB135613CD4130B17B786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__6_mF87B40278254DF955F4DCCBDEAEEC9AE6DCB857E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* V_0 = NULL;
	Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B2_2 = NULL;
	Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B1_2 = NULL;
	Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B4_2 = NULL;
	Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B3_2 = NULL;
	Func_2_t17D4FD603BB1794F907857320DD481279B35439C* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B6_2 = NULL;
	Func_2_t17D4FD603BB1794F907857320DD481279B35439C* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B5_2 = NULL;
	Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B8_2 = NULL;
	Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* G_B7_2 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_0 = (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m65C37DC854A2882A79A306E1FB7AA5A29E6B9A6F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_1 = V_0;
		RuntimeObject* L_2 = ___tokens0;
		NullCheck(L_1);
		L_1->___tokens_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tokens_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_3 = V_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = ___nameLookup1;
		NullCheck(L_3);
		L_3->___nameLookup_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___nameLookup_1), (void*)L_4);
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_5 = V_0;
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___tokens_0;
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_8 = V_0;
		Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5* L_9 = (Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5*)il2cpp_codegen_object_new(Func_3_t04B8366FC8772D169E544F802BFEE6E87E74A5B5_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_3__ctor_m1FD7919B520A302DBD09D542DB21C94221E25BB2(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__0_m09CD14600A9A47061404DE31BD615E102A370DC6_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_mA1A798FE8D867B7E65477C20818FA6DA56C55595(L_7, L_9, Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_mA1A798FE8D867B7E65477C20818FA6DA56C55595_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* L_11 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_9;
		Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* L_12 = L_11;
		G_B1_0 = L_12;
		G_B1_1 = L_10;
		G_B1_2 = L_5;
		if (L_12)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_10;
			G_B2_2 = L_5;
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_13 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* L_14 = (Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401*)il2cpp_codegen_object_new(Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_m8A608FE26AC6AF2CA512CF9AB250D12A8C89607D(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CNormalizeU3Eb__4_1_mF4EA8C99AB48639258819FB5F502D0777C7EE320_RuntimeMethod_var), NULL);
		Func_2_tDD8488060AE4C0AB71293E3CB9679BEF3E79E401* L_15 = L_14;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_9), (void*)L_15);
		G_B2_0 = L_15;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_004b:
	{
		RuntimeObject* L_16;
		L_16 = Enumerable_Where_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_m0B8A70142D6D7D26F8C492A74DE18E4B1F206575(G_B2_1, G_B2_0, Enumerable_Where_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_m0B8A70142D6D7D26F8C492A74DE18E4B1F206575_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* L_17 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_2_10;
		Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* L_18 = L_17;
		G_B3_0 = L_18;
		G_B3_1 = L_16;
		G_B3_2 = G_B2_2;
		if (L_18)
		{
			G_B4_0 = L_18;
			G_B4_1 = L_16;
			G_B4_2 = G_B2_2;
			goto IL_006f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_19 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* L_20 = (Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7*)il2cpp_codegen_object_new(Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_2__ctor_mA63FAB036FEF343598F947D3BCAF77020A937E92(L_20, L_19, (intptr_t)((void*)U3CU3Ec_U3CNormalizeU3Eb__4_2_mFF8552880BA839BBD0DB920D25A7A5095EF3A141_RuntimeMethod_var), NULL);
		Func_2_tAE4848E422CD8372E8C90F3C4FCF316BEBCE54C7* L_21 = L_20;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_2_10 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_2_10), (void*)L_21);
		G_B4_0 = L_21;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_006f:
	{
		RuntimeObject* L_22;
		L_22 = Enumerable_Select_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8453327247DFB5F0A576241C87F10D526A252AD8(G_B4_1, G_B4_0, Enumerable_Select_TisMaybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8453327247DFB5F0A576241C87F10D526A252AD8_RuntimeMethod_var);
		NullCheck(G_B4_2);
		G_B4_2->___indexes_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___indexes_2), (void*)L_22);
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_23 = V_0;
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___tokens_0;
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_26 = V_0;
		Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B* L_27 = (Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B*)il2cpp_codegen_object_new(Func_3_t5D696D570B17F1A82D3F39EAB8895F5E95FAA52B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_3__ctor_mD01C8503E535E25B4CB1BA2D29E033DDBA75D8D3(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__3_m90EBA244CAD67EB313FDB135613CD4130B17B786_RuntimeMethod_var), NULL);
		RuntimeObject* L_28;
		L_28 = Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_mD132B87776788C1D64B01BD3353D1F457D39B558(L_25, L_27, Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_mD132B87776788C1D64B01BD3353D1F457D39B558_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_t17D4FD603BB1794F907857320DD481279B35439C* L_29 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_11;
		Func_2_t17D4FD603BB1794F907857320DD481279B35439C* L_30 = L_29;
		G_B5_0 = L_30;
		G_B5_1 = L_28;
		G_B5_2 = L_23;
		if (L_30)
		{
			G_B6_0 = L_30;
			G_B6_1 = L_28;
			G_B6_2 = L_23;
			goto IL_00b0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_31 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t17D4FD603BB1794F907857320DD481279B35439C* L_32 = (Func_2_t17D4FD603BB1794F907857320DD481279B35439C*)il2cpp_codegen_object_new(Func_2_t17D4FD603BB1794F907857320DD481279B35439C_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Func_2__ctor_mC1B4A3F80046E4B1AAD5138040B2AF75FE83C6F7(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3CNormalizeU3Eb__4_4_mDA44554AB69CC88C99436AF5AA71ABBC97795593_RuntimeMethod_var), NULL);
		Func_2_t17D4FD603BB1794F907857320DD481279B35439C* L_33 = L_32;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_11 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_11), (void*)L_33);
		G_B6_0 = L_33;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_00b0:
	{
		RuntimeObject* L_34;
		L_34 = Enumerable_Where_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_m82914181FA43555E6515E070E6FA395BCD9033E2(G_B6_1, G_B6_0, Enumerable_Where_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_m82914181FA43555E6515E070E6FA395BCD9033E2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* L_35 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_12;
		Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* L_36 = L_35;
		G_B7_0 = L_36;
		G_B7_1 = L_34;
		G_B7_2 = G_B6_2;
		if (L_36)
		{
			G_B8_0 = L_36;
			G_B8_1 = L_34;
			G_B8_2 = G_B6_2;
			goto IL_00d4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_37 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* L_38 = (Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20*)il2cpp_codegen_object_new(Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Func_2__ctor_mD9BC8E774D13A20FE3C69DF4B63A746B3635C92B(L_38, L_37, (intptr_t)((void*)U3CU3Ec_U3CNormalizeU3Eb__4_5_mEDC9C74B894617B8813DDB81B48F81F58F0BF6D8_RuntimeMethod_var), NULL);
		Func_2_tF76918516B61D18B9F83E5950DE68165D6148B20* L_39 = L_38;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_12 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_12), (void*)L_39);
		G_B8_0 = L_39;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00d4:
	{
		RuntimeObject* L_40;
		L_40 = Enumerable_Select_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mB651E4618FC5A2633583FDDD0C294D82AC156275(G_B8_1, G_B8_0, Enumerable_Select_TisMaybe_1_t9A33900C4A49072B5E675B227545626E3556233F_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mB651E4618FC5A2633583FDDD0C294D82AC156275_RuntimeMethod_var);
		NullCheck(G_B8_2);
		G_B8_2->___toExclude_3 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___toExclude_3), (void*)L_40);
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_41 = V_0;
		NullCheck(L_41);
		RuntimeObject* L_42 = L_41->___tokens_0;
		U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* L_43 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_44 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__6_mF87B40278254DF955F4DCCBDEAEEC9AE6DCB857E_RuntimeMethod_var), NULL);
		RuntimeObject* L_45;
		L_45 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_42, L_44, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		return L_45;
	}
}
// System.Func`3<System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error>> CommandLine.Core.Tokenizer::ConfigureTokenizer(System.StringComparer,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7* Tokenizer_ConfigureTokenizer_mA18849E073EFBC128DC36FBA1A21BECF871FB9C5 (StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___nameComparer0, bool ___ignoreUnknownArguments1, bool ___enableDashDash2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CConfigureTokenizerU3Eb__0_m964B924F47EBFE326BCED97344A378AEF0EE8EAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_0 = (U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m52F7E1F9303DE17EDE71CA19428697EB39D45F1B(L_0, NULL);
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_1 = L_0;
		bool L_2 = ___ignoreUnknownArguments1;
		NullCheck(L_1);
		L_1->___ignoreUnknownArguments_0 = L_2;
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_3 = L_1;
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_4 = ___nameComparer0;
		NullCheck(L_3);
		L_3->___nameComparer_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___nameComparer_1), (void*)L_4);
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_5 = L_3;
		bool L_6 = ___enableDashDash2;
		NullCheck(L_5);
		L_5->___enableDashDash_2 = L_6;
		Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7* L_7 = (Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7*)il2cpp_codegen_object_new(Func_3_t49A976D8602FCEF5219C2C9910E97B484280AEF7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_3__ctor_m4263A9576AF8680AD717340BBF12DBE5A85C3D10(L_7, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CConfigureTokenizerU3Eb__0_m964B924F47EBFE326BCED97344A378AEF0EE8EAE_RuntimeMethod_var), NULL);
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer::TokenizeShortName(System.String,System.Func`2<System.String,CommandLine.Core.NameLookupResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_TokenizeShortName_mACD0DC681EED08BE4D19B48CE0B3331A847F4602 (String_t* ___value0, Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* ___nameLookup1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_0 = (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED*)il2cpp_codegen_object_new(U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTokenizeShortNameU3Ed__6__ctor_m990348B43111E27DA35709ED4ACB1763A84B8FAC(L_0, ((int32_t)-2), NULL);
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_1 = L_0;
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		L_1->___U3CU3E3__value_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__value_4), (void*)L_2);
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_3 = L_1;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_4 = ___nameLookup1;
		NullCheck(L_3);
		L_3->___U3CU3E3__nameLookup_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__nameLookup_6), (void*)L_4);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer::TokenizeLongName(System.String,System.Action`1<CommandLine.Error>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_TokenizeLongName_mD612CD518A32D3862C37E75124C28FF0FD99DE7E (String_t* ___value0, Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* ___onError1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_0 = (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D*)il2cpp_codegen_object_new(U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTokenizeLongNameU3Ed__7__ctor_mCAF4B8B95D360AC491A81A69CC9C75042E297BD0(L_0, ((int32_t)-2), NULL);
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_1 = L_0;
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		L_1->___U3CU3E3__value_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__value_4), (void*)L_2);
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_3 = L_1;
		Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* L_4 = ___onError1;
		NullCheck(L_3);
		L_3->___U3CU3E3__onError_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__onError_6), (void*)L_4);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m03BD964A390639E4650D3C184DB65C0F494E735F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_0 = (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A*)il2cpp_codegen_object_new(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF7B7F2A963C71D52C3E7A8C8934E81C4082E5C3F(L_0, NULL);
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CommandLine.Core.Tokenizer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7B7F2A963C71D52C3E7A8C8934E81C4082E5C3F (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c::<Tokenize>b__0_0(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CTokenizeU3Eb__0_0_m88300B8824F784F7B8B3D4E22FB91556763EA2A6 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, RuntimeObject* ___tokens0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___tokens0;
		return L_0;
	}
}
// CommandLine.Core.Token CommandLine.Core.Tokenizer/<>c::<Tokenize>b__1_1(System.String,CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* U3CU3Ec_U3CTokenizeU3Eb__1_1_mD2E363B3C550CE13BF30C9E13018055E000F9B35 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, String_t* ___arg0, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___token1, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___token1;
		return L_0;
	}
}
// CommandLine.UnknownOptionError CommandLine.Core.Tokenizer/<>c::<Tokenize>b__1_4(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873* U3CU3Ec_U3CTokenizeU3Eb__1_4_mDAF7ED2AFDA50045988D3D38E104A48A523A93F2 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_0, NULL);
		UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873* L_2 = (UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873*)il2cpp_codegen_object_new(UnknownOptionError_tF3C719B4AE8A13EC1A53D3145D0299BDA3277873_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnknownOptionError__ctor_m4C46CC0953C4EF492FAE4E5D852FFCE8409047C8(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c::<PreprocessDashDash>b__2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CPreprocessDashDashU3Eb__2_0_mCAB3A794843CDF9F5BF6E811AA7582C7BD1AB6F4 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, String_t* ___arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___arg0;
		bool L_1;
		L_1 = StringExtensions_EqualsOrdinal_mCC48D9AF00BD7F0E371E77604969C95982E979CD(L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		return L_1;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c::<PreprocessDashDash>b__2_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CPreprocessDashDashU3Eb__2_1_m269D8869B3DD8338E0954BA841578800C2517168 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, String_t* ___arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___arg0;
		bool L_1;
		L_1 = StringExtensions_EqualsOrdinal_mCC48D9AF00BD7F0E371E77604969C95982E979CD(L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c::<PreprocessDashDash>b__2_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CPreprocessDashDashU3Eb__2_2_mC47FCAD8B2E491FFA55A043EC95C0B2A8F8BF23A (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, String_t* ___arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___arg0;
		bool L_1;
		L_1 = StringExtensions_EqualsOrdinal_mCC48D9AF00BD7F0E371E77604969C95982E979CD(L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c::<ExplodeOptionList>b__3_1(System.Tuple`2<System.Int32,System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExplodeOptionListU3Eb__3_1_m6CF6A210D73EB5E1507F17491044FE7B2EC7B646 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_inline(L_0, Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c::<ExplodeOptionList>b__3_3(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CExplodeOptionListU3Eb__3_3_m02FA417F2E14FD56E1B677F61795C3B668B18B23 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___x0;
		return L_0;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c::<Normalize>b__4_1(CSharpx.Maybe`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CNormalizeU3Eb__4_1_mF4EA8C99AB48639258819FB5F502D0777C7EE320 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = ___i0;
		bool L_1;
		L_1 = MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD(L_0, MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 CommandLine.Core.Tokenizer/<>c::<Normalize>b__4_2(CSharpx.Maybe`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CNormalizeU3Eb__4_2_mFF8552880BA839BBD0DB920D25A7A5095EF3A141 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = ___i0;
		int32_t L_1;
		L_1 = MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA(L_0, (Exception_t*)NULL, MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c::<Normalize>b__4_4(CSharpx.Maybe`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CNormalizeU3Eb__4_4_mDA44554AB69CC88C99436AF5AA71ABBC97795593 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_IsJust_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0060CA121E1BBF225745C9AD49F38401CE70B22F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* L_0 = ___t0;
		bool L_1;
		L_1 = MaybeExtensions_IsJust_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0060CA121E1BBF225745C9AD49F38401CE70B22F(L_0, MaybeExtensions_IsJust_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0060CA121E1BBF225745C9AD49F38401CE70B22F_RuntimeMethod_var);
		return L_1;
	}
}
// CommandLine.Core.Token CommandLine.Core.Tokenizer/<>c::<Normalize>b__4_5(CSharpx.Maybe`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* U3CU3Ec_U3CNormalizeU3Eb__4_5_mEDC9C74B894617B8813DDB81B48F81F58F0BF6D8 (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_FromJustOrFail_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m017EB02A618249E073C6A6571E0163A9708FA6C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* L_0 = ___t0;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_1;
		L_1 = MaybeExtensions_FromJustOrFail_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m017EB02A618249E073C6A6571E0163A9708FA6C2(L_0, (Exception_t*)NULL, MaybeExtensions_FromJustOrFail_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m017EB02A618249E073C6A6571E0163A9708FA6C2_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c::<ConfigureTokenizer>b__5_2(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CConfigureTokenizerU3Eb__5_2_m50F6F5606DF60D111B73CDE76CE599E7E15F852A (U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* __this, RuntimeObject* ___toks0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___toks0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m108EE076E1947844C8145F1565FD7803B5F1635C (U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::<Tokenize>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__0_mB09A57728ABE0636752ECC19E815859E074F909C (U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* __this, String_t* ___arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___arg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_0, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, 4, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_2 = ___arg0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_2, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, 4, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___arg0;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_5 = __this->___nameLookup_1;
		RuntimeObject* L_6;
		L_6 = Tokenizer_TokenizeShortName_mACD0DC681EED08BE4D19B48CE0B3331A847F4602(L_4, L_5, NULL);
		return L_6;
	}

IL_0029:
	{
		String_t* L_7 = ___arg0;
		Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* L_8 = __this->___onError_0;
		RuntimeObject* L_9;
		L_9 = Tokenizer_TokenizeLongName_mD612CD518A32D3862C37E75124C28FF0FD99DE7E(L_7, L_8, NULL);
		return L_9;
	}

IL_0036:
	{
		TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8* L_10 = (TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8*)(TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8*)SZArrayNew(TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8_il2cpp_TypeInfo_var, (uint32_t)1);
		TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8* L_11 = L_10;
		String_t* L_12 = ___arg0;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_13;
		L_13 = Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68*)L_13);
		V_0 = (RuntimeObject*)L_11;
		RuntimeObject* L_14 = V_0;
		return L_14;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::<Tokenize>b__2(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__2_m68030B26EDCE85223A5BB2AF9EB641F201BA1309 (U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___t0;
		bool L_1;
		L_1 = TokenExtensions_IsName_m1674A9A51A89132EE273921FC254A5FD7C6C3F4D(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_2 = __this->___nameLookup_1;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_3 = ___t0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_3, NULL);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = Func_2_Invoke_m1DC58E00CBA84F2648A5D9BB419145024F5B3518_inline(L_2, L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass1_0::<Tokenize>b__3(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CTokenizeU3Eb__3_m9477CEF5C487BE7AC028062871E5C481D671247D (U3CU3Ec__DisplayClass1_0_tD3EDED66D6D944CE60056F09C722AFFCF2AA0290* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___unkTokens_2;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_1 = ___x0;
		bool L_2;
		L_2 = Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A(L_0, L_1, Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m596D0B56FB7A00FAB89379A8DF708E4EE29CA375 (U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass2_0::<PreprocessDashDash>b__3(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CPreprocessDashDashU3Eb__3_m10E497548AC753F41FCFEF4FCB98E7CBF027F496 (U3CU3Ec__DisplayClass2_0_tCCF95F9370F3B35E45DC50A4905ABBF39105C21B* __this, RuntimeObject* ___tokens0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___tokens0;
		RuntimeObject* L_1 = __this->___values_0;
		RuntimeObject* L_2;
		L_2 = Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32(L_0, L_1, Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4319A9A9D0CCA6DCEF5290A1EBBFF59F83FCA707 (U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Tuple`2<System.Int32,System.Char> CommandLine.Core.Tokenizer/<>c__DisplayClass3_0::<ExplodeOptionList>b__0(CommandLine.Core.Token,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__0_m36267AE060D5E323DA6CF5C7FEF60532415391F0 (U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m4914616492F85C9524FBC863C83D0D3EEAD1560B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3CExplodeOptionListU3Eb__4_m9E2C058F76546142ABEF6709D36CB4694FC6B9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* L_0 = (U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_1__ctor_m140DB7727ED31B1A1DFC940C7D81C4A748B6E8CE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* L_1 = V_0;
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		L_1->___i_0 = L_2;
		Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* L_3 = __this->___optionSequenceWithSeparatorLookup_0;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_4 = ___t0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_4, NULL);
		NullCheck(L_3);
		Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* L_6;
		L_6 = Func_2_Invoke_mB48A870159DEE7F46625F8F463B028490EEA563B_inline(L_3, L_5, NULL);
		U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* L_7 = V_0;
		Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492* L_8 = (Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492*)il2cpp_codegen_object_new(Func_2_tFB55D7B6683300C53CEB5E7258E8AA1138C13492_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m6CC46F39C3A0E35CD3912C9D4B9894CCB86BAB12(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3CExplodeOptionListU3Eb__4_m9E2C058F76546142ABEF6709D36CB4694FC6B9ED_RuntimeMethod_var), NULL);
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_9;
		L_9 = Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F((-1), 0, Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_RuntimeMethod_var);
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_10;
		L_10 = MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m4914616492F85C9524FBC863C83D0D3EEAD1560B(L_6, L_8, L_9, MaybeExtensions_MapValueOrDefault_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m4914616492F85C9524FBC863C83D0D3EEAD1560B_RuntimeMethod_var);
		return L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass3_0::<ExplodeOptionList>b__2(CommandLine.Core.Token,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CExplodeOptionListU3Eb__2_m4DA06E8D76E97A3739A4221B1DD97C80FF501D71 (U3CU3Ec__DisplayClass3_0_t7FB1E87F690F97D0F8F70C97EEF4ABFADF566225* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3E495AA125B5178F1E35D7B5D60BD458103913A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m703873462535B33C9784D510DB71F748507C53EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_MapValueOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m7FB4DDDC847AE568B36E57985C04987026152335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m22C6A55323425704D4B732816F3361064053FEEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__5_m50900272D5A153E67DCB8917129D08D9BB0E067E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__6_m497D05BC84C37EF05169652125E93D4788890CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* L_0 = (U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_2__ctor_mE0BD339E862C13275F6B5FE1661F7C4CD4BE810D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* L_1 = V_0;
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		L_1->___i_0 = L_2;
		U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* L_3 = V_0;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_4 = ___t0;
		NullCheck(L_3);
		L_3->___t_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___t_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___replaces_1;
		U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* L_6 = V_0;
		Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7* L_7 = (Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7*)il2cpp_codegen_object_new(Func_2_t0AFE0E5F642E79B3E66D2B90A6C880530FC92BF7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_mC3C12250BB81902E02ECE41463C35D834899B04D(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__5_m50900272D5A153E67DCB8917129D08D9BB0E067E_RuntimeMethod_var), NULL);
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_8;
		L_8 = Enumerable_FirstOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m703873462535B33C9784D510DB71F748507C53EC(L_5, L_7, Enumerable_FirstOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m703873462535B33C9784D510DB71F748507C53EC_RuntimeMethod_var);
		Maybe_1_tFDC4A74C7674748776CA963A1050BEF5084A55E8* L_9;
		L_9 = MaybeExtensions_ToMaybe_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m22C6A55323425704D4B732816F3361064053FEEF(L_8, MaybeExtensions_ToMaybe_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_m22C6A55323425704D4B732816F3361064053FEEF_RuntimeMethod_var);
		U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* L_10 = V_0;
		Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592* L_11 = (Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592*)il2cpp_codegen_object_new(Func_2_t8C17A3D4412D49924DC121AA7D77455C5047A592_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m46602B870F11632D2BBF7E04717B1B755A121566(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__6_m497D05BC84C37EF05169652125E93D4788890CA0_RuntimeMethod_var), NULL);
		RuntimeObject* L_12;
		L_12 = Enumerable_Empty_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3E495AA125B5178F1E35D7B5D60BD458103913A3_inline(Enumerable_Empty_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m3E495AA125B5178F1E35D7B5D60BD458103913A3_RuntimeMethod_var);
		TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8* L_13 = (TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8*)(TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8*)SZArrayNew(TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8_il2cpp_TypeInfo_var, (uint32_t)1);
		TokenU5BU5D_t0E935F6AA0E99D07EB9957B3B9FD464AC04FAAE8* L_14 = L_13;
		U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* L_15 = V_0;
		NullCheck(L_15);
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_16 = L_15->___t_1;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68*)L_16);
		RuntimeObject* L_17;
		L_17 = Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32(L_12, (RuntimeObject*)L_14, Enumerable_Concat_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mAC795D90FF40083D821E6CE40B2829C2BCD97D32_RuntimeMethod_var);
		RuntimeObject* L_18;
		L_18 = MaybeExtensions_MapValueOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m7FB4DDDC847AE568B36E57985C04987026152335(L_9, L_11, L_17, MaybeExtensions_MapValueOrDefault_TisTuple_2_t02042C00DD9DC76FD89741948664051712B49DC8_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m7FB4DDDC847AE568B36E57985C04987026152335_RuntimeMethod_var);
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_m140DB7727ED31B1A1DFC940C7D81C4A748B6E8CE (U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Tuple`2<System.Int32,System.Char> CommandLine.Core.Tokenizer/<>c__DisplayClass3_1::<ExplodeOptionList>b__4(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* U3CU3Ec__DisplayClass3_1_U3CExplodeOptionListU3Eb__4_m9E2C058F76546142ABEF6709D36CB4694FC6B9ED (U3CU3Ec__DisplayClass3_1_t3940BA5BD4980E129A8C6A610FCEF9CAD00B353C* __this, Il2CppChar ___sep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___i_0;
		Il2CppChar L_1 = ___sep0;
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_2;
		L_2 = Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F(((int32_t)il2cpp_codegen_add(L_0, 1)), L_1, Tuple_Create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE09EA9C397D659239E35FB836E8A9875C253477F_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass3_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_mE0BD339E862C13275F6B5FE1661F7C4CD4BE810D (U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass3_2::<ExplodeOptionList>b__5(System.Tuple`2<System.Int32,System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__5_m50900272D5A153E67DCB8917129D08D9BB0E067E (U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* __this, Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_inline(L_0, Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_RuntimeMethod_var);
		int32_t L_2 = __this->___i_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass3_2::<ExplodeOptionList>b__6(System.Tuple`2<System.Int32,System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_2_U3CExplodeOptionListU3Eb__6_m497D05BC84C37EF05169652125E93D4788890CA0 (U3CU3Ec__DisplayClass3_2_t44FDC941C7CEB26B989E233BD2EFDF63929CE26E* __this, Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = __this->___t_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* L_4 = ___r0;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_inline(L_4, Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_RuntimeMethod_var);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_5);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_3, NULL);
		Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8* L_7 = (Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8*)il2cpp_codegen_object_new(Func_2_t39B964ED39E018C8611D6590EFE962B6183192A8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_mE95FC9AA2EFB8E59D21DA856980C6BF21C8D2CC7(L_7, NULL, (intptr_t)((void*)Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07((RuntimeObject*)L_6, L_7, Enumerable_Select_TisString_t_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m4A677367DAD67EDE3CF32599BB52A51193B95A07_RuntimeMethod_var);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m65C37DC854A2882A79A306E1FB7AA5A29E6B9A6F (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::<Normalize>b__0(CommandLine.Core.Token,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__0_m09CD14600A9A47061404DE31BD615E102A370DC6 (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAtOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mD88AA5D3AE4D3CC3CF3061082B7AAB58E444A30D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_MapValueOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6822042AC412018BA64A0AB53FCCAD0A7FCD8A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m82538F8BF405DFA18CA332A9E47EBC28F802C02F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__7_mD070843458E9AEA2093EDF58339169A723587AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* V_0 = NULL;
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* V_1 = NULL;
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* G_B4_0 = NULL;
	Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* G_B4_1 = NULL;
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* G_B3_0 = NULL;
	Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___tokens_0;
		int32_t L_1 = ___i1;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_2;
		L_2 = Enumerable_ElementAtOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mD88AA5D3AE4D3CC3CF3061082B7AAB58E444A30D(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), Enumerable_ElementAtOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mD88AA5D3AE4D3CC3CF3061082B7AAB58E444A30D_RuntimeMethod_var);
		Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* L_3;
		L_3 = MaybeExtensions_ToMaybe_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m82538F8BF405DFA18CA332A9E47EBC28F802C02F(L_2, MaybeExtensions_ToMaybe_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m82538F8BF405DFA18CA332A9E47EBC28F802C02F_RuntimeMethod_var);
		V_0 = L_3;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_4 = ___t0;
		bool L_5;
		L_5 = TokenExtensions_IsValue_m427ECAAD03CC157CB0C527AB3118DBD1833B571B(L_4, NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_6 = ___t0;
		NullCheck(((Value_t40CD443232B5F17874C367F8409A296A446E287A*)CastclassClass((RuntimeObject*)L_6, Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var)));
		bool L_7;
		L_7 = Value_get_ExplicitlyAssigned_m41A1A51FB301E3BCE00EB298C7EB7FBDA7D3A353_inline(((Value_t40CD443232B5F17874C367F8409A296A446E287A*)CastclassClass((RuntimeObject*)L_6, Value_t40CD443232B5F17874C367F8409A296A446E287A_il2cpp_TypeInfo_var)), NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* L_8 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_9 = __this->___U3CU3E9__7_4;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			goto IL_0049;
		}
	}
	{
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_11 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_11, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__7_mD070843458E9AEA2093EDF58339169A723587AB4_RuntimeMethod_var), NULL);
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_12 = L_11;
		V_1 = L_12;
		__this->___U3CU3E9__7_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__7_4), (void*)L_12);
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_13 = V_1;
		G_B4_0 = L_13;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		bool L_14;
		L_14 = MaybeExtensions_MapValueOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6822042AC412018BA64A0AB53FCCAD0A7FCD8A84(G_B4_1, G_B4_0, (bool)0, MaybeExtensions_MapValueOrDefault_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6822042AC412018BA64A0AB53FCCAD0A7FCD8A84_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0057;
		}
	}

IL_0051:
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_15;
		L_15 = Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91(Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		return L_15;
	}

IL_0057:
	{
		int32_t L_16 = ___i1;
		Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* L_17;
		L_17 = Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB(L_16, Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		return L_17;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::<Normalize>b__7(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__7_mD070843458E9AEA2093EDF58339169A723587AB4 (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___p0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___p0;
		bool L_1;
		L_1 = TokenExtensions_IsName_m1674A9A51A89132EE273921FC254A5FD7C6C3F4D(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = __this->___nameLookup_1;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_3 = ___p0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = Func_2_Invoke_m83412BAAC0A78D63D3CC86949C694E9211106045_inline(L_2, L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// CSharpx.Maybe`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::<Normalize>b__3(CommandLine.Core.Token,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__3_m90EBA244CAD67EB313FDB135613CD4130B17B786 (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mC4DA126ECDECDA869D8DF0305B49C8903232A509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m14447577B8EC32DA699B2FBCAA44A29E02946C2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___indexes_2;
		int32_t L_1 = ___i1;
		bool L_2;
		L_2 = Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957(L_0, L_1, Enumerable_Contains_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8934BDEE583D59E986E52BD72CCFA57AA7C9F957_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Maybe_1_t9A33900C4A49072B5E675B227545626E3556233F* L_3;
		L_3 = Maybe_Nothing_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m14447577B8EC32DA699B2FBCAA44A29E02946C2C(Maybe_Nothing_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m14447577B8EC32DA699B2FBCAA44A29E02946C2C_RuntimeMethod_var);
		return L_3;
	}

IL_0014:
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_4 = ___t0;
		Just_1_tC2A7C7C965B16B956337D3D6330A14106C8D9587* L_5;
		L_5 = Maybe_Just_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mC4DA126ECDECDA869D8DF0305B49C8903232A509(L_4, Maybe_Just_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_mC4DA126ECDECDA869D8DF0305B49C8903232A509_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass4_0::<Normalize>b__6(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CNormalizeU3Eb__6_mF87B40278254DF955F4DCCBDEAEEC9AE6DCB857E (U3CU3Ec__DisplayClass4_0_t88E4385BB1B1EE5FDE18025AFF6F6FC3196FFA7F* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___toExclude_3;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_1 = ___t0;
		bool L_2;
		L_2 = Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A(L_0, L_1, Enumerable_Contains_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m94CBABEA487FACE48677F5C6C34BB2A44980730A_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m52F7E1F9303DE17EDE71CA19428697EB39D45F1B (U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer/<>c__DisplayClass5_0::<ConfigureTokenizer>b__0(System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* U3CU3Ec__DisplayClass5_0_U3CConfigureTokenizerU3Eb__0_m964B924F47EBFE326BCED97344A378AEF0EE8EAE (U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* __this, RuntimeObject* ___arguments0, RuntimeObject* ___optionSpecs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConfigureTokenizerU3Eb__5_2_m50F6F5606DF60D111B73CDE76CE599E7E15F852A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__1_m6E6122FF6B153D30162649736ADAF44D73A377D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__3_mF0902AC36BB9AE5131FBBA28D85B4DB83ACBA8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__4_m5612641E47CFCF8E7173DB6DD8912CE87DF6FF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__5_mA665DFC7111477D87E1A50F53806B946B6EADB31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* V_0 = NULL;
	U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* G_B1_0 = NULL;
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* G_B4_1 = NULL;
	Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* G_B2_1 = NULL;
	Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* G_B7_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_0 = (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_1__ctor_m91DF09C1C09D754881C4B42F6F8A76BCA1082A41(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_2), (void*)__this);
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_2 = V_0;
		RuntimeObject* L_3 = ___optionSpecs1;
		NullCheck(L_2);
		L_2->___optionSpecs_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___optionSpecs_0), (void*)L_3);
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_4 = V_0;
		bool L_5 = __this->___ignoreUnknownArguments_0;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B3_0 = L_4;
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_6 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__5_2_13;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = G_B1_0;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = G_B1_0;
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var);
		U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A* L_8 = ((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_9 = (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*)il2cpp_codegen_object_new(Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m496B86733092A06ABDF4DF8BA3B1F28234309FC2(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CConfigureTokenizerU3Eb__5_2_m50F6F5606DF60D111B73CDE76CE599E7E15F852A_RuntimeMethod_var), NULL);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_10 = L_9;
		((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__5_2_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t920797353D8D8EC577D861243627354831DC5E3A_il2cpp_TypeInfo_var))->___U3CU3E9__5_2_13), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B2_1;
		goto IL_004a;
	}

IL_003e:
	{
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_11 = V_0;
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_12 = (Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E*)il2cpp_codegen_object_new(Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m496B86733092A06ABDF4DF8BA3B1F28234309FC2(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__1_m6E6122FF6B153D30162649736ADAF44D73A377D2_RuntimeMethod_var), NULL);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_0;
	}

IL_004a:
	{
		NullCheck(G_B4_1);
		G_B4_1->___normalize_1 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___normalize_1), (void*)G_B4_0);
		bool L_13 = __this->___enableDashDash_2;
		if (L_13)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject* L_14 = ___arguments0;
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_15 = V_0;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_16 = (Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2*)il2cpp_codegen_object_new(Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_2__ctor_mD48F2C4FBBF0D146FDB2E1B9C585DE1D88ABAD28(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__4_m5612641E47CFCF8E7173DB6DD8912CE87DF6FF24_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_17 = V_0;
		NullCheck(L_17);
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_18 = L_17->___normalize_1;
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_19;
		L_19 = Tokenizer_Tokenize_m05C4337BEF2ECF5FF942EB39A299793518FDC013(L_14, L_16, L_18, NULL);
		G_B7_0 = L_19;
		goto IL_0083;
	}

IL_0071:
	{
		RuntimeObject* L_20 = ___arguments0;
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_21 = V_0;
		Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434* L_22 = (Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434*)il2cpp_codegen_object_new(Func_2_t607432DF476016B70CEA5CB7DB455F602BF09434_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_m1D4A229B089A0B39365086561BD175D21C2B82BE(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__3_mF0902AC36BB9AE5131FBBA28D85B4DB83ACBA8F7_RuntimeMethod_var), NULL);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_23;
		L_23 = Tokenizer_PreprocessDashDash_m5FB22752E94DE091D59216B572EDE70D2963C982(L_20, L_22, NULL);
		G_B7_0 = L_23;
	}

IL_0083:
	{
		U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* L_24 = V_0;
		Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021* L_25 = (Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021*)il2cpp_codegen_object_new(Func_2_t8A8143E60C0FA2D2FACDC751823EE421192F2021_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_m8B831D51253EBDC12E299CB6AB60F79DC7E8B22E(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__5_mA665DFC7111477D87E1A50F53806B946B6EADB31_RuntimeMethod_var), NULL);
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_26;
		L_26 = Tokenizer_ExplodeOptionList_mCA737EFF4C32125A67DD0B85652726C82F997E37(G_B7_0, L_25, NULL);
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_m91DF09C1C09D754881C4B42F6F8A76BCA1082A41 (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<ConfigureTokenizer>b__1(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__1_m6E6122FF6B153D30162649736ADAF44D73A377D2 (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, RuntimeObject* ___toks0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__6_m6C7562BA2AD25D2310C4D50166C56B519397FFDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* V_0 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___toks0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_1 = __this->___U3CU3E9__6_3;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_3 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_3, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__6_m6C7562BA2AD25D2310C4D50166C56B519397FFDD_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = L_3;
		V_0 = L_4;
		__this->___U3CU3E9__6_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__6_3), (void*)L_4);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = V_0;
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Tokenizer_Normalize_mBC2B6413DDA6184E7AFCE4168B65EC0F204361B0(G_B2_1, G_B2_0, NULL);
		return L_6;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<ConfigureTokenizer>b__6(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__6_m6C7562BA2AD25D2310C4D50166C56B519397FFDD (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->___optionSpecs_0;
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_2 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_2);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3 = L_2->___nameComparer_1;
		int32_t L_4;
		L_4 = NameLookup_Contains_m6E19C659CE41F7629845075FCB327055EFA34A0C(L_0, L_1, L_3, NULL);
		return (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
	}
}
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,CommandLine.Error> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<ConfigureTokenizer>b__3(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__3_mF0902AC36BB9AE5131FBBA28D85B4DB83ACBA8F7 (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, RuntimeObject* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__7_mC1D33A9BAF0069330C07DB77C933AC3DE015AC0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* V_0 = NULL;
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___args0;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_1 = __this->___U3CU3E9__7_4;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_3 = (Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2*)il2cpp_codegen_object_new(Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_mD48F2C4FBBF0D146FDB2E1B9C585DE1D88ABAD28(L_3, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__7_mC1D33A9BAF0069330C07DB77C933AC3DE015AC0D_RuntimeMethod_var), NULL);
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_4 = L_3;
		V_0 = L_4;
		__this->___U3CU3E9__7_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__7_4), (void*)L_4);
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_5 = V_0;
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		Func_2_tAB06DAEFEA99F1F2762F0D99360B7B8BE878189E* L_6 = __this->___normalize_1;
		Result_2_t9D2D480E1CBB74357430D0B7411E689CCF48B2AB* L_7;
		L_7 = Tokenizer_Tokenize_m05C4337BEF2ECF5FF942EB39A299793518FDC013(G_B2_1, G_B2_0, L_6, NULL);
		return L_7;
	}
}
// CommandLine.Core.NameLookupResult CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<ConfigureTokenizer>b__7(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__7_mC1D33A9BAF0069330C07DB77C933AC3DE015AC0D (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->___optionSpecs_0;
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_2 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_2);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3 = L_2->___nameComparer_1;
		int32_t L_4;
		L_4 = NameLookup_Contains_m6E19C659CE41F7629845075FCB327055EFA34A0C(L_0, L_1, L_3, NULL);
		return L_4;
	}
}
// CommandLine.Core.NameLookupResult CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<ConfigureTokenizer>b__4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__4_m5612641E47CFCF8E7173DB6DD8912CE87DF6FF24 (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->___optionSpecs_0;
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_2 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_2);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3 = L_2->___nameComparer_1;
		int32_t L_4;
		L_4 = NameLookup_Contains_m6E19C659CE41F7629845075FCB327055EFA34A0C(L_0, L_1, L_3, NULL);
		return L_4;
	}
}
// CSharpx.Maybe`1<System.Char> CommandLine.Core.Tokenizer/<>c__DisplayClass5_1::<ConfigureTokenizer>b__5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* U3CU3Ec__DisplayClass5_1_U3CConfigureTokenizerU3Eb__5_mA665DFC7111477D87E1A50F53806B946B6EADB31 (U3CU3Ec__DisplayClass5_1_t1F95E1A8001F2E1BC2414950822BCC0F96B12A94* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->___optionSpecs_0;
		U3CU3Ec__DisplayClass5_0_t15E33A06B8E13111A8706B4651BFB59989634C80* L_2 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_2);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3 = L_2->___nameComparer_1;
		Maybe_1_tB561148E1B805546DBAEE0524266BDDE297102C5* L_4;
		L_4 = NameLookup_HavingSeparator_m193B21EC2854DE159993BBC928BEEBEE0BE7AEB3(L_0, L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeShortNameU3Ed__6__ctor_m990348B43111E27DA35709ED4ACB1763A84B8FAC (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeShortNameU3Ed__6_System_IDisposable_Dispose_m5D97E79E71CD8784EE71F9A4CA65B348457CB8C7 (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTokenizeShortNameU3Ed__6_MoveNext_m814E547129CF50BE8967963C5CEC6D3558730DF0 (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_0156;
			}
			case 4:
			{
				goto IL_01c9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		String_t* L_2 = __this->___value_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_01d7;
		}
	}
	{
		String_t* L_4 = __this->___value_3;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, 0, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_01d7;
		}
	}
	{
		String_t* L_6 = __this->___value_3;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 1, NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)45))))
		{
			goto IL_01d7;
		}
	}
	{
		String_t* L_8 = __this->___value_3;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_8, 1, NULL);
		__this->___U3CtextU3E5__2_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3E5__2_7), (void*)L_9);
		String_t* L_10 = __this->___U3CtextU3E5__2_7;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsDigit_mC98DAF907860EFB7D26C3E126D80AD3A2CE72715(L_11, NULL);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_13 = __this->___value_3;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_14;
		L_14 = Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492(L_13, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		return (bool)0;
	}

IL_00a9:
	{
		String_t* L_15 = __this->___value_3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_17 = __this->___U3CtextU3E5__2_7;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_18;
		L_18 = Token_Name_m9B02BCD77095F339C8837D34E24B1CF65775E87F(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		return (bool)0;
	}

IL_00da:
	{
		__this->___U3CiU3E5__3_8 = 0;
		String_t* L_19 = __this->___U3CtextU3E5__2_7;
		__this->___U3CU3E7__wrap3_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_9), (void*)L_19);
		__this->___U3CU3E7__wrap4_10 = 0;
		goto IL_0174;
	}

IL_00f6:
	{
		String_t* L_20 = __this->___U3CU3E7__wrap3_9;
		int32_t L_21 = __this->___U3CU3E7__wrap4_10;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		String_t* L_23;
		L_23 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, L_22, 1, NULL);
		V_1 = L_23;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_24 = __this->___nameLookup_5;
		String_t* L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26;
		L_26 = Func_2_Invoke_m1DC58E00CBA84F2648A5D9BB419145024F5B3518_inline(L_24, L_25, NULL);
		__this->___U3CrU3E5__6_11 = L_26;
		int32_t L_27 = __this->___U3CiU3E5__3_8;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_28 = __this->___U3CrU3E5__6_11;
		if (!L_28)
		{
			goto IL_018a;
		}
	}

IL_0131:
	{
		int32_t L_29 = __this->___U3CiU3E5__3_8;
		V_2 = L_29;
		int32_t L_30 = V_2;
		__this->___U3CiU3E5__3_8 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		String_t* L_31 = V_1;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_32;
		L_32 = Token_Name_m9B02BCD77095F339C8837D34E24B1CF65775E87F(L_31, NULL);
		__this->___U3CU3E2__current_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_32);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0156:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_33 = __this->___U3CrU3E5__6_11;
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_34 = __this->___U3CU3E7__wrap4_10;
		__this->___U3CU3E7__wrap4_10 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0174:
	{
		int32_t L_35 = __this->___U3CU3E7__wrap4_10;
		String_t* L_36 = __this->___U3CU3E7__wrap3_9;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_00f6;
		}
	}

IL_018a:
	{
		__this->___U3CU3E7__wrap3_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_9), (void*)(String_t*)NULL);
		int32_t L_38 = __this->___U3CiU3E5__3_8;
		String_t* L_39 = __this->___U3CtextU3E5__2_7;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((((int32_t)L_38) >= ((int32_t)L_40)))
		{
			goto IL_01d0;
		}
	}
	{
		String_t* L_41 = __this->___U3CtextU3E5__2_7;
		int32_t L_42 = __this->___U3CiU3E5__3_8;
		NullCheck(L_41);
		String_t* L_43;
		L_43 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_41, L_42, NULL);
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_44;
		L_44 = Token_Value_m46B23C4CEE2D688A41103F68BB4E07A674984492(L_43, NULL);
		__this->___U3CU3E2__current_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_44);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_01c9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01d0:
	{
		__this->___U3CtextU3E5__2_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3E5__2_7), (void*)(String_t*)NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}
}
// CommandLine.Core.Token CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.Collections.Generic.IEnumerator<CommandLine.Core.Token>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* U3CTokenizeShortNameU3Ed__6_System_Collections_Generic_IEnumeratorU3CCommandLine_Core_TokenU3E_get_Current_m70CAC48C1B998449CE0FD70A965FFE6A96746F58 (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeShortNameU3Ed__6_System_Collections_IEnumerator_Reset_mAC86B8697C22579CA6C7394F614E363AD93C6F67 (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTokenizeShortNameU3Ed__6_System_Collections_IEnumerator_Reset_mAC86B8697C22579CA6C7394F614E363AD93C6F67_RuntimeMethod_var)));
	}
}
// System.Object CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeShortNameU3Ed__6_System_Collections_IEnumerator_get_Current_m2756436F21B57935195A7E560957FA80CDA658BB (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.Collections.Generic.IEnumerable<CommandLine.Core.Token>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeShortNameU3Ed__6_System_Collections_Generic_IEnumerableU3CCommandLine_Core_TokenU3E_GetEnumerator_m52FDBCB3234454770C9F4117A256CE04BEF555C6 (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_3 = (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED*)il2cpp_codegen_object_new(U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CTokenizeShortNameU3Ed__6__ctor_m990348B43111E27DA35709ED4ACB1763A84B8FAC(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_4 = V_0;
		String_t* L_5 = __this->___U3CU3E3__value_4;
		NullCheck(L_4);
		L_4->___value_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value_3), (void*)L_5);
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_6 = V_0;
		Func_2_t1DD8123F9CCD1766217CBD25008067EADB92E0B2* L_7 = __this->___U3CU3E3__nameLookup_6;
		NullCheck(L_6);
		L_6->___nameLookup_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___nameLookup_5), (void*)L_7);
		U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator CommandLine.Core.Tokenizer/<TokenizeShortName>d__6::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeShortNameU3Ed__6_System_Collections_IEnumerable_GetEnumerator_m389F579000411CAEA938636C6C59A5E3290DFBDF (U3CTokenizeShortNameU3Ed__6_t09A195A507BB54A05350550E4776E34945C9A8ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CTokenizeShortNameU3Ed__6_System_Collections_Generic_IEnumerableU3CCommandLine_Core_TokenU3E_GetEnumerator_m52FDBCB3234454770C9F4117A256CE04BEF555C6(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeLongNameU3Ed__7__ctor_mCAF4B8B95D360AC491A81A69CC9C75042E297BD0 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeLongNameU3Ed__7_System_IDisposable_Dispose_m54A2FE2C478CE5346D0ABDC10646FD2E993AD572 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTokenizeLongNameU3Ed__7_MoveNext_m52AADA53ABCEC5DF7E1A769EB4BC603072F8BDA8 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB91FF859F0EDBA61B28AD47F1B10B1AF2D6342F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_00e9;
			}
			case 3:
			{
				goto IL_011b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		String_t* L_2 = __this->___value_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)2)))
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_4 = __this->___value_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_4, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, 4, NULL);
		if (!L_5)
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_6 = __this->___value_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, 2, NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_8, ((int32_t)61), NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_11 = V_1;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_12;
		L_12 = Token_Name_m9B02BCD77095F339C8837D34E24B1CF65775E87F(L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		return (bool)0;
	}

IL_0085:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* L_14 = __this->___onError_5;
		String_t* L_15 = __this->___value_3;
		BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43* L_16 = (BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43*)il2cpp_codegen_object_new(BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BadFormatTokenError__ctor_mC05066E13BE0B6A8C59B792FFF9323A5F9658592(L_16, L_15, NULL);
		NullCheck(L_14);
		Action_1_Invoke_m5697C0ED1CE04C4561DFFA07BEBB152DFE7DB3E1_inline(L_14, L_16, NULL);
		return (bool)0;
	}

IL_00a1:
	{
		String_t* L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_18;
		L_18 = Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7(L_17, _stringLiteralFB91FF859F0EDBA61B28AD47F1B10B1AF2D6342F, NULL);
		__this->___U3CtokenMatchU3E5__2_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtokenMatchU3E5__2_7), (void*)L_18);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_19 = __this->___U3CtokenMatchU3E5__2_7;
		NullCheck(L_19);
		bool L_20;
		L_20 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_19, NULL);
		if (!L_20)
		{
			goto IL_0124;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_21 = __this->___U3CtokenMatchU3E5__2_7;
		NullCheck(L_21);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_22;
		L_22 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_21);
		NullCheck(L_22);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_23;
		L_23 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_22, 1, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_23, NULL);
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_25;
		L_25 = Token_Name_m9B02BCD77095F339C8837D34E24B1CF65775E87F(L_24, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_26 = __this->___U3CtokenMatchU3E5__2_7;
		NullCheck(L_26);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_27;
		L_27 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_26);
		NullCheck(L_27);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_28;
		L_28 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_27, 2, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_28, NULL);
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_30;
		L_30 = Token_Value_mFB814726AA332D62A6ED42925E4F8C2B57969A74(L_29, (bool)1, NULL);
		__this->___U3CU3E2__current_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_011b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_013c;
	}

IL_0124:
	{
		Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* L_31 = __this->___onError_5;
		String_t* L_32 = __this->___value_3;
		BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43* L_33 = (BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43*)il2cpp_codegen_object_new(BadFormatTokenError_tEBF2A10253E9BDBD7EEC9276D9C0F819CE35FE43_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		BadFormatTokenError__ctor_mC05066E13BE0B6A8C59B792FFF9323A5F9658592(L_33, L_32, NULL);
		NullCheck(L_31);
		Action_1_Invoke_m5697C0ED1CE04C4561DFFA07BEBB152DFE7DB3E1_inline(L_31, L_33, NULL);
		return (bool)0;
	}

IL_013c:
	{
		__this->___U3CtokenMatchU3E5__2_7 = (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtokenMatchU3E5__2_7), (void*)(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*)NULL);
	}

IL_0143:
	{
		return (bool)0;
	}
}
// CommandLine.Core.Token CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.Collections.Generic.IEnumerator<CommandLine.Core.Token>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* U3CTokenizeLongNameU3Ed__7_System_Collections_Generic_IEnumeratorU3CCommandLine_Core_TokenU3E_get_Current_m98CCCB59933A7D42A5EA0F7DBB341B4137E0C083 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeLongNameU3Ed__7_System_Collections_IEnumerator_Reset_mD05F333E376913D94DA0E9F064824ED6C5A2C9B5 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTokenizeLongNameU3Ed__7_System_Collections_IEnumerator_Reset_mD05F333E376913D94DA0E9F064824ED6C5A2C9B5_RuntimeMethod_var)));
	}
}
// System.Object CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeLongNameU3Ed__7_System_Collections_IEnumerator_get_Current_mBEF257C6FBC8F46A4E15792C7055BD70056D5553 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<CommandLine.Core.Token> CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.Collections.Generic.IEnumerable<CommandLine.Core.Token>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeLongNameU3Ed__7_System_Collections_Generic_IEnumerableU3CCommandLine_Core_TokenU3E_GetEnumerator_mA1972489FB2BBA8E70E097730626685F9F52C0E9 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_3 = (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D*)il2cpp_codegen_object_new(U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CTokenizeLongNameU3Ed__7__ctor_mCAF4B8B95D360AC491A81A69CC9C75042E297BD0(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_4 = V_0;
		String_t* L_5 = __this->___U3CU3E3__value_4;
		NullCheck(L_4);
		L_4->___value_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value_3), (void*)L_5);
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_6 = V_0;
		Action_1_tCE6E42427233F2004F3EB2AAF6BEB98F7D9F66BF* L_7 = __this->___U3CU3E3__onError_6;
		NullCheck(L_6);
		L_6->___onError_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onError_5), (void*)L_7);
		U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator CommandLine.Core.Tokenizer/<TokenizeLongName>d__7::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeLongNameU3Ed__7_System_Collections_IEnumerable_GetEnumerator_mCCF87C2410518183B6BD266C0CD644C9F7FED036 (U3CTokenizeLongNameU3Ed__7_t4F293E7391106106363195D2DB09D9A6F434941D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CTokenizeLongNameU3Ed__7_System_Collections_Generic_IEnumerableU3CCommandLine_Core_TokenU3E_GetEnumerator_mA1972489FB2BBA8E70E097730626685F9F52C0E9(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Tuple`3<System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>> CommandLine.Core.TokenPartitioner::Partition(System.Collections.Generic.IEnumerable`1<CommandLine.Core.Token>,System.Func`2<System.String,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t3BCC36CBF6D92721D91A53654BE19F2F7CD585A8* TokenPartitioner_Partition_mC68039257256664E4A287DBCECFF71BFD3B14CF9 (RuntimeObject* ___tokens0, Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* ___typeLookup1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Except_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m2B48997F343A8872A4E4EDDA1C9CDDE174ABD618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisString_t_mBC4195FF792783DAB33C91FD903CB350D5B1B403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t032101450B841A2B90EFD393694408DFFF48D87A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisIEnumerable_1_t28E648697811C66B9CB3C4CC103C5DAF27BC54A7_TisIEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m33CADF52D8A7889DEDFFA33E6009318CAA7F054E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPartitionU3Eb__0_3_m5335833FE82A94D0D3C384F4A61D59044A87796B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPartitionU3Eb__0_4_m797D06E28A17F954D73DE27F9C995FF780660ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m0ECAAF87A3E15F2B2BAD3100F3CC49885C07A75C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__1_m09C01067F84D29CE1EB12713332DF23194745413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__2_m5E1D1C8823BEE6043DB43F080909F7ACEA3C3BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_0 = (U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m9E9B36D2D7AD5DBFBBEB8210838CEC0FF51EDC2C(L_0, NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_il2cpp_TypeInfo_var);
		ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48* L_1 = ((ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_StaticFields*)il2cpp_codegen_static_fields_for(ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_il2cpp_TypeInfo_var))->___Default_0;
		V_1 = L_1;
		RuntimeObject* L_2 = ___tokens0;
		il2cpp_codegen_runtime_class_init_inline(EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_2, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		V_2 = L_3;
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_4 = V_0;
		RuntimeObject* L_5 = V_2;
		Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* L_6 = ___typeLookup1;
		RuntimeObject* L_7;
		L_7 = Switch_Partition_mD9B489B63592E69B740773D8D5934916EF253657(L_5, L_6, NULL);
		RuntimeObject* L_8 = V_1;
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_9 = (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8*)il2cpp_codegen_object_new(HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E(L_9, L_7, L_8, HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___switches_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___switches_0), (void*)L_9);
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_10 = V_0;
		RuntimeObject* L_11 = V_2;
		Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* L_12 = ___typeLookup1;
		RuntimeObject* L_13;
		L_13 = Scalar_Partition_mC237188AADB8E02350818CD2A453166EAA1A90BD(L_11, L_12, NULL);
		RuntimeObject* L_14 = V_1;
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_15 = (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8*)il2cpp_codegen_object_new(HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E(L_15, L_13, L_14, HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___scalars_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___scalars_1), (void*)L_15);
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_16 = V_0;
		RuntimeObject* L_17 = V_2;
		Func_2_t5199F31057743200DF023A9FCBCB622C93E5C369* L_18 = ___typeLookup1;
		RuntimeObject* L_19;
		L_19 = Sequence_Partition_m8693844F54E976A40BEDF52DEA7171432D4A1FEA(L_17, L_18, NULL);
		RuntimeObject* L_20 = V_1;
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_21 = (HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8*)il2cpp_codegen_object_new(HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E(L_21, L_19, L_20, HashSet_1__ctor_m865F934C97C90AFCDF15990CDD5C9207EAEF6E1E_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___sequences_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___sequences_2), (void*)L_21);
		RuntimeObject* L_22 = V_2;
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_23 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_24 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m0ECAAF87A3E15F2B2BAD3100F3CC49885C07A75C_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_22, L_24, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_26 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_27 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__1_m09C01067F84D29CE1EB12713332DF23194745413_RuntimeMethod_var), NULL);
		RuntimeObject* L_28;
		L_28 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_25, L_27, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_29 = V_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_30 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__2_m5E1D1C8823BEE6043DB43F080909F7ACEA3C3BC5_RuntimeMethod_var), NULL);
		RuntimeObject* L_31;
		L_31 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(L_28, L_30, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		RuntimeObject* L_32;
		L_32 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_31, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		RuntimeObject* L_33 = L_32;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_34 = ((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_1;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_35 = L_34;
		G_B1_0 = L_35;
		G_B1_1 = L_33;
		G_B1_2 = L_33;
		if (L_35)
		{
			G_B2_0 = L_35;
			G_B2_1 = L_33;
			G_B2_2 = L_33;
			goto IL_00a5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* L_36 = ((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_37 = (Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42*)il2cpp_codegen_object_new(Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Func_2__ctor_mCE4CF09FD3FE7B02DAA0F55E0A144EE18B0C48BA(L_37, L_36, (intptr_t)((void*)U3CU3Ec_U3CPartitionU3Eb__0_3_m5335833FE82A94D0D3C384F4A61D59044A87796B_RuntimeMethod_var), NULL);
		Func_2_tC4B60538DBCF91EE4B382990D5BAAF8E97BABD42* L_38 = L_37;
		((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_1), (void*)L_38);
		G_B2_0 = L_38;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00a5:
	{
		RuntimeObject* L_39;
		L_39 = Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD(G_B2_1, G_B2_0, Enumerable_Where_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m6DEBE494FAD6444F540AADB0DDDC11CC1FF9A4DD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EnumerableExtensions_tFC8FA32D4FEA66FA19388C2BF0CCDCF27C2611E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_39, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		V_3 = L_40;
		RuntimeObject* L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_il2cpp_TypeInfo_var);
		ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48* L_42 = ((ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_StaticFields*)il2cpp_codegen_static_fields_for(ReferenceEqualityComparer_tA9A6201AE52EDD80E4C0160EE911FEBF2345EF48_il2cpp_TypeInfo_var))->___Default_0;
		RuntimeObject* L_43;
		L_43 = Enumerable_Except_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m2B48997F343A8872A4E4EDDA1C9CDDE174ABD618(G_B2_2, L_41, L_42, Enumerable_Except_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m2B48997F343A8872A4E4EDDA1C9CDDE174ABD618_RuntimeMethod_var);
		RuntimeObject* L_44;
		L_44 = EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B(L_43, EnumerableExtensions_Memoize_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_m0B0BBE674EC4D3D42808BC3F2677EFA55A5B010B_RuntimeMethod_var);
		V_4 = L_44;
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_45 = V_0;
		NullCheck(L_45);
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_46 = L_45->___switches_0;
		RuntimeObject* L_47;
		L_47 = KeyValuePairHelper_ForSwitch_m1DD91F0AE2C3D5CE15186AD6EA640D335F654602(L_46, NULL);
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_48 = V_0;
		NullCheck(L_48);
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_49 = L_48->___scalars_1;
		RuntimeObject* L_50;
		L_50 = KeyValuePairHelper_ForScalar_mAD6D274CACD7B5A8EC9A4F4832ED8C80FC68D619(L_49, NULL);
		RuntimeObject* L_51;
		L_51 = Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0(L_47, L_50, Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* L_52 = V_0;
		NullCheck(L_52);
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_53 = L_52->___sequences_2;
		RuntimeObject* L_54;
		L_54 = KeyValuePairHelper_ForSequence_mA08A16FFB950684F22FDEF504C265E0178E70EE2(L_53, NULL);
		RuntimeObject* L_55;
		L_55 = Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0(L_51, L_54, Enumerable_Concat_TisKeyValuePair_2_t05FE8CDD581AB2DBA805E35C2E34913C1F6FCE34_m1DFCD9672E99AE23E6CE69FC3D16A6CF6D8525E0_RuntimeMethod_var);
		RuntimeObject* L_56 = V_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* L_57 = ((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_2;
		Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* L_58 = L_57;
		G_B3_0 = L_58;
		G_B3_1 = L_56;
		G_B3_2 = L_55;
		if (L_58)
		{
			G_B4_0 = L_58;
			G_B4_1 = L_56;
			G_B4_2 = L_55;
			goto IL_010d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* L_59 = ((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* L_60 = (Func_2_t032101450B841A2B90EFD393694408DFFF48D87A*)il2cpp_codegen_object_new(Func_2_t032101450B841A2B90EFD393694408DFFF48D87A_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Func_2__ctor_mA8AE36C6DAD6556EB6BE3AF161D2B38648E77DE0(L_60, L_59, (intptr_t)((void*)U3CU3Ec_U3CPartitionU3Eb__0_4_m797D06E28A17F954D73DE27F9C995FF780660ED8_RuntimeMethod_var), NULL);
		Func_2_t032101450B841A2B90EFD393694408DFFF48D87A* L_61 = L_60;
		((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_2 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_2), (void*)L_61);
		G_B4_0 = L_61;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_010d:
	{
		RuntimeObject* L_62;
		L_62 = Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisString_t_mBC4195FF792783DAB33C91FD903CB350D5B1B403(G_B4_1, G_B4_0, Enumerable_Select_TisToken_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68_TisString_t_mBC4195FF792783DAB33C91FD903CB350D5B1B403_RuntimeMethod_var);
		RuntimeObject* L_63 = V_4;
		Tuple_3_t3BCC36CBF6D92721D91A53654BE19F2F7CD585A8* L_64;
		L_64 = Tuple_Create_TisIEnumerable_1_t28E648697811C66B9CB3C4CC103C5DAF27BC54A7_TisIEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m33CADF52D8A7889DEDFFA33E6009318CAA7F054E(G_B4_2, L_62, L_63, Tuple_Create_TisIEnumerable_1_t28E648697811C66B9CB3C4CC103C5DAF27BC54A7_TisIEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_TisIEnumerable_1_tBD106E2DA5A4FA5DA814BE5CA570AC30A0112004_m33CADF52D8A7889DEDFFA33E6009318CAA7F054E_RuntimeMethod_var);
		return L_64;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m9E9B36D2D7AD5DBFBBEB8210838CEC0FF51EDC2C (U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::<Partition>b__0(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__0_m0ECAAF87A3E15F2B2BAD3100F3CC49885C07A75C (U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_0 = __this->___switches_0;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE(L_0, L_1, HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::<Partition>b__1(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__1_m09C01067F84D29CE1EB12713332DF23194745413 (U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_0 = __this->___scalars_1;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE(L_0, L_1, HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CommandLine.Core.TokenPartitioner/<>c__DisplayClass0_0::<Partition>b__2(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CPartitionU3Eb__2_m5E1D1C8823BEE6043DB43F080909F7ACEA3C3BC5 (U3CU3Ec__DisplayClass0_0_t4954DB7E76952B856D22AFC69465C037EB73CA7D* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t88832AFE83D2F78C555CFF45839C0DFCF7E2E0F8* L_0 = __this->___sequences_2;
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE(L_0, L_1, HashSet_1_Contains_mF5A88CA90E272A9106D981A752426DAB0C81A9FE_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TokenPartitioner/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8ED4AB99E72D024D715F5064FDC52E814578B53E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* L_0 = (U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4*)il2cpp_codegen_object_new(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m13202C9A3BB25A06FB51CAF6F399C4C2C7854C98(L_0, NULL);
		((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CommandLine.Core.TokenPartitioner/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13202C9A3BB25A06FB51CAF6F399C4C2C7854C98 (U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.TokenPartitioner/<>c::<Partition>b__0_3(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CPartitionU3Eb__0_3_m5335833FE82A94D0D3C384F4A61D59044A87796B (U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___v0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___v0;
		bool L_1;
		L_1 = TokenExtensions_IsValue_m427ECAAD03CC157CB0C527AB3118DBD1833B571B(L_0, NULL);
		return L_1;
	}
}
// System.String CommandLine.Core.TokenPartitioner/<>c::<Partition>b__0_4(CommandLine.Core.Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CPartitionU3Eb__0_4_m797D06E28A17F954D73DE27F9C995FF780660ED8 (U3CU3Ec_t4129D0141B9EC8EF26F198F4CE8DADBDCEB534C4* __this, Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* ___t0, const RuntimeMethod* method) 
{
	{
		Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CSharpx.Maybe`1<System.Object> CommandLine.Core.TypeConverter::ChangeType(System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* TypeConverter_ChangeType_m4557D87863B59627269153F6DDF75F556E215B6C (RuntimeObject* ___values0, Type_t* ___conversionType1, bool ___scalar2, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture3, bool ___ignoreValueCase4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisString_t_mFA7EBD74BAF0E8DA89C3C9628F55288FD9EA3116_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___scalar2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject* L_1 = ___values0;
		Type_t* L_2 = ___conversionType1;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = ___conversionCulture3;
		bool L_4 = ___ignoreValueCase4;
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_5;
		L_5 = TypeConverter_ChangeTypeSequence_mEB36C39CBDABCDA074C64CBA694A1F57B11208E6(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_000e:
	{
		RuntimeObject* L_6 = ___values0;
		String_t* L_7;
		L_7 = Enumerable_Single_TisString_t_mFA7EBD74BAF0E8DA89C3C9628F55288FD9EA3116(L_6, Enumerable_Single_TisString_t_mFA7EBD74BAF0E8DA89C3C9628F55288FD9EA3116_RuntimeMethod_var);
		Type_t* L_8 = ___conversionType1;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = ___conversionCulture3;
		bool L_10 = ___ignoreValueCase4;
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_11;
		L_11 = TypeConverter_ChangeTypeScalar_mDC61CBAA82B5B04274920C5120D18B6E4E8711FA(L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// CSharpx.Maybe`1<System.Object> CommandLine.Core.TypeConverter::ChangeTypeSequence(System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* TypeConverter_ChangeTypeSequence_mEB36C39CBDABCDA074C64CBA694A1F57B11208E6 (RuntimeObject* ___values0, Type_t* ___conversionType1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, bool ___ignoreValueCase3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_mC32CE0C741F47DD393658A722D21D87EB6746246_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_TisRuntimeObject_m0D9D137CC0EF36ABAFF2D2B7A0EC3762A3BD8D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_m79E3E96F936CAD07BAF4C9BAC3976BEB34C582F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisType_t_m478BF4AA3917E16B9CB9A81763623368852E7D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_FromJustOrFail_TisType_t_m1049EBC8DEBCB88FCC0296F8D4C00A6E4F721351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisType_t_mD324ABAFF880B06DDF4853DA18FEAD572229D113_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_1_mB29AAF96A3B93363AD0AD39B5FBD4CA994F87656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_2_mC4C1A96562DFE3C957B48F57F2CBD92B2B140307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CChangeTypeSequenceU3Eb__0_mBE13217BFE7040249630E07A6E0BA254C2F2A5B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D7823BF0CD9AE546A16FE2BC1A09802931A2EAA);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* L_0 = (U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mCA79EBBB57A01CF7B92FF484D700D810577D0208(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* L_1 = V_0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___conversionCulture2;
		NullCheck(L_1);
		L_1->___conversionCulture_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___conversionCulture_1), (void*)L_2);
		U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* L_3 = V_0;
		bool L_4 = ___ignoreValueCase3;
		NullCheck(L_3);
		L_3->___ignoreValueCase_2 = L_4;
		U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* L_5 = V_0;
		Type_t* L_6 = ___conversionType1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_7;
		L_7 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_6, NULL);
		NullCheck(L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(67 /* System.Type[] System.Type::GetGenericArguments() */, L_7);
		Type_t* L_9;
		L_9 = Enumerable_SingleOrDefault_TisType_t_m478BF4AA3917E16B9CB9A81763623368852E7D13((RuntimeObject*)L_8, Enumerable_SingleOrDefault_TisType_t_m478BF4AA3917E16B9CB9A81763623368852E7D13_RuntimeMethod_var);
		Maybe_1_t66E4A65394D81A81F0D893E1DA59D1AE14BDC7A2* L_10;
		L_10 = MaybeExtensions_ToMaybe_TisType_t_mD324ABAFF880B06DDF4853DA18FEAD572229D113(L_9, MaybeExtensions_ToMaybe_TisType_t_mD324ABAFF880B06DDF4853DA18FEAD572229D113_RuntimeMethod_var);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, _stringLiteral4D7823BF0CD9AE546A16FE2BC1A09802931A2EAA, NULL);
		Type_t* L_12;
		L_12 = MaybeExtensions_FromJustOrFail_TisType_t_m1049EBC8DEBCB88FCC0296F8D4C00A6E4F721351(L_10, L_11, MaybeExtensions_FromJustOrFail_TisType_t_m1049EBC8DEBCB88FCC0296F8D4C00A6E4F721351_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___type_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___type_0), (void*)L_12);
		RuntimeObject* L_13 = ___values0;
		U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* L_14 = V_0;
		Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF* L_15 = (Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF*)il2cpp_codegen_object_new(Func_2_t036D3D2FFD771DE66B599B68369D7566000860FF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mD51C97F21AEB7B4B3B00E9B051402FC45BC9E149(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CChangeTypeSequenceU3Eb__0_mBE13217BFE7040249630E07A6E0BA254C2F2A5B6_RuntimeMethod_var), NULL);
		RuntimeObject* L_16;
		L_16 = Enumerable_Select_TisString_t_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_m79E3E96F936CAD07BAF4C9BAC3976BEB34C582F1(L_13, L_15, Enumerable_Select_TisString_t_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_m79E3E96F936CAD07BAF4C9BAC3976BEB34C582F1_RuntimeMethod_var);
		V_1 = L_16;
		RuntimeObject* L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* L_18 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1;
		Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* L_19 = L_18;
		G_B1_0 = L_19;
		G_B1_1 = L_17;
		if (L_19)
		{
			G_B2_0 = L_19;
			G_B2_1 = L_17;
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* L_20 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* L_21 = (Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6*)il2cpp_codegen_object_new(Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Func_2__ctor_mA597F799B2D5EC43C8875425B390DDC503186E10(L_21, L_20, (intptr_t)((void*)U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_1_mB29AAF96A3B93363AD0AD39B5FBD4CA994F87656_RuntimeMethod_var), NULL);
		Func_2_tDB4DD1959C2EC8E53198AB184FE98BF684ED16B6* L_22 = L_21;
		((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_1), (void*)L_22);
		G_B2_0 = L_22;
		G_B2_1 = G_B1_1;
	}

IL_0071:
	{
		bool L_23;
		L_23 = Enumerable_Any_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_mC32CE0C741F47DD393658A722D21D87EB6746246(G_B2_1, G_B2_0, Enumerable_Any_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_mC32CE0C741F47DD393658A722D21D87EB6746246_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* L_25 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_2;
		Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* L_26 = L_25;
		G_B4_0 = L_26;
		G_B4_1 = L_24;
		if (L_26)
		{
			G_B5_0 = L_26;
			G_B5_1 = L_24;
			goto IL_0098;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* L_27 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* L_28 = (Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93*)il2cpp_codegen_object_new(Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Func_2__ctor_m700EB03A49E9CF96D7AC07C44B47F2C7FA79FA5F(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_2_mC4C1A96562DFE3C957B48F57F2CBD92B2B140307_RuntimeMethod_var), NULL);
		Func_2_t19868D7489F4E6C495BCA8A3C40E6A1C8F4EEF93* L_29 = L_28;
		((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__1_2_2), (void*)L_29);
		G_B5_0 = L_29;
		G_B5_1 = G_B4_1;
	}

IL_0098:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_TisRuntimeObject_m0D9D137CC0EF36ABAFF2D2B7A0EC3762A3BD8D2C(G_B5_1, G_B5_0, Enumerable_Select_TisMaybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9_TisRuntimeObject_m0D9D137CC0EF36ABAFF2D2B7A0EC3762A3BD8D2C_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* L_31 = V_0;
		NullCheck(L_31);
		Type_t* L_32 = L_31->___type_0;
		RuntimeObject* L_33;
		L_33 = EnumerableExtensions_ToUntypedArray_m73499DFCAF367BDFDE4A3120D2B22E79EB48593D(L_30, L_32, NULL);
		Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* L_34;
		L_34 = Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890(L_33, Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_RuntimeMethod_var);
		return L_34;
	}

IL_00ae:
	{
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_35;
		L_35 = Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19(Maybe_Nothing_TisRuntimeObject_m0301DB576945B41F12A8ADF73CAD85D5A3F7AE19_RuntimeMethod_var);
		return L_35;
	}
}
// CSharpx.Maybe`1<System.Object> CommandLine.Core.TypeConverter::ChangeTypeScalar(System.String,System.Type,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* TypeConverter_ChangeTypeScalar_mDC61CBAA82B5B04274920C5120D18B6E4E8711FA (String_t* ___value0, Type_t* ___conversionType1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, bool ___ignoreValueCase3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultExtensions_Match_TisRuntimeObject_TisException_t_mDD6EF1FB3C9D50615B4FF3B991A1533059242CBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultExtensions_ToMaybe_TisRuntimeObject_TisException_t_mC5E4EF0893E17B6959711A6DDEB2AD0F57B58407_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CChangeTypeScalarU3Eb__2_0_mB7AEAEB210B679019E110E50D91F2B2485E601F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CChangeTypeScalarU3Eb__2_1_m696FA4D48CA0BEED8899C2305B5EF21FD5D9198D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* G_B2_0 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B2_1 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B2_2 = NULL;
	Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* G_B1_0 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B1_1 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B1_2 = NULL;
	Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* G_B4_0 = NULL;
	Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* G_B4_1 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B4_2 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B4_3 = NULL;
	Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* G_B3_0 = NULL;
	Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* G_B3_1 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B3_2 = NULL;
	Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* G_B3_3 = NULL;
	{
		String_t* L_0 = ___value0;
		Type_t* L_1 = ___conversionType1;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___conversionCulture2;
		bool L_3 = ___ignoreValueCase3;
		Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* L_4;
		L_4 = TypeConverter_ChangeTypeScalarImpl_m881B6A8189407F71C6C90051CD5442A442C0A62B(L_0, L_1, L_2, L_3, NULL);
		Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* L_6 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_3;
		Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* L_8 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* L_9 = (Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152*)il2cpp_codegen_object_new(Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_m4EF2E22B17BBCFD4D70776918EF7C9CB1BE41996(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CChangeTypeScalarU3Eb__2_0_mB7AEAEB210B679019E110E50D91F2B2485E601F2_RuntimeMethod_var), NULL);
		Action_2_tCB39CA1AE0C3327C98A0CB070FD2973900E49152* L_10 = L_9;
		((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_3), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* L_11 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_4;
		Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			G_B4_3 = G_B2_2;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* L_13 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* L_14 = (Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C*)il2cpp_codegen_object_new(Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m86D48E56A74C816F2F8A131EB27B279C757C27FE(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CChangeTypeScalarU3Eb__2_1_m696FA4D48CA0BEED8899C2305B5EF21FD5D9198D_RuntimeMethod_var), NULL);
		Action_1_t1881CBFD61E0AEB6FDF5377507410239AC873A4C* L_15 = L_14;
		((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_4), (void*)L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0048:
	{
		ResultExtensions_Match_TisRuntimeObject_TisException_t_mDD6EF1FB3C9D50615B4FF3B991A1533059242CBF(G_B4_2, G_B4_1, G_B4_0, ResultExtensions_Match_TisRuntimeObject_TisException_t_mDD6EF1FB3C9D50615B4FF3B991A1533059242CBF_RuntimeMethod_var);
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_16;
		L_16 = ResultExtensions_ToMaybe_TisRuntimeObject_TisException_t_mC5E4EF0893E17B6959711A6DDEB2AD0F57B58407(G_B4_3, ResultExtensions_ToMaybe_TisRuntimeObject_TisException_t_mC5E4EF0893E17B6959711A6DDEB2AD0F57B58407_RuntimeMethod_var);
		return L_16;
	}
}
// System.Object CommandLine.Core.TypeConverter::ConvertString(System.String,System.Type,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ConvertString_mFC1D978CDFB1CB0EECDEF080BEA6844D1294690D (String_t* ___value0, Type_t* ___type1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___value0;
		Type_t* L_1 = ___type1;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___conversionCulture2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Convert_ChangeType_m237EF4F56EC5DE52FCDAD2E27DEEEBB21549B1F4(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.InvalidCastException)
		Type_t* L_4 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptor_tC36C76617F823DE4F887E1D17846077CE7B0C3D0_il2cpp_TypeInfo_var)));
		TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* L_5;
		L_5 = TypeDescriptor_GetConverter_mBF37D89915F76D19765E81387D62B0B407432EC6(L_4, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___conversionCulture2;
		String_t* L_7 = ___value0;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*, RuntimeObject* >::Invoke(6 /* System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object) */, L_5, (RuntimeObject*)NULL, L_6, L_7);
		V_0 = L_8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// RailwaySharp.ErrorHandling.Result`2<System.Object,System.Exception> CommandLine.Core.TypeConverter::ChangeTypeScalarImpl(System.String,System.Type,System.Globalization.CultureInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* TypeConverter_ChangeTypeScalarImpl_m881B6A8189407F71C6C90051CD5442A442C0A62B (String_t* ___value0, Type_t* ___conversionType1, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___conversionCulture2, bool ___ignoreValueCase3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__0_m840F90865F0DDFFF85842E0EA6153F95B6931DB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__1_mD19DEF828E4B02D4460029EDC1FDF72DD6DC9C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* V_0 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* V_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* V_2 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B6_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_0 = (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m292C97D9180D8130C24BA686483CABB24E6969CC(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_1 = V_0;
		Type_t* L_2 = ___conversionType1;
		NullCheck(L_1);
		L_1->___conversionType_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___conversionType_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_3 = V_0;
		String_t* L_4 = ___value0;
		NullCheck(L_3);
		L_3->___value_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___value_1), (void*)L_4);
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_5 = V_0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___conversionCulture2;
		NullCheck(L_5);
		L_5->___conversionCulture_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___conversionCulture_2), (void*)L_6);
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_7 = V_0;
		bool L_8 = ___ignoreValueCase3;
		NullCheck(L_7);
		L_7->___ignoreValueCase_3 = L_8;
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_9 = V_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_10 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__0_m840F90865F0DDFFF85842E0EA6153F95B6931DB1_RuntimeMethod_var), NULL);
		V_1 = L_10;
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_11 = V_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_12 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__1_mD19DEF828E4B02D4460029EDC1FDF72DD6DC9C2B_RuntimeMethod_var), NULL);
		V_2 = L_12;
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_13 = V_0;
		NullCheck(L_13);
		Type_t* L_14 = L_13->___conversionType_0;
		bool L_15;
		L_15 = ReflectionExtensions_IsCustomStruct_mF93E4F3E0D5FE8B248D70E286CB2C9F92E295AF3(L_14, NULL);
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_16 = V_2;
		Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* L_17;
		L_17 = Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1(L_16, Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1_RuntimeMethod_var);
		return L_17;
	}

IL_0050:
	{
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_18 = V_0;
		NullCheck(L_18);
		Type_t* L_19 = L_18->___conversionType_0;
		bool L_20;
		L_20 = ReflectionExtensions_IsPrimitiveEx_m04EE4491D3BEAA8EAD57F2ACA9BF4DFDD4EFA91F(L_19, NULL);
		if (L_20)
		{
			goto IL_006d;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_21 = V_0;
		NullCheck(L_21);
		Type_t* L_22 = L_21->___conversionType_0;
		bool L_23;
		L_23 = ReflectionHelper_IsFSharpOptionType_mAF794D1DD603FE92B469931BE39DF4A7969CD2E0(L_22, NULL);
		if (L_23)
		{
			goto IL_006d;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_24 = V_2;
		G_B6_0 = L_24;
		goto IL_006e;
	}

IL_006d:
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_25 = V_1;
		G_B6_0 = L_25;
	}

IL_006e:
	{
		Result_2_t9C164FE7515F7B59AAEECA7ECCB864DA0CFD2F50* L_26;
		L_26 = Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1(G_B6_0, Result_Try_TisRuntimeObject_mCCE6B91381F0D34911411A5A2418AAACD5AC43A1_RuntimeMethod_var);
		return L_26;
	}
}
// System.Object CommandLine.Core.TypeConverter::ToEnum(System.String,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ToEnum_m00C7C502B7B0722319347604514CB2E2BEAA4302 (String_t* ___value0, Type_t* ___conversionType1, bool ___ignoreValueCase2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Type_t* L_0 = ___conversionType1;
		String_t* L_1 = ___value0;
		bool L_2 = ___ignoreValueCase2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Enum_Parse_m1ABE53499F05D295104BDE57EE12376CF4513585(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0012;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.ArgumentException)
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_4 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeConverter_ToEnum_m00C7C502B7B0722319347604514CB2E2BEAA4302_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0012:
	{
		Type_t* L_5 = ___conversionType1;
		RuntimeObject* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Enum_IsDefined_m715E9AAD26B4AAA4B08E4D6AED73237174E82BB4(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		return L_8;
	}

IL_001d:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_9 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeConverter_ToEnum_m00C7C502B7B0722319347604514CB2E2BEAA4302_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeConverter/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCA79EBBB57A01CF7B92FF484D700D810577D0208 (U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CSharpx.Maybe`1<System.Object> CommandLine.Core.TypeConverter/<>c__DisplayClass1_0::<ChangeTypeSequence>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* U3CU3Ec__DisplayClass1_0_U3CChangeTypeSequenceU3Eb__0_mBE13217BFE7040249630E07A6E0BA254C2F2A5B6 (U3CU3Ec__DisplayClass1_0_t3D9440AEA8C3770B3F3128843855BC91F747CBAF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		Type_t* L_1 = __this->___type_0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = __this->___conversionCulture_1;
		bool L_3 = __this->___ignoreValueCase_2;
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_4;
		L_4 = TypeConverter_ChangeTypeScalar_mDC61CBAA82B5B04274920C5120D18B6E4E8711FA(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeConverter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m256C68E806E2942D1E14F05C3BB15EC9924E82B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* L_0 = (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325*)il2cpp_codegen_object_new(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF863DB295ACB1F61571DD4DDE4F26A4738FFDC1B(L_0, NULL);
		((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CommandLine.Core.TypeConverter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF863DB295ACB1F61571DD4DDE4F26A4738FFDC1B (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.TypeConverter/<>c::<ChangeTypeSequence>b__1_1(CSharpx.Maybe`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_1_mB29AAF96A3B93363AD0AD39B5FBD4CA994F87656 (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_0 = ___a0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376(L_0, Maybe_1_MatchNothing_m21B6DC4A6B58B66920706685366069C3EB468376_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object CommandLine.Core.TypeConverter/<>c::<ChangeTypeSequence>b__1_2(CSharpx.Maybe`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CChangeTypeSequenceU3Eb__1_2_mC4C1A96562DFE3C957B48F57F2CBD92B2B140307 (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_0 = ___c0;
		NullCheck(((Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD*)CastclassSealed((RuntimeObject*)L_0, Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1;
		L_1 = Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_inline(((Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD*)CastclassSealed((RuntimeObject*)L_0, Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD_il2cpp_TypeInfo_var)), Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void CommandLine.Core.TypeConverter/<>c::<ChangeTypeScalar>b__2_0(System.Object,System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CChangeTypeScalarU3Eb__2_0_mB7AEAEB210B679019E110E50D91F2B2485E601F2 (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, RuntimeObject* ____0, RuntimeObject* _____1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void CommandLine.Core.TypeConverter/<>c::<ChangeTypeScalar>b__2_1(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CChangeTypeScalarU3Eb__2_1_m696FA4D48CA0BEED8899C2305B5EF21FD5D9198D (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, RuntimeObject* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisException_t_m79F26C101F742089351CE407131592334A76625C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___e0;
		Exception_t* L_1;
		L_1 = Enumerable_First_TisException_t_m79F26C101F742089351CE407131592334A76625C(L_0, Enumerable_First_TisException_t_m79F26C101F742089351CE407131592334A76625C_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		ExceptionExtensions_RethrowWhenAbsentIn_mDABC1D7F51704BC5847C8C40BA1DD90451CB40A5(L_1, (RuntimeObject*)L_9, NULL);
		return;
	}
}
// System.Object CommandLine.Core.TypeConverter/<>c::<ChangeTypeScalarImpl>b__4_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CChangeTypeScalarImplU3Eb__4_5_m9113DC250A359166145BCA2D0F991D1A38581AD1 (U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m292C97D9180D8130C24BA686483CABB24E6969CC (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::<ChangeTypeScalarImpl>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__0_m840F90865F0DDFFF85842E0EA6153F95B6931DB1 (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__2_m0220AF3963A3966AC8818AE4FAB434F1C8A640A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* V_0 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* V_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B2_0 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B1_0 = NULL;
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = __this->___U3CU3E9__2_5;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_2 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_2, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__2_m0220AF3963A3966AC8818AE4FAB434F1C8A640A0_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = L_2;
		V_1 = L_3;
		__this->___U3CU3E9__2_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__2_5), (void*)L_3);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = V_1;
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		String_t* L_5 = __this->___value_1;
		bool L_6;
		L_6 = StringExtensions_IsBooleanString_mDAC05E5069EAE1C93731C6D79BB1131E1AC83A53(L_5, NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Type_t* L_7 = __this->___conversionType_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0075;
		}
	}

IL_0044:
	{
		Type_t* L_11 = __this->___conversionType_0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_12;
		L_12 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(97 /* System.Boolean System.Type::get_IsEnum() */, L_12);
		if (L_13)
		{
			goto IL_005d;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline(L_14, NULL);
		return L_15;
	}

IL_005d:
	{
		String_t* L_16 = __this->___value_1;
		Type_t* L_17 = __this->___conversionType_0;
		bool L_18 = __this->___ignoreValueCase_3;
		RuntimeObject* L_19;
		L_19 = TypeConverter_ToEnum_m00C7C502B7B0722319347604514CB2E2BEAA4302(L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0075:
	{
		String_t* L_20 = __this->___value_1;
		bool L_21;
		L_21 = StringExtensions_ToBoolean_m2FE8D8DB4307823BC60507F0877223AFB351CCD7(L_20, NULL);
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}
}
// System.Object CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::<ChangeTypeScalarImpl>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__2_m0220AF3963A3966AC8818AE4FAB434F1C8A640A0 (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CChangeTypeScalarImplU3Eb__4_5_m9113DC250A359166145BCA2D0F991D1A38581AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__3_mF7876E4952E8564DDCAC771D9C5F61A51F4760F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CChangeTypeScalarImplU3Eb__4_m2318CF40A707AF3A25CFFFDC1C6154D75906D2A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* V_0 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* V_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* V_2 = NULL;
	Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* V_3 = NULL;
	Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* G_B2_1 = NULL;
	Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* G_B1_0 = NULL;
	U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* G_B1_1 = NULL;
	Type_t* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* G_B4_1 = NULL;
	U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* G_B4_2 = NULL;
	Type_t* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* G_B3_1 = NULL;
	U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* G_B3_2 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B6_0 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* L_0 = (U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_1__ctor_mAC105AA3F85BE1F2E6F2B7BDD43954DF6D5BDAB7(L_0, NULL);
		U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		Type_t* L_2 = __this->___conversionType_0;
		bool L_3;
		L_3 = ReflectionHelper_IsFSharpOptionType_mAF794D1DD603FE92B469931BE39DF4A7969CD2E0(L_2, NULL);
		Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* L_4 = __this->___U3CU3E9__3_4;
		Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_1;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_1;
			goto IL_0037;
		}
	}
	{
		Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* L_6 = (Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872*)il2cpp_codegen_object_new(Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_mCE5505EB20216ED352B9E1770CD1C31BE39F8367(L_6, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__3_mF7876E4952E8564DDCAC771D9C5F61A51F4760F0_RuntimeMethod_var), NULL);
		Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* L_7 = L_6;
		V_3 = L_7;
		__this->___U3CU3E9__3_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__3_4), (void*)L_7);
		Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* L_8 = V_3;
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0037:
	{
		V_0 = G_B2_0;
		U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* L_9 = G_B2_1;
		Func_1_t28D5421BB5B984FF16CB223A463581E8D69BF872* L_10 = V_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = Func_1_Invoke_m3A89A924C92BA380B90227900892524991B93645_inline(L_10, NULL);
		Type_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_9;
		G_B3_2 = L_9;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_9;
			G_B4_2 = L_9;
			goto IL_0049;
		}
	}
	{
		Type_t* L_13 = __this->___conversionType_0;
		G_B4_0 = L_13;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0049:
	{
		NullCheck(G_B4_1);
		G_B4_1->___type_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___type_0), (void*)G_B4_0);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_14 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_14, G_B4_2, (intptr_t)((void*)U3CU3Ec__DisplayClass4_1_U3CChangeTypeScalarImplU3Eb__4_m2318CF40A707AF3A25CFFFDC1C6154D75906D2A7_RuntimeMethod_var), NULL);
		V_1 = L_14;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_15 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_5;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_16 = L_15;
		G_B5_0 = L_16;
		if (L_16)
		{
			G_B6_0 = L_16;
			goto IL_0079;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325* L_17 = ((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_18 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CChangeTypeScalarImplU3Eb__4_5_m9113DC250A359166145BCA2D0F991D1A38581AD1_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_19 = L_18;
		((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5FD7141380AC21DD0BB6AC3A7F1DC00E1DA325_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_5), (void*)L_19);
		G_B6_0 = L_19;
	}

IL_0079:
	{
		V_2 = G_B6_0;
		String_t* L_20 = __this->___value_1;
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline(L_21, NULL);
		return L_22;
	}

IL_0089:
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_23 = V_2;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline(L_23, NULL);
		return L_24;
	}
}
// System.Type CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::<ChangeTypeScalarImpl>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__3_mF7876E4952E8564DDCAC771D9C5F61A51F4760F0 (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___conversionType_0;
		Type_t* L_1;
		L_1 = Nullable_GetUnderlyingType_m3162A4F48AE683C74A9419644E40C05595BA41E7(L_0, NULL);
		return L_1;
	}
}
// System.Object CommandLine.Core.TypeConverter/<>c__DisplayClass4_0::<ChangeTypeScalarImpl>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__1_mD19DEF828E4B02D4460029EDC1FDF72DD6DC9C2B (U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Type_t* L_0 = __this->___conversionType_0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		NullCheck(L_1);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_6;
		L_6 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_1, L_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = __this->___value_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		RuntimeObject* L_10;
		L_10 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_6, L_8, NULL);
		V_0 = L_10;
		goto IL_0046;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		throw e;
	}

CATCH_003a:
	{// begin catch(System.Exception)
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_11 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA36EEF03956240FAA92A386D8DB07DE4F783B96B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CChangeTypeScalarImplU3Eb__1_mD19DEF828E4B02D4460029EDC1FDF72DD6DC9C2B_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0046:
	{
		RuntimeObject* L_12 = V_0;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeConverter/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_mAC105AA3F85BE1F2E6F2B7BDD43954DF6D5BDAB7 (U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object CommandLine.Core.TypeConverter/<>c__DisplayClass4_1::<ChangeTypeScalarImpl>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_1_U3CChangeTypeScalarImplU3Eb__4_m2318CF40A707AF3A25CFFFDC1C6154D75906D2A7 (U3CU3Ec__DisplayClass4_1_t1ABCA81DB67712C1557E0B84049A88A41F4B99F9* __this, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		String_t* L_1 = L_0->___value_1;
		Type_t* L_2 = __this->___type_0;
		U3CU3Ec__DisplayClass4_0_tB140DFB2C830F4775A97E490E1B41E47325A6D1D* L_3 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_3);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4 = L_3->___conversionCulture_2;
		RuntimeObject* L_5;
		L_5 = TypeConverter_ConvertString_mFC1D978CDFB1CB0EECDEF080BEA6844D1294690D(L_1, L_2, L_4, NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CommandLine.Core.TypeDescriptor
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke(const TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3& unmarshaled, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___maxItems_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'maxItems' of type 'TypeDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___maxItems_1Exception, NULL);
}
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke_back(const TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_pinvoke& marshaled, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3& unmarshaled)
{
	Exception_t* ___maxItems_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'maxItems' of type 'TypeDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___maxItems_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: CommandLine.Core.TypeDescriptor
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_pinvoke_cleanup(TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CommandLine.Core.TypeDescriptor
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_com(const TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3& unmarshaled, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_com& marshaled)
{
	Exception_t* ___maxItems_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'maxItems' of type 'TypeDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___maxItems_1Exception, NULL);
}
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_com_back(const TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_com& marshaled, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3& unmarshaled)
{
	Exception_t* ___maxItems_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'maxItems' of type 'TypeDescriptor'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___maxItems_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: CommandLine.Core.TypeDescriptor
IL2CPP_EXTERN_C void TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshal_com_cleanup(TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_marshaled_com& marshaled)
{
}
// System.Void CommandLine.Core.TypeDescriptor::.ctor(CommandLine.Core.TargetType,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptor__ctor_mCE9ADCF9EB72F1DB7B7E05880A7F113220214290 (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, int32_t ___targetType0, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maxItems1, Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___targetType0;
		__this->___targetType_0 = L_0;
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_1 = ___maxItems1;
		__this->___maxItems_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maxItems_1), (void*)L_1);
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_2 = ___nextValue2;
		__this->___nextValue_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextValue_2), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeDescriptor__ctor_mCE9ADCF9EB72F1DB7B7E05880A7F113220214290_AdjustorThunk (RuntimeObject* __this, int32_t ___targetType0, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maxItems1, Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue2, const RuntimeMethod* method)
{
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3*>(__this + _offset);
	TypeDescriptor__ctor_mCE9ADCF9EB72F1DB7B7E05880A7F113220214290(_thisAdjusted, ___targetType0, ___maxItems1, ___nextValue2, method);
}
// CommandLine.Core.TargetType CommandLine.Core.TypeDescriptor::get_TargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___targetType_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C_inline(_thisAdjusted, method);
	return _returnValue;
}
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.TypeDescriptor::get_MaxItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* TypeDescriptor_get_MaxItems_mCC7C4B7A6EE9D322883F7C4DA90923F9773D6F10 (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) 
{
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = __this->___maxItems_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* TypeDescriptor_get_MaxItems_mCC7C4B7A6EE9D322883F7C4DA90923F9773D6F10_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3*>(__this + _offset);
	Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* _returnValue;
	_returnValue = TypeDescriptor_get_MaxItems_mCC7C4B7A6EE9D322883F7C4DA90923F9773D6F10_inline(_thisAdjusted, method);
	return _returnValue;
}
// CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor> CommandLine.Core.TypeDescriptor::get_NextValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* TypeDescriptor_get_NextValue_mE05E1FDB44A0F4BAB550EB42720DB324B4DE61EC (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) 
{
	{
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_0 = __this->___nextValue_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* TypeDescriptor_get_NextValue_mE05E1FDB44A0F4BAB550EB42720DB324B4DE61EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3*>(__this + _offset);
	Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* _returnValue;
	_returnValue = TypeDescriptor_get_NextValue_mE05E1FDB44A0F4BAB550EB42720DB324B4DE61EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// CommandLine.Core.TypeDescriptor CommandLine.Core.TypeDescriptor::Create(CommandLine.Core.TargetType,CSharpx.Maybe`1<System.Int32>,CommandLine.Core.TypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B (int32_t ___tag0, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___maximumItems1, TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___next2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = ___maximumItems1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2C7B00FC82A6D013B0A5C720D49CB34032C95CC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___tag0;
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_3 = ___maximumItems1;
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_4 = ___next2;
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_5;
		L_5 = MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF(L_4, MaybeExtensions_ToMaybe_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_m93C7345F77371C797778D0D307A3C3FFDBB2ACAF_RuntimeMethod_var);
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		TypeDescriptor__ctor_mCE9ADCF9EB72F1DB7B7E05880A7F113220214290((&L_6), L_2, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CommandLine.Core.TypeDescriptor CommandLine.Core.TypeDescriptorExtensions::WithNextValue(CommandLine.Core.TypeDescriptor,CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 TypeDescriptorExtensions_WithNextValue_m5F7D53FCC267FE216AE477A561C4FBFDBAD585CC (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 ___descriptor0, Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* ___nextValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C_inline((&___descriptor0), NULL);
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_1;
		L_1 = TypeDescriptor_get_MaxItems_mCC7C4B7A6EE9D322883F7C4DA90923F9773D6F10_inline((&___descriptor0), NULL);
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_2 = ___nextValue1;
		il2cpp_codegen_initobj((&V_0), sizeof(TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3));
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_3 = V_0;
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_4;
		L_4 = MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6(L_2, L_3, MaybeExtensions_GetValueOrDefault_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCA5B661830EEAFCE765644CE71658AB252913C6_RuntimeMethod_var);
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_5;
		L_5 = TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B(L_0, L_1, L_4, NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CSharpx.Maybe`1<CommandLine.Core.TypeDescriptor> CommandLine.Core.TypeLookup::FindTypeDescriptorAndSibling(System.String,System.Collections.Generic.IEnumerable`1<CommandLine.Core.OptionSpecification>,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* TypeLookup_FindTypeDescriptorAndSibling_m4D0CB76BE9089FA49CE1257A557DD5DDADEE963F (String_t* ___name0, RuntimeObject* ___specifications1, StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__0_m6F5071A6E4C2B39C3F8E297687606D9E5CD722F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__1_m12FADBC03D8E66D3BE7FF37D570ED009987463D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_0 = (U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mE6CD1571C4CD9F0717FBADF0F7A9214F99CACEDD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_3 = V_0;
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_4 = ___comparer2;
		NullCheck(L_3);
		L_3->___comparer_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___comparer_1), (void*)L_4);
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_5 = V_0;
		RuntimeObject* L_6 = ___specifications1;
		NullCheck(L_5);
		L_5->___specifications_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___specifications_2), (void*)L_6);
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___specifications_2;
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_9 = V_0;
		Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* L_10 = (Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A*)il2cpp_codegen_object_new(Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m676ABAF5B214E04737E1EC6A792765839D74DE5A(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__0_m6F5071A6E4C2B39C3F8E297687606D9E5CD722F0_RuntimeMethod_var), NULL);
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_11;
		L_11 = Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC(L_8, L_10, Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC_RuntimeMethod_var);
		Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* L_12;
		L_12 = MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31(L_11, MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* L_13 = V_0;
		Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* L_14 = (Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45*)il2cpp_codegen_object_new(Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_mF0F4BED8120081D6D8E5B1F2A1F4BAAB39BF81C7(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__1_m12FADBC03D8E66D3BE7FF37D570ED009987463D1_RuntimeMethod_var), NULL);
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_15;
		L_15 = MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325(L_12, L_14, MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mE6CD1571C4CD9F0717FBADF0F7A9214F99CACEDD (U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::<FindTypeDescriptorAndSibling>b__0(CommandLine.Core.OptionSpecification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__0_m6F5071A6E4C2B39C3F8E297687606D9E5CD722F0 (U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* __this, OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___a0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_1 = ___a0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = OptionSpecification_get_ShortName_m8CE982353B36EC4F8E8407AAB90D48374029EF03_inline(L_1, NULL);
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_3 = ___a0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = OptionSpecification_get_LongName_m87EF967278092D6328F17BC562D7150FC02358B1_inline(L_3, NULL);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_5 = __this->___comparer_1;
		bool L_6;
		L_6 = NameExtensions_MatchName_mF8CCDF53FB2A84221DACE3718ADBD7B266C5C473(L_0, L_2, L_4, L_5, NULL);
		return L_6;
	}
}
// CommandLine.Core.TypeDescriptor CommandLine.Core.TypeLookup/<>c__DisplayClass0_0::<FindTypeDescriptorAndSibling>b__1(CommandLine.Core.OptionSpecification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 U3CU3Ec__DisplayClass0_0_U3CFindTypeDescriptorAndSiblingU3Eb__1_m12FADBC03D8E66D3BE7FF37D570ED009987463D1 (U3CU3Ec__DisplayClass0_0_t27151457C95E508BE385F3DB3F90910D45EE72D5* __this, OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___first0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SkipWhile_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_mF7D747541F4D3B480A49254D305B904DC013C40D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m1B0B49622D3C25B1B2555CA8B37D737287E70179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_3_mAAB36AE43724E69BA8D6B5CC3E9A1497E3A1A7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_4_mE74C4B3DDAB434290A0F9392A7D032593BE208B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_U3CFindTypeDescriptorAndSiblingU3Eb__2_m5DF7BEB37F6803D8C191A76B8B6716A3F211928D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* V_0 = NULL;
	Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* V_1 = NULL;
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* G_B4_0 = NULL;
	Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* G_B4_1 = NULL;
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* G_B3_0 = NULL;
	Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* G_B3_1 = NULL;
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* L_0 = (U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_1__ctor_m9445C85527D82F634D51C7484A7143BA7F0EE11D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* L_1 = V_0;
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_2 = ___first0;
		NullCheck(L_1);
		L_1->___first_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___first_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* L_3 = V_0;
		NullCheck(L_3);
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_4 = L_3->___first_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Specification_get_TargetType_mA3C78F74141DB26147C69DEF964117990648B5F6_inline(L_4, NULL);
		U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* L_6 = V_0;
		NullCheck(L_6);
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_7 = L_6->___first_0;
		NullCheck(L_7);
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_8;
		L_8 = Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline(L_7, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3));
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_9 = V_2;
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_10;
		L_10 = TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B(L_5, L_8, L_9, NULL);
		RuntimeObject* L_11 = __this->___specifications_2;
		U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* L_12 = V_0;
		Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* L_13 = (Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A*)il2cpp_codegen_object_new(Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m676ABAF5B214E04737E1EC6A792765839D74DE5A(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass0_1_U3CFindTypeDescriptorAndSiblingU3Eb__2_m5DF7BEB37F6803D8C191A76B8B6716A3F211928D_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_SkipWhile_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_mF7D747541F4D3B480A49254D305B904DC013C40D(L_11, L_13, Enumerable_SkipWhile_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_mF7D747541F4D3B480A49254D305B904DC013C40D_RuntimeMethod_var);
		RuntimeObject* L_15;
		L_15 = Enumerable_Take_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m1B0B49622D3C25B1B2555CA8B37D737287E70179(L_14, 1, Enumerable_Take_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m1B0B49622D3C25B1B2555CA8B37D737287E70179_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* L_16 = ((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_1;
		Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* L_17 = L_16;
		G_B1_0 = L_17;
		G_B1_1 = L_15;
		G_B1_2 = L_10;
		if (L_17)
		{
			G_B2_0 = L_17;
			G_B2_1 = L_15;
			G_B2_2 = L_10;
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* L_18 = ((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* L_19 = (Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A*)il2cpp_codegen_object_new(Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m676ABAF5B214E04737E1EC6A792765839D74DE5A(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_3_mAAB36AE43724E69BA8D6B5CC3E9A1497E3A1A7BD_RuntimeMethod_var), NULL);
		Func_2_tFC5CD0B9BD68EA895287A491042407690E401D3A* L_20 = L_19;
		((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_1), (void*)L_20);
		G_B2_0 = L_20;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_006d:
	{
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_21;
		L_21 = Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC(G_B2_1, G_B2_0, Enumerable_SingleOrDefault_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m3EB9FE03CD433A266AE9F3F49FADFAA88BE54BCC_RuntimeMethod_var);
		Maybe_1_tC72CCA6A407E23AF91D337ECB177A24EC660EE0E* L_22;
		L_22 = MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31(L_21, MaybeExtensions_ToMaybe_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_m7DE97A471289E8242C08707B36037DD639983B31_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* L_23 = ((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_2;
		Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* L_24 = L_23;
		G_B3_0 = L_24;
		G_B3_1 = L_22;
		G_B3_2 = G_B2_2;
		if (L_24)
		{
			G_B4_0 = L_24;
			G_B4_1 = L_22;
			G_B4_2 = G_B2_2;
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* L_25 = ((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* L_26 = (Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45*)il2cpp_codegen_object_new(Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Func_2__ctor_mF0F4BED8120081D6D8E5B1F2A1F4BAAB39BF81C7(L_26, L_25, (intptr_t)((void*)U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_4_mE74C4B3DDAB434290A0F9392A7D032593BE208B7_RuntimeMethod_var), NULL);
		Func_2_tBBB866F8D50CD37D1F82A38DC1D03330E726BB45* L_27 = L_26;
		((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_2), (void*)L_27);
		G_B4_0 = L_27;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0096:
	{
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_28;
		L_28 = MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325(G_B4_1, G_B4_0, MaybeExtensions_Map_TisOptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92_TisTypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3_mFCFDC8C2ACF5924BCFC627BC69463F5BD3DA7325_RuntimeMethod_var);
		V_1 = L_28;
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_29 = V_1;
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_30;
		L_30 = TypeDescriptorExtensions_WithNextValue_m5F7D53FCC267FE216AE477A561C4FBFDBAD585CC(G_B4_2, L_29, NULL);
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeLookup/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m9445C85527D82F634D51C7484A7143BA7F0EE11D (U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.TypeLookup/<>c__DisplayClass0_1::<FindTypeDescriptorAndSibling>b__2(CommandLine.Core.OptionSpecification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_1_U3CFindTypeDescriptorAndSiblingU3Eb__2_m5DF7BEB37F6803D8C191A76B8B6716A3F211928D (U3CU3Ec__DisplayClass0_1_tB9BC83D8CFF1D008A9DEF5194E9CC0458F56CFE3* __this, OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___s0, const RuntimeMethod* method) 
{
	{
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_0 = ___s0;
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_1 = __this->___first_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.TypeLookup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m40E8E1B4B6995B73B4FA3F66EB41EF7E48D7AB89 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* L_0 = (U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC*)il2cpp_codegen_object_new(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m311FE7A2D068047C98EDE018F1CF87C4DD18BDD5(L_0, NULL);
		((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CommandLine.Core.TypeLookup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m311FE7A2D068047C98EDE018F1CF87C4DD18BDD5 (U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CommandLine.Core.TypeLookup/<>c::<FindTypeDescriptorAndSibling>b__0_3(CommandLine.Core.OptionSpecification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_3_mAAB36AE43724E69BA8D6B5CC3E9A1497E3A1A7BD (U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* __this, OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___x0, const RuntimeMethod* method) 
{
	{
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_0 = ___x0;
		bool L_1;
		L_1 = SpecificationExtensions_IsValue_m184338291421E414DF437E54488BDCE7D91C765F(L_0, NULL);
		return L_1;
	}
}
// CommandLine.Core.TypeDescriptor CommandLine.Core.TypeLookup/<>c::<FindTypeDescriptorAndSibling>b__0_4(CommandLine.Core.OptionSpecification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 U3CU3Ec_U3CFindTypeDescriptorAndSiblingU3Eb__0_4_mE74C4B3DDAB434290A0F9392A7D032593BE208B7 (U3CU3Ec_t28FC1D79B37EB5E8FDB199A4120B54675F9300AC* __this, OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* ___second0, const RuntimeMethod* method) 
{
	TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_0 = ___second0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Specification_get_TargetType_mA3C78F74141DB26147C69DEF964117990648B5F6_inline(L_0, NULL);
		OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* L_2 = ___second0;
		NullCheck(L_2);
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_3;
		L_3 = Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline(L_2, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3));
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_4 = V_0;
		TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3 L_5;
		L_5 = TypeDescriptor_Create_m82AC3A8D00465B5F974C1560A1E3341703F11D3B(L_1, L_3, L_4, NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// RailwaySharp.ErrorHandling.Result`2<System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,CommandLine.Error> CommandLine.Core.ValueMapper::MapValues(System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,System.Collections.Generic.IEnumerable`1<System.String>,System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_2_tCAE178BE49E65721DC8561A72C56938C2FBAA7A1* ValueMapper_MapValues_mB283D15F8A7F1275F35139FC0CE98B5AD06901DF (RuntimeObject* ___specProps0, RuntimeObject* ___values1, Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* ___converter2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_mC788ADED4F3C65F80FE37D4AA33F4422CDDCB3CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mC32E4207DED79724850ECEC880D450E7DD06E244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m24F7CF7072447E328CB4754644F99DA18AF6DFB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mAE9B382DF70ACDDD5870BEB4FA043396F3247200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t874E1386B69DF45699CC4000DE63D36B26211637_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_Succeed_TisIEnumerable_1_t9873E60E636CF6C24981EA1505A698B5EEAB4A4D_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m57673798B36D467BE981503CC6566658AEF0B870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMapValuesU3Eb__0_0_m3B1E06FA9CEC4D1F0C5E41307CD93EA4AA029EB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMapValuesU3Eb__0_1_mD42BCEFD3ADF5E3DC7FCBEB6E19148F86C4FE0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMapValuesU3Eb__0_2_mF26B7381C3235E9D08FF7DFEB6710BF20C37B358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	{
		RuntimeObject* L_0 = ___specProps0;
		RuntimeObject* L_1 = ___values1;
		Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* L_2 = ___converter2;
		RuntimeObject* L_3;
		L_3 = ValueMapper_MapValuesImpl_m7744B28FA1375A4AC9BEB004E35F1555193462A3(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* L_5 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* L_7 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* L_8 = (Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC*)il2cpp_codegen_object_new(Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_mD77D23EEA6D26E18061E86189F3D52E06F53C0B8(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CMapValuesU3Eb__0_0_m3B1E06FA9CEC4D1F0C5E41307CD93EA4AA029EB5_RuntimeMethod_var), NULL);
		Func_2_t30536B469A1892D0E2D2F40DC3402D82720347CC* L_9 = L_8;
		((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mAE9B382DF70ACDDD5870BEB4FA043396F3247200(G_B2_1, G_B2_0, Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mAE9B382DF70ACDDD5870BEB4FA043396F3247200_RuntimeMethod_var);
		RuntimeObject* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* L_12 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2;
		Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* L_13 = L_12;
		G_B3_0 = L_13;
		G_B3_1 = L_11;
		G_B3_2 = L_10;
		if (L_13)
		{
			G_B4_0 = L_13;
			G_B4_1 = L_11;
			G_B4_2 = L_10;
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* L_14 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* L_15 = (Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802*)il2cpp_codegen_object_new(Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mD5E10CA368A4E439AEC7FFC52576DAEFB8EA39EB(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3CMapValuesU3Eb__0_1_mD42BCEFD3ADF5E3DC7FCBEB6E19148F86C4FE0CC_RuntimeMethod_var), NULL);
		Func_2_t06FAD0EE5E65D4911EEA62CE1F3683BA692DE802* L_16 = L_15;
		((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2), (void*)L_16);
		G_B4_0 = L_16;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004e:
	{
		RuntimeObject* L_17;
		L_17 = Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m24F7CF7072447E328CB4754644F99DA18AF6DFB2(G_B4_1, G_B4_0, Enumerable_Select_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m24F7CF7072447E328CB4754644F99DA18AF6DFB2_RuntimeMethod_var);
		RuntimeObject* L_18;
		L_18 = Enumerable_OfType_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_mC788ADED4F3C65F80FE37D4AA33F4422CDDCB3CA(L_17, Enumerable_OfType_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_mC788ADED4F3C65F80FE37D4AA33F4422CDDCB3CA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* L_19 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3;
		Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = L_18;
		G_B5_2 = G_B4_2;
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = L_18;
			G_B6_2 = G_B4_2;
			goto IL_0077;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* L_21 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* L_22 = (Func_2_t874E1386B69DF45699CC4000DE63D36B26211637*)il2cpp_codegen_object_new(Func_2_t874E1386B69DF45699CC4000DE63D36B26211637_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_mB524569C3D54733BA48411D64C4D5AC1A1671D8F(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CMapValuesU3Eb__0_2_mF26B7381C3235E9D08FF7DFEB6710BF20C37B358_RuntimeMethod_var), NULL);
		Func_2_t874E1386B69DF45699CC4000DE63D36B26211637* L_23 = L_22;
		((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_3), (void*)L_23);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0077:
	{
		RuntimeObject* L_24;
		L_24 = Enumerable_Select_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mC32E4207DED79724850ECEC880D450E7DD06E244(G_B6_1, G_B6_0, Enumerable_Select_TisJust_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mC32E4207DED79724850ECEC880D450E7DD06E244_RuntimeMethod_var);
		Result_2_tCAE178BE49E65721DC8561A72C56938C2FBAA7A1* L_25;
		L_25 = Result_Succeed_TisIEnumerable_1_t9873E60E636CF6C24981EA1505A698B5EEAB4A4D_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m57673798B36D467BE981503CC6566658AEF0B870(G_B6_2, L_24, Result_Succeed_TisIEnumerable_1_t9873E60E636CF6C24981EA1505A698B5EEAB4A4D_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m57673798B36D467BE981503CC6566658AEF0B870_RuntimeMethod_var);
		return L_25;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>> CommandLine.Core.ValueMapper::MapValuesImpl(System.Collections.Generic.IEnumerable`1<CommandLine.Core.SpecificationProperty>,System.Collections.Generic.IEnumerable`1<System.String>,System.Func`4<System.Collections.Generic.IEnumerable`1<System.String>,System.Type,System.Boolean,CSharpx.Maybe`1<System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueMapper_MapValuesImpl_m7744B28FA1375A4AC9BEB004E35F1555193462A3 (RuntimeObject* ___specProps0, RuntimeObject* ___values1, Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* ___converter2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_0 = (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552*)il2cpp_codegen_object_new(U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMapValuesImplU3Ed__1__ctor_m52A1FFA7449F671FC94B9016494ADBE68A3FE49A(L_0, ((int32_t)-2), NULL);
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_1 = L_0;
		RuntimeObject* L_2 = ___specProps0;
		NullCheck(L_1);
		L_1->___U3CU3E3__specProps_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__specProps_4), (void*)L_2);
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_3 = L_1;
		RuntimeObject* L_4 = ___values1;
		NullCheck(L_3);
		L_3->___U3CU3E3__values_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__values_6), (void*)L_4);
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_5 = L_3;
		Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* L_6 = ___converter2;
		NullCheck(L_5);
		L_5->___U3CU3E3__converter_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E3__converter_8), (void*)L_6);
		return L_5;
	}
}
// CSharpx.Maybe`1<System.Int32> CommandLine.Core.ValueMapper::CountOfMaxNumberOfValues(CommandLine.Core.Specification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ValueMapper_CountOfMaxNumberOfValues_m46D646C6D0FD8EC72523F8B35F30E58B6CE9D427 (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* ___specification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_0 = ___specification0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Specification_get_TargetType_mA3C78F74141DB26147C69DEF964117990648B5F6_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0037;
	}

IL_0011:
	{
		Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* L_4;
		L_4 = Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB(1, Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		return L_4;
	}

IL_0018:
	{
		Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_5 = ___specification0;
		NullCheck(L_5);
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_6;
		L_6 = Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline(L_5, NULL);
		bool L_7;
		L_7 = MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD(L_6, MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_8 = ___specification0;
		NullCheck(L_8);
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_9;
		L_9 = Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline(L_8, NULL);
		int32_t L_10;
		L_10 = MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA(L_9, (Exception_t*)NULL, MaybeExtensions_FromJustOrFail_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBE3C991C0FEF44B0B82B892678C4D8623D9032AA_RuntimeMethod_var);
		Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* L_11;
		L_11 = Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB(L_10, Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		return L_11;
	}

IL_0037:
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_12;
		L_12 = Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91(Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		return L_12;
	}
}
// CSharpx.Maybe`1<CommandLine.Error> CommandLine.Core.ValueMapper::MakeErrorInCaseOfMinConstraint(CommandLine.Core.Specification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* ValueMapper_MakeErrorInCaseOfMinConstraint_m41C48F6C50C9766ED95F80FA580F45EC14A7C535 (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* ___specification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_0 = ___specification0;
		NullCheck(L_0);
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_1;
		L_1 = Specification_get_Min_m8CB7BE46187311D7747D02DA3FC0F52BC348B398_inline(L_0, NULL);
		bool L_2;
		L_2 = MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD(L_1, MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* L_3;
		L_3 = Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193(Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var);
		NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* L_4 = ((NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_StaticFields*)il2cpp_codegen_static_fields_for(NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var))->___EmptyName_0;
		SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2* L_5 = (SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2*)il2cpp_codegen_object_new(SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SequenceOutOfRangeError__ctor_m77CFFCB3D80FC055F44F658988F01EB640E4BB0D(L_5, L_4, NULL);
		Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* L_6;
		L_6 = Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55(L_5, Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.ValueMapper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m846569374F5CBE1710021ED9BD7CA581FA634B3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* L_0 = (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA*)il2cpp_codegen_object_new(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m71BFF2307A8646A4104307538380CC4945F5B255(L_0, NULL);
		((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CommandLine.Core.ValueMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71BFF2307A8646A4104307538380CC4945F5B255 (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CommandLine.Core.SpecificationProperty CommandLine.Core.ValueMapper/<>c::<MapValues>b__0_0(System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* U3CU3Ec_U3CMapValuesU3Eb__0_0_m3B1E06FA9CEC4D1F0C5E41307CD93EA4AA029EB5 (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* __this, Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* ___pe0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m9F3675BBE8D527CAF0E311E8AC18DFBAFF35D93E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_0 = ___pe0;
		NullCheck(L_0);
		SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_1;
		L_1 = Tuple_2_get_Item1_m9F3675BBE8D527CAF0E311E8AC18DFBAFF35D93E_inline(L_0, Tuple_2_get_Item1_m9F3675BBE8D527CAF0E311E8AC18DFBAFF35D93E_RuntimeMethod_var);
		return L_1;
	}
}
// CSharpx.Maybe`1<CommandLine.Error> CommandLine.Core.ValueMapper/<>c::<MapValues>b__0_1(System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* U3CU3Ec_U3CMapValuesU3Eb__0_1_mD42BCEFD3ADF5E3DC7FCBEB6E19148F86C4FE0CC (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* __this, Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* ___pe0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m37FB30CEC18128308EDEE03A1F1CE3CE6369A9F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_0 = ___pe0;
		NullCheck(L_0);
		Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* L_1;
		L_1 = Tuple_2_get_Item2_m37FB30CEC18128308EDEE03A1F1CE3CE6369A9F0_inline(L_0, Tuple_2_get_Item2_m37FB30CEC18128308EDEE03A1F1CE3CE6369A9F0_RuntimeMethod_var);
		return L_1;
	}
}
// CommandLine.Error CommandLine.Core.ValueMapper/<>c::<MapValues>b__0_2(CSharpx.Just`1<CommandLine.Error>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* U3CU3Ec_U3CMapValuesU3Eb__0_2_mF26B7381C3235E9D08FF7DFEB6710BF20C37B358 (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* __this, Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Just_1_get_Value_m6D0CB08DE6D9A5611CA307A08684D83DF151FAA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* L_0 = ___e0;
		NullCheck(L_0);
		Error_t3293F6846040FCD3D08AC73387878D1CD6BDF36A* L_1;
		L_1 = Just_1_get_Value_m6D0CB08DE6D9A5611CA307A08684D83DF151FAA0_inline(L_0, Just_1_get_Value_m6D0CB08DE6D9A5611CA307A08684D83DF151FAA0_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean CommandLine.Core.ValueMapper/<>c::<MapValuesImpl>b__1_0(CommandLine.Core.SpecificationProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CMapValuesImplU3Eb__1_0_m967760B84AF8EAC9206F516E532C106EBC2BE42C (U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* __this, SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* ___s0, const RuntimeMethod* method) 
{
	{
		SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_0 = ___s0;
		NullCheck(L_0);
		Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_1;
		L_1 = SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline(L_0, NULL);
		bool L_2;
		L_2 = SpecificationExtensions_IsValue_m184338291421E414DF437E54488BDCE7D91C765F(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.ValueMapper/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m5C5DD29621B34CE4DCFCC0F4F6EB14BA77C4C610 (U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>> CommandLine.Core.ValueMapper/<>c__DisplayClass1_0::<MapValuesImpl>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* U3CU3Ec__DisplayClass1_0_U3CMapValuesImplU3Eb__1_m85AC134CA900C2A74C54E490F05F8B6F30EB4ACA (U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* __this, RuntimeObject* ___converted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_0 = __this->___pt_0;
		RuntimeObject* L_1 = ___converted0;
		Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* L_2;
		L_2 = Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890(L_1, Maybe_Just_TisRuntimeObject_m46AF0957441A6C48F4C284A41CF5295E3B60D890_RuntimeMethod_var);
		SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_3;
		L_3 = SpecificationPropertyExtensions_WithValue_m09D09E244BC2EAD243DE80BC66CA7B6BC0B63672(L_0, L_2, NULL);
		Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* L_4;
		L_4 = Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193(Maybe_Nothing_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_m587267D22D7B496E06AAD93D7AEE733288EE6193_RuntimeMethod_var);
		Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_5;
		L_5 = Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5(L_3, L_4, Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1__ctor_m52A1FFA7449F671FC94B9016494ADBE68A3FE49A (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1_System_IDisposable_Dispose_m330C81CF6AA718A3508058DAECB42FE17C433A1D (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CMapValuesImplU3Ed__1_U3CU3Em__Finally1_mAFD93D841953BADF371B2694E1ED75A23D0D3BAD(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMapValuesImplU3Ed__1_MoveNext_mEE34AA458B8EBBEC75CA76D0BC4AC9A54EAE9431 (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_Empty_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m09A228A17DFE16E68AB9171FA41A0628D3F64639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableExtensions_Empty_TisString_t_m00BE48ACF6A0DCC24ACEF8996A28C1F7541B0CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_m493DED3A0645F25D908B2B9825C90E6ED8FF8C50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mC69E253B03B56E600F352CECC99AFABBD34139B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m688F2F296300E6204B536781AED3B278BC7E1D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisString_t_m504EA8E24F95EBFBA4FD475BFEC97F72C31384F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF992B196B281719D9879CB0C0636001879FA8608_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t075CABA99C8023BC195B544B83AB361A2564FA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDCD9BAE94CF930DF72158205C65F1044926B81F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_IsNothing_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m07BBEE3A5B76EABAA2227106A4DAA4FE4BE88428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_mAB60A1601A5FA2A59C3540E20D645F88D9C2EC46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m14E221986EB897EAE27DED07C95E8EB2C402F48D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMapValuesImplU3Eb__1_0_m967760B84AF8EAC9206F516E532C106EBC2BE42C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CMapValuesImplU3Eb__1_m85AC134CA900C2A74C54E490F05F8B6F30EB4ACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* V_2 = NULL;
	Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D* V_3 = NULL;
	Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* V_4 = NULL;
	Func_2_tF992B196B281719D9879CB0C0636001879FA8608* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Func_2_tF992B196B281719D9879CB0C0636001879FA8608* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0288:
			{// begin fault (depth: 1)
				U3CMapValuesImplU3Ed__1_System_IDisposable_Dispose_m330C81CF6AA718A3508058DAECB42FE17C433A1D(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0028_1;
					}
					case 1:
					{
						goto IL_00c7_1;
					}
					case 2:
					{
						goto IL_0175_1;
					}
					case 3:
					{
						goto IL_01f9_1;
					}
					case 4:
					{
						goto IL_0262_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_028f;
			}

IL_0028_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_2 = (U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1_il2cpp_TypeInfo_var);
				NullCheck(L_2);
				U3CU3Ec__DisplayClass1_0__ctor_m5C5DD29621B34CE4DCFCC0F4F6EB14BA77C4C610(L_2, NULL);
				V_2 = L_2;
				RuntimeObject* L_3 = __this->___specProps_3;
				bool L_4;
				L_4 = EnumerableExtensions_Empty_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m09A228A17DFE16E68AB9171FA41A0628D3F64639(L_3, EnumerableExtensions_Empty_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m09A228A17DFE16E68AB9171FA41A0628D3F64639_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_0049_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_028f;
			}

IL_0049_1:
			{
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_5 = V_2;
				RuntimeObject* L_6 = __this->___specProps_3;
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_7;
				L_7 = Enumerable_First_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m688F2F296300E6204B536781AED3B278BC7E1D72(L_6, Enumerable_First_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m688F2F296300E6204B536781AED3B278BC7E1D72_RuntimeMethod_var);
				NullCheck(L_5);
				L_5->___pt_0 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&L_5->___pt_0), (void*)L_7);
				RuntimeObject* L_8 = __this->___values_5;
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_9 = V_2;
				NullCheck(L_9);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_10 = L_9->___pt_0;
				NullCheck(L_10);
				Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_11;
				L_11 = SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline(L_10, NULL);
				Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_12;
				L_12 = ValueMapper_CountOfMaxNumberOfValues_m46D646C6D0FD8EC72523F8B35F30E58B6CE9D427(L_11, NULL);
				RuntimeObject* L_13 = __this->___values_5;
				int32_t L_14;
				L_14 = Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3(L_13, Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3_RuntimeMethod_var);
				int32_t L_15;
				L_15 = MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA(L_12, L_14, MaybeExtensions_GetValueOrDefault_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA4335F2F7281F364FD88F4C0F42D56386EE15AA_RuntimeMethod_var);
				RuntimeObject* L_16;
				L_16 = Enumerable_Take_TisString_t_m504EA8E24F95EBFBA4FD475BFEC97F72C31384F4(L_8, L_15, Enumerable_Take_TisString_t_m504EA8E24F95EBFBA4FD475BFEC97F72C31384F4_RuntimeMethod_var);
				__this->___U3CtakenU3E5__2_9 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtakenU3E5__2_9), (void*)L_16);
				RuntimeObject* L_17 = __this->___U3CtakenU3E5__2_9;
				bool L_18;
				L_18 = EnumerableExtensions_Empty_TisString_t_m00BE48ACF6A0DCC24ACEF8996A28C1F7541B0CA9(L_17, EnumerableExtensions_Empty_TisString_t_m00BE48ACF6A0DCC24ACEF8996A28C1F7541B0CA9_RuntimeMethod_var);
				if (!L_18)
				{
					goto IL_00d5_1;
				}
			}
			{
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_19 = V_2;
				NullCheck(L_19);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_20 = L_19->___pt_0;
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_21 = V_2;
				NullCheck(L_21);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_22 = L_21->___pt_0;
				NullCheck(L_22);
				Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_23;
				L_23 = SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline(L_22, NULL);
				Maybe_1_t1CC8CF0F394467D1475DA5240452037443F82683* L_24;
				L_24 = ValueMapper_MakeErrorInCaseOfMinConstraint_m41C48F6C50C9766ED95F80FA580F45EC14A7C535(L_23, NULL);
				Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_25;
				L_25 = Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5(L_20, L_24, Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_028f;
			}

IL_00c7_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				V_0 = (bool)0;
				goto IL_028f;
			}

IL_00d5_1:
			{
				RuntimeObject* L_26 = __this->___specProps_3;
				RuntimeObject* L_27;
				L_27 = Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526(L_26, 1, Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
				Func_2_tF992B196B281719D9879CB0C0636001879FA8608* L_28 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_4;
				Func_2_tF992B196B281719D9879CB0C0636001879FA8608* L_29 = L_28;
				G_B8_0 = L_29;
				G_B8_1 = L_27;
				if (L_29)
				{
					G_B9_0 = L_29;
					G_B9_1 = L_27;
					goto IL_0100_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var);
				U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA* L_30 = ((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_tF992B196B281719D9879CB0C0636001879FA8608* L_31 = (Func_2_tF992B196B281719D9879CB0C0636001879FA8608*)il2cpp_codegen_object_new(Func_2_tF992B196B281719D9879CB0C0636001879FA8608_il2cpp_TypeInfo_var);
				NullCheck(L_31);
				Func_2__ctor_mC715C426634F40495118674E8347ADF487069A92(L_31, L_30, (intptr_t)((void*)U3CU3Ec_U3CMapValuesImplU3Eb__1_0_m967760B84AF8EAC9206F516E532C106EBC2BE42C_RuntimeMethod_var), NULL);
				Func_2_tF992B196B281719D9879CB0C0636001879FA8608* L_32 = L_31;
				((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_4 = L_32;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7CCA78C6E15A76004D1603E78485AD34AACF3EA_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_4), (void*)L_32);
				G_B9_0 = L_32;
				G_B9_1 = G_B8_1;
			}

IL_0100_1:
			{
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_33;
				L_33 = Enumerable_FirstOrDefault_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mC69E253B03B56E600F352CECC99AFABBD34139B7(G_B9_1, G_B9_0, Enumerable_FirstOrDefault_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_mC69E253B03B56E600F352CECC99AFABBD34139B7_RuntimeMethod_var);
				Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D* L_34;
				L_34 = MaybeExtensions_ToMaybe_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m14E221986EB897EAE27DED07C95E8EB2C402F48D(L_33, MaybeExtensions_ToMaybe_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m14E221986EB897EAE27DED07C95E8EB2C402F48D_RuntimeMethod_var);
				V_3 = L_34;
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_35 = V_2;
				NullCheck(L_35);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_36 = L_35->___pt_0;
				NullCheck(L_36);
				Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_37;
				L_37 = SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline(L_36, NULL);
				NullCheck(L_37);
				Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_38;
				L_38 = Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline(L_37, NULL);
				bool L_39;
				L_39 = MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD(L_38, MaybeExtensions_IsJust_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m10D98209B002A64CE4CE11E897D6F06F32D992CD_RuntimeMethod_var);
				if (!L_39)
				{
					goto IL_0183_1;
				}
			}
			{
				Maybe_1_tDD4228571CDE0AD30AB871B573E229832BE81A6D* L_40 = V_3;
				bool L_41;
				L_41 = MaybeExtensions_IsNothing_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m07BBEE3A5B76EABAA2227106A4DAA4FE4BE88428(L_40, MaybeExtensions_IsNothing_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m07BBEE3A5B76EABAA2227106A4DAA4FE4BE88428_RuntimeMethod_var);
				if (!L_41)
				{
					goto IL_0183_1;
				}
			}
			{
				RuntimeObject* L_42 = __this->___values_5;
				RuntimeObject* L_43 = __this->___U3CtakenU3E5__2_9;
				int32_t L_44;
				L_44 = Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3(L_43, Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3_RuntimeMethod_var);
				RuntimeObject* L_45;
				L_45 = Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0(L_42, L_44, Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0_RuntimeMethod_var);
				bool L_46;
				L_46 = Enumerable_Any_TisString_t_m493DED3A0645F25D908B2B9825C90E6ED8FF8C50(L_45, Enumerable_Any_TisString_t_m493DED3A0645F25D908B2B9825C90E6ED8FF8C50_RuntimeMethod_var);
				if (!L_46)
				{
					goto IL_0183_1;
				}
			}
			{
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_47 = V_2;
				NullCheck(L_47);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_48 = L_47->___pt_0;
				il2cpp_codegen_runtime_class_init_inline(NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var);
				NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* L_49 = ((NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_StaticFields*)il2cpp_codegen_static_fields_for(NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var))->___EmptyName_0;
				SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2* L_50 = (SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2*)il2cpp_codegen_object_new(SequenceOutOfRangeError_t6C756DF94652FA0E7C7B83E3D4DF236A76DBEFD2_il2cpp_TypeInfo_var);
				NullCheck(L_50);
				SequenceOutOfRangeError__ctor_m77CFFCB3D80FC055F44F658988F01EB640E4BB0D(L_50, L_49, NULL);
				Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* L_51;
				L_51 = Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55(L_50, Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55_RuntimeMethod_var);
				Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_52;
				L_52 = Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5(L_48, L_51, Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_52);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_028f;
			}

IL_0175_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				V_0 = (bool)0;
				goto IL_028f;
			}

IL_0183_1:
			{
				Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* L_53 = __this->___converter_7;
				RuntimeObject* L_54 = __this->___U3CtakenU3E5__2_9;
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_55 = V_2;
				NullCheck(L_55);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_56 = L_55->___pt_0;
				NullCheck(L_56);
				PropertyInfo_t* L_57;
				L_57 = SpecificationProperty_get_Property_m1EBE86A045D2AE8EB7A450FA9511B299A25E0C48_inline(L_56, NULL);
				NullCheck(L_57);
				Type_t* L_58;
				L_58 = VirtualFuncInvoker0< Type_t* >::Invoke(24 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_57);
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_59 = V_2;
				NullCheck(L_59);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_60 = L_59->___pt_0;
				NullCheck(L_60);
				Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_61;
				L_61 = SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline(L_60, NULL);
				NullCheck(L_61);
				int32_t L_62;
				L_62 = Specification_get_TargetType_mA3C78F74141DB26147C69DEF964117990648B5F6_inline(L_61, NULL);
				NullCheck(L_53);
				Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_63;
				L_63 = Func_4_Invoke_mDA9ABEE812382C874A21A144ADD9E1719F9A7E5D_inline(L_53, L_54, L_58, (bool)((((int32_t)((((int32_t)L_62) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_64 = V_2;
				Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7* L_65 = (Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7*)il2cpp_codegen_object_new(Func_2_tDB574E34A9300884F29E29EF6E79B43ECB9396B7_il2cpp_TypeInfo_var);
				NullCheck(L_65);
				Func_2__ctor_mCC286BFEDEAC546437B09F8DBB609F433690460D(L_65, L_64, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CMapValuesImplU3Eb__1_m85AC134CA900C2A74C54E490F05F8B6F30EB4ACA_RuntimeMethod_var), NULL);
				U3CU3Ec__DisplayClass1_0_t907188C9E440E3C0B8F6B8FEC815CC3C373750F1* L_66 = V_2;
				NullCheck(L_66);
				SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* L_67 = L_66->___pt_0;
				il2cpp_codegen_runtime_class_init_inline(NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var);
				NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF* L_68 = ((NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_StaticFields*)il2cpp_codegen_static_fields_for(NameInfo_tF38A0F181FA1ACB4E1CDAFB1DD347CD13B7CE6FF_il2cpp_TypeInfo_var))->___EmptyName_0;
				BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C* L_69 = (BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C*)il2cpp_codegen_object_new(BadFormatConversionError_tA1163AFE13C11BAB6893F4B7BEDB4C86E7943B6C_il2cpp_TypeInfo_var);
				NullCheck(L_69);
				BadFormatConversionError__ctor_m71D659D9478F91E6DBEB2345B2A193C3C001BEE1(L_69, L_68, NULL);
				Just_1_tB3C81E5464EB6C0BAAC610FCC2FFB9A8445A59ED* L_70;
				L_70 = Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55(L_69, Maybe_Just_TisError_t3293F6846040FCD3D08AC73387878D1CD6BDF36A_mB05EE46D9ABEFBECB94418D376E9CEEB609DBF55_RuntimeMethod_var);
				Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_71;
				L_71 = Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5(L_67, L_70, Tuple_Create_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_TisMaybe_1_t1CC8CF0F394467D1475DA5240452037443F82683_m22291EC650BA466A298D297B24D44945D51E55F5_RuntimeMethod_var);
				Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_72;
				L_72 = MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_mAB60A1601A5FA2A59C3540E20D645F88D9C2EC46(L_63, L_65, L_71, MaybeExtensions_MapValueOrDefault_TisRuntimeObject_TisTuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C_mAB60A1601A5FA2A59C3540E20D645F88D9C2EC46_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_72;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_72);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_028f;
			}

IL_01f9_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_73 = __this->___specProps_3;
				RuntimeObject* L_74;
				L_74 = Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526(L_73, 1, Enumerable_Skip_TisSpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8_m71D61AF790907552C5A5B1DF0B53A1CA09DCB526_RuntimeMethod_var);
				RuntimeObject* L_75 = __this->___values_5;
				RuntimeObject* L_76 = __this->___U3CtakenU3E5__2_9;
				int32_t L_77;
				L_77 = Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3(L_76, Enumerable_Count_TisString_t_m16A22ABD2063109B6BF270EE7D36BEC5422DD4B3_RuntimeMethod_var);
				RuntimeObject* L_78;
				L_78 = Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0(L_75, L_77, Enumerable_Skip_TisString_t_m49C9927148983B1AB391D4872315D3256272B1A0_RuntimeMethod_var);
				Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* L_79 = __this->___converter_7;
				RuntimeObject* L_80;
				L_80 = ValueMapper_MapValuesImpl_m7744B28FA1375A4AC9BEB004E35F1555193462A3(L_74, L_78, L_79, NULL);
				NullCheck(L_80);
				RuntimeObject* L_81;
				L_81 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>::GetEnumerator() */, IEnumerable_1_t075CABA99C8023BC195B544B83AB361A2564FA68_il2cpp_TypeInfo_var, L_80);
				__this->___U3CU3E7__wrap2_10 = L_81;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_10), (void*)L_81);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_026a_1;
			}

IL_0242_1:
			{
				RuntimeObject* L_82 = __this->___U3CU3E7__wrap2_10;
				NullCheck(L_82);
				Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_83;
				L_83 = InterfaceFuncInvoker0< Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>>::get_Current() */, IEnumerator_1_tDCD9BAE94CF930DF72158205C65F1044926B81F5_il2cpp_TypeInfo_var, L_82);
				V_4 = L_83;
				Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_84 = V_4;
				__this->___U3CU3E2__current_1 = L_84;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_84);
				__this->___U3CU3E1__state_0 = 4;
				V_0 = (bool)1;
				goto IL_028f;
			}

IL_0262_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_026a_1:
			{
				RuntimeObject* L_85 = __this->___U3CU3E7__wrap2_10;
				NullCheck(L_85);
				bool L_86;
				L_86 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_85);
				if (L_86)
				{
					goto IL_0242_1;
				}
			}
			{
				U3CMapValuesImplU3Ed__1_U3CU3Em__Finally1_mAFD93D841953BADF371B2694E1ED75A23D0D3BAD(__this, NULL);
				__this->___U3CU3E7__wrap2_10 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_10), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_028f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_028f:
	{
		bool L_87 = V_0;
		return L_87;
	}
}
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1_U3CU3Em__Finally1_mAFD93D841953BADF371B2694E1ED75A23D0D3BAD (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2_10;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2_10;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.Collections.Generic.IEnumerator<System.Tuple<CommandLine.Core.SpecificationProperty,CSharpx.Maybe<CommandLine.Error>>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* U3CMapValuesImplU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_TupleU3CCommandLine_Core_SpecificationPropertyU2CCSharpx_MaybeU3CCommandLine_ErrorU3EU3EU3E_get_Current_mA56A330A0DCDAA84785C004A41DD31A6F989CB80 (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	{
		Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMapValuesImplU3Ed__1_System_Collections_IEnumerator_Reset_m8C08DFADB2546A475344CA4ADA5F44922804E9D2 (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMapValuesImplU3Ed__1_System_Collections_IEnumerator_Reset_m8C08DFADB2546A475344CA4ADA5F44922804E9D2_RuntimeMethod_var)));
	}
}
// System.Object CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMapValuesImplU3Ed__1_System_Collections_IEnumerator_get_Current_m3F56269258D48771AD63A167EAAB33FFDAE1AFDB (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	{
		Tuple_2_tBCB1CE3B5186058CA5F9543BF6A912584462314C* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<CommandLine.Core.SpecificationProperty,CSharpx.Maybe`1<CommandLine.Error>>> CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.Collections.Generic.IEnumerable<System.Tuple<CommandLine.Core.SpecificationProperty,CSharpx.Maybe<CommandLine.Error>>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMapValuesImplU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_TupleU3CCommandLine_Core_SpecificationPropertyU2CCSharpx_MaybeU3CCommandLine_ErrorU3EU3EU3E_GetEnumerator_mA1E692B9059507B0EA94DE0B9C7357C586322353 (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_3 = (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552*)il2cpp_codegen_object_new(U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CMapValuesImplU3Ed__1__ctor_m52A1FFA7449F671FC94B9016494ADBE68A3FE49A(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__specProps_4;
		NullCheck(L_4);
		L_4->___specProps_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___specProps_3), (void*)L_5);
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__values_6;
		NullCheck(L_6);
		L_6->___values_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___values_5), (void*)L_7);
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_8 = V_0;
		Func_4_t608CAD728506ABE3B1D02F203D90C41BF38980B1* L_9 = __this->___U3CU3E3__converter_8;
		NullCheck(L_8);
		L_8->___converter_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___converter_7), (void*)L_9);
		U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator CommandLine.Core.ValueMapper/<MapValuesImpl>d__1::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMapValuesImplU3Ed__1_System_Collections_IEnumerable_GetEnumerator_m8854AB14BE6B63DFBED710312CD2CB9B4364886E (U3CMapValuesImplU3Ed__1_tE4B299B1C22873072EDF7A04BBCCAEF7CC666552* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CMapValuesImplU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_TupleU3CCommandLine_Core_SpecificationPropertyU2CCSharpx_MaybeU3CCommandLine_ErrorU3EU3EU3E_GetEnumerator_mA1E692B9059507B0EA94DE0B9C7357C586322353(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.ValueSpecification::.ctor(System.Int32,System.String,System.Boolean,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<System.Int32>,CSharpx.Maybe`1<System.Object>,System.String,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Type,CommandLine.Core.TargetType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueSpecification__ctor_m97218449928E1EEF79F2B33D5D323239977F2340 (ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F* __this, int32_t ___index0, String_t* ___metaName1, bool ___required2, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___min3, Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* ___max4, Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* ___defaultValue5, String_t* ___helpText6, String_t* ___metaValue7, RuntimeObject* ___enumValues8, Type_t* ___conversionType9, int32_t ___targetType10, bool ___hidden11, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___required2;
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_1 = ___min3;
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_2 = ___max4;
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_3 = ___defaultValue5;
		String_t* L_4 = ___helpText6;
		String_t* L_5 = ___metaValue7;
		RuntimeObject* L_6 = ___enumValues8;
		Type_t* L_7 = ___conversionType9;
		int32_t L_8 = ___targetType10;
		bool L_9 = ___hidden11;
		Specification__ctor_mF972681624620524322D90A429CF10636DFB2735(__this, 1, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		int32_t L_10 = ___index0;
		__this->___index_11 = L_10;
		String_t* L_11 = ___metaName1;
		__this->___metaName_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___metaName_12), (void*)L_11);
		return;
	}
}
// CommandLine.Core.ValueSpecification CommandLine.Core.ValueSpecification::FromAttribute(CommandLine.ValueAttribute,System.Type,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F* ValueSpecification_FromAttribute_mD80185DA6A76B60698EE61DF8DCBFF525CA42963 (ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* ___attribute0, Type_t* ___conversionType1, RuntimeObject* ___enumValues2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	String_t* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	bool G_B1_0 = false;
	String_t* G_B1_1 = NULL;
	int32_t G_B1_2 = 0;
	Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* G_B3_0 = NULL;
	bool G_B3_1 = false;
	String_t* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* G_B5_0 = NULL;
	bool G_B5_1 = false;
	String_t* G_B5_2 = NULL;
	int32_t G_B5_3 = 0;
	Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* G_B4_0 = NULL;
	bool G_B4_1 = false;
	String_t* G_B4_2 = NULL;
	int32_t G_B4_3 = 0;
	Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* G_B6_0 = NULL;
	Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* G_B6_1 = NULL;
	bool G_B6_2 = false;
	String_t* G_B6_3 = NULL;
	int32_t G_B6_4 = 0;
	{
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_0 = ___attribute0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ValueAttribute_get_Index_mB7432C8FE4119F24B7DDC7249C4B67F00D9220EC_inline(L_0, NULL);
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_2 = ___attribute0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ValueAttribute_get_MetaName_m08BF643273CC73FBC5E820E204EAA76900E54FDF_inline(L_2, NULL);
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_4 = ___attribute0;
		NullCheck(L_4);
		bool L_5;
		L_5 = BaseAttribute_get_Required_m32F3BB3F7C40F92BE8D31FD04C50EAE22972C8CA_inline(L_4, NULL);
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_6 = ___attribute0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = BaseAttribute_get_Min_m733DC7C4879B5EA2635011AFE0504F8DF98CA3D7_inline(L_6, NULL);
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			goto IL_0028;
		}
	}
	{
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_8 = ___attribute0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BaseAttribute_get_Min_m733DC7C4879B5EA2635011AFE0504F8DF98CA3D7_inline(L_8, NULL);
		Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* L_10;
		L_10 = Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB(L_9, Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002d;
	}

IL_0028:
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_11;
		L_11 = Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91(Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		G_B3_0 = ((Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9*)(L_11));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002d:
	{
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_12 = ___attribute0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = BaseAttribute_get_Max_m0D184E9D2747223B993BFD0B9301852C5DB52919_inline(L_12, NULL);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			G_B5_3 = G_B3_3;
			goto IL_0043;
		}
	}
	{
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_14 = ___attribute0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = BaseAttribute_get_Max_m0D184E9D2747223B993BFD0B9301852C5DB52919_inline(L_14, NULL);
		Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9* L_16;
		L_16 = Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB(L_15, Maybe_Just_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA1C1C514C1DF6E8087F509FC6A2A0339FD1243FB_RuntimeMethod_var);
		G_B6_0 = L_16;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0048;
	}

IL_0043:
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_17;
		L_17 = Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91(Maybe_Nothing_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDE722ECA414B95509ECFAA6CE80583969D464B91_RuntimeMethod_var);
		G_B6_0 = ((Just_1_t9385318115DE4252FBA0D910F48A08BBD5E6AED9*)(L_17));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0048:
	{
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_18 = ___attribute0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = BaseAttribute_get_Default_m94D0085FF0599F4C0E8A99AECA09BA94EF60C2E2_inline(L_18, NULL);
		Maybe_1_t8A21E217FEBC77CAC8DC6A618331C261D471C1F9* L_20;
		L_20 = MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC(L_19, MaybeExtensions_ToMaybe_TisRuntimeObject_m8B329A5D4748133290F67190406C61A337B9C0EC_RuntimeMethod_var);
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_21 = ___attribute0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = BaseAttribute_get_HelpText_mFB0AFAACF4DCA87A61EB82540D47B954BFB7D6EE(L_21, NULL);
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_23 = ___attribute0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = BaseAttribute_get_MetaValue_m28E3B7B0E528D9D2DFFC368192A9540CC22F4994_inline(L_23, NULL);
		RuntimeObject* L_25 = ___enumValues2;
		Type_t* L_26 = ___conversionType1;
		Type_t* L_27 = ___conversionType1;
		int32_t L_28;
		L_28 = ReflectionExtensions_ToTargetType_m46B6B6FE5F42166E06F31FB6DD01EB971781B97C(L_27, NULL);
		ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* L_29 = ___attribute0;
		NullCheck(L_29);
		bool L_30;
		L_30 = BaseAttribute_get_Hidden_mCC368F2255941BA1715CA0BED558F82E6F3725C0_inline(L_29, NULL);
		ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F* L_31 = (ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F*)il2cpp_codegen_object_new(ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		ValueSpecification__ctor_m97218449928E1EEF79F2B33D5D323239977F2340(L_31, G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_20, L_22, L_24, L_25, L_26, L_28, L_30, NULL);
		return L_31;
	}
}
// System.Int32 CommandLine.Core.ValueSpecification::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueSpecification_get_Index_m69404A20C6F23C9E8AB1641297195E22DD5DB121 (ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___index_11;
		return L_0;
	}
}
// System.String CommandLine.Core.ValueSpecification::get_MetaName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueSpecification_get_MetaName_mD1A368EB23DF404F95509E134962091A7E8CECBA (ValueSpecification_t5FA5EBAC60A549A6B4E5BD20DB06B68913F4781F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___metaName_12;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Verb::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Verb__ctor_mF852C13835032365B14A9CA8224B21CD3F29B4E4 (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* __this, String_t* ___name0, String_t* ___helpText1, bool ___hidden2, bool ___isDefault3, const RuntimeMethod* method) 
{
	String_t* G_B4_0 = NULL;
	Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Verb__ctor_mF852C13835032365B14A9CA8224B21CD3F29B4E4_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___name0;
		__this->___name_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_3);
		String_t* L_4 = ___helpText1;
		String_t* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = __this;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = __this;
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF9CAD30E436DEEAC72C4C8B6128EC49BE031AA3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Verb__ctor_mF852C13835032365B14A9CA8224B21CD3F29B4E4_RuntimeMethod_var)));
	}

IL_0031:
	{
		NullCheck(G_B4_1);
		G_B4_1->___helpText_1 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___helpText_1), (void*)G_B4_0);
		bool L_7 = ___hidden2;
		__this->___hidden_2 = L_7;
		bool L_8 = ___isDefault3;
		__this->___isDefault_3 = L_8;
		return;
	}
}
// System.String CommandLine.Core.Verb::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Verb_get_Name_m4DF65891B8F1F06712C6837776D1AC67675A7D56 (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.String CommandLine.Core.Verb::get_HelpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Verb_get_HelpText_m6887D3BEAE6B87E070D2C00563E01BD766686EE0 (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___helpText_1;
		return L_0;
	}
}
// System.Boolean CommandLine.Core.Verb::get_Hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Verb_get_Hidden_mC88A1606623199F9B2015A26656B87C8C73F1C20 (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hidden_2;
		return L_0;
	}
}
// System.Boolean CommandLine.Core.Verb::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Verb_get_IsDefault_m27AB48940F8F5D7A6D857F2FFA70D12C8B351B79 (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isDefault_3;
		return L_0;
	}
}
// CommandLine.Core.Verb CommandLine.Core.Verb::FromAttribute(CommandLine.VerbAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* Verb_FromAttribute_m3545D664C752DF71904EAAA4E59DED892D60911E (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* L_0 = ___attribute0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VerbAttribute_get_Name_m455F29E03D19313B80FCEE882069E582220C2659_inline(L_0, NULL);
		VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* L_2 = ___attribute0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VerbAttribute_get_HelpText_m6E32B62F941FA9854779C1DD6896E17E9DFE3829(L_2, NULL);
		VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* L_4 = ___attribute0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VerbAttribute_get_Hidden_m5E6DAE17F0CC3FBCAC567C6182E1B3B826CC9008_inline(L_4, NULL);
		VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* L_6 = ___attribute0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VerbAttribute_get_IsDefault_mEE56C8EF2A790B441A7906C152BD136DCCEFB63D_inline(L_6, NULL);
		Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* L_8 = (Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A*)il2cpp_codegen_object_new(Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Verb__ctor_mF852C13835032365B14A9CA8224B21CD3F29B4E4(L_8, L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<CommandLine.Core.Verb,System.Type>> CommandLine.Core.Verb::SelectFromTypes(System.Collections.Generic.IEnumerable`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Verb_SelectFromTypes_mB0C7048B050CA5A43AE15018FE814C5893B4958F (RuntimeObject* ___types0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF543BEAB0F358F24B0932150C1DA422E05761523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_TisTuple_2_t32430302606D9C516782A886D451215A6B93D875_mD2412A43FC4AC1E05597595A1C1C281DC3C17B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF20BE212C3917A7992365E19D4396D7A521F2A75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSelectFromTypesU3Eb__14_0_mB8B1C25A1FCC3977EFB7DF1B2BDFDC6D0DB00F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSelectFromTypesU3Eb__14_1_m0CF11F7873DC8F00C939C9997260DF9DF1EAFB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSelectFromTypesU3Eb__14_2_m56C536F7979C8637AB096CB0AF8F9C102101F277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		RuntimeObject* L_0 = ___types0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* L_1 = ((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* L_3 = ((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* L_4 = (Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1*)il2cpp_codegen_object_new(Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mB7699B41E236D68B50700FC685BBC4D335ED2C63(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CSelectFromTypesU3Eb__14_0_mB8B1C25A1FCC3977EFB7DF1B2BDFDC6D0DB00F2F_RuntimeMethod_var), NULL);
		Func_2_t230E1D525346666F89584DEF0A86C39E78463AA1* L_5 = L_4;
		((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisType_t_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF543BEAB0F358F24B0932150C1DA422E05761523(G_B2_1, G_B2_0, Enumerable_Select_TisType_t_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF543BEAB0F358F24B0932150C1DA422E05761523_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* L_7 = ((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2;
		Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* L_9 = ((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* L_10 = (Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2*)il2cpp_codegen_object_new(Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m8C5182168B42D654F9C0CCE71D92B378DB60E813(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CSelectFromTypesU3Eb__14_1_m0CF11F7873DC8F00C939C9997260DF9DF1EAFB82_RuntimeMethod_var), NULL);
		Func_2_tC41CE574D744F084C20DDA455FBF1CD767DE87C2* L_11 = L_10;
		((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0044:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF20BE212C3917A7992365E19D4396D7A521F2A75(G_B4_1, G_B4_0, Enumerable_Where_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_mF20BE212C3917A7992365E19D4396D7A521F2A75_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* L_13 = ((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_2_3;
		Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* L_15 = ((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* L_16 = (Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802*)il2cpp_codegen_object_new(Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_2__ctor_mC294218E988E85A8808865528BC97AF061A3295C(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CSelectFromTypesU3Eb__14_2_m56C536F7979C8637AB096CB0AF8F9C102101F277_RuntimeMethod_var), NULL);
		Func_2_t1E630AC4CBFE9D7C323402C8AFC0AB06A88B8802* L_17 = L_16;
		((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_2_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9__14_2_3), (void*)L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
	}

IL_0068:
	{
		RuntimeObject* L_18;
		L_18 = Enumerable_Select_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_TisTuple_2_t32430302606D9C516782A886D451215A6B93D875_mD2412A43FC4AC1E05597595A1C1C281DC3C17B28(G_B6_1, G_B6_0, Enumerable_Select_TisU3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_TisTuple_2_t32430302606D9C516782A886D451215A6B93D875_mD2412A43FC4AC1E05597595A1C1C281DC3C17B28_RuntimeMethod_var);
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CommandLine.Core.Verb/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF9BFC6F47A7BF78EB9DE837017152A72F8A63702 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* L_0 = (U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1*)il2cpp_codegen_object_new(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF0591489FA13FB9EC1B9709CBFBF5213B15E69B4(L_0, NULL);
		((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CommandLine.Core.Verb/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0591489FA13FB9EC1B9709CBFBF5213B15E69B4 (U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// <>f__AnonymousType12`2<System.Type,System.Object[]> CommandLine.Core.Verb/<>c::<SelectFromTypes>b__14_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* U3CU3Ec_U3CSelectFromTypesU3Eb__14_0_mB8B1C25A1FCC3977EFB7DF1B2BDFDC6D0DB00F2F (U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType12_2__ctor_mE311EB8268AA271B7E48D7FAB89D64E40675640B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		Type_t* L_1 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m955447D705328DD4F0F5AF9EC89543E63CE05870(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(19 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_2, L_4, (bool)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924((RuntimeObject*)L_5, Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_RuntimeMethod_var);
		U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* L_7 = (U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U3CU3Ef__AnonymousType12_2__ctor_mE311EB8268AA271B7E48D7FAB89D64E40675640B(L_7, L_0, L_6, U3CU3Ef__AnonymousType12_2__ctor_mE311EB8268AA271B7E48D7FAB89D64E40675640B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Boolean CommandLine.Core.Verb/<>c::<SelectFromTypes>b__14_1(<>f__AnonymousType12`2<System.Type,System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSelectFromTypesU3Eb__14_1_m0CF11F7873DC8F00C939C9997260DF9DF1EAFB82 (U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* __this, U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* ___U3CU3Eh__TransparentIdentifier00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* L_0 = ___U3CU3Eh__TransparentIdentifier00;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_inline(L_0, U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_RuntimeMethod_var);
		NullCheck(L_1);
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)1))? 1 : 0);
	}
}
// System.Tuple`2<CommandLine.Core.Verb,System.Type> CommandLine.Core.Verb/<>c::<SelectFromTypes>b__14_2(<>f__AnonymousType12`2<System.Type,System.Object[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t32430302606D9C516782A886D451215A6B93D875* U3CU3Ec_U3CSelectFromTypesU3Eb__14_2_m56C536F7979C8637AB096CB0AF8F9C102101F277 (U3CU3Ec_t2E00195228B456BB243980B1AA208C1F138729F1* __this, U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* ___U3CU3Eh__TransparentIdentifier00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisVerb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_TisType_t_m615D0390421E522E71E3FDAFBC7ED4D8613E734C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType12_2_get_type_mC0BF3FFA552D26E4FF485E4F3FE6BBB9F9D3AF9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* L_0 = ___U3CU3Eh__TransparentIdentifier00;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_inline(L_0, U3CU3Ef__AnonymousType12_2_get_attrs_m7A3E0CC997F596298689604EE8A4D2165EA68A88_RuntimeMethod_var);
		RuntimeObject* L_2;
		L_2 = Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E((RuntimeObject*)L_1, Enumerable_Single_TisRuntimeObject_m5AA34C00130EAA359B0501E3D62D81193287663E_RuntimeMethod_var);
		Verb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A* L_3;
		L_3 = Verb_FromAttribute_m3545D664C752DF71904EAAA4E59DED892D60911E(((VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01*)CastclassClass((RuntimeObject*)L_2, VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01_il2cpp_TypeInfo_var)), NULL);
		U3CU3Ef__AnonymousType12_2_tA97081C6F5E418E463EAA091CB3F7C631DD93EA0* L_4 = ___U3CU3Eh__TransparentIdentifier00;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = U3CU3Ef__AnonymousType12_2_get_type_mC0BF3FFA552D26E4FF485E4F3FE6BBB9F9D3AF9D_inline(L_4, U3CU3Ef__AnonymousType12_2_get_type_mC0BF3FFA552D26E4FF485E4F3FE6BBB9F9D3AF9D_RuntimeMethod_var);
		Tuple_2_t32430302606D9C516782A886D451215A6B93D875* L_6;
		L_6 = Tuple_Create_TisVerb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_TisType_t_m615D0390421E522E71E3FDAFBC7ED4D8613E734C(L_3, L_5, Tuple_Create_TisVerb_t78572172DFE7BC5EA8D219257BF1592CFB20B57A_TisType_t_m615D0390421E522E71E3FDAFBC7ED4D8613E734C_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Token_get_Text_m38B57FEF82A4B68024C266B79DEB32F906893A93_inline (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___text_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypeDescriptor_get_TargetType_mB123E330F221BBAFD280DA11A0CCE5433933302C_inline (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___targetType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Token_get_Tag_mCCEF7E6142C535BD609106512F3ED612AFEE9CE9_inline (Token_t379840AB68FBC42DE9836DA68DFBBF9ACF018B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___tag_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Value_get_ExplicitlyAssigned_m41A1A51FB301E3BCE00EB298C7EB7FBDA7D3A353_inline (Value_t40CD443232B5F17874C367F8409A296A446E287A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___explicitlyAssigned_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* TypeDescriptor_get_MaxItems_mCC7C4B7A6EE9D322883F7C4DA90923F9773D6F10_inline (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) 
{
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = __this->___maxItems_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* TypeDescriptor_get_NextValue_mE05E1FDB44A0F4BAB550EB42720DB324B4DE61EC_inline (TypeDescriptor_t01A99BD37834DDEEAD548DFD445FCC204D3C07E3* __this, const RuntimeMethod* method) 
{
	{
		Maybe_1_tDCA918285AAED25BD6376101439C8111C5B713EC* L_0 = __this->___nextValue_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionSpecification_get_ShortName_m8CE982353B36EC4F8E8407AAB90D48374029EF03_inline (OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___shortName_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionSpecification_get_LongName_m87EF967278092D6328F17BC562D7150FC02358B1_inline (OptionSpecification_tB8CF113720D4E725A0E5A653CF13C6D8FA6B5A92* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___longName_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Specification_get_TargetType_mA3C78F74141DB26147C69DEF964117990648B5F6_inline (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___targetType_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* Specification_get_Max_m5FB5A5FAA3300B6302DAAB07EF61F90384E77493_inline (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, const RuntimeMethod* method) 
{
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = __this->___max_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* Specification_get_Min_m8CB7BE46187311D7747D02DA3FC0F52BC348B398_inline (Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* __this, const RuntimeMethod* method) 
{
	{
		Maybe_1_t319880434E185B1CCA1ED92C73EB09EC98032C5B* L_0 = __this->___min_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* SpecificationProperty_get_Specification_m95DA55743ACBBF13E89AEEBA19C78478F67B88F8_inline (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* __this, const RuntimeMethod* method) 
{
	{
		Specification_t36D8889D5B2EEFB29B47C996FDB25264248F825E* L_0 = __this->___specification_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* SpecificationProperty_get_Property_m1EBE86A045D2AE8EB7A450FA9511B299A25E0C48_inline (SpecificationProperty_tF603B37618C922F28D0B67C77F86C5A01857E4F8* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___property_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueAttribute_get_Index_mB7432C8FE4119F24B7DDC7249C4B67F00D9220EC_inline (ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___index_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueAttribute_get_MetaName_m08BF643273CC73FBC5E820E204EAA76900E54FDF_inline (ValueAttribute_t127B4699FFE5C55C6B3574665554475A376303FB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___metaName_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseAttribute_get_Required_m32F3BB3F7C40F92BE8D31FD04C50EAE22972C8CA_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRequiredU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseAttribute_get_Min_m733DC7C4879B5EA2635011AFE0504F8DF98CA3D7_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___min_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseAttribute_get_Max_m0D184E9D2747223B993BFD0B9301852C5DB52919_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___max_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseAttribute_get_Default_m94D0085FF0599F4C0E8A99AECA09BA94EF60C2E2_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___default_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BaseAttribute_get_MetaValue_m28E3B7B0E528D9D2DFFC368192A9540CC22F4994_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___metaValue_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseAttribute_get_Hidden_mCC368F2255941BA1715CA0BED558F82E6F3725C0_inline (BaseAttribute_t6209C4EC65431178428EF104A4CAC6C90C52CAA0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHiddenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VerbAttribute_get_Name_m455F29E03D19313B80FCEE882069E582220C2659_inline (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VerbAttribute_get_Hidden_m5E6DAE17F0CC3FBCAC567C6182E1B3B826CC9008_inline (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHiddenU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VerbAttribute_get_IsDefault_mEE56C8EF2A790B441A7906C152BD136DCCEFB63D_inline (VerbAttribute_t60FBC8FFB64DFA8001966411E65D00E601C41A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isDefault_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_mF040BA6AF0759FE77CA5FFAC3C0615D8C090F579_gshared_inline (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1FDB82A936AD6A68F455DE792FD9454CE1A4FC9F_gshared_inline (Func_2_t213311159653563BDCC21CC060B449705C96791F* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m4EEEB798361BB42E7C83A216F3D2D20A54B8945E_gshared_inline (Tuple_2_t02042C00DD9DC76FD89741948664051712B49DC8* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Just_1_get_Value_mC78925FE2FFD38ACF2D0CF7A783CB685C3A435A4_gshared_inline (Just_1_t799C2769CA2A7D4F53BBED201B41D88E63DEC2FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_4_Invoke_m11C46A95BF0E4E6EA682B45E6DA7504AE2FE8756_gshared_inline (Func_4_t7868C163F386DC1EE76E0249D7EBB3A64555B0E7* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, bool ___arg32, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ef__AnonymousType12_2_get_attrs_m9C2EBE5F135EF8A0994DB223D8044B7D5D0888FA_gshared_inline (U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CattrsU3Ei__Field_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ef__AnonymousType12_2_get_type_m5B75400ADAF8678C7290649380EE6B0A6257A8E3_gshared_inline (U3CU3Ef__AnonymousType12_2_tC0856996C61146DE4F1697CA63E7379F7D3C554C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CtypeU3Ei__Field_0;
		return L_0;
	}
}
