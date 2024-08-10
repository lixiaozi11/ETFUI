#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition>
struct Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol>
struct Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951;
// ET.ETTask`1<System.Boolean>
struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F;
// System.Collections.Generic.HashSet`1<System.Action>
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<System.Action>
struct IEqualityComparer_1_t9C770ED0AAB2B03D163EE9D403005B9F2D2425CF;
// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101;
// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType>
struct List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<ET.ETTask`1<System.Boolean>>
struct Queue_1_tD1128FC48A9924A7893C010373A943FBC90808D9;
// System.Collections.Generic.Queue`1<ET.ETTask>
struct Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[]
struct KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D;
// System.Collections.Generic.HashSet`1/Slot<System.Action>[]
struct SlotU5BU5D_tFBFF4140D072DCDE2240FAD3BAC4EB63A2CE63D6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ET.ETTask[]
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8;
// ILRuntime.CLR.Method.ExceptionHandler[]
struct ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80;
// ILRuntime.CLR.TypeSystem.IType[]
struct ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[]
struct OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D;
// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[]
struct OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ILRuntime.Runtime.Enviorment.AppDomain
struct AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// ILRuntime.CLR.Method.CLRMethod
struct CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5;
// ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate
struct CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690;
// ILRuntime.CLR.TypeSystem.CLRType
struct CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ET.ETCancellationToken
struct ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1;
// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// ILRuntime.Runtime.Intepreter.IDelegateAdapter
struct IDelegateAdapter_t58FB4067DE04B629F7528DD1A3E2DA091C0D9427;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ILRuntime.CLR.Method.ILMethod
struct ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7;
// ILRuntime.Reflection.ILRuntimeConstructorInfo
struct ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA;
// ILRuntime.Reflection.ILRuntimeMethodInfo
struct ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48;
// ILRuntime.CLR.TypeSystem.ILType
struct ILType_tD812655AF7716306B8168AD6F08152435B77708C;
// ILRuntime.CLR.TypeSystem.IType
struct IType_tC510B754395152F7217FD34CD69B8AFA1676AA9E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// ET.KcpLog
struct KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F;
// ET.KcpOutput
struct KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// ILRuntime.Mono.Cecil.MethodDefinition
struct MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ET.ETTaskHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748;
// ET.ETTaskHelper/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891;
// ET.ETTaskHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048;
// ET.ETTaskHelper/CoroutineBlocker
struct CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A29BDC20BCE88DC132CE04A01DD7C3469EA8EB;
IL2CPP_EXTERN_C String_t* _stringLiteral14B9C4ED649A12F3286872BC02BF44694FF70613;
IL2CPP_EXTERN_C String_t* _stringLiteral59FB7F99FEC6B81FAA83ECC3FE9929AB4E5FB0CD;
IL2CPP_EXTERN_C String_t* _stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B17BC8CAFB0366DD8D8EA29F1A2C07CCE73DC5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpCheck_mB6388F02E28B9546DE18FEDA13EEAB994CEB4342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpFlush_mF506D3DA1FA2766D024F279EF76DCA35CAB31A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpGetconv_m037A2BC3A099E17893625855C255F610FF01EE5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpInput_m2C4611B8C82D5E1B69DC91C65941E9C2430043AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpNodelay_mB4F011762667D922BD630EE3E98E7A47919B8AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpPeeksize_m3A0A7000ED0C2312BCC7F006CE1ADEC251ACCD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpRecv_mD9A5EFEE7C95305C4EA7E598C26DD0BA775E062B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpRelease_mECBFAE11EDB2EBF2CEF2C274BD39417575A1B65B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSend_m9F39589F9A2108704672362977FA3BD6913A3AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetminrto_m910E4FB08F1FB8DBB57D6AF5DFB7AFC7EEE0F161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpSetmtu_m6A881ABC60FDF876C62E1DBCCBD1C8D72CA36E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpUpdate_mF6F252DD9538494E7C1AD4B7F605753596AB15D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpWaitsnd_m1AEABF11A24CD848ECD483A60511B9C8B735849B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kcp_KcpWndsize_mCC6E714D801245A8987623FC873A4CAFD4F3DE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ET.ETTask`1<System.Boolean>
struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F  : public RuntimeObject
{
	// System.Boolean ET.ETTask`1::fromPool
	bool ___fromPool_1;
	// ET.AwaiterStatus ET.ETTask`1::state
	uint8_t ___state_2;
	// T ET.ETTask`1::value
	bool ___value_3;
	// System.Object ET.ETTask`1::callback
	RuntimeObject* ___callback_4;
};

struct ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F_StaticFields
{
	// System.Collections.Generic.Queue`1<ET.ETTask`1<T>> ET.ETTask`1::queue
	Queue_1_tD1128FC48A9924A7893C010373A943FBC90808D9* ___queue_0;
};

// System.Collections.Generic.HashSet`1<System.Action>
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tFBFF4140D072DCDE2240FAD3BAC4EB63A2CE63D6* ____slots_8;
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

// System.Collections.Generic.List`1<ET.ETTask>
struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<ET.ETTask>
struct Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// ET.ETCancellationToken
struct ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.Action> ET.ETCancellationToken::actions
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___actions_0;
};

// ET.ETTask
struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9  : public RuntimeObject
{
	// System.Boolean ET.ETTask::fromPool
	bool ___fromPool_2;
	// ET.AwaiterStatus ET.ETTask::state
	uint8_t ___state_3;
	// System.Object ET.ETTask::callback
	RuntimeObject* ___callback_4;
};

struct ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields
{
	// System.Action`1<System.Exception> ET.ETTask::ExceptionHandler
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___ExceptionHandler_0;
	// System.Collections.Generic.Queue`1<ET.ETTask> ET.ETTask::queue
	Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* ___queue_1;
};

// ET.ETTaskHelper
struct ETTaskHelper_t3B45F2D90A9C2BD9A6EAF512B3EDE3A8D13E2439  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// ILRuntime.CLR.Method.IMethodExtensions
struct IMethodExtensions_t2ED8FEEF30AA0BF6A988609E9ACCC7195C32215B  : public RuntimeObject
{
};

// ET.Kcp
struct Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30  : public RuntimeObject
{
};

struct Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields
{
	// ET.KcpOutput ET.Kcp::KcpOutput
	KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___KcpOutput_3;
	// ET.KcpLog ET.Kcp::KcpLog
	KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___KcpLog_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ET.Recast
struct Recast_tD185A230EB6DC6FEE5B363E529CC435229499B01  : public RuntimeObject
{
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

// ET.ETTaskHelper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass2_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass5_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048  : public RuntimeObject
{
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/<>c__DisplayClass6_0::coroutineBlocker
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___coroutineBlocker_0;
};

// ET.ETTaskHelper/CoroutineBlocker
struct CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A  : public RuntimeObject
{
	// System.Int32 ET.ETTaskHelper/CoroutineBlocker::count
	int32_t ___count_0;
	// System.Collections.Generic.List`1<ET.ETTask> ET.ETTaskHelper/CoroutineBlocker::tcss
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tcss_1;
};

// ET.ETAsyncTaskMethodBuilder`1<System.Boolean>
struct ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 
{
	// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1::tcs
	ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ___tcs_0;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Action>
struct Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<ET.ETTask>
struct Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// ET.AsyncETTaskCompletedMethodBuilder
struct AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031__padding[1];
	};
};

// ET.AsyncETVoidMethodBuilder
struct AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::<BuilderType>k__BackingField
	Type_t* ___U3CBuilderTypeU3Ek__BackingField_0;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// ET.ETAsyncTaskMethodBuilder
struct ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C 
{
	// ET.ETTask ET.ETAsyncTaskMethodBuilder::tcs
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___tcs_0;
};
// Native definition for P/Invoke marshalling of ET.ETAsyncTaskMethodBuilder
struct ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke
{
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___tcs_0;
};
// Native definition for COM marshalling of ET.ETAsyncTaskMethodBuilder
struct ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com
{
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___tcs_0;
};

// ET.ETTaskCompleted
struct ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 
{
	union
	{
		struct
		{
		};
		uint8_t ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1__padding[1];
	};
};

// ET.ETVoid
struct ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 
{
	union
	{
		struct
		{
		};
		uint8_t ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_tDDD35F21B154FD734DAEDC7EB9590218829A2803 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tDDD35F21B154FD734DAEDC7EB9590218829A2803__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t409360C9CD01BA65204DA283E875EA9C0461A5CA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t409360C9CD01BA65204DA283E875EA9C0461A5CA__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
struct __StaticArrayInitTypeSizeU3D160_t3B5C711DA8074509B7D048F3A4907F270480FAFD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t3B5C711DA8074509B7D048F3A4907F270480FAFD__padding[160];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1790
struct __StaticArrayInitTypeSizeU3D1790_t9716915A0E868099ABC7CE27B8B36F13C1B477BD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1790_t9716915A0E868099ABC7CE27B8B36F13C1B477BD__padding[1790];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22
struct __StaticArrayInitTypeSizeU3D22_t2232EFFB440507ACD734E4888BFA6E22C98D8455 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D22_t2232EFFB440507ACD734E4888BFA6E22C98D8455__padding[22];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27
struct __StaticArrayInitTypeSizeU3D27_t0BCA966246C396262B28D181C7CF2B31CA97F777 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D27_t0BCA966246C396262B28D181C7CF2B31CA97F777__padding[27];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_t9E50215D8EE830C874DDD1E5AC6FEF5A5E273F29 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t9E50215D8EE830C874DDD1E5AC6FEF5A5E273F29__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t85002B5FCD5FF39BE9C5B6CE3C3F3EC6C62F3087 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t85002B5FCD5FF39BE9C5B6CE3C3F3EC6C62F3087__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_t052F9D346A875F13DB23CE6883D58A2457B73F77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t052F9D346A875F13DB23CE6883D58A2457B73F77__padding[5];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1B87C548AA18EE17AEBFB26A31BD1C9DF5B46B32  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t1B87C548AA18EE17AEBFB26A31BD1C9DF5B46B32_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::1B960802B155541DF3837ADE50790DA7E91762D14B8E011FA8223424FF75ACDB
	int64_t ___1B960802B155541DF3837ADE50790DA7E91762D14B8E011FA8223424FF75ACDB_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::22E28E709DF793CE9C08BD5FD04302DD85EBBE5181309792D059E080BF5A2992
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___22E28E709DF793CE9C08BD5FD04302DD85EBBE5181309792D059E080BF5A2992_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1790 <PrivateImplementationDetails>::2EF0065A03764C27AE8D5DC3002E10F0426E43BDFA7D8ECFFF633E45DD32376B
	__StaticArrayInitTypeSizeU3D1790_t9716915A0E868099ABC7CE27B8B36F13C1B477BD ___2EF0065A03764C27AE8D5DC3002E10F0426E43BDFA7D8ECFFF633E45DD32376B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::3D9B507B4E8B3D8B2C853E5AFBEC4F9E74A112EFFE222CFB04B34326619DCBBA
	__StaticArrayInitTypeSizeU3D5_t052F9D346A875F13DB23CE6883D58A2457B73F77 ___3D9B507B4E8B3D8B2C853E5AFBEC4F9E74A112EFFE222CFB04B34326619DCBBA_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5AED05C00AFE7BD291FD4D73F5200B7919E0D05C0D63DBCB4A210F74133093BD
	__StaticArrayInitTypeSizeU3D32_t85002B5FCD5FF39BE9C5B6CE3C3F3EC6C62F3087 ___5AED05C00AFE7BD291FD4D73F5200B7919E0D05C0D63DBCB4A210F74133093BD_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::6ED62981FEAD210B9EBF6F5DC0A47E64D4EFEFD609061AB6ED3492F71112F661
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___6ED62981FEAD210B9EBF6F5DC0A47E64D4EFEFD609061AB6ED3492F71112F661_7;
	// System.Int32 <PrivateImplementationDetails>::738D99562EED8E3D24E03E90ABD33E44800967F797D4CD30D712664EA5AB6B9E
	int32_t ___738D99562EED8E3D24E03E90ABD33E44800967F797D4CD30D712664EA5AB6B9E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t9E50215D8EE830C874DDD1E5AC6FEF5A5E273F29 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::768E33C10368B83610534F464992D4C8A6A6B812EFA31CB4E9C6368E4E30D1FC
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___768E33C10368B83610534F464992D4C8A6A6B812EFA31CB4E9C6368E4E30D1FC_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::933598639CBAA1DE502F80D2FD1DB78F13C8D7BB64A5FDC1BC73AC0B5CE4F5CA
	__StaticArrayInitTypeSizeU3D160_t3B5C711DA8074509B7D048F3A4907F270480FAFD ___933598639CBAA1DE502F80D2FD1DB78F13C8D7BB64A5FDC1BC73AC0B5CE4F5CA_12;
	// System.Int64 <PrivateImplementationDetails>::971150DD73DC318E68A98CCE9B91AC7DEA2D43C562B4F5A9A2F4272C7E29477E
	int64_t ___971150DD73DC318E68A98CCE9B91AC7DEA2D43C562B4F5A9A2F4272C7E29477E_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A77401FC0BF7BF3DAC6B205E004909E685D45C43A903D9EB3C79BD8B1265D258
	__StaticArrayInitTypeSizeU3D3_tC010332190C21B02BF93BF4E7FD3F2C73FDD1CCC ___A77401FC0BF7BF3DAC6B205E004909E685D45C43A903D9EB3C79BD8B1265D258_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::BFDF5E72651B4EC588BD5FC6A9F17E9E0972248146BBACC10478F48D72F29B81
	__StaticArrayInitTypeSizeU3D128_t409360C9CD01BA65204DA283E875EA9C0461A5CA ___BFDF5E72651B4EC588BD5FC6A9F17E9E0972248146BBACC10478F48D72F29B81_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22 <PrivateImplementationDetails>::C4FE8FBE6726012F9932E780243283A23290E8177CBBEE08F4264182A4F06398
	__StaticArrayInitTypeSizeU3D22_t2232EFFB440507ACD734E4888BFA6E22C98D8455 ___C4FE8FBE6726012F9932E780243283A23290E8177CBBEE08F4264182A4F06398_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_tDDD35F21B154FD734DAEDC7EB9590218829A2803 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27 <PrivateImplementationDetails>::FBED83E5688F001B49A3A132C6FE1BD098783C0D48577E9E168EA25043357625
	__StaticArrayInitTypeSizeU3D27_t0BCA966246C396262B28D181C7CF2B31CA97F777 ___FBED83E5688F001B49A3A132C6FE1BD098783C0D48577E9E168EA25043357625_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_t5350B8DB70A0194741098178FD0C827A680701DA ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_21;
};

// ILRuntime.CLR.Method.CLRMethod
struct CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5  : public RuntimeObject
{
	// System.Reflection.MethodInfo ILRuntime.CLR.Method.CLRMethod::def
	MethodInfo_t* ___def_0;
	// System.Reflection.ConstructorInfo ILRuntime.CLR.Method.CLRMethod::cDef
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___cDef_1;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.CLRMethod::parameters
	List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* ___parameters_2;
	// System.Reflection.ParameterInfo[] ILRuntime.CLR.Method.CLRMethod::parametersCLR
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___parametersCLR_3;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.Method.CLRMethod::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_4;
	// ILRuntime.CLR.TypeSystem.CLRType ILRuntime.CLR.Method.CLRMethod::declaringType
	CLRType_t72C55A04EDC2A68F969A27FE7DB52F5A198D437F* ___declaringType_5;
	// System.Boolean ILRuntime.CLR.Method.CLRMethod::isConstructor
	bool ___isConstructor_6;
	// ILRuntime.Runtime.Enviorment.CLRRedirectionDelegate ILRuntime.CLR.Method.CLRMethod::redirect
	CLRRedirectionDelegate_tF96884F0BC45FF631DAED91A526F4190B9753690* ___redirect_7;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.Method.CLRMethod::genericArguments
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___genericArguments_8;
	// System.Type[] ILRuntime.CLR.Method.CLRMethod::genericArgumentsCLR
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___genericArgumentsCLR_9;
	// System.Object[] ILRuntime.CLR.Method.CLRMethod::invocationParam
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___invocationParam_10;
	// System.Boolean ILRuntime.CLR.Method.CLRMethod::isDelegateInvoke
	bool ___isDelegateInvoke_11;
	// System.Boolean ILRuntime.CLR.Method.CLRMethod::isDelegateDynamicInvoke
	bool ___isDelegateDynamicInvoke_12;
	// System.Int32 ILRuntime.CLR.Method.CLRMethod::hashCode
	int32_t ___hashCode_13;
	// System.Int32 ILRuntime.CLR.Method.CLRMethod::_genericParameterCount
	int32_t ____genericParameterCount_15;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.CLRMethod::<ReturnType>k__BackingField
	RuntimeObject* ___U3CReturnTypeU3Ek__BackingField_16;
	// System.Nullable`1<System.Boolean> ILRuntime.CLR.Method.CLRMethod::isExtend
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isExtend_17;
};

struct CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5_StaticFields
{
	// System.Int32 ILRuntime.CLR.Method.CLRMethod::instance_id
	int32_t ___instance_id_14;
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

// ILRuntime.CLR.Method.ILMethod
struct ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7  : public RuntimeObject
{
	// ILRuntime.Runtime.Intepreter.OpCodes.OpCode[] ILRuntime.CLR.Method.ILMethod::body
	OpCodeU5BU5D_tA0A660D228D31635BC51D02B26E5D715E3EA7C4D* ___body_0;
	// ILRuntime.Runtime.Intepreter.OpCodes.OpCodeR[] ILRuntime.CLR.Method.ILMethod::bodyRegister
	OpCodeRU5BU5D_t9144130E7DF3ABF7AF0E3EFC8AF0C63759AA6AC1* ___bodyRegister_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol> ILRuntime.CLR.Method.ILMethod::registerSymbols
	Dictionary_2_tEEB88CF46F6DA1D57225A58A73623EA721DEF951* ___registerSymbols_2;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::symbolFixed
	bool ___symbolFixed_3;
	// ILRuntime.Mono.Cecil.MethodDefinition ILRuntime.CLR.Method.ILMethod::def
	MethodDefinition_t20ECAB62A2A1BBEB383A1A979167D658ACCF3244* ___def_4;
	// System.Collections.Generic.List`1<ILRuntime.CLR.TypeSystem.IType> ILRuntime.CLR.Method.ILMethod::parameters
	List_1_t136E925D19ADF1AFF60DF33114FEC34DD1EAFD75* ___parameters_5;
	// ILRuntime.Runtime.Enviorment.AppDomain ILRuntime.CLR.Method.ILMethod::appdomain
	AppDomain_tFFEF01BA23D79DA3A22C21195FD262862037E506* ___appdomain_6;
	// ILRuntime.CLR.TypeSystem.ILType ILRuntime.CLR.Method.ILMethod::declaringType
	ILType_tD812655AF7716306B8168AD6F08152435B77708C* ___declaringType_7;
	// ILRuntime.CLR.Method.ExceptionHandler[] ILRuntime.CLR.Method.ILMethod::exceptionHandler
	ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* ___exceptionHandler_8;
	// ILRuntime.CLR.Method.ExceptionHandler[] ILRuntime.CLR.Method.ILMethod::exceptionHandlerR
	ExceptionHandlerU5BU5D_t806BA8B0F17F63D28468BC214AB18A4CD4FBAE80* ___exceptionHandlerR_9;
	// System.Collections.Generic.KeyValuePair`2<System.String,ILRuntime.CLR.TypeSystem.IType>[] ILRuntime.CLR.Method.ILMethod::genericParameters
	KeyValuePair_2U5BU5D_t95F3D6603431315C02B152EFB4CA771ADE93BC2D* ___genericParameters_10;
	// ILRuntime.CLR.TypeSystem.IType[] ILRuntime.CLR.Method.ILMethod::genericArguments
	ITypeU5BU5D_tADD584F6D2F1E810AEF7DB2DCA16027722B50991* ___genericArguments_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.CLR.Method.ILMethod::jumptables
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptables_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]> ILRuntime.CLR.Method.ILMethod::jumptablesR
	Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* ___jumptablesR_13;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::isDelegateInvoke
	bool ___isDelegateInvoke_14;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::jitPending
	bool ___jitPending_15;
	// ILRuntime.Reflection.ILRuntimeMethodInfo ILRuntime.CLR.Method.ILMethod::refletionMethodInfo
	ILRuntimeMethodInfo_t5DFC4EC62846DEE24D20FD2F7824F81C90AECF48* ___refletionMethodInfo_16;
	// ILRuntime.Reflection.ILRuntimeConstructorInfo ILRuntime.CLR.Method.ILMethod::reflectionCtorInfo
	ILRuntimeConstructorInfo_t8246144BC4A47C0292CE84CCC8AD31AFA6E9ACAA* ___reflectionCtorInfo_17;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::paramCnt
	int32_t ___paramCnt_18;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::localVarCnt
	int32_t ___localVarCnt_19;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::stackRegisterCnt
	int32_t ___stackRegisterCnt_20;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::jitFlags
	int32_t ___jitFlags_21;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::jitOnDemand
	bool ___jitOnDemand_22;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::jitImmediately
	bool ___jitImmediately_23;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::warmupCounter
	int32_t ___warmupCounter_24;
	// ILRuntime.Mono.Collections.Generic.Collection`1<ILRuntime.Mono.Cecil.Cil.VariableDefinition> ILRuntime.CLR.Method.ILMethod::variables
	Collection_1_t413B13D425BA31F81271569D26FE2157469EB23C* ___variables_25;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::hashCode
	int32_t ___hashCode_26;
	// System.Boolean ILRuntime.CLR.Method.ILMethod::<Compiling>k__BackingField
	bool ___U3CCompilingU3Ek__BackingField_29;
	// ILRuntime.Runtime.Intepreter.IDelegateAdapter ILRuntime.CLR.Method.ILMethod::<DelegateAdapter>k__BackingField
	RuntimeObject* ___U3CDelegateAdapterU3Ek__BackingField_30;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::<StartLine>k__BackingField
	int32_t ___U3CStartLineU3Ek__BackingField_31;
	// System.Int32 ILRuntime.CLR.Method.ILMethod::<EndLine>k__BackingField
	int32_t ___U3CEndLineU3Ek__BackingField_32;
	// ILRuntime.CLR.TypeSystem.IType ILRuntime.CLR.Method.ILMethod::<ReturnType>k__BackingField
	RuntimeObject* ___U3CReturnTypeU3Ek__BackingField_33;
	// System.String ILRuntime.CLR.Method.ILMethod::cachedName
	String_t* ___cachedName_34;
	// System.Nullable`1<System.Boolean> ILRuntime.CLR.Method.ILMethod::isExtend
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isExtend_35;
};

struct ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7_StaticFields
{
	// System.Int32 ILRuntime.CLR.Method.ILMethod::instance_id
	int32_t ___instance_id_27;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ET.ETTask/<InnerCoroutine>d__10
struct U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042 
{
	// System.Int32 ET.ETTask/<InnerCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTask/<InnerCoroutine>d__10::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTask/<InnerCoroutine>d__10::<>4__this
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___U3CU3E4__this_2;
	// System.Object ET.ETTask/<InnerCoroutine>d__10::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// ET.ETTaskHelper/<WaitAll>d__5
struct U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED 
{
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAll>d__5::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAll>d__5::tasks
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAll>d__5::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// System.Object ET.ETTaskHelper/<WaitAll>d__5::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<WaitAll>d__6
struct U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF 
{
	// System.Int32 ET.ETTaskHelper/<WaitAll>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAll>d__6::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// System.Collections.Generic.List`1<ET.ETTask> ET.ETTaskHelper/<WaitAll>d__6::tasks
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAll>d__6::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// System.Object ET.ETTaskHelper/<WaitAll>d__6::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<WaitAny>d__2
struct U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60 
{
	// System.Int32 ET.ETTaskHelper/<WaitAny>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder`1<System.Boolean> ET.ETTaskHelper/<WaitAny>d__2::<>t__builder
	ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ___U3CU3Et__builder_1;
	// ET.ETTask[] ET.ETTaskHelper/<WaitAny>d__2::tasks
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks_2;
	// ET.ETCancellationToken ET.ETTaskHelper/<WaitAny>d__2::cancellationToken
	ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken_3;
	// System.Object ET.ETTaskHelper/<WaitAny>d__2::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d
struct U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B 
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass2_0 ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4 
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass5_0 ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d
struct U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952 
{
	// System.Int32 ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.AsyncETVoidMethodBuilder ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>t__builder
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 ___U3CU3Et__builder_1;
	// ET.ETTask ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::task
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task_2;
	// ET.ETTaskHelper/<>c__DisplayClass6_0 ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>4__this
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* ___U3CU3E4__this_3;
	// System.Object ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
};

// ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3
struct U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F 
{
	// System.Int32 ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// ET.ETAsyncTaskMethodBuilder ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>t__builder
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C ___U3CU3Et__builder_1;
	// ET.ETTaskHelper/CoroutineBlocker ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>4__this
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* ___U3CU3E4__this_2;
	// System.Object ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
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

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ET.KcpLog
struct KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F  : public MulticastDelegate_t
{
};

// ET.KcpOutput
struct KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// ET.ETTask[]
struct ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8  : public RuntimeArray
{
	ALIGN_FIELD (8) ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* m_Items[1];

	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTask/<InnerCoroutine>d__10>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTask/<InnerCoroutine>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mCAC25C56C5E5D60AED7260BB185F139B27D4F4E9_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine1, const RuntimeMethod* method) ;
// ET.ETAsyncTaskMethodBuilder`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_gshared (const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAny>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_gshared_inline (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::Start<ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_gshared (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_mFB89546D4B20A7091D3DFB511AE50F3F6470B764_gshared (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, RuntimeObject** ___awaiter0, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m2BA91121C842D738C465A7F11CF47A1717192FFD_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<WaitAny>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m56B65EE491BA122A6DC38F1D209106C0283A3F16_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___awaiter0, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetResult(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, bool ___ret0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m49D6103BAA01FE76FE5E3286C8D93D681A6B655A_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<WaitAll>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m52C93FFDCFCB3800E439F160A87D392865C415D3_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___awaiter0, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m711C5BAA747560EB6DE3C28B63F58223A14B0C59_gshared (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Object,ET.ETTaskHelper/<WaitAll>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m2EE77E3B9956EB0D01827EC2019BB1294CDE6E42_gshared (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject** ___awaiter0, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine1, const RuntimeMethod* method) ;

// System.Boolean ILRuntime.CLR.Method.ILMethod::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILMethod_get_IsStatic_mE66DE4FD886C446A0AE7BF330BFBB86CCE52EF82 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.CLR.Method.ILMethod::get_ParameterCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo ILRuntime.CLR.Method.ILMethod::get_ReflectionMethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.CLR.Method.CLRMethod::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLRMethod_get_IsStatic_m66F4EDB78E7250E98FA4902256C0E048BD3EB68C (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.CLR.Method.CLRMethod::get_ParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLRMethod_get_ParameterCount_mE781F880D1B9196A9382C6A381BAD4070FE3622F (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo ILRuntime.CLR.Method.CLRMethod::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// ET.ETTaskCompleted ET.AsyncETTaskCompletedMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39 (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETTask ET.ETTask::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_Create_mFCF7A2F4AF53C6148D2522CA1085A8EDDD9A943C (bool ___fromPool0, const RuntimeMethod* method) ;
// ET.ETTask ET.ETAsyncTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_inline (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void ET.ETTask::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETVoid ET.AsyncETVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Action>::Add(T)
inline bool HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2 (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Action>::Remove(T)
inline bool HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void ET.ETCancellationToken::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Invoke_mF885E55DC0DACEC31D8203FAAACD5450FE978475 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Action>::GetEnumerator()
inline Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273 (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0 (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.Action>::get_Current()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_inline (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Action>::.ctor()
inline void HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<ET.ETTask>::get_Count()
inline int32_t Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_inline (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<ET.ETTask>::Dequeue()
inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5 (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, const RuntimeMethod* method)
{
	return ((  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<ET.ETTask>::Enqueue(T)
inline void Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9 (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// ET.AsyncETVoidMethodBuilder ET.AsyncETVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 AsyncETVoidMethodBuilder_Create_mAE5381AE19CCBCB4475A894881DF54C8E1C3F5DB (const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTask/<InnerCoroutine>d__10>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_gshared)(__this, ___stateMachine0, method);
}
// ET.ETVoid ET.ETTask::InnerCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 ETTask_InnerCoroutine_m9537CC74C1428C6737E19D55BDB81524276FAEC3 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_UnsafeOnCompleted_mEB36CE8A9B0FE7806F997833703CD0227ECCB9B9 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void ET.ETTask::Recycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<ET.ETTask>::.ctor()
inline void Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79 (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// ET.ETTask ET.ETTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Boolean ET.ETTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTask/<InnerCoroutine>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mCAC25C56C5E5D60AED7260BB185F139B27D4F4E9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTask::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask/<InnerCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTask/<InnerCoroutine>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517 (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// ET.ETTaskCompleted ET.ETTaskCompleted::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) ;
// System.Boolean ET.ETTaskCompleted::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskCompleted::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskCompleted::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskCompleted::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// ET.ETAsyncTaskMethodBuilder`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336 (const RuntimeMethod* method)
{
	return ((  ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 (*) (const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_gshared)(method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAny>d__2>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_gshared)(__this, ___stateMachine0, method);
}
// ET.ETTask`1<T> ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, const RuntimeMethod* method)
{
	return ((  ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_gshared_inline)(__this, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__5>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::Start<ET.ETTaskHelper/<WaitAll>d__6>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.List`1<ET.ETTask>::.ctor()
inline void List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16 (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// ET.ETAsyncTaskMethodBuilder ET.ETAsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C ETAsyncTaskMethodBuilder_Create_m0E0121365A9FCB36FC757FFD0922FD0D8E31637C (const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder::Start<ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TStateMachine&)
inline void ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_gshared)(__this, ___stateMachine0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ET.ETTask>::GetEnumerator()
inline Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2 (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ET.ETTask>::Dispose()
inline void Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ET.ETTask>::get_Current()
inline ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	return ((  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ET.ETTask>::MoveNext()
inline bool Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2 (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ET.ETTask>::Add(T)
inline void List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_inline (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_mFB89546D4B20A7091D3DFB511AE50F3F6470B764_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m2BA91121C842D738C465A7F11CF47A1717192FFD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// ET.ETTask ET.ETTaskHelper/CoroutineBlocker::WaitAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4 (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m1DCD4067C43B78DCCF930C3E1570835EF438CA26 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/CoroutineBlocker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52 (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, int32_t ___count0, const RuntimeMethod* method) ;
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass2_0::<WaitAny>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass2_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_mEF239870F7E9422BF519CAC2C1C72CB2D1C751C2 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAny>d__2>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m56B65EE491BA122A6DC38F1D209106C0283A3F16_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean ET.ETCancellationToken::IsCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, Exception_t*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_gshared)(__this, ___exception0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetResult(T)
inline void ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, bool ___ret0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, bool, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_gshared)(__this, ___ret0, method);
}
// System.Void ET.ETTaskHelper/<WaitAny>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, RuntimeObject*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.ETTaskHelper/<WaitAny>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m49D6103BAA01FE76FE5E3286C8D93D681A6B655A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC592A74726910254060BD7A5165379A73612DA43 (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, const RuntimeMethod* method) ;
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass5_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass5_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m9382542E84A59B53307BAE06DC605A4055D0146D (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAll>d__5>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m52C93FFDCFCB3800E439F160A87D392865C415D3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<WaitAll>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.AsyncETVoidMethodBuilder::Start<ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TStateMachine&)
inline void AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*, const RuntimeMethod*))AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_gshared)(__this, ___stateMachine0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*, const RuntimeMethod*))AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m711C5BAA747560EB6DE3C28B63F58223A14B0C59_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ET.ETTask>::get_Count()
inline int32_t List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass6_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) ;
// System.Void ET.ETAsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<ET.ETTask,ET.ETTaskHelper/<WaitAll>d__6>(TAwaiter&,TStateMachine&)
inline void ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6 (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9** ___awaiter0, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31*, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9**, U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*, const RuntimeMethod*))ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m2EE77E3B9956EB0D01827EC2019BB1294CDE6E42_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, const RuntimeMethod* method) ;
// System.Void ET.ETTaskHelper/<WaitAll>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean ET.ETVoid::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void ET.ETVoid::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 ET.Kcp::ikcp_check(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_check_m792A8C39192D219AE25708B9C391148EB59335D5 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) ;
// System.IntPtr ET.Kcp::ikcp_create(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_ikcp_create_m882195F805654A2B23FCFD9CDAC08C7614E8BC23 (uint32_t ___conv0, intptr_t ___user1, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_flush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_flush_m613B3DE768286F491CCD97694A80BC819BB0C5D7 (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.UInt32 ET.Kcp::ikcp_getconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_getconv_mF1BA7C3D5959FAD2A697FD8C55CDCC0EB7AC92D3 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_input(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_input_mD8C5E3086842AB257A2BC166F244C9A189ABE838 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_nodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_nodelay_mE34558E217101FEA69CAE0605D021A7414432C08 (intptr_t ___kcp0, int32_t ___nodelay1, int32_t ___interval2, int32_t ___resend3, int32_t ___nc4, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_peeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_peeksize_mB5518C87D9A2931FD06342FD0B7EE92493B5BC81 (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_recv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_recv_mB9F3B5946C730A3A81B70B6514B6D7EEACC22227 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_release_mE80337A677BBACDD34E257ED539A0842F61625F4 (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_send(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_send_m3FB2EB8BBBAB4E00DBDE48ED2CC96E1E6C2CDA1A (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setminrto_mEA38B9F88F362DEC6E0330B1819B149EDB23742F (intptr_t ___ptr0, int32_t ___minrto1, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_setmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_setmtu_m4482BAE0EB2131897CC608B2D1C98CAC73D28821 (intptr_t ___kcp0, int32_t ___mtu1, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setoutput_m904C2F1C11DDA97AA8CC12744CDFBFABEC579AFC (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___output0, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_setlog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setlog_m8E8892C275C949BCFCF740571863FFC5148E6C9A (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___log0, const RuntimeMethod* method) ;
// System.Void ET.Kcp::ikcp_update(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_update_m436B9B9B9045E22F4F4B96079C0B7175500EAF2B (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_waitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_waitsnd_mED77B6EAAA89867854ADB1B892174C6EA9828E27 (intptr_t ___kcp0, const RuntimeMethod* method) ;
// System.Int32 ET.Kcp::ikcp_wndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_wndsize_m6A273E756DCA50329CBAF150C0918A2D7BEB1E8B (intptr_t ___kcp0, int32_t ___sndwnd1, int32_t ___rcvwnd2, const RuntimeMethod* method) ;
// System.IntPtr ET.Recast::RecastLoad(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastLoad_m0106EF11BCA374C83B56B429F2E4E6DBEAB1796C (int32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.IntPtr ET.Recast::RecastGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastGet_m68BE83704A4D95A1C7ECE8CEB50E0DED605E3C7E (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFind(System.IntPtr,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_m62DA5AD945A935817505088F3A7BAF75B135822E (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startPos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___endPos3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___straightPath4, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindNearestPoint(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m8D41CBFAD757CAED56DED14F5B29D7EE7FEC05C4 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___nearestPos3, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.IntPtr,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m08185C145BE4C294F3F603E9F638A106DF5D87DA (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___centerPos2, float ___radius3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos4, const RuntimeMethod* method) ;
// System.Int32 ET.Recast::RecastFindRandomPoint(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_mE21B43AAC3E5F394D90078D21F848335E2E4F65D (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ikcp_check(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL ikcp_create(uint32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_flush(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL ikcp_getconv(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_input(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_nodelay(intptr_t, int32_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_peeksize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_recv(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_send(intptr_t, uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setminrto(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_setmtu(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setoutput(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_setlog(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C void CDECL ikcp_update(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_waitsnd(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ikcp_wndsize(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL RecastLoad(int32_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL RecastGet(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C void CDECL RecastClear();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFind(intptr_t, float*, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindNearestPoint(intptr_t, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindRandomPointAroundCircle(intptr_t, float*, float*, float, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL RecastFindRandomPoint(intptr_t, float*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ILRuntime.CLR.Method.IMethodExtensions::IsExtendMethod(ILRuntime.CLR.Method.ILMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMethodExtensions_IsExtendMethod_m98E6D8185CDDB38FC6598BE17CDC4B56F13F9557 (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* ___im0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!im.IsStatic || im.ParameterCount == 0)
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_0 = ___im0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ILMethod_get_IsStatic_mE66DE4FD886C446A0AE7BF330BFBB86CCE52EF82(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_2 = ___im0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// return im.ReflectionMethodInfo.GetCustomAttributes(typeof(System.Runtime.CompilerServices.ExtensionAttribute), false).Length > 0;
		ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* L_4 = ___im0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = ILMethod_get_ReflectionMethodInfo_mB7AEAD37363023B92C516A618BEED7DAF28E8345(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(19 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
		NullCheck(L_8);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_8)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean ILRuntime.CLR.Method.IMethodExtensions::IsExtendMethod(ILRuntime.CLR.Method.CLRMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMethodExtensions_IsExtendMethod_mDBF11E09DDCC8572723E8BDEA45AD1BB7C84227B (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* ___cm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!cm.IsStatic || cm.ParameterCount == 0)
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_0 = ___cm0;
		NullCheck(L_0);
		bool L_1;
		L_1 = CLRMethod_get_IsStatic_m66F4EDB78E7250E98FA4902256C0E048BD3EB68C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_2 = ___cm0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CLRMethod_get_ParameterCount_mE781F880D1B9196A9382C6A381BAD4070FE3622F(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// return cm.MethodInfo.IsDefined(typeof(System.Runtime.CompilerServices.ExtensionAttribute), false);
		CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* L_4 = ___cm0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779_inline(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(17 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
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
// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::get_BuilderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AsyncMethodBuilderAttribute_get_BuilderType_m285FF3F9EB24594955D6CDFB5665D67D2B86F38D (AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CBuilderTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderAttribute__ctor_mA0F9E9A40F628B84FFFCBF4FF92896650CD3B8F8 (AsyncMethodBuilderAttribute_t3C650C098D60F31A41B7DE2A7E241085AC125960* __this, Type_t* ___builderType0, const RuntimeMethod* method) 
{
	{
		// public AsyncMethodBuilderAttribute(Type builderType)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// BuilderType = builderType;
		Type_t* L_0 = ___builderType0;
		__this->___U3CBuilderTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuilderTypeU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
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
// ET.AsyncETTaskCompletedMethodBuilder ET.AsyncETTaskCompletedMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 AsyncETTaskCompletedMethodBuilder_Create_mBFE1F496B072E5F5831D687B9DDC3D3D1B58A824 (const RuntimeMethod* method) 
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AsyncETTaskCompletedMethodBuilder builder = new AsyncETTaskCompletedMethodBuilder();
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031));
		AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031 L_0 = V_0;
		// return builder;
		return L_0;
	}
}
// ET.ETTaskCompleted ET.AsyncETTaskCompletedMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) 
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ETTaskCompleted Task => default;
		il2cpp_codegen_initobj((&V_0), sizeof(ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1));
		ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 _returnValue;
	_returnValue = AsyncETTaskCompletedMethodBuilder_get_Task_mF761709525C4245B9C13ADFDB62B55D0FD50DE4A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39 (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ETTask.ExceptionHandler.Invoke(e);
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___ExceptionHandler_0;
		Exception_t* L_1 = ___e0;
		NullCheck(L_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39_AdjustorThunk (RuntimeObject* __this, Exception_t* ___e0, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	AsyncETTaskCompletedMethodBuilder_SetException_m3421C1089E30FAFFAE0B7A24F40EB6FB9D663A39(_thisAdjusted, ___e0, method);
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	AsyncETTaskCompletedMethodBuilder_SetResult_m4C2AF9E157E63D95304DA43FC782928D508BF31B(_thisAdjusted, method);
}
// System.Void ET.AsyncETTaskCompletedMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC (AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETTaskCompletedMethodBuilder_t53ABA0333D7CD0BCD066353A41DFB67445B8E031*>(__this + _offset);
	AsyncETTaskCompletedMethodBuilder_SetStateMachine_m099AF3AF77EFF4CFFE33ECC82857335D827033EC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_back(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke& marshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_pinvoke_cleanup(ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_com(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com& marshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_com_back(const ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com& marshaled, ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C& unmarshaled)
{
	Exception_t* ___tcs_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tcs' of type 'ETAsyncTaskMethodBuilder': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___tcs_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ET.ETAsyncTaskMethodBuilder
IL2CPP_EXTERN_C void ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshal_com_cleanup(ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C_marshaled_com& marshaled)
{
}
// ET.ETAsyncTaskMethodBuilder ET.ETAsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C ETAsyncTaskMethodBuilder_Create_m0E0121365A9FCB36FC757FFD0922FD0D8E31637C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ETAsyncTaskMethodBuilder builder = new ETAsyncTaskMethodBuilder() { tcs = ETTask.Create(true) };
		il2cpp_codegen_initobj((&V_0), sizeof(ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C));
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0;
		L_0 = ETTask_Create_mFCF7A2F4AF53C6148D2522CA1085A8EDDD9A943C((bool)1, NULL);
		(&V_0)->___tcs_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tcs_0), (void*)L_0);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C L_1 = V_0;
		// return builder;
		return L_1;
	}
}
// ET.ETTask ET.ETAsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) 
{
	{
		// public ETTask Task => this.tcs;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* _returnValue;
	_returnValue = ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETAsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		// this.tcs.SetException(exception);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F(_thisAdjusted, ___exception0, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) 
{
	{
		// this.tcs.SetResult();
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		NullCheck(L_0);
		ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081(_thisAdjusted, method);
}
// System.Void ET.ETAsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20 (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C*>(__this + _offset);
	ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.AsyncETVoidMethodBuilder ET.AsyncETVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 AsyncETVoidMethodBuilder_Create_mAE5381AE19CCBCB4475A894881DF54C8E1C3F5DB (const RuntimeMethod* method) 
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AsyncETVoidMethodBuilder builder = new AsyncETVoidMethodBuilder();
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203));
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0 = V_0;
		// return builder;
		return L_0;
	}
}
// ET.ETVoid ET.AsyncETVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) 
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ETVoid Task => default;
		il2cpp_codegen_initobj((&V_0), sizeof(ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38));
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 _returnValue;
	_returnValue = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.AsyncETVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ETTask.ExceptionHandler.Invoke(e);
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_0 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___ExceptionHandler_0;
		Exception_t* L_1 = ___e0;
		NullCheck(L_0);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5_AdjustorThunk (RuntimeObject* __this, Exception_t* ___e0, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(_thisAdjusted, ___e0, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(_thisAdjusted, method);
}
// System.Void ET.AsyncETVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78 (AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203*>(__this + _offset);
	AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETCancellationToken::Add(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Add_mBA87E7C580A891C430C51E68FDA1C21F3B5407E7 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.actions.Add(callback);
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2(L_0, L_1, HashSet_1_Add_mA69EB23B2381F6D03CCC56D158E2E706DC21EFB2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ET.ETCancellationToken::Remove(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Remove_mD8C4B35A9CEAC4336775F6975A1246863E104AC6 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* G_B2_0 = NULL;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* G_B1_0 = NULL;
	{
		// this.actions?.Remove(callback);
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___callback0;
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B(G_B2_0, L_2, HashSet_1_Remove_mFD60E090A2022B5DAF0138F0E6846E45654E4C8B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean ET.ETCancellationToken::IsCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	{
		// return this.actions == null;
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		return (bool)((((RuntimeObject*)(HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Void ET.ETCancellationToken::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Cancel_mB5946D0D2799AF1A3FFC8215726A6EBE21324E93 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	{
		// if (this.actions == null)
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// this.Invoke();
		ETCancellationToken_Invoke_mF885E55DC0DACEC31D8203FAAACD5450FE978475(__this, NULL);
		// }
		return;
	}
}
// System.Void ET.ETCancellationToken::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken_Invoke_mF885E55DC0DACEC31D8203FAAACD5450FE978475 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* V_0 = NULL;
	Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// HashSet<Action> runActions = this.actions;
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = __this->___actions_0;
		V_0 = L_0;
		// this.actions = null;
		__this->___actions_0 = (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_0), (void*)(HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)NULL);
	}
	try
	{// begin try (depth: 1)
		{
			// foreach (Action action in runActions)
			HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_1 = V_0;
			NullCheck(L_1);
			Enumerator_t6C5AF6111106FABDB3A75090A81060D2FDA7270D L_2;
			L_2 = HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273(L_1, HashSet_1_GetEnumerator_m78653A4544248BB5FA1AB0D510F0E20ADA71F273_RuntimeMethod_var);
			V_1 = L_2;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_002e_1:
				{// begin finally (depth: 2)
					Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0((&V_1), Enumerator_Dispose_m88315086E58918662C6232991F5023626723EED0_RuntimeMethod_var);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0023_2;
				}

IL_0017_2:
				{
					// foreach (Action action in runActions)
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
					L_3 = Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_inline((&V_1), Enumerator_get_Current_mE60ACE9719275C7F96CFD6CC221DE814F3DAB201_RuntimeMethod_var);
					// action.Invoke();
					NullCheck(L_3);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
				}

IL_0023_2:
				{
					// foreach (Action action in runActions)
					bool L_4;
					L_4 = Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D((&V_1), Enumerator_MoveNext_m122007C9D7809F797369DF048308B3DD5A167E6D_RuntimeMethod_var);
					if (L_4)
					{
						goto IL_0017_2;
					}
				}
				{
					goto IL_003c_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003c_1:
		{
			// }
			goto IL_004c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// ETTask.ExceptionHandler.Invoke(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var)));
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_5 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))))->___ExceptionHandler_0;
		Exception_t* L_6 = V_2;
		NullCheck(L_5);
		Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_5, L_6, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_004c:
	{
		// }
		return;
	}
}
// System.Void ET.ETCancellationToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETCancellationToken__ctor_m209ED60B44C988C6F305D548AA46547B787F2075 (ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HashSet<Action> actions = new HashSet<Action>();
		HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* L_0 = (HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828*)il2cpp_codegen_object_new(HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F(L_0, HashSet_1__ctor_m0279525296802FE105F96F1F35AC932146C0305F_RuntimeMethod_var);
		__this->___actions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
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
// ET.ETTaskCompleted ET.ETTask::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTask_get_CompletedTask_m027549E9D04677AE4CB2B7C15625CCBE862597CD (const RuntimeMethod* method) 
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ETTaskCompleted();
		il2cpp_codegen_initobj((&V_0), sizeof(ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1));
		ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 L_0 = V_0;
		return L_0;
	}
}
// ET.ETTask ET.ETTask::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_Create_mFCF7A2F4AF53C6148D2522CA1085A8EDDD9A943C (bool ___fromPool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!fromPool)
		bool L_0 = ___fromPool0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return new ETTask();
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)il2cpp_codegen_object_new(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623(L_1, NULL);
		return L_1;
	}

IL_0009:
	{
		// if (queue.Count == 0)
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_inline(L_2, Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return new ETTask() {fromPool = true};
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)il2cpp_codegen_object_new(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623(L_4, NULL);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = L_4;
		NullCheck(L_5);
		L_5->___fromPool_2 = (bool)1;
		return L_5;
	}

IL_0022:
	{
		// return queue.Dequeue();
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_6 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_6);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_7;
		L_7 = Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5(L_6, Queue_1_Dequeue_m8961AF5251B0C920540483E9034A5C4981DAEDC5_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void ET.ETTask::Recycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.fromPool)
		bool L_0 = __this->___fromPool_2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// this.state = AwaiterStatus.Pending;
		__this->___state_3 = 0;
		// this.callback = null;
		__this->___callback_4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)NULL);
		// if (queue.Count > 1000)
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_1 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_inline(L_1, Queue_1_get_Count_mB53765136F6A77A34AD84495D77EE7F54F28CB35_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)1000))))
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// queue.Enqueue(this);
		il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_3 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_3);
		Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9(L_3, __this, Queue_1_Enqueue_m6B193ACE0D1CA2A8A8462A7B3DF4B4AC8B0752B9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ET.ETTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask__ctor_m93ADE5A29C33E37BD3B19ACEBDF0B7AF434EB623 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	{
		// private ETTask()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// ET.ETVoid ET.ETTask::InnerCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 ETTask_InnerCoroutine_m9537CC74C1428C6737E19D55BDB81524276FAEC3 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_mAE5381AE19CCBCB4475A894881DF54C8E1C3F5DB(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D(L_1, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mC604A8F025BA07EB3FB5C21C8DBBC8044796E40D_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_3;
		L_3 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_2, NULL);
		return L_3;
	}
}
// System.Void ET.ETTask::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_Coroutine_m267B0F7F89DF1A355325410B19B78EAAC0511D16 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InnerCoroutine().Coroutine();
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_0;
		L_0 = ETTask_InnerCoroutine_m9537CC74C1428C6737E19D55BDB81524276FAEC3(__this, NULL);
		V_0 = L_0;
		ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_0), NULL);
		// }
		return;
	}
}
// ET.ETTask ET.ETTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	{
		// return this;
		return __this;
	}
}
// System.Boolean ET.ETTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	{
		// return this.state != AwaiterStatus.Pending;
		uint8_t L_0 = __this->___state_3;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void ET.ETTask::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_UnsafeOnCompleted_mEB36CE8A9B0FE7806F997833703CD0227ECCB9B9 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// action?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___action0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// this.callback = action;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___action0;
		__this->___callback_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void ET.ETTask::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_OnCompleted_mABFE6AB74C5544758EA97F5E87E0C5FB90D4136D (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		// this.UnsafeOnCompleted(action);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		ETTask_UnsafeOnCompleted_mEB36CE8A9B0FE7806F997833703CD0227ECCB9B9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ET.ETTask::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B6_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B5_0 = NULL;
	{
		// switch (this.state)
		uint8_t L_0 = __this->___state_3;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_003b;
	}

IL_0011:
	{
		// this.Recycle();
		ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36(__this, NULL);
		// break;
		return;
	}

IL_0018:
	{
		// ExceptionDispatchInfo c = this.callback as ExceptionDispatchInfo;
		RuntimeObject* L_3 = __this->___callback_4;
		// this.callback = null;
		__this->___callback_4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)NULL);
		// this.Recycle();
		ETTask_Recycle_mCA3F18646D07DB9EA6E2BA4AFBDAAE3A1E27CD36(__this, NULL);
		// c?.Throw();
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = ((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)IsInstSealed((RuntimeObject*)L_3, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var));
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		NullCheck(G_B6_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B6_0, NULL);
		// break;
		return;
	}

IL_003b:
	{
		// throw new NotSupportedException("ETTask does not allow call GetResult directly when task not completed. Please use 'await'.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59FB7F99FEC6B81FAA83ECC3FE9929AB4E5FB0CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6_RuntimeMethod_var)));
	}
}
// System.Void ET.ETTask::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("TaskT_TransitionToFinal_AlreadyCompleted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this.state = AwaiterStatus.Succeeded;
		__this->___state_3 = 1;
		// Action c = this.callback as Action;
		RuntimeObject* L_2 = __this->___callback_4;
		// this.callback = null;
		__this->___callback_4 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)NULL);
		// c?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void ET.ETTask::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176 (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("TaskT_TransitionToFinal_AlreadyCompleted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this.state = AwaiterStatus.Faulted;
		__this->___state_3 = 2;
		// Action c = this.callback as Action;
		RuntimeObject* L_2 = __this->___callback_4;
		// this.callback = ExceptionDispatchInfo.Capture(e);
		Exception_t* L_3 = ___e0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4;
		L_4 = ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E(L_3, NULL);
		__this->___callback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_4);
		// c?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void ET.ETTask::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTask__cctor_m568590970CA511C0DD174600F8E3386AA94AB044 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Queue<ETTask> queue = new Queue<ETTask>();
		Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4* L_0 = (Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4*)il2cpp_codegen_object_new(Queue_1_tD81FB1FE4DD008B5193D0BDAA9B48AEDE8DD41A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79(L_0, Queue_1__ctor_m2362F2BF6D5B2DCD823FEAE7D34AF9915581DC79_RuntimeMethod_var);
		((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_StaticFields*)il2cpp_codegen_static_fields_for(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var))->___queue_1), (void*)L_0);
		return;
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
// System.Void ET.ETTask/<InnerCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0040_1;
			}
		}
		{
			// await this;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3 = V_1;
			NullCheck(L_3);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4;
			L_4 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_3, NULL);
			V_2 = L_4;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5 = V_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_5, NULL);
			if (L_6)
			{
				goto IL_005c_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_8);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79(L_9, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042_mB852682DBD2821E3CB287E509A776C494FF7EE79_RuntimeMethod_var);
			goto IL_008e;
		}

IL_0040_1:
		{
			RuntimeObject* L_10 = __this->___U3CU3Eu__1_3;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_10, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_005c_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_2;
			NullCheck(L_12);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_12, NULL);
			goto IL_007b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0064;
		}
		throw e;
	}

CATCH_0064:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_007b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_15, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*>(__this + _offset);
	U3CInnerCoroutineU3Ed__10_MoveNext_m215D18BC3B798B1543AECCE15AA994D76697901E(_thisAdjusted, method);
}
// System.Void ET.ETTask/<InnerCoroutine>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517 (U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInnerCoroutineU3Ed__10_t2D601F7100272EA0BB5D608AFE81D658FDE14042*>(__this + _offset);
	U3CInnerCoroutineU3Ed__10_SetStateMachine_m467597CFCFE1144E0EA75800DD5A05FA47271517(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.ETTaskCompleted ET.ETTaskCompleted::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) 
{
	{
		// return this;
		ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 L_0 = (*(ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1 _returnValue;
	_returnValue = ETTaskCompleted_GetAwaiter_mE3AEE62423C7E74E5BA5E4298F51A94537291113(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean ET.ETTaskCompleted::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = ETTaskCompleted_get_IsCompleted_mF124D814B224FC03ABA766B4DD6D32129EB65FC0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETTaskCompleted::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_GetResult_m99982AD00E2DE9170E7A8DCE4314B1DC19C34D50(_thisAdjusted, method);
}
// System.Void ET.ETTaskCompleted::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_OnCompleted_m46057706E7DDC6C8DB7BCFE28EA25514E43AC067(_thisAdjusted, ___continuation0, method);
}
// System.Void ET.ETTaskCompleted::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8 (ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETTaskCompleted_tC7E784791E37157A69DC06ADE2C07D5F0BD577A1*>(__this + _offset);
	ETTaskCompleted_UnsafeOnCompleted_m999B40E9B88E496271C0150F1B7820F01E010BC8(_thisAdjusted, ___continuation0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ET.ETTask`1<System.Boolean> ET.ETTaskHelper::WaitAny(ET.ETTask[],ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETTaskHelper_WaitAny_mC17D4E88EA1031B4E61FF8E8F3686EAF387C9480 (ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks0, ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 L_0;
		L_0 = ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336(ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_1 = ___tasks0;
		(&V_0)->___tasks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tasks_2), (void*)L_1);
		ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cancellationToken_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1(L_3, (&V_0), ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m9B5E2E9331F0E05CCE0DFB6FC233632FC9D828D1_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_5;
		L_5 = ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline(L_4, ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		return L_5;
	}
}
// ET.ETTask`1<System.Boolean> ET.ETTaskHelper::WaitAll(ET.ETTask[],ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETTaskHelper_WaitAll_mC8E1C0C9094DFBFD76175A4F6E4AD976A706B272 (ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* ___tasks0, ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 L_0;
		L_0 = ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336(ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_1 = ___tasks0;
		(&V_0)->___tasks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tasks_2), (void*)L_1);
		ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cancellationToken_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23(L_3, (&V_0), ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m2DF74E4D7018815157D5A73C472339BAF9650F23_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_5;
		L_5 = ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline(L_4, ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		return L_5;
	}
}
// ET.ETTask`1<System.Boolean> ET.ETTaskHelper::WaitAll(System.Collections.Generic.List`1<ET.ETTask>,ET.ETCancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETTaskHelper_WaitAll_m636A7E3ED9A12E9C3D4173D8D593E293D0A9C4EB (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* ___tasks0, ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31 L_0;
		L_0 = ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336(ETAsyncTaskMethodBuilder_1_Create_m97CD762C3D7075AA8708DE41FF0DB157E46DB336_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_1 = ___tasks0;
		(&V_0)->___tasks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tasks_2), (void*)L_1);
		ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_2 = ___cancellationToken1;
		(&V_0)->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cancellationToken_3), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D(L_3, (&V_0), ETAsyncTaskMethodBuilder_1_Start_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_m37FBFFC9DA493FE36032DC4BC84A1F9A4B5DF41D_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_5;
		L_5 = ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_inline(L_4, ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_RuntimeMethod_var);
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
// System.Void ET.ETTaskHelper/CoroutineBlocker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52 (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ETTask> tcss = new List<ETTask>();
		List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_0 = (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*)il2cpp_codegen_object_new(List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16(L_0, List_1__ctor_m51111317D140CE9FAD15255586ACC19468E8CB16_RuntimeMethod_var);
		__this->___tcss_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tcss_1), (void*)L_0);
		// public CoroutineBlocker(int count)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.count = count;
		int32_t L_1 = ___count0;
		__this->___count_0 = L_1;
		// }
		return;
	}
}
// ET.ETTask ET.ETTaskHelper/CoroutineBlocker::WaitAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C L_0;
		L_0 = ETAsyncTaskMethodBuilder_Create_m0E0121365A9FCB36FC757FFD0922FD0D8E31637C(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___tcs_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226(L_1, (&V_0), ETAsyncTaskMethodBuilder_Start_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m670F06EAE7A04C739D1DB3C840951E4901B47226_RuntimeMethod_var);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_3;
		L_3 = ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline(L_2, NULL);
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
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* V_3 = NULL;
	Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c3_1;
			}
		}
		{
			// --this.count;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_3 = V_1;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->___count_0;
			NullCheck(L_3);
			L_3->___count_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
			// if (this.count < 0)
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = L_6->___count_0;
			if ((((int32_t)L_7) >= ((int32_t)0)))
			{
				goto IL_0030_1;
			}
		}
		{
			// return;
			goto IL_0102;
		}

IL_0030_1:
		{
			// if (this.count == 0)
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = L_8->___count_0;
			if (L_9)
			{
				goto IL_007e_1;
			}
		}
		{
			// List<ETTask> t = this.tcss;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_10 = V_1;
			NullCheck(L_10);
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_11 = L_10->___tcss_1;
			V_3 = L_11;
			// this.tcss = null;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_12 = V_1;
			NullCheck(L_12);
			L_12->___tcss_1 = (List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_12->___tcss_1), (void*)(List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101*)NULL);
			// foreach (ETTask ttcs in t)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_13 = V_3;
			NullCheck(L_13);
			Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 L_14;
			L_14 = List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2(L_13, List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
			V_4 = L_14;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0067_1:
				{// begin finally (depth: 2)
					{
						int32_t L_15 = V_0;
						if ((((int32_t)L_15) >= ((int32_t)0)))
						{
							goto IL_0078_1;
						}
					}
					{
						Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C((&V_4), Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
					}

IL_0078_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_005c_2;
				}

IL_0050_2:
				{
					// foreach (ETTask ttcs in t)
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
					L_16 = Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline((&V_4), Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
					// ttcs.SetResult();
					NullCheck(L_16);
					ETTask_SetResult_mB00B78BA4E84709D15FBB01D553BB9256E62B926(L_16, NULL);
				}

IL_005c_2:
				{
					// foreach (ETTask ttcs in t)
					bool L_17;
					L_17 = Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2((&V_4), Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
					if (L_17)
					{
						goto IL_0050_2;
					}
				}
				{
					goto IL_0079_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0079_1:
		{
			// return;
			goto IL_0102;
		}

IL_007e_1:
		{
			// ETTask tcs = ETTask.Create(true);
			il2cpp_codegen_runtime_class_init_inline(ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18;
			L_18 = ETTask_Create_mFCF7A2F4AF53C6148D2522CA1085A8EDDD9A943C((bool)1, NULL);
			V_2 = L_18;
			// tcss.Add(tcs);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_19 = V_1;
			NullCheck(L_19);
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_20 = L_19->___tcss_1;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			NullCheck(L_20);
			List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_inline(L_20, L_21, List_1_Add_m68A5223D8F087592B1404CCD07FAE88BEC924FB3_RuntimeMethod_var);
			// await tcs;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_22 = V_2;
			NullCheck(L_22);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_23;
			L_23 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_22, NULL);
			V_5 = L_23;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_5;
			NullCheck(L_24);
			bool L_25;
			L_25 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_24, NULL);
			if (L_25)
			{
				goto IL_00e0_1;
			}
		}
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_27 = V_5;
			__this->___U3CU3Eu__1_3 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_27);
			ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_28 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C(L_28, (&V_5), __this, ETAsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F_m31F95AC67B3DB2B292CF87379AA2834815AC631C_RuntimeMethod_var);
			goto IL_0115;
		}

IL_00c3_1:
		{
			RuntimeObject* L_29 = __this->___U3CU3Eu__1_3;
			V_5 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_29, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00e0_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_31 = V_5;
			NullCheck(L_31);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_31, NULL);
			goto IL_0102;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_6;
		ETAsyncTaskMethodBuilder_SetException_mF9A14E1D6F427CF0BD0DC18EBCB318745C5B2A5F(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0115;
	}// end catch (depth: 1)

IL_0102:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_34 = (&__this->___U3CU3Et__builder_1);
		ETAsyncTaskMethodBuilder_SetResult_m76EACE0F7E3EFD983F292BC5DB8693678E573081(L_34, NULL);
	}

IL_0115:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*>(__this + _offset);
	U3CWaitAsyncU3Ed__3_MoveNext_m8536558CF33DCA7061FF6777CE8464293F7B5096(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/CoroutineBlocker/<WaitAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660 (U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_SetStateMachine_mEA437B0708968D310F0DC9BF80D420D59B26AB20(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAsyncU3Ed__3_t872511C7B0611473DF4F43EC4CADCB9D7C93CE5F*>(__this + _offset);
	U3CWaitAsyncU3Ed__3_SetStateMachine_mAB2E22D61B8BA7628DF702242F3EA26D9DCEC660(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m1DCD4067C43B78DCCF930C3E1570835EF438CA26 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass2_0::<WaitAny>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass2_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_mEF239870F7E9422BF519CAC2C1C72CB2D1C751C2 (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_mAE5381AE19CCBCB4475A894881DF54C8E1C3F5DB(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = ___task0;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2(L_2, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_mC193C85AA0BFED7A7BE9CC22FD1DF10E986EF8E2_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_4;
		L_4 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_3, NULL);
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4 (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = __this->___task_2;
			NullCheck(L_4);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5;
			L_5 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_4, NULL);
			V_2 = L_5;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_6, NULL);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_9);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111(L_10, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_004f_1:
		{
			RuntimeObject* L_11 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_11, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_2;
			NullCheck(L_13);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_13, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_14 = V_1;
			NullCheck(L_14);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_15 = L_14->___coroutineBlocker_0;
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_15, NULL);
			NullCheck(L_16);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17;
			L_17 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_16, NULL);
			V_2 = L_17;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_18, NULL);
			if (L_19)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_20 = 1;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_21);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111(L_22, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B_m705FA038EB48F76E682C55BB6FD82ADE0880D111_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_00aa_1:
		{
			RuntimeObject* L_23 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_23, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_2;
			NullCheck(L_25);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_25, NULL);
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f8;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_28, NULL);
	}

IL_00f8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*>(__this + _offset);
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_MoveNext_m0356D0F9555CBF870F7BAEBD138D84C302A906E4(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass2_0/<<WaitAny>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B (U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_t911A5630E36FB2DC9DED97E5A4B71B60EB72D00B*>(__this + _offset);
	U3CU3CWaitAnyU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m3B316052D34522796950006E79B65A1A56E7B51B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<WaitAny>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* V_2 = NULL;
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* V_3 = NULL;
	int32_t V_4 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_5 = NULL;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_7 = NULL;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_009b_1;
			}
		}
		{
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_2 = (U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass2_0__ctor_m1DCD4067C43B78DCCF930C3E1570835EF438CA26(L_2, NULL);
			V_2 = L_2;
			// if (tasks.Length == 0)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			if ((((RuntimeArray*)L_3)->max_length))
			{
				goto IL_0023_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_00f5;
		}

IL_0023_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(2);
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_4 = V_2;
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_5 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_5, 2, NULL);
			NullCheck(L_4);
			L_4->___coroutineBlocker_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___coroutineBlocker_0), (void*)L_5);
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_6 = __this->___tasks_2;
			V_3 = L_6;
			V_4 = 0;
			goto IL_0058_1;
		}

IL_003b_1:
		{
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_7 = V_3;
			int32_t L_8 = V_4;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			V_5 = L_10;
			// RunOneTask(task).Coroutine();
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_11 = V_2;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12 = V_5;
			NullCheck(L_11);
			ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_13;
			L_13 = U3CU3Ec__DisplayClass2_0_U3CWaitAnyU3Eg__RunOneTaskU7C0_mEF239870F7E9422BF519CAC2C1C72CB2D1C751C2(L_11, L_12, NULL);
			V_6 = L_13;
			ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_6), NULL);
			int32_t L_14 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0058_1:
		{
			// foreach (ETTask task in tasks)
			int32_t L_15 = V_4;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_16 = V_3;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003b_1;
			}
		}
		{
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass2_0_t386188471D23E1BA38A602299DF18C0DE2A95748* L_17 = V_2;
			NullCheck(L_17);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_18 = L_17->___coroutineBlocker_0;
			NullCheck(L_18);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_19;
			L_19 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_18, NULL);
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_19, NULL);
			V_7 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_7;
			NullCheck(L_21);
			bool L_22;
			L_22 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_21, NULL);
			if (L_22)
			{
				goto IL_00b8_1;
			}
		}
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_7;
			__this->___U3CU3Eu__1_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_24);
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_25 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11(L_25, (&V_7), __this, ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60_m0FEF868C38A3064A56A57DAA57CFC787E5656C11_RuntimeMethod_var);
			goto IL_0109;
		}

IL_009b_1:
		{
			RuntimeObject* L_26 = __this->___U3CU3Eu__1_4;
			V_7 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_26, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00b8_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_28 = V_7;
			NullCheck(L_28);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_28, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_29 = __this->___cancellationToken_3;
			if (L_29)
			{
				goto IL_00cb_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_00f5;
		}

IL_00cb_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			NullCheck(L_30);
			bool L_31;
			L_31 = ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068(L_30, NULL);
			V_1 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			goto IL_00f5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dc;
		}
		throw e;
	}

CATCH_00dc:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_8;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0109;
	}// end catch (depth: 1)

IL_00f5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_34 = (&__this->___U3CU3Et__builder_1);
		bool L_35 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_34, L_35, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_0109:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*>(__this + _offset);
	U3CWaitAnyU3Ed__2_MoveNext_mCFF7A82120B59F76023142DF5EABD63CB153EF35(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<WaitAny>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486 (U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E(L_0, L_1, ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAnyU3Ed__2_t46A8ED3559C8D2579C2F9E875E382FADDB126E60*>(__this + _offset);
	U3CWaitAnyU3Ed__2_SetStateMachine_m2AA20AC21256C2068B145399ACAE608EDC00D486(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC592A74726910254060BD7A5165379A73612DA43 (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass5_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass5_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m9382542E84A59B53307BAE06DC605A4055D0146D (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_mAE5381AE19CCBCB4475A894881DF54C8E1C3F5DB(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = ___task0;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9(L_2, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_mA3EA92C6FA79BC46C30122939F6CA44C0E1D90B9_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_4;
		L_4 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_3, NULL);
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = __this->___task_2;
			NullCheck(L_4);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5;
			L_5 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_4, NULL);
			V_2 = L_5;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_6, NULL);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_9);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC(L_10, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_004f_1:
		{
			RuntimeObject* L_11 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_11, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_2;
			NullCheck(L_13);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_13, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_14 = V_1;
			NullCheck(L_14);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_15 = L_14->___coroutineBlocker_0;
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_15, NULL);
			NullCheck(L_16);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17;
			L_17 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_16, NULL);
			V_2 = L_17;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_18, NULL);
			if (L_19)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_20 = 1;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_21);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC(L_22, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4_m12328704DF6C2DC6731309C804DC587642AA27CC_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_00aa_1:
		{
			RuntimeObject* L_23 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_23, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_2;
			NullCheck(L_25);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_25, NULL);
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f8;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_28, NULL);
	}

IL_00f8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mD2B6DAD55F46CBA1BAA6BFC4717B6411BF98C5A1(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass5_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tD69FC2C1CB7676C114F1AC8B8D4877AF09E91EB4*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_m04EC6DB1C2D31452D4A930BA164228324E293146(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<WaitAll>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* V_2 = NULL;
	ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* V_3 = NULL;
	int32_t V_4 = 0;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_5 = NULL;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_7 = NULL;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00a4_1;
			}
		}
		{
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_2 = (U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass5_0__ctor_mC592A74726910254060BD7A5165379A73612DA43(L_2, NULL);
			V_2 = L_2;
			// if (tasks.Length == 0)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			if ((((RuntimeArray*)L_3)->max_length))
			{
				goto IL_0023_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_00fe;
		}

IL_0023_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(tasks.Length + 1);
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_4 = V_2;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_5 = __this->___tasks_2;
			NullCheck(L_5);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_6 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)), NULL);
			NullCheck(L_4);
			L_4->___coroutineBlocker_0 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___coroutineBlocker_0), (void*)L_6);
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_7 = __this->___tasks_2;
			V_3 = L_7;
			V_4 = 0;
			goto IL_0061_1;
		}

IL_0044_1:
		{
			// foreach (ETTask task in tasks)
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_8 = V_3;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			V_5 = L_11;
			// RunOneTask(task).Coroutine();
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_12 = V_2;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_5;
			NullCheck(L_12);
			ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_14;
			L_14 = U3CU3Ec__DisplayClass5_0_U3CWaitAllU3Eg__RunOneTaskU7C0_m9382542E84A59B53307BAE06DC605A4055D0146D(L_12, L_13, NULL);
			V_6 = L_14;
			ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_6), NULL);
			int32_t L_15 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_0061_1:
		{
			// foreach (ETTask task in tasks)
			int32_t L_16 = V_4;
			ETTaskU5BU5D_t450F7E88953540359721DAAB8A676CF06A7485C8* L_17 = V_3;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_0044_1;
			}
		}
		{
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass5_0_t58DC10C24DA5311C6195ED1199782F0126118891* L_18 = V_2;
			NullCheck(L_18);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_19 = L_18->___coroutineBlocker_0;
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_19, NULL);
			NullCheck(L_20);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21;
			L_21 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_20, NULL);
			V_7 = L_21;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_22 = V_7;
			NullCheck(L_22);
			bool L_23;
			L_23 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_22, NULL);
			if (L_23)
			{
				goto IL_00c1_1;
			}
		}
		{
			int32_t L_24 = 0;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_7;
			__this->___U3CU3Eu__1_4 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_25);
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_26 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064(L_26, (&V_7), __this, ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED_m3E9C13137AFCE80E5814B80D9DA3C4DACE627064_RuntimeMethod_var);
			goto IL_0112;
		}

IL_00a4_1:
		{
			RuntimeObject* L_27 = __this->___U3CU3Eu__1_4;
			V_7 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_27, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_00c1_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_29 = V_7;
			NullCheck(L_29);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_29, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			if (L_30)
			{
				goto IL_00d4_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_00fe;
		}

IL_00d4_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_31 = __this->___cancellationToken_3;
			NullCheck(L_31);
			bool L_32;
			L_32 = ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068(L_31, NULL);
			V_1 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
			goto IL_00fe;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e5;
		}
		throw e;
	}

CATCH_00e5:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_8;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_33, L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0112;
	}// end catch (depth: 1)

IL_00fe:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_35 = (&__this->___U3CU3Et__builder_1);
		bool L_36 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_35, L_36, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_0112:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*>(__this + _offset);
	U3CWaitAllU3Ed__5_MoveNext_m5896B4E3831744CD7B6D4E2465B29A9952FAAE73(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49 (U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E(L_0, L_1, ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__5_tA50206C2AA88F82EB79AE3021E9EDE47B6455DED*>(__this + _offset);
	U3CWaitAllU3Ed__5_SetStateMachine_mE9FF048A584A2EA0CC8B07759D1CE214B93FDD49(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ET.ETVoid ET.ETTaskHelper/<>c__DisplayClass6_0::<WaitAll>g__RunOneTask|0(ET.ETTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* __this, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203 L_0;
		L_0 = AsyncETVoidMethodBuilder_Create_mAE5381AE19CCBCB4475A894881DF54C8E1C3F5DB(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_1 = ___task0;
		(&V_0)->___task_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___task_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E(L_2, (&V_0), AsyncETVoidMethodBuilder_Start_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_mF703CC49BFF53BD376F1D2C4A00507A237512E6E_RuntimeMethod_var);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_4;
		L_4 = AsyncETVoidMethodBuilder_get_Task_m01D925CDA13749DAF0518204CA06493E8A93EC46(L_3, NULL);
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
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73 (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* V_1 = NULL;
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa_1;
			}
		}
		{
			// await task;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_4 = __this->___task_2;
			NullCheck(L_4);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_5;
			L_5 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_4, NULL);
			V_2 = L_5;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_6 = V_2;
			NullCheck(L_6);
			bool L_7;
			L_7 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_6, NULL);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_9 = V_2;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_9);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6(L_10, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_004f_1:
		{
			RuntimeObject* L_11 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_11, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_13 = V_2;
			NullCheck(L_13);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_13, NULL);
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_14 = V_1;
			NullCheck(L_14);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_15 = L_14->___coroutineBlocker_0;
			NullCheck(L_15);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_16;
			L_16 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_15, NULL);
			NullCheck(L_16);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_17;
			L_17 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_16, NULL);
			V_2 = L_17;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_18, NULL);
			if (L_19)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_20 = 1;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_21);
			AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6(L_22, (&V_2), __this, AsyncETVoidMethodBuilder_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952_m7BBF15F324CD989EAAAC7E26FEF23747228CC8D6_RuntimeMethod_var);
			goto IL_00f8;
		}

IL_00aa_1:
		{
			RuntimeObject* L_23 = __this->___U3CU3Eu__1_4;
			V_2 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_23, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_25 = V_2;
			NullCheck(L_25);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_25, NULL);
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_26 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_27 = V_3;
		AsyncETVoidMethodBuilder_SetException_m7F5356721EF2BCB40149B2F55B8E2590699EBAF5(L_26, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f8;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_28 = (&__this->___U3CU3Et__builder_1);
		AsyncETVoidMethodBuilder_SetResult_m290D2A1FF93C5EB907BE4243F0E62E0CA49E760A(L_28, NULL);
	}

IL_00f8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_MoveNext_mE6E8D66C93025FD6239EDB86C098A5214F652D73(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<>c__DisplayClass6_0/<<WaitAll>g__RunOneTask|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E (U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncETVoidMethodBuilder_t38B41CDFBA4FC453C25BA2981896801572488203* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncETVoidMethodBuilder_SetStateMachine_m6A0835E3894AAEE9D100F17C6415C8C2DF7B5A78(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_tC8B9E615EDCA22128352B31CB0005D42DCD70952*>(__this + _offset);
	U3CU3CWaitAllU3Eg__RunOneTaskU7C0U3Ed_SetStateMachine_mCF501DE82C7EE07B063C4A75C71AC5245D8F594E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETTaskHelper/<WaitAll>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* V_2 = NULL;
	Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_4 = NULL;
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c0_1;
			}
		}
		{
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_2 = (U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass6_0__ctor_mB4BE8E3414AAE4FBCECE1D4E864D610D57F70C3C(L_2, NULL);
			V_2 = L_2;
			// if (tasks.Count == 0)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_3 = __this->___tasks_2;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline(L_3, List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0027_1;
			}
		}
		{
			// return false;
			V_1 = (bool)0;
			goto IL_011a;
		}

IL_0027_1:
		{
			// CoroutineBlocker coroutineBlocker = new CoroutineBlocker(tasks.Count + 1);
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_5 = V_2;
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_6 = __this->___tasks_2;
			NullCheck(L_6);
			int32_t L_7;
			L_7 = List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_inline(L_6, List_1_get_Count_m098A3FBEC846D65A6FA1C497181C458CB65EC608_RuntimeMethod_var);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_8 = (CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A*)il2cpp_codegen_object_new(CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			CoroutineBlocker__ctor_mC2DEAA1C928DA22578C4C3F820DD758ECAF79A52(L_8, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
			NullCheck(L_5);
			L_5->___coroutineBlocker_0 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___coroutineBlocker_0), (void*)L_8);
			// foreach (ETTask task in tasks)
			List_1_tA4F47AA2446E3F808EABA13A13F5A8A05B4A5101* L_9 = __this->___tasks_2;
			NullCheck(L_9);
			Enumerator_t05F9D6B822BE78199481DA0AA4B6B04FCC4968E9 L_10;
			L_10 = List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2(L_9, List_1_GetEnumerator_m058832077A5E305D1A30987EDF5EF94ABB118AB2_RuntimeMethod_var);
			V_3 = L_10;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0072_1:
				{// begin finally (depth: 2)
					{
						int32_t L_11 = V_0;
						if ((((int32_t)L_11) >= ((int32_t)0)))
						{
							goto IL_0083_1;
						}
					}
					{
						Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C((&V_3), Enumerator_Dispose_m2CF219B461F67CCD06F99FF3AFDEADC48A1BD26C_RuntimeMethod_var);
					}

IL_0083_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0067_2;
				}

IL_004d_2:
				{
					// foreach (ETTask task in tasks)
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_12;
					L_12 = Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_inline((&V_3), Enumerator_get_Current_mDE3732995809E5A4FABC3ACE34ADB9EDA62A6B09_RuntimeMethod_var);
					V_4 = L_12;
					// RunOneTask(task).Coroutine();
					U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_13 = V_2;
					ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_14 = V_4;
					NullCheck(L_13);
					ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38 L_15;
					L_15 = U3CU3Ec__DisplayClass6_0_U3CWaitAllU3Eg__RunOneTaskU7C0_mCE1182ADD6A9B03DEE4481D7556D7A64C9BC7AFC(L_13, L_14, NULL);
					V_5 = L_15;
					ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA((&V_5), NULL);
				}

IL_0067_2:
				{
					// foreach (ETTask task in tasks)
					bool L_16;
					L_16 = Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2((&V_3), Enumerator_MoveNext_m8E225A51A6FD5B638EB3D77D976A473FB1C010B2_RuntimeMethod_var);
					if (L_16)
					{
						goto IL_004d_2;
					}
				}
				{
					goto IL_0084_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0084_1:
		{
			// await coroutineBlocker.WaitAsync();
			U3CU3Ec__DisplayClass6_0_t683F5DF1ABBC6076EC981A7D758038E5F5001048* L_17 = V_2;
			NullCheck(L_17);
			CoroutineBlocker_tB36E126059540FB732976F4A8DEC06EF8A96634A* L_18 = L_17->___coroutineBlocker_0;
			NullCheck(L_18);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_19;
			L_19 = CoroutineBlocker_WaitAsync_m73943BDA099AA93BBD5EAEEA957B1FA94706C3DF(L_18, NULL);
			NullCheck(L_19);
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_20;
			L_20 = ETTask_GetAwaiter_m18704BF1223130E4441BED1DF784F584052E9F46(L_19, NULL);
			V_6 = L_20;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_21 = V_6;
			NullCheck(L_21);
			bool L_22;
			L_22 = ETTask_get_IsCompleted_mC46408CF8CDBC0122E679473EDB14A9BA55A13F2(L_21, NULL);
			if (L_22)
			{
				goto IL_00dd_1;
			}
		}
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_24 = V_6;
			__this->___U3CU3Eu__1_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)L_24);
			ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_25 = (&__this->___U3CU3Et__builder_1);
			ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6(L_25, (&V_6), __this, ETAsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_TisU3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF_mC57852BDD2AAF841B61F73D4DC1445AF7DE956F6_RuntimeMethod_var);
			goto IL_012e;
		}

IL_00c0_1:
		{
			RuntimeObject* L_26 = __this->___U3CU3Eu__1_4;
			V_6 = ((ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9*)CastclassClass((RuntimeObject*)L_26, ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_4 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_4), (void*)NULL);
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00dd_1:
		{
			ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_28 = V_6;
			NullCheck(L_28);
			ETTask_GetResult_m4025996962517219AB63CD35458CEE581DF064E6(L_28, NULL);
			// if (cancellationToken == null)
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_29 = __this->___cancellationToken_3;
			if (L_29)
			{
				goto IL_00f0_1;
			}
		}
		{
			// return true;
			V_1 = (bool)1;
			goto IL_011a;
		}

IL_00f0_1:
		{
			// return !cancellationToken.IsCancel();
			ETCancellationToken_tACA8F146EDE95371894D92DF0FD89C07C08886E1* L_30 = __this->___cancellationToken_3;
			NullCheck(L_30);
			bool L_31;
			L_31 = ETCancellationToken_IsCancel_m2138EFC83F2D201AD73E6B56D7F394F39CDD8068(L_30, NULL);
			V_1 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			goto IL_011a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0101;
		}
		throw e;
	}

CATCH_0101:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_7;
		ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetException_m4B20AE5BD8F1E608AAD3970CB6C2985ACB4D6B08_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_012e;
	}// end catch (depth: 1)

IL_011a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_34 = (&__this->___U3CU3Et__builder_1);
		bool L_35 = V_1;
		ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C(L_34, L_35, ETAsyncTaskMethodBuilder_1_SetResult_mBAD14F0004B857E596693C614C5B29587E97021C_RuntimeMethod_var);
	}

IL_012e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*>(__this + _offset);
	U3CWaitAllU3Ed__6_MoveNext_mC67606D6615193A5AD14D47F4AA3309A557F0CE5(_thisAdjusted, method);
}
// System.Void ET.ETTaskHelper/<WaitAll>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4 (U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E(L_0, L_1, ETAsyncTaskMethodBuilder_1_SetStateMachine_m5B87C2E5817CF286E3FCDFBB7C7BF417672DB76E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitAllU3Ed__6_t73CAD2CCB5423A31C85967FB33B23FE96219FFBF*>(__this + _offset);
	U3CWaitAllU3Ed__6_SetStateMachine_m8F2550CD0C39FBA84AF251340E455AE3C5EEF1E4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ET.ETVoid::Coroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_Coroutine_m7D69369538267F547E8D8AF8467A2806C5F6E6DA(_thisAdjusted, method);
}
// System.Boolean ET.ETVoid::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	bool _returnValue;
	_returnValue = ETVoid_get_IsCompleted_m6EC6117D7E6C71F1ABDA3DD9BFA990560A812572(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ET.ETVoid::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_OnCompleted_mE2A013466ABE3DE81D7193A13C5A88F902274170(_thisAdjusted, ___continuation0, method);
}
// System.Void ET.ETVoid::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213 (ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ETVoid_tFB79A53EB5B1FFC7F4A2428E68797AD75B74DC38*>(__this + _offset);
	ETVoid_UnsafeOnCompleted_mBA7A78A207BDC8D1E2AD8B0D957316B36D224213(_thisAdjusted, ___continuation0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_Multicast(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* currentDelegate = reinterpret_cast<KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenInst(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStatic(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStaticInvoker(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___len1, ___kcp2, ___user3);
}
int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_ClosedStaticInvoker(KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___len1, ___kcp2, ___user3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buf0, ___len1, ___kcp2, ___user3);

	return returnValue;
}
// System.Void ET.KcpOutput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpOutput__ctor_m352C858407C59680A6115553DB22CF7DBD0EC979 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5_Multicast;
}
// System.Int32 ET.KcpOutput::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpOutput_Invoke_m0D17200A85788343ECCC96D489F76518974662A5 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.KcpOutput::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KcpOutput_BeginInvoke_m530C0B87F4EB9F8B4883975895FF9E8D09FF65EF (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buf0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___len1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___kcp2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___user3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 ET.KcpOutput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpOutput_EndInvoke_mE9A16D749003A839866D6DE9A11DC52C47C83D24 (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_Multicast(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* currentDelegate = reinterpret_cast<KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenInst(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStatic(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___len1, ___kcp2, ___user3, method);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStaticInvoker(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___len1, ___kcp2, ___user3);
}
void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_ClosedStaticInvoker(KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___len1, ___kcp2, ___user3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___buf0, ___len1, ___kcp2, ___user3);

}
// System.Void ET.KcpLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog__ctor_m6121C293C59A8EA0CAE5913857B1396DBFC0CDC8 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074_Multicast;
}
// System.Void ET.KcpLog::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog_Invoke_mF30BC38D82257CB8527D6E2CBCBAA2081B5FC074 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___len1, ___kcp2, ___user3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ET.KcpLog::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KcpLog_BeginInvoke_m1712EEC7A9E73AC66BC49E0420EA58DD3B1BD9DD (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, intptr_t ___buf0, int32_t ___len1, intptr_t ___kcp2, intptr_t ___user3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buf0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___len1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___kcp2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___user3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void ET.KcpLog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpLog_EndInvoke_m16B40206957AFDE3E0DA26112CC4BC3D6E3C77A1 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 ET.Kcp::ikcp_check(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_check_m792A8C39192D219AE25708B9C391148EB59335D5 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_check", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_check)(___kcp0, ___current1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___kcp0, ___current1);
	#endif

	return returnValue;
}
// System.IntPtr ET.Kcp::ikcp_create(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_ikcp_create_m882195F805654A2B23FCFD9CDAC08C7614E8BC23 (uint32_t ___conv0, intptr_t ___user1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (uint32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_create)(___conv0, ___user1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___conv0, ___user1);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_flush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_flush_m613B3DE768286F491CCD97694A80BC819BB0C5D7 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_flush", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_flush)(___kcp0);
	#else
	il2cppPInvokeFunc(___kcp0);
	#endif

}
// System.UInt32 ET.Kcp::ikcp_getconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_ikcp_getconv_mF1BA7C3D5959FAD2A697FD8C55CDCC0EB7AC92D3 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_getconv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_getconv)(___ptr0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_input(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_input_mD8C5E3086842AB257A2BC166F244C9A189ABE838 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_input", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___data1' to native representation
	uint8_t* ____data1_marshaled = NULL;
	if (___data1 != NULL)
	{
		____data1_marshaled = reinterpret_cast<uint8_t*>((___data1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_input)(___kcp0, ____data1_marshaled, ___offset2, ___size3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ____data1_marshaled, ___offset2, ___size3);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_nodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_nodelay_mE34558E217101FEA69CAE0605D021A7414432C08 (intptr_t ___kcp0, int32_t ___nodelay1, int32_t ___interval2, int32_t ___resend3, int32_t ___nc4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_nodelay", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_nodelay)(___kcp0, ___nodelay1, ___interval2, ___resend3, ___nc4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ___nodelay1, ___interval2, ___resend3, ___nc4);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_peeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_peeksize_mB5518C87D9A2931FD06342FD0B7EE92493B5BC81 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_peeksize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_peeksize)(___kcp0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_recv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_recv_mB9F3B5946C730A3A81B70B6514B6D7EEACC22227 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_recv", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_recv)(___kcp0, ____buffer1_marshaled, ___index2, ___len3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ____buffer1_marshaled, ___index2, ___len3);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_release_mE80337A677BBACDD34E257ED539A0842F61625F4 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_release)(___kcp0);
	#else
	il2cppPInvokeFunc(___kcp0);
	#endif

}
// System.Int32 ET.Kcp::ikcp_send(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_send_m3FB2EB8BBBAB4E00DBDE48ED2CC96E1E6C2CDA1A (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_send", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_send)(___kcp0, ____buffer1_marshaled, ___offset2, ___len3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ____buffer1_marshaled, ___offset2, ___len3);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_setminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setminrto_mEA38B9F88F362DEC6E0330B1819B149EDB23742F (intptr_t ___ptr0, int32_t ___minrto1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setminrto", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setminrto)(___ptr0, ___minrto1);
	#else
	il2cppPInvokeFunc(___ptr0, ___minrto1);
	#endif

}
// System.Int32 ET.Kcp::ikcp_setmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_setmtu_m4482BAE0EB2131897CC608B2D1C98CAC73D28821 (intptr_t ___kcp0, int32_t ___mtu1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setmtu", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_setmtu)(___kcp0, ___mtu1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ___mtu1);
	#endif

	return returnValue;
}
// System.Void ET.Kcp::ikcp_setoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setoutput_m904C2F1C11DDA97AA8CC12744CDFBFABEC579AFC (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___output0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setoutput", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___output0' to native representation
	Il2CppMethodPointer ____output0_marshaled = NULL;
	____output0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___output0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setoutput)(____output0_marshaled);
	#else
	il2cppPInvokeFunc(____output0_marshaled);
	#endif

}
// System.Void ET.Kcp::ikcp_setlog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_setlog_m8E8892C275C949BCFCF740571863FFC5148E6C9A (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___log0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_setlog", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___log0' to native representation
	Il2CppMethodPointer ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___log0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_setlog)(____log0_marshaled);
	#else
	il2cppPInvokeFunc(____log0_marshaled);
	#endif

}
// System.Void ET.Kcp::ikcp_update(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_ikcp_update_m436B9B9B9045E22F4F4B96079C0B7175500EAF2B (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_update", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	reinterpret_cast<PInvokeFunc>(ikcp_update)(___kcp0, ___current1);
	#else
	il2cppPInvokeFunc(___kcp0, ___current1);
	#endif

}
// System.Int32 ET.Kcp::ikcp_waitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_waitsnd_mED77B6EAAA89867854ADB1B892174C6EA9828E27 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_waitsnd", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_waitsnd)(___kcp0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0);
	#endif

	return returnValue;
}
// System.Int32 ET.Kcp::ikcp_wndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_ikcp_wndsize_m6A273E756DCA50329CBAF150C0918A2D7BEB1E8B (intptr_t ___kcp0, int32_t ___sndwnd1, int32_t ___rcvwnd2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kcp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kcp"), "ikcp_wndsize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kcp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ikcp_wndsize)(___kcp0, ___sndwnd1, ___rcvwnd2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___kcp0, ___sndwnd1, ___rcvwnd2);
	#endif

	return returnValue;
}
// System.UInt32 ET.Kcp::KcpCheck(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_KcpCheck_mB6388F02E28B9546DE18FEDA13EEAB994CEB4342 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpCheck_mB6388F02E28B9546DE18FEDA13EEAB994CEB4342_RuntimeMethod_var)));
	}

IL_0018:
	{
		// uint ret = ikcp_check(kcp, current);
		intptr_t L_3 = ___kcp0;
		uint32_t L_4 = ___current1;
		uint32_t L_5;
		L_5 = Kcp_ikcp_check_m792A8C39192D219AE25708B9C391148EB59335D5(L_3, L_4, NULL);
		// return ret;
		return L_5;
	}
}
// System.IntPtr ET.Kcp::KcpCreate(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Kcp_KcpCreate_m22A1DA06E722C9EA08CEC34A2A3631496EAAA664 (uint32_t ___conv0, intptr_t ___user1, const RuntimeMethod* method) 
{
	{
		// return ikcp_create(conv, user);
		uint32_t L_0 = ___conv0;
		intptr_t L_1 = ___user1;
		intptr_t L_2;
		L_2 = Kcp_ikcp_create_m882195F805654A2B23FCFD9CDAC08C7614E8BC23(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void ET.Kcp::KcpFlush(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpFlush_mF506D3DA1FA2766D024F279EF76DCA35CAB31A6D (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpFlush_mF506D3DA1FA2766D024F279EF76DCA35CAB31A6D_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_flush(kcp);
		intptr_t L_3 = ___kcp0;
		Kcp_ikcp_flush_m613B3DE768286F491CCD97694A80BC819BB0C5D7(L_3, NULL);
		// }
		return;
	}
}
// System.UInt32 ET.Kcp::KcpGetconv(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kcp_KcpGetconv_m037A2BC3A099E17893625855C255F610FF01EE5F (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ptr == IntPtr.Zero)
		intptr_t L_0 = ___ptr0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpGetconv_m037A2BC3A099E17893625855C255F610FF01EE5F_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_getconv(ptr);
		intptr_t L_3 = ___ptr0;
		uint32_t L_4;
		L_4 = Kcp_ikcp_getconv_mF1BA7C3D5959FAD2A697FD8C55CDCC0EB7AC92D3(L_3, NULL);
		return L_4;
	}
}
// System.Int32 ET.Kcp::KcpInput(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpInput_m2C4611B8C82D5E1B69DC91C65941E9C2430043AB (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpInput_m2C4611B8C82D5E1B69DC91C65941E9C2430043AB_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (offset + len > buffer.Length)
		int32_t L_3 = ___offset2;
		int32_t L_4 = ___len3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// throw new Exception($"kcp error, KcpInput {buffer.Length} {offset} {len}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer1;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ___offset2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = ___len3;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5B17BC8CAFB0366DD8D8EA29F1A2C07CCE73DC5)), L_8, L_11, L_14, NULL);
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpInput_m2C4611B8C82D5E1B69DC91C65941E9C2430043AB_RuntimeMethod_var)));
	}

IL_0044:
	{
		// int ret = ikcp_input(kcp, buffer, offset, len);
		intptr_t L_17 = ___kcp0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buffer1;
		int32_t L_19 = ___offset2;
		int32_t L_20 = ___len3;
		int32_t L_21;
		L_21 = Kcp_ikcp_input_mD8C5E3086842AB257A2BC166F244C9A189ABE838(L_17, L_18, L_19, L_20, NULL);
		// return ret;
		return L_21;
	}
}
// System.Int32 ET.Kcp::KcpNodelay(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpNodelay_mB4F011762667D922BD630EE3E98E7A47919B8AAB (intptr_t ___kcp0, int32_t ___nodelay1, int32_t ___interval2, int32_t ___resend3, int32_t ___nc4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpNodelay_mB4F011762667D922BD630EE3E98E7A47919B8AAB_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_nodelay(kcp, nodelay, interval, resend, nc);
		intptr_t L_3 = ___kcp0;
		int32_t L_4 = ___nodelay1;
		int32_t L_5 = ___interval2;
		int32_t L_6 = ___resend3;
		int32_t L_7 = ___nc4;
		int32_t L_8;
		L_8 = Kcp_ikcp_nodelay_mE34558E217101FEA69CAE0605D021A7414432C08(L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Int32 ET.Kcp::KcpPeeksize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpPeeksize_m3A0A7000ED0C2312BCC7F006CE1ADEC251ACCD71 (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpPeeksize_m3A0A7000ED0C2312BCC7F006CE1ADEC251ACCD71_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int ret = ikcp_peeksize(kcp);
		intptr_t L_3 = ___kcp0;
		int32_t L_4;
		L_4 = Kcp_ikcp_peeksize_mB5518C87D9A2931FD06342FD0B7EE92493B5BC81(L_3, NULL);
		// return ret;
		return L_4;
	}
}
// System.Int32 ET.Kcp::KcpRecv(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpRecv_mD9A5EFEE7C95305C4EA7E598C26DD0BA775E062B (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRecv_mD9A5EFEE7C95305C4EA7E598C26DD0BA775E062B_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (buffer.Length < index + len)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer1;
		NullCheck(L_3);
		int32_t L_4 = ___index2;
		int32_t L_5 = ___len3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5)))))
		{
			goto IL_003c;
		}
	}
	{
		// throw new Exception($"kcp error, KcpRecv error: {index} {len}");
		int32_t L_6 = ___index2;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ___len3;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02A29BDC20BCE88DC132CE04A01DD7C3469EA8EB)), L_8, L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRecv_mD9A5EFEE7C95305C4EA7E598C26DD0BA775E062B_RuntimeMethod_var)));
	}

IL_003c:
	{
		// int ret = ikcp_recv(kcp, buffer, index, len);
		intptr_t L_14 = ___kcp0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___buffer1;
		int32_t L_16 = ___index2;
		int32_t L_17 = ___len3;
		int32_t L_18;
		L_18 = Kcp_ikcp_recv_mB9F3B5946C730A3A81B70B6514B6D7EEACC22227(L_14, L_15, L_16, L_17, NULL);
		// return ret;
		return L_18;
	}
}
// System.Void ET.Kcp::KcpRelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpRelease_mECBFAE11EDB2EBF2CEF2C274BD39417575A1B65B (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpRelease_mECBFAE11EDB2EBF2CEF2C274BD39417575A1B65B_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_release(kcp);
		intptr_t L_3 = ___kcp0;
		Kcp_ikcp_release_mE80337A677BBACDD34E257ED539A0842F61625F4(L_3, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpSend(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpSend_m9F39589F9A2108704672362977FA3BD6913A3AE0 (intptr_t ___kcp0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSend_m9F39589F9A2108704672362977FA3BD6913A3AE0_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (offset + len > buffer.Length)
		int32_t L_3 = ___offset2;
		int32_t L_4 = ___len3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// throw new Exception($"kcp error, KcpSend {buffer.Length} {offset} {len}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer1;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ___offset2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = ___len3;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14B9C4ED649A12F3286872BC02BF44694FF70613)), L_8, L_11, L_14, NULL);
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSend_m9F39589F9A2108704672362977FA3BD6913A3AE0_RuntimeMethod_var)));
	}

IL_0044:
	{
		// int ret = ikcp_send(kcp, buffer, offset, len);
		intptr_t L_17 = ___kcp0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buffer1;
		int32_t L_19 = ___offset2;
		int32_t L_20 = ___len3;
		int32_t L_21;
		L_21 = Kcp_ikcp_send_m3FB2EB8BBBAB4E00DBDE48ED2CC96E1E6C2CDA1A(L_17, L_18, L_19, L_20, NULL);
		// return ret;
		return L_21;
	}
}
// System.Void ET.Kcp::KcpSetminrto(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetminrto_m910E4FB08F1FB8DBB57D6AF5DFB7AFC7EEE0F161 (intptr_t ___kcp0, int32_t ___minrto1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSetminrto_m910E4FB08F1FB8DBB57D6AF5DFB7AFC7EEE0F161_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_setminrto(kcp, minrto);
		intptr_t L_3 = ___kcp0;
		int32_t L_4 = ___minrto1;
		Kcp_ikcp_setminrto_mEA38B9F88F362DEC6E0330B1819B149EDB23742F(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpSetmtu(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpSetmtu_m6A881ABC60FDF876C62E1DBCCBD1C8D72CA36E85 (intptr_t ___kcp0, int32_t ___mtu1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpSetmtu_m6A881ABC60FDF876C62E1DBCCBD1C8D72CA36E85_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_setmtu(kcp, mtu);
		intptr_t L_3 = ___kcp0;
		int32_t L_4 = ___mtu1;
		int32_t L_5;
		L_5 = Kcp_ikcp_setmtu_m4482BAE0EB2131897CC608B2D1C98CAC73D28821(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void ET.Kcp::KcpSetoutput(ET.KcpOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetoutput_m4AE8F3E429DCC1501E539063F78177C86445913E (KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KcpOutput = output;
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* L_0 = ___output0;
		((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3), (void*)L_0);
		// ikcp_setoutput(KcpOutput);
		KcpOutput_t70A2E75BF30C9F6BBFA7EDCCF748E5F9C25F6732* L_1 = ((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpOutput_3;
		Kcp_ikcp_setoutput_m904C2F1C11DDA97AA8CC12744CDFBFABEC579AFC(L_1, NULL);
		// }
		return;
	}
}
// System.Void ET.Kcp::KcpSetLog(ET.KcpLog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpSetLog_mBF134B01D73A36B6E1C733FDE686B71A00D41A47 (KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* ___kcpLog0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KcpLog = kcpLog;
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* L_0 = ___kcpLog0;
		((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4), (void*)L_0);
		// ikcp_setlog(KcpLog);
		KcpLog_t166A3A6F579F69B0AA700460B0BF73A4B8C07C5F* L_1 = ((Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_StaticFields*)il2cpp_codegen_static_fields_for(Kcp_t429AB84FF46AA83D15D3DA2EF4C9CE96BF648B30_il2cpp_TypeInfo_var))->___KcpLog_4;
		Kcp_ikcp_setlog_m8E8892C275C949BCFCF740571863FFC5148E6C9A(L_1, NULL);
		// }
		return;
	}
}
// System.Void ET.Kcp::KcpUpdate(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kcp_KcpUpdate_mF6F252DD9538494E7C1AD4B7F605753596AB15D6 (intptr_t ___kcp0, uint32_t ___current1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpUpdate_mF6F252DD9538494E7C1AD4B7F605753596AB15D6_RuntimeMethod_var)));
	}

IL_0018:
	{
		// ikcp_update(kcp, current);
		intptr_t L_3 = ___kcp0;
		uint32_t L_4 = ___current1;
		Kcp_ikcp_update_m436B9B9B9045E22F4F4B96079C0B7175500EAF2B(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 ET.Kcp::KcpWaitsnd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpWaitsnd_m1AEABF11A24CD848ECD483A60511B9C8B735849B (intptr_t ___kcp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpWaitsnd_m1AEABF11A24CD848ECD483A60511B9C8B735849B_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int ret = ikcp_waitsnd(kcp);
		intptr_t L_3 = ___kcp0;
		int32_t L_4;
		L_4 = Kcp_ikcp_waitsnd_mED77B6EAAA89867854ADB1B892174C6EA9828E27(L_3, NULL);
		// return ret;
		return L_4;
	}
}
// System.Int32 ET.Kcp::KcpWndsize(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kcp_KcpWndsize_mCC6E714D801245A8987623FC873A4CAFD4F3DE73 (intptr_t ___kcp0, int32_t ___sndwnd1, int32_t ___rcvwnd2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kcp == IntPtr.Zero)
		intptr_t L_0 = ___kcp0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new Exception($"kcp error, kcp point is zero");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCE88E0B4651EFA0D8F7973A07C513EC28038096)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kcp_KcpWndsize_mCC6E714D801245A8987623FC873A4CAFD4F3DE73_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ikcp_wndsize(kcp, sndwnd, rcvwnd);
		intptr_t L_3 = ___kcp0;
		int32_t L_4 = ___sndwnd1;
		int32_t L_5 = ___rcvwnd2;
		int32_t L_6;
		L_6 = Kcp_ikcp_wndsize_m6A273E756DCA50329CBAF150C0918A2D7BEB1E8B(L_3, L_4, L_5, NULL);
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
// System.IntPtr ET.Recast::RecastLoad(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastLoad_m0106EF11BCA374C83B56B429F2E4E6DBEAB1796C (int32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___n2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastLoad", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(RecastLoad)(___id0, ____buffer1_marshaled, ___n2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0, ____buffer1_marshaled, ___n2);
	#endif

	return returnValue;
}
// System.Int64 ET.Recast::RecastLoadLong(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Recast_RecastLoadLong_mB638AA45CE4BBB889C044B50053BD45079CB4465 (int32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___n2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return RecastLoad(id, buffer, n).ToInt64();
		int32_t L_0 = ___id0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		int32_t L_2 = ___n2;
		intptr_t L_3;
		L_3 = Recast_RecastLoad_m0106EF11BCA374C83B56B429F2E4E6DBEAB1796C(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		return L_4;
	}
}
// System.IntPtr ET.Recast::RecastGet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recast_RecastGet_m68BE83704A4D95A1C7ECE8CEB50E0DED605E3C7E (int32_t ___id0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastGet", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(RecastGet)(___id0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___id0);
	#endif

	return returnValue;
}
// System.Int64 ET.Recast::RecastGetLong(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Recast_RecastGetLong_m1CFD960C4522EE967C3C9DAB5F42CB9C3B355509 (int32_t ___id0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return RecastGet(id).ToInt32();
		int32_t L_0 = ___id0;
		intptr_t L_1;
		L_1 = Recast_RecastGet_m68BE83704A4D95A1C7ECE8CEB50E0DED605E3C7E(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_0), NULL);
		return ((int64_t)L_2);
	}
}
// System.Void ET.Recast::RecastClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recast_RecastClear_mEF020DE7005FE2178966D3C263EFB18C511FAF32 (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastClear", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	reinterpret_cast<PInvokeFunc>(RecastClear)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 ET.Recast::RecastFind(System.IntPtr,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_m62DA5AD945A935817505088F3A7BAF75B135822E (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startPos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___endPos3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___straightPath4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFind", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___extents1' to native representation
	float* ____extents1_marshaled = NULL;
	if (___extents1 != NULL)
	{
		____extents1_marshaled = reinterpret_cast<float*>((___extents1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___startPos2' to native representation
	float* ____startPos2_marshaled = NULL;
	if (___startPos2 != NULL)
	{
		____startPos2_marshaled = reinterpret_cast<float*>((___startPos2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___endPos3' to native representation
	float* ____endPos3_marshaled = NULL;
	if (___endPos3 != NULL)
	{
		____endPos3_marshaled = reinterpret_cast<float*>((___endPos3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___straightPath4' to native representation
	float* ____straightPath4_marshaled = NULL;
	if (___straightPath4 != NULL)
	{
		____straightPath4_marshaled = reinterpret_cast<float*>((___straightPath4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFind)(___navPtr0, ____extents1_marshaled, ____startPos2_marshaled, ____endPos3_marshaled, ____straightPath4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____extents1_marshaled, ____startPos2_marshaled, ____endPos3_marshaled, ____straightPath4_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFind(System.Int64,System.Single[],System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFind_mDEF6D802575CEEB09ECACB7D453B34EDA938030F (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___startPos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___endPos3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___straightPath4, const RuntimeMethod* method) 
{
	{
		// return RecastFind(new IntPtr(navPtr), extents, startPos, endPos, straightPath);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___extents1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___startPos2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___endPos3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___straightPath4;
		int32_t L_6;
		L_6 = Recast_RecastFind_m62DA5AD945A935817505088F3A7BAF75B135822E(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 ET.Recast::RecastFindNearestPoint(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m8D41CBFAD757CAED56DED14F5B29D7EE7FEC05C4 (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___nearestPos3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindNearestPoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___extents1' to native representation
	float* ____extents1_marshaled = NULL;
	if (___extents1 != NULL)
	{
		____extents1_marshaled = reinterpret_cast<float*>((___extents1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pos2' to native representation
	float* ____pos2_marshaled = NULL;
	if (___pos2 != NULL)
	{
		____pos2_marshaled = reinterpret_cast<float*>((___pos2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___nearestPos3' to native representation
	float* ____nearestPos3_marshaled = NULL;
	if (___nearestPos3 != NULL)
	{
		____nearestPos3_marshaled = reinterpret_cast<float*>((___nearestPos3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindNearestPoint)(___navPtr0, ____extents1_marshaled, ____pos2_marshaled, ____nearestPos3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____extents1_marshaled, ____pos2_marshaled, ____nearestPos3_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindNearestPoint(System.Int64,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindNearestPoint_m05966D0C56500027532E54752AB3DCE37FB57795 (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___nearestPos3, const RuntimeMethod* method) 
{
	{
		// return RecastFindNearestPoint(new IntPtr(navPtr), extents, pos, nearestPos);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___extents1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___pos2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___nearestPos3;
		int32_t L_5;
		L_5 = Recast_RecastFindNearestPoint_m8D41CBFAD757CAED56DED14F5B29D7EE7FEC05C4(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.IntPtr,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_m08185C145BE4C294F3F603E9F638A106DF5D87DA (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___centerPos2, float ___radius3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, float*, float, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(float) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindRandomPointAroundCircle", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___extents1' to native representation
	float* ____extents1_marshaled = NULL;
	if (___extents1 != NULL)
	{
		____extents1_marshaled = reinterpret_cast<float*>((___extents1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___centerPos2' to native representation
	float* ____centerPos2_marshaled = NULL;
	if (___centerPos2 != NULL)
	{
		____centerPos2_marshaled = reinterpret_cast<float*>((___centerPos2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___randomPos4' to native representation
	float* ____randomPos4_marshaled = NULL;
	if (___randomPos4 != NULL)
	{
		____randomPos4_marshaled = reinterpret_cast<float*>((___randomPos4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindRandomPointAroundCircle)(___navPtr0, ____extents1_marshaled, ____centerPos2_marshaled, ___radius3, ____randomPos4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____extents1_marshaled, ____centerPos2_marshaled, ___radius3, ____randomPos4_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindRandomPointAroundCircle(System.Int64,System.Single[],System.Single[],System.Single,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPointAroundCircle_mA60CE3C63881F29F8756F6E9D2F23719E158EE15 (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___extents1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___centerPos2, float ___radius3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos4, const RuntimeMethod* method) 
{
	{
		// return RecastFindRandomPointAroundCircle(new IntPtr(navPtr), extents, centerPos, radius, randomPos);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___extents1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___centerPos2;
		float L_4 = ___radius3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___randomPos4;
		int32_t L_6;
		L_6 = Recast_RecastFindRandomPointAroundCircle_m08185C145BE4C294F3F603E9F638A106DF5D87DA(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 ET.Recast::RecastFindRandomPoint(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_mE21B43AAC3E5F394D90078D21F848335E2E4F65D (intptr_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_RecastDll_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("RecastDll"), "RecastFindRandomPoint", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___randomPos1' to native representation
	float* ____randomPos1_marshaled = NULL;
	if (___randomPos1 != NULL)
	{
		____randomPos1_marshaled = reinterpret_cast<float*>((___randomPos1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_RecastDll_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RecastFindRandomPoint)(___navPtr0, ____randomPos1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___navPtr0, ____randomPos1_marshaled);
	#endif

	return returnValue;
}
// System.Int32 ET.Recast::RecastFindRandomPoint(System.Int64,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recast_RecastFindRandomPoint_m0F192EEB3586BCB85991679918E1A9C09CF1466D (int64_t ___navPtr0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___randomPos1, const RuntimeMethod* method) 
{
	{
		// return RecastFindRandomPoint(new IntPtr(navPtr), randomPos);
		int64_t L_0 = ___navPtr0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_1), L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___randomPos1;
		int32_t L_3;
		L_3 = Recast_RecastFindRandomPoint_mE21B43AAC3E5F394D90078D21F848335E2E4F65D(L_1, L_2, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m080D6F94C1BC959D115B913D6AA0F00AE68A4DC8 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ILMethod_get_ParameterCount_m0C4573BC61A5259587CA3E2988861200ED6755F0_inline (ILMethod_tA56B8FD062B67B88B2396AC1AFFCED9E4FE92AD7* __this, const RuntimeMethod* method) 
{
	{
		// return paramCnt;
		int32_t L_0 = __this->___paramCnt_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* CLRMethod_get_MethodInfo_mA20BF96B9EF5F7021E583C5E10EBEB616A2A1779_inline (CLRMethod_t7DF49A5C4FF255B056BFEE0BFDF137AEF905FFF5* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get { return def; } }
		MethodInfo_t* L_0 = __this->___def_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* ETAsyncTaskMethodBuilder_get_Task_mB1EE6961178A9200208ED6EAF4B16C84A579421F_inline (ETAsyncTaskMethodBuilder_t6539D4B6A1CB6F6388453211D928A26188B68B0C* __this, const RuntimeMethod* method) 
{
	{
		// public ETTask Task => this.tcs;
		ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* L_0 = __this->___tcs_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_inline (ETTask_tDF01C213ED33CDC9466D9AB4A439796AA4612CA9* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (this.state != AwaiterStatus.Pending)
		uint8_t L_0 = __this->___state_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("TaskT_TransitionToFinal_AlreadyCompleted");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7940B1E0CEB23F95FA72EF03CC10A2C9BDF454A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ETTask_SetException_m15F23C04CCB4BD5B9A5AB75928C823A93F9B6176_RuntimeMethod_var)));
	}

IL_0013:
	{
		// this.state = AwaiterStatus.Faulted;
		__this->___state_3 = 2;
		// Action c = this.callback as Action;
		RuntimeObject* L_2 = __this->___callback_4;
		// this.callback = ExceptionDispatchInfo.Capture(e);
		Exception_t* L_3 = ___e0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4;
		L_4 = ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E(L_3, NULL);
		__this->___callback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_4);
		// c?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* ETAsyncTaskMethodBuilder_1_get_Task_mB34D8721E56EE05B2B4AE583DEB758828135BDFF_gshared_inline (ETAsyncTaskMethodBuilder_1_t769C7EF52D8DA1B6EBB8B7AEC7B2D7C854730D31* __this, const RuntimeMethod* method) 
{
	{
		// public ETTask<T> Task => this.tcs;
		ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F* L_0 = (ETTask_1_tC3B29B37E823D9C66439D79CE23D65BBFE61686F*)__this->___tcs_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
