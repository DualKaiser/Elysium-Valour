﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct ConstrainedActionInvoker2
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[1]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct ConstrainedFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct ConstrainedFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902;
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05;
struct Dictionary_2_t36FA7EC1E5B0BD4419B32EB5EBD5DFA984D70CEA;
struct Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041;
struct Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68;
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
struct KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D;
struct KeyCollection_t93BA33CAAB790A133B7B7EEC9B64BDFC458582F2;
struct KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A;
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB;
struct UnsafeList_1_t3320408FA0A297D3C409FA7ADF6C1788C8AFBDA3;
struct UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391;
struct ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430;
struct ValueCollection_t33B4D2D5E7ED2150F6E4AEABF9B5EA9F5DB3C8C1;
struct ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B;
struct EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD;
struct EntryU5BU5D_t7DA5B3205EE1A19C131521D91ABEC2F23610DFC9;
struct EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3;
struct SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct MessageHandlerU5BU5D_t37F554C81ABFEC39C9C736771CA2A327BA2A6330;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct INetworkHooks_t0661E1D4E1A1C18135CA440AC01EDAA733B83533;
struct INetworkMessageSender_t0E6CABACEA7C05580183A510AEC178C2C640D48A;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE;
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468;
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
struct NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB8889CE6B3C03F0E652F0A3D115D1AFB74AD56;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9A35089103E5784EF02A898717C81941E4D1A8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D* ____keys;
	ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7DA5B3205EE1A19C131521D91ABEC2F23610DFC9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t93BA33CAAB790A133B7B7EEC9B64BDFC458582F2* ____keys;
	ValueCollection_t33B4D2D5E7ED2150F6E4AEABF9B5EA9F5DB3C8C1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A* ____keys;
	ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B* ____values;
	RuntimeObject* ____syncRoot;
};
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810  : public RuntimeObject
{
	INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	bool ___hasValue;
	uint64_t ___value;
};
struct PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 
{
	uint64_t* ___m_Value;
	int32_t ___m_Length;
};
struct AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440 
{
	uint64_t ___Counter;
	double ___Time;
};
struct AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F 
{
	uint64_t ___Counter;
	double ___Time;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103 
{
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
};
struct ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E 
{
	uint64_t ___ClientId;
};
struct ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5 
{
	uint64_t ___ClientId;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 
{
	uint64_t ___NetworkObjectId;
	bool ___DestroyGameObject;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	int32_t ___DestroyGameObject;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_marshaled_com
{
	uint64_t ___NetworkObjectId;
	int32_t ___DestroyGameObject;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 
{
	String_t* ___Reason;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_marshaled_pinvoke
{
	char* ___Reason;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_marshaled_com
{
	Il2CppChar* ___Reason;
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA 
{
	uint16_t ___Magic;
	uint16_t ___BatchCount;
	int32_t ___BatchSize;
	uint64_t ___BatchHash;
};
struct NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 
{
	uint32_t ___MessageType;
	uint32_t ___MessageSize;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB 
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourId;
	uint32_t ___NetworkRpcMethodId;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D 
{
	uint8_t ___LogType;
	String_t* ___Message;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_marshaled_pinvoke
{
	uint8_t ___LogType;
	char* ___Message;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_marshaled_com
{
	uint8_t ___LogType;
	Il2CppChar* ___Message;
};
struct TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 
{
	int32_t ___Tick;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 
{
	bool ___x;
	bool ___y;
	bool ___z;
};
struct half_tE8A6792149696F478D662DD4B736964C0FF018AF 
{
	uint16_t ___value;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	bool ___BufferGrew;
	int32_t ___AllowedWriteMark;
	bool ___InBitwiseContext;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
	int32_t ___AllowedWriteMark;
	int32_t ___InBitwiseContext;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
	int32_t ___AllowedWriteMark;
	int32_t ___InBitwiseContext;
};
struct NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 
{
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___m_ListData;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator;
};
struct NativeList_1_t244AB70F86E3DE6A3C8F7DE0CE70E58B90A72AAB 
{
	UnsafeList_1_t3320408FA0A297D3C409FA7ADF6C1788C8AFBDA3* ___m_ListData;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator;
};
struct NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB 
{
	UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* ___m_ListData;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator;
};
struct UnsafeHashMap_2_t72FFC7053BC0746D0E63ACAF126DAC714393450E 
{
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58 
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_marshaled_pinvoke
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_marshaled_com
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876 
{
	uint64_t ___ConfigHash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectionData;
	bool ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_marshaled_pinvoke
{
	uint64_t ___ConfigHash;
	Il2CppSafeArray* ___ConnectionData;
	int32_t ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_marshaled_com
{
	uint64_t ___ConfigHash;
	Il2CppSafeArray* ___ConnectionData;
	int32_t ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 
{
	uint64_t ___Hash;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___SendData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceiveData;
};
struct NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1 
{
	RuntimeObject* ___SystemOwner;
	uint64_t ___SenderId;
	float ___Timestamp;
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 ___Header;
	int32_t ___SerializedHeaderSize;
	uint32_t ___MessageSize;
};
struct NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1_marshaled_pinvoke
{
	Il2CppIUnknown* ___SystemOwner;
	uint64_t ___SenderId;
	float ___Timestamp;
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 ___Header;
	int32_t ___SerializedHeaderSize;
	uint32_t ___MessageSize;
};
struct NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1_marshaled_com
{
	Il2CppIUnknown* ___SystemOwner;
	uint64_t ___SenderId;
	float ___Timestamp;
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 ___Header;
	int32_t ___SerializedHeaderSize;
	uint32_t ___MessageSize;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A 
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD 
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	uint64_t ___SenderClientId;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_marshaled_pinvoke
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_marshaled_com
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 
{
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___SendData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
};
struct half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___w;
};
struct SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 
{
	NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA ___BatchHeader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___Writer;
	int32_t ___NetworkDelivery;
};
struct TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct NativeHashMap_2_tD3DAC214058815E6C793086DBC561B1466B4E799 
{
	UnsafeHashMap_2_t72FFC7053BC0746D0E63ACAF126DAC714393450E ___m_HashMapData;
};
struct HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD 
{
	half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___Axis;
	bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 ___AxisToSynchronize;
};
struct HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC 
{
	half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___Axis;
};
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468  : public RuntimeObject
{
	bool ___StopProcessing;
	NativeList_1_t244AB70F86E3DE6A3C8F7DE0CE70E58B90A72AAB ___m_IncomingMessageQueue;
	MessageHandlerU5BU5D_t37F554C81ABFEC39C9C736771CA2A327BA2A6330* ___m_MessageHandlers;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_ReverseTypeMap;
	Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* ___m_MessageTypes;
	Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* ___m_SendQueues;
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_DisconnectedClients;
	Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041* ___m_PerClientMessageVersions;
	Dictionary_2_t36FA7EC1E5B0BD4419B32EB5EBD5DFA984D70CEA* ___m_MessagesByHash;
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___m_LocalVersions;
	List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* ___m_Hooks;
	uint32_t ___m_HighMessageType;
	RuntimeObject* ___m_Owner;
	RuntimeObject* ___m_Sender;
	bool ___m_Disposed;
	uint64_t ___m_LocalClientId;
	int32_t ___NonFragmentedMessageMaxSize;
	int32_t ___FragmentedMessageMaxSize;
	Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* ___PeerMTUSizes;
};
struct ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___TargetClientIds;
	int32_t ___Delivery;
	RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 ___WrappedMessage;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5 
{
	uint8_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_pinvoke
{
	uint8_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_com
{
	uint8_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 
{
	NativeHashMap_2_tD3DAC214058815E6C793086DBC561B1466B4E799 ___m_Data;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792 
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5 ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_marshaled_pinvoke
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_pinvoke ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_marshaled_com
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_com ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187 
{
	HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD ___HalfVector3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentBasePosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PrecisionLossDelta;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HalfDeltaConvertedBack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PreviousPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	int32_t ___NetworkTick;
	bool ___SynchronizeBase;
	bool ___CollapsedDeltaIntoBase;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 
{
	uint32_t ___m_Bitset;
	double ___SentTime;
	float ___PositionX;
	float ___PositionY;
	float ___PositionZ;
	float ___RotAngleX;
	float ___RotAngleY;
	float ___RotAngleZ;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	float ___ScaleX;
	float ___ScaleY;
	float ___ScaleZ;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	NetworkDeltaPosition_t4C67065CCCE1DB13273DF573BA24819B977E2187 ___NetworkDeltaPosition;
	HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD ___HalfVectorScale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LossyScale;
	HalfVector4_t91FA8945A7448BC15F1C252A4046910F161F87CC ___HalfVectorRotation;
	uint32_t ___QuaternionCompressed;
	bool ___U3CIsDirtyU3Ek__BackingField;
	int32_t ___U3CLastSerializedSizeU3Ek__BackingField;
	int32_t ___NetworkTick;
	int32_t ___StateId;
	bool ___ExplicitSet;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
	HalfVector3_tBD839ED0C18A2EC6B7831CA4554A8A0B88D27FAD ___HalfEulerRotation;
};
struct NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146 
{
	uint64_t ___NetworkObjectId;
	int32_t ___NetworkBehaviourId;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___State;
	NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* ___m_ReceiverNetworkTransform;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_CurrentReader;
};
struct NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	int32_t ___NetworkBehaviourId;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___State;
	NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* ___m_ReceiverNetworkTransform;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_CurrentReader;
};
struct NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_marshaled_com
{
	uint64_t ___NetworkObjectId;
	int32_t ___NetworkBehaviourId;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___State;
	NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* ___m_ReceiverNetworkTransform;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_CurrentReader;
};
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810_StaticFields
{
	INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 Activator_CreateInstance_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mEB6EDABA024146B218DEEFEBE302F68FCBF9CFFB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 Activator_CreateInstance_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m41DB7E15C3CD6B31450C43084613CCA9FB73F6BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 Activator_CreateInstance_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_m8555681B2580AE0E80E0E817301649DE6EA111BF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146 Activator_CreateInstance_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_m69CAE90F76AE421240A2954B791DAE51BFC0253E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A Activator_CreateInstance_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_mBFD67D500801F1F4C6137E632DEE71F7951A1570_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD Activator_CreateInstance_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_m9B409BAD2A6E523BA6FBDBF2685C26DEB32454B7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 Activator_CreateInstance_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m3B71C2D5924B9549B1067C769053EB7AE301EC9E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 Activator_CreateInstance_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0ADC4E432757A408A463B659BEEC108CB2949501_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 Activator_CreateInstance_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mF6CEE0C4A8F8EA19C819C73AC8A4341CC714BEAB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D Activator_CreateInstance_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD19AEEEBD1EF06C431722FCD92EDCE455F1EFC36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB Activator_CreateInstance_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mA5B5BCE0DF89F86B4A11D547C694DCFB4F582B8B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 Activator_CreateInstance_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3233DB55941923EA60CA7760A5531E3BAB8EE11B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 Activator_CreateInstance_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mF66BDB07ED3880BC0439088DB6CC15AF8D7E3680_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_gshared (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD1392593A024BB69E4A67B323174979A98556262_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m09B8CDFB314C41ADF766F777E8E2F9BAE98C083D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m732127F5C1D83D5209C6428DF53B19D3E09F1DDA_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m6788811B17D939B7306A3510B9AD78A644E4A320_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mCFC238B0EAEEB4F5C8B2ECFE8C0D1C0767D0A051_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mFE88F2FF3E0C6CF1C0C4894682B8F09AC115DFCE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m55F95216698B79A2F3E4523EA328BF5F15A1BEF7_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m52BCE3FD9B7FC21C3838D09B16D9A6D5D5420B6C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9A20798AB6A25CCEF282FC2CE4F4545205C81E86_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD8715CC2DEB7C0344EF681CCE7DB9BC34E0A3996_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_gshared (NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_gshared (NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_gshared (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mAEE61DE5E0453455E4A67732DF3C4C0E4A9F80CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_m372B20212C2BADA3F5D15515807418727D99645C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_mA832B2F9BAF38DD4E0E3CD5DF38E611D9AC66A4D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_gshared (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_gshared (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;

inline DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 Activator_CreateInstance_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mEB6EDABA024146B218DEEFEBE302F68FCBF9CFFB (const RuntimeMethod* method)
{
	return ((  DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 (*) (const RuntimeMethod*))Activator_CreateInstance_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mEB6EDABA024146B218DEEFEBE302F68FCBF9CFFB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Type_t* ___0_type, uint64_t ___1_clientId, bool ___2_forReceive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DestroyObjectMessage_Deserialize_m1E60C5463877DBFE02C1E36546C2D0365E4B1A90 (DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
inline RuntimeObject* List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9 (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline int32_t List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObjectMessage_Handle_mCFE9636A6E7CAF9DD42C7518DD6BFC52DBF61DC2 (DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 Activator_CreateInstance_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m41DB7E15C3CD6B31450C43084613CCA9FB73F6BA (const RuntimeMethod* method)
{
	return ((  DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 (*) (const RuntimeMethod*))Activator_CreateInstance_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m41DB7E15C3CD6B31450C43084613CCA9FB73F6BA_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisconnectReasonMessage_Deserialize_m9EC97720A6ADF49B845B04EF26932A2AA4583B01 (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectReasonMessage_Handle_mCD15D1E4418C06765B47FFB7A52D2A8FF830700D (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 Activator_CreateInstance_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_m8555681B2580AE0E80E0E817301649DE6EA111BF (const RuntimeMethod* method)
{
	return ((  NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 (*) (const RuntimeMethod*))Activator_CreateInstance_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_m8555681B2580AE0E80E0E817301649DE6EA111BF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NamedMessage_Deserialize_mFE983ED84740B47537F2FC16554E50409E76A9B3 (NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessage_Handle_m496E159E05A555A5D7149E75DA823E44D59E2AF1 (NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146 Activator_CreateInstance_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_m69CAE90F76AE421240A2954B791DAE51BFC0253E (const RuntimeMethod* method)
{
	return ((  NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146 (*) (const RuntimeMethod*))Activator_CreateInstance_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_m69CAE90F76AE421240A2954B791DAE51BFC0253E_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformMessage_Deserialize_m479E3E98CC5C033200DB473EB7DEC0DF2F8AD6EB (NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformMessage_Handle_m2C8586F43596F003B2D771A47F533B130ABA165B (NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A Activator_CreateInstance_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_mBFD67D500801F1F4C6137E632DEE71F7951A1570 (const RuntimeMethod* method)
{
	return ((  NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A (*) (const RuntimeMethod*))Activator_CreateInstance_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_mBFD67D500801F1F4C6137E632DEE71F7951A1570_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkVariableDeltaMessage_Deserialize_m0E8C8D8A5E5055CC20A1DE04F39908F10F557983 (NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableDeltaMessage_Handle_m619848E3DDF10343CA15F8CB3DD69E4C38A5D6E2 (NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD Activator_CreateInstance_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_m9B409BAD2A6E523BA6FBDBF2685C26DEB32454B7 (const RuntimeMethod* method)
{
	return ((  ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD (*) (const RuntimeMethod*))Activator_CreateInstance_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_m9B409BAD2A6E523BA6FBDBF2685C26DEB32454B7_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParentSyncMessage_Deserialize_m828BA5BC3F7695866BDCDB86FD1E19C2981DE011 (ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentSyncMessage_Handle_m0D834697177178F60FF09457EF4B8CE8E6612087 (ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 Activator_CreateInstance_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m3B71C2D5924B9549B1067C769053EB7AE301EC9E (const RuntimeMethod* method)
{
	return ((  ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 (*) (const RuntimeMethod*))Activator_CreateInstance_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m3B71C2D5924B9549B1067C769053EB7AE301EC9E_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyMessage_Deserialize_m03DF7822389935A96A9EDDCA7F2D1507AADBDB85 (ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyMessage_Handle_mAC75C5000A3A23000B626AD8D784891231E45829 (ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 Activator_CreateInstance_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0ADC4E432757A408A463B659BEEC108CB2949501 (const RuntimeMethod* method)
{
	return ((  RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 (*) (const RuntimeMethod*))Activator_CreateInstance_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0ADC4E432757A408A463B659BEEC108CB2949501_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcMessage_Deserialize_m3285E004BE93553E2185EB62F79C18DDF066D195 (RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcMessage_Handle_m82AF72A8677734447673B504FE7783A9E3BF9D20 (RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 Activator_CreateInstance_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mF6CEE0C4A8F8EA19C819C73AC8A4341CC714BEAB (const RuntimeMethod* method)
{
	return ((  SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 (*) (const RuntimeMethod*))Activator_CreateInstance_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mF6CEE0C4A8F8EA19C819C73AC8A4341CC714BEAB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneEventMessage_Deserialize_m42F18E88F60DDF55C5FD8E79CF5A65380A731F6B (SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMessage_Handle_m8662094BE30CC495AE155681E68A16E4C8853D27 (SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D Activator_CreateInstance_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD19AEEEBD1EF06C431722FCD92EDCE455F1EFC36 (const RuntimeMethod* method)
{
	return ((  ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D (*) (const RuntimeMethod*))Activator_CreateInstance_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD19AEEEBD1EF06C431722FCD92EDCE455F1EFC36_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerLogMessage_Deserialize_mE2A29978B5DB99764C267D47BEAE2610F3B5BEB5 (ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLogMessage_Handle_m1F577B2F3AD1E355F9C8309A862F210FDCA2313E (ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB Activator_CreateInstance_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mA5B5BCE0DF89F86B4A11D547C694DCFB4F582B8B (const RuntimeMethod* method)
{
	return ((  ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB (*) (const RuntimeMethod*))Activator_CreateInstance_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mA5B5BCE0DF89F86B4A11D547C694DCFB4F582B8B_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerRpcMessage_Deserialize_m1DF669745ADDBC547CABFD1209B73798A4DD0D61 (ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerRpcMessage_Handle_mD060E05A7E65A98E9C0A19A9230842F098158D7D (ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 Activator_CreateInstance_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3233DB55941923EA60CA7760A5531E3BAB8EE11B (const RuntimeMethod* method)
{
	return ((  TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 (*) (const RuntimeMethod*))Activator_CreateInstance_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3233DB55941923EA60CA7760A5531E3BAB8EE11B_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSyncMessage_Deserialize_m64FF81438F9DB4402A7D043C599F7C2177B72F55 (TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSyncMessage_Handle_m139C863D7C6051DDB08050F82918A88182F72F99 (TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 Activator_CreateInstance_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mF66BDB07ED3880BC0439088DB6CC15AF8D7E3680 (const RuntimeMethod* method)
{
	return ((  UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 (*) (const RuntimeMethod*))Activator_CreateInstance_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mF66BDB07ED3880BC0439088DB6CC15AF8D7E3680_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnnamedMessage_Deserialize_m532B942328E6D55CE09EAFB1950EB29AF5794A18 (UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, int32_t ___2_receivedMessageVersion, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Handle_m4AA8505B62AF0C008A4FC182547B4984A99B971D (UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* __this, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___0_context, const RuntimeMethod* method) ;
inline void PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8 (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, uint64_t*, int32_t, const RuntimeMethod*))PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD1392593A024BB69E4A67B323174979A98556262 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD1392593A024BB69E4A67B323174979A98556262_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m09B8CDFB314C41ADF766F777E8E2F9BAE98C083D (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m09B8CDFB314C41ADF766F777E8E2F9BAE98C083D_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m732127F5C1D83D5209C6428DF53B19D3E09F1DDA (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m732127F5C1D83D5209C6428DF53B19D3E09F1DDA_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m6788811B17D939B7306A3510B9AD78A644E4A320 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m6788811B17D939B7306A3510B9AD78A644E4A320_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mCFC238B0EAEEB4F5C8B2ECFE8C0D1C0767D0A051 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mCFC238B0EAEEB4F5C8B2ECFE8C0D1C0767D0A051_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mFE88F2FF3E0C6CF1C0C4894682B8F09AC115DFCE (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mFE88F2FF3E0C6CF1C0C4894682B8F09AC115DFCE_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m55F95216698B79A2F3E4523EA328BF5F15A1BEF7 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m55F95216698B79A2F3E4523EA328BF5F15A1BEF7_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m52BCE3FD9B7FC21C3838D09B16D9A6D5D5420B6C (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m52BCE3FD9B7FC21C3838D09B16D9A6D5D5420B6C_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9A20798AB6A25CCEF282FC2CE4F4545205C81E86 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9A20798AB6A25CCEF282FC2CE4F4545205C81E86_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD8715CC2DEB7C0344EF681CCE7DB9BC34E0A3996 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD8715CC2DEB7C0344EF681CCE7DB9BC34E0A3996_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline void* NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360 (NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___0_list, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030, const RuntimeMethod*))NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_gshared)(___0_list, method);
}
inline int32_t NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568 (NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030*, const RuntimeMethod*))NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_gshared)(__this, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0 (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_gshared)(___0_nativeArray, method);
}
inline int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, int32_t, const RuntimeMethod*))PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline)(__this, ___0_index, method);
}
inline bool NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147 (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, const RuntimeMethod*))NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_gshared)(__this, ___0_item, method);
}
inline bool NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992 (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, const RuntimeMethod*))NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_gshared)(__this, ___0_item, method);
}
inline int32_t FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_size, int32_t ___1_allocator, int32_t ___2_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnticipationCounterSyncPingMessage_Serialize_mBCA35CA2881A61B505EC970FDB24EF7D051605DF (AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mAEE61DE5E0453455E4A67732DF3C4C0E4A9F80CC (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mAEE61DE5E0453455E4A67732DF3C4C0E4A9F80CC_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
inline void NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, const RuntimeMethod*))NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnticipationCounterSyncPongMessage_Serialize_mA5C116507A32FD8A93E428936360C2E8CF35F742 (AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_m372B20212C2BADA3F5D15515807418727D99645C (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_m372B20212C2BADA3F5D15515807418727D99645C_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeOwnershipMessage_Serialize_mF3E107E66BB1BA94198D141C9F83EDEDAD822468 (ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectedMessage_Serialize_mA6B628E1D157D72E1B2268284890385EBDDFD330 (ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientDisconnectedMessage_Serialize_m6E6DB1BDDE92D4FDFDB5D871DDBF999DE4EEF6D5 (ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientRpcMessage_Serialize_mEB0CE159163F6869D21AE2C820176F3953E2A224 (ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedMessage_Serialize_m0584DD0592C46377C30D4A2E7A215EF46CCCE199 (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequestMessage_Serialize_m260EDF4EC1282BEAD31E3B69E9FF5E71A8B05D79 (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateObjectMessage_Serialize_m99F544FD830C222FAB32B7D33294D4CEC617937B (CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObjectMessage_Serialize_mF84D1148FEAE08B1526C44C609CE144B1BD00953 (DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectReasonMessage_Serialize_m95202A704191A925F261E86742A21A011FDCB2D8 (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessage_Serialize_m8EA064FAFCFAA6631245BF8C8BAA8B42D93A9040 (NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformMessage_Serialize_m274523A28831D231D96C66E0737CC09D9641E75D (NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_mA832B2F9BAF38DD4E0E3CD5DF38E611D9AC66A4D (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_mA832B2F9BAF38DD4E0E3CD5DF38E611D9AC66A4D_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableDeltaMessage_Serialize_m9B8B70E9B70531DDBAC13DFAC648D5371E2DB8EF (NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentSyncMessage_Serialize_m9AE44A0039CBE4A5F8182C91DBEF9E99CBDC7455 (ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyMessage_Serialize_m705983F8CC4D0E4C83A3E5AC973A3AECF6CC67BF (ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcMessage_Serialize_m364D337A54D4BAB922557F16EC9B7F0E51F9FCD1 (RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5 (SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLogMessage_Serialize_m75D84FCE387D3673972DEFF9C60DAC20569E951C (ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerRpcMessage_Serialize_m78B363B31FF63D5514A415E89C221F018CE90EBB (ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280 (TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192 (UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
inline uint32_t Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2 (Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t ___1_value, const RuntimeMethod* method) ;
inline bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, uint64_t ___0_clientId, Type_t* ___1_messageType, int32_t ___2_delivery, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51 (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*, uint64_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB (*) (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68*, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_gshared)(__this, ___0_key, method);
}
inline int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3 (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, const RuntimeMethod*))NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56 (SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* __this, int32_t ___0_delivery, int32_t ___1_writerSize, int32_t ___2_writerAllocator, int32_t ___3_maxWriterSize, const RuntimeMethod* method) ;
inline void NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7*, const RuntimeMethod*))NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_gshared)(__this, ___0_value, method);
}
inline SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344 (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, int32_t, const RuntimeMethod*))NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_where, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_additionalSizeRequired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_m5390A987694559BF780CE7C1896A439F000D64E2_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 L_0;
		L_0 = Activator_CreateInstance_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mEB6EDABA024146B218DEEFEBE302F68FCBF9CFFB(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = DestroyObjectMessage_Deserialize_m1E60C5463877DBFE02C1E36546C2D0365E4B1A90((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		DestroyObjectMessage_Handle_mCFE9636A6E7CAF9DD42C7518DD6BFC52DBF61DC2((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m2C9ED7D5A8900E3F4A2D06E5DD7E3513807BEC3F_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 L_0;
		L_0 = Activator_CreateInstance_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m41DB7E15C3CD6B31450C43084613CCA9FB73F6BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = DisconnectReasonMessage_Deserialize_m9EC97720A6ADF49B845B04EF26932A2AA4583B01((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		DisconnectReasonMessage_Handle_mCD15D1E4418C06765B47FFB7A52D2A8FF830700D((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_m9D639A7D0421CBA5E7446307CDF53E6D6C22F73B_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 L_0;
		L_0 = Activator_CreateInstance_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_m8555681B2580AE0E80E0E817301649DE6EA111BF(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = NamedMessage_Deserialize_mFE983ED84740B47537F2FC16554E50409E76A9B3((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		NamedMessage_Handle_m496E159E05A555A5D7149E75DA823E44D59E2AF1((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_m79F8865CA8B04BD689BAA7530129CFB3272DE6D3_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146 L_0;
		L_0 = Activator_CreateInstance_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_m69CAE90F76AE421240A2954B791DAE51BFC0253E(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = NetworkTransformMessage_Deserialize_m479E3E98CC5C033200DB473EB7DEC0DF2F8AD6EB((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		NetworkTransformMessage_Handle_m2C8586F43596F003B2D771A47F533B130ABA165B((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m0ADF32663560A00AED405A88B3DF31F9347A66B2_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A L_0;
		L_0 = Activator_CreateInstance_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_mBFD67D500801F1F4C6137E632DEE71F7951A1570(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = NetworkVariableDeltaMessage_Deserialize_m0E8C8D8A5E5055CC20A1DE04F39908F10F557983((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		NetworkVariableDeltaMessage_Handle_m619848E3DDF10343CA15F8CB3DD69E4C38A5D6E2((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mBEEED3497C2E51200A718E4B5E5CEEE5DCB4135C_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD L_0;
		L_0 = Activator_CreateInstance_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_m9B409BAD2A6E523BA6FBDBF2685C26DEB32454B7(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = ParentSyncMessage_Deserialize_m828BA5BC3F7695866BDCDB86FD1E19C2981DE011((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		ParentSyncMessage_Handle_m0D834697177178F60FF09457EF4B8CE8E6612087((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0BEAD1F4D6D9AFE793E59B2D3C2E7D60BC542EFE_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 L_0;
		L_0 = Activator_CreateInstance_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m3B71C2D5924B9549B1067C769053EB7AE301EC9E(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = ProxyMessage_Deserialize_m03DF7822389935A96A9EDDCA7F2D1507AADBDB85((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		ProxyMessage_Handle_mAC75C5000A3A23000B626AD8D784891231E45829((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m56B3EB9D9D9F030552CF10D93572EB508EA41EAC_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 L_0;
		L_0 = Activator_CreateInstance_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0ADC4E432757A408A463B659BEEC108CB2949501(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = RpcMessage_Deserialize_m3285E004BE93553E2185EB62F79C18DDF066D195((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		RpcMessage_Handle_m82AF72A8677734447673B504FE7783A9E3BF9D20((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_m2D24A683E641BE027AD2EDD25EF03A1B933425BD_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 L_0;
		L_0 = Activator_CreateInstance_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mF6CEE0C4A8F8EA19C819C73AC8A4341CC714BEAB(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = SceneEventMessage_Deserialize_m42F18E88F60DDF55C5FD8E79CF5A65380A731F6B((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		SceneEventMessage_Handle_m8662094BE30CC495AE155681E68A16E4C8853D27((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mF2A5B08F6DBD30FC499D1AD1E89363DA82A71BC2_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D L_0;
		L_0 = Activator_CreateInstance_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD19AEEEBD1EF06C431722FCD92EDCE455F1EFC36(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = ServerLogMessage_Deserialize_mE2A29978B5DB99764C267D47BEAE2610F3B5BEB5((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		ServerLogMessage_Handle_m1F577B2F3AD1E355F9C8309A862F210FDCA2313E((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_m573AB357B992A3DEEF3783B69C15129C6F5592B0_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB L_0;
		L_0 = Activator_CreateInstance_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mA5B5BCE0DF89F86B4A11D547C694DCFB4F582B8B(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = ServerRpcMessage_Deserialize_m1DF669745ADDBC547CABFD1209B73798A4DD0D61((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		ServerRpcMessage_Handle_mD060E05A7E65A98E9C0A19A9230842F098158D7D((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_mFE12A161E7230307BB3E43A81E9A123FC4D05FA4_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 L_0;
		L_0 = Activator_CreateInstance_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3233DB55941923EA60CA7760A5531E3BAB8EE11B(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = TimeSyncMessage_Deserialize_m64FF81438F9DB4402A7D043C599F7C2177B72F55((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		TimeSyncMessage_Handle_m139C863D7C6051DDB08050F82918A88182F72F99((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_m61D4EDCE5DC9877E7EF0C19AA7BFC48674CB6DFD_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 L_0;
		L_0 = Activator_CreateInstance_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mF66BDB07ED3880BC0439088DB6CC15AF8D7E3680(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_32;
		L_32 = UnnamedMessage_Deserialize_m532B942328E6D55CE09EAFB1950EB29AF5794A18((&V_0), L_29, L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_32;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_34 = ___2_manager;
		NullCheck(L_34);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_35 = L_34->___m_Hooks;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_35, L_36, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_38 = ___1_context;
		NullCheck(L_37);
		GenericInterfaceActionInvoker2< UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (&V_0), L_38);
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d7:
	{
		int32_t L_40 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_41 = ___2_manager;
		NullCheck(L_41);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_42 = L_41->___m_Hooks;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_42, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_40) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_6;
		if (L_44)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_45 = ___1_context;
		UnnamedMessage_Handle_m4AA8505B62AF0C008A4FC182547B4984A99B971D((&V_0), L_45, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_46 = ___2_manager;
		NullCheck(L_46);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_47 = L_46->___m_Hooks;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_47, L_48, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_50 = ___1_context;
		NullCheck(L_49);
		GenericInterfaceActionInvoker2< UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_49, (&V_0), L_50);
		int32_t L_51 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_011e:
	{
		int32_t L_52 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_53 = ___2_manager;
		NullCheck(L_53);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_54 = L_53->___m_Hooks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_54, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageManager_ReceiveMessage_TisIl2CppFullySharedGenericAny_mDAC9DFC46DF84A55C99CB0C415D77D84A79B9942_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___2_manager, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4AD48DEFB6B5F463B67DB0664775E5FC01CA912E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t4AD48DEFB6B5F463B67DB0664775E5FC01CA912E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t4AD48DEFB6B5F463B67DB0664775E5FC01CA912E);
	memset(V_0, 0, SizeOf_T_t4AD48DEFB6B5F463B67DB0664775E5FC01CA912E);
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_T_t4AD48DEFB6B5F463B67DB0664775E5FC01CA912E);
		V_1 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_16 = ___1_context;
		uint64_t L_17 = L_16->___SenderId;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_18 = ___2_manager;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___m_LocalClientId;
		G_B5_0 = ((((int32_t)((((int64_t)L_17) == ((int64_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 0;
	}

IL_006e:
	{
		V_2 = (bool)G_B5_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_009a;
		}
	}
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_21 = ___2_manager;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_24 = ___1_context;
		uint64_t L_25 = L_24->___SenderId;
		NullCheck(L_21);
		int32_t L_26;
		L_26 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(L_21, L_23, L_25, (bool)1, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0134;
	}

IL_0099:
	{
	}

IL_009a:
	{
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_29 = ___0_reader;
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_30 = ___1_context;
		int32_t L_31 = V_1;
		bool L_33;
		L_33 = ConstrainedFuncInvoker3< bool, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1*, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_32, (void*)(Il2CppFullySharedGenericAny*)V_0, L_29, L_30, L_31);
		V_4 = L_33;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0134;
		}
	}
	{
		V_5 = 0;
		goto IL_00d7;
	}

IL_00b9:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_35 = ___2_manager;
		NullCheck(L_35);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_36 = L_35->___m_Hooks;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		RuntimeObject* L_38;
		L_38 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_36, L_37, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_39 = ___1_context;
		NullCheck(L_38);
		GenericInterfaceActionInvoker2< Il2CppFullySharedGenericAny*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_38, (Il2CppFullySharedGenericAny*)V_0, L_39);
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00d7:
	{
		int32_t L_41 = V_5;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_42 = ___2_manager;
		NullCheck(L_42);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_43 = L_42->___m_Hooks;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_43, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_41) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_6;
		if (L_45)
		{
			goto IL_00b9;
		}
	}
	{
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_46 = ___1_context;
		ConstrainedActionInvoker1< NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 6), L_47, (void*)(Il2CppFullySharedGenericAny*)V_0, L_46);
		V_7 = 0;
		goto IL_011e;
	}

IL_0100:
	{
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_48 = ___2_manager;
		NullCheck(L_48);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_49 = L_48->___m_Hooks;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_49, L_50, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* L_52 = ___1_context;
		NullCheck(L_51);
		GenericInterfaceActionInvoker2< Il2CppFullySharedGenericAny*, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_51, (Il2CppFullySharedGenericAny*)V_0, L_52);
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_011e:
	{
		int32_t L_54 = V_7;
		NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* L_55 = ___2_manager;
		NullCheck(L_55);
		List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_56 = L_55->___m_Hooks;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_56, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_54) < ((int32_t)L_57))? 1 : 0);
		bool L_58 = V_8;
		if (L_58)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0134:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mFCD7E1F01F046A85F6A6C925D180472D67664911_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD1392593A024BB69E4A67B323174979A98556262(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_mFD2F404FDEDF38726DA1E614CF32193DE201B4B2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m09B8CDFB314C41ADF766F777E8E2F9BAE98C083D(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_mA8D89A931323B0C9B6A77B5F5FF7C57B86613B5B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m732127F5C1D83D5209C6428DF53B19D3E09F1DDA(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mC375B52F9D5EE12A5CDCB17C3AC92FD1D820BDB6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m927766358A6777BD82C6648761FB026A9E39F9A8_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m6788811B17D939B7306A3510B9AD78A644E4A320(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_mB3F65264807551A1361AD951C20CF34453EE76FE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mCFC238B0EAEEB4F5C8B2ECFE8C0D1C0767D0A051(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_m89EDC82F4C3D7A2011349EB7D16BE50E586D03E2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mFE88F2FF3E0C6CF1C0C4894682B8F09AC115DFCE(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_m50C6FDA9D4EEDF196B0B7395C8A93159DD220250_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_mB74CEE137350E964A07007FB196B75D7632B4E87_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m55F95216698B79A2F3E4523EA328BF5F15A1BEF7(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_m149E77D03311029C91FBEC12068484EAB1C1A11C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_mC8897DEA20E016121041F5142EEC867E111FAD44_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m52BCE3FD9B7FC21C3838D09B16D9A6D5D5420B6C(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m072CFD921EF3A4E495C024EE6A920486D22D4858_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9A20798AB6A25CCEF282FC2CE4F4545205C81E86(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_mF9AA7EFC0A26563C5DB82512C104251134726747_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD8715CC2DEB7C0344EF681CCE7DB9BC34E0A3996(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m32891060C258A752482C62B99DA5C93F65808C10_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* L_2 = ___2_clientIds;
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 L_3 = (*(NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030*)L_2);
		void* L_4;
		L_4 = NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360(L_3, NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_RuntimeMethod_var);
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* L_5 = ___2_clientIds;
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 L_6 = (*(NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030*)L_5);
		V_0 = L_6;
		int32_t L_7;
		L_7 = NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568((&V_0), NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_RuntimeMethod_var);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_8), (uint64_t*)L_4, L_7, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_8;
		int32_t L_9;
		L_9 = NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F(__this, L_0, L_1, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_mEEE7868ABA6C3107ACC2C9F471E8E14A038964A8_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_m0AE9F96E7C8ED0BC20A30DEC892229D1A74F4971_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mB50708DAE7DCB683AC0CE6811D25373253829D1C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_m7DC32CF4F004557D7DFEC92F5ED73846EEC08A7F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_m8682E9D1D49C4953630FECA25049120AE0CF4EB5_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_mD790D30A0EB61A1E4B521C2F38BCE780FD88A67F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_2 = ___2_clientIds;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_3 = (*(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)L_2);
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0(L_3, NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m136921F8DC97C45707B27ABA238A7FBE80AFEBD0_RuntimeMethod_var);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_5 = ___2_clientIds;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_6 = (*(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)L_5);
		V_0 = L_6;
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_8), (uint64_t*)L_4, L_7, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_8;
		int32_t L_9;
		L_9 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, Il2CppFullySharedGenericAny*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_mC2E55EC5F36D16E55975708B4327B2F66C7849F0_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* L_2 = ___2_clientIds;
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 L_3 = (*(NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030*)L_2);
		void* L_4;
		L_4 = NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360(L_3, NativeListUnsafeUtility_GetUnsafePtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m94FA84CD7893043C3DFD0CC0C71FEE8A70B7F360_RuntimeMethod_var);
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030* L_5 = ___2_clientIds;
		NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 L_6 = (*(NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030*)L_5);
		V_0 = L_6;
		int32_t L_7;
		L_7 = NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568((&V_0), NativeList_1_get_Length_mBB2AB5C451303AAC402734400242E9FBA19C3568_RuntimeMethod_var);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_8), (uint64_t*)L_4, L_7, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_8;
		int32_t L_9;
		L_9 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, Il2CppFullySharedGenericAny*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_m0B5DFA199CB81FE2C238E4D1CE12A69C5C243E97_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, uint64_t ___2_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	uint64_t* V_0 = NULL;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		int8_t* L_2 = (L_1);
		uint64_t L_3 = ___2_clientId;
		*((int64_t*)L_2) = (int64_t)L_3;
		V_0 = (uint64_t*)L_2;
		Il2CppFullySharedGenericAny* L_4 = ___0_message;
		int32_t L_5 = ___1_delivery;
		uint64_t* L_6 = V_0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_7), L_6, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8;
		L_8 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, Il2CppFullySharedGenericAny*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_4, L_5, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD1392593A024BB69E4A67B323174979A98556262_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				AnticipationCounterSyncPingMessage_Serialize_mBCA35CA2881A61B505EC970FDB24EF7D051605DF(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mAEE61DE5E0453455E4A67732DF3C4C0E4A9F80CC(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m09B8CDFB314C41ADF766F777E8E2F9BAE98C083D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				AnticipationCounterSyncPongMessage_Serialize_mA5C116507A32FD8A93E428936360C2E8CF35F742(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_m372B20212C2BADA3F5D15515807418727D99645C(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m732127F5C1D83D5209C6428DF53B19D3E09F1DDA_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ChangeOwnershipMessage_Serialize_mF3E107E66BB1BA94198D141C9F83EDEDAD822468(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_TisRuntimeObject_mA8D5FE539C982CABE3D1F03798F7D8BAEA3BB501_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ClientConnectedMessage_Serialize_mA6B628E1D157D72E1B2268284890385EBDDFD330(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_TisRuntimeObject_m589C589F4B0A28EBFC292272306C32AF8E9F2D85_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ClientDisconnectedMessage_Serialize_m6E6DB1BDDE92D4FDFDB5D871DDBF999DE4EEF6D5(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ClientRpcMessage_Serialize_mEB0CE159163F6869D21AE2C820176F3953E2A224(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisRuntimeObject_mA5044E52C4A62B99F78CBFE6C2DF8E508E5A2F1B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ClientRpcMessage_Serialize_mEB0CE159163F6869D21AE2C820176F3953E2A224(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m6788811B17D939B7306A3510B9AD78A644E4A320_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ConnectionApprovedMessage_Serialize_m0584DD0592C46377C30D4A2E7A215EF46CCCE199(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mCFC238B0EAEEB4F5C8B2ECFE8C0D1C0767D0A051_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ConnectionRequestMessage_Serialize_m260EDF4EC1282BEAD31E3B69E9FF5E71A8B05D79(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mFE88F2FF3E0C6CF1C0C4894682B8F09AC115DFCE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				CreateObjectMessage_Serialize_m99F544FD830C222FAB32B7D33294D4CEC617937B(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				DestroyObjectMessage_Serialize_mF84D1148FEAE08B1526C44C609CE144B1BD00953(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisRuntimeObject_m53703C680108FCAEBD7CDE69C3AAFFB103DA8E44_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				DestroyObjectMessage_Serialize_mF84D1148FEAE08B1526C44C609CE144B1BD00953(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m55F95216698B79A2F3E4523EA328BF5F15A1BEF7_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				DisconnectReasonMessage_Serialize_m95202A704191A925F261E86742A21A011FDCB2D8(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				NamedMessage_Serialize_m8EA064FAFCFAA6631245BF8C8BAA8B42D93A9040(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisRuntimeObject_m08230AA18B5648278D6BF098D8C1BAEFC7F0A695_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				NamedMessage_Serialize_m8EA064FAFCFAA6631245BF8C8BAA8B42D93A9040(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m52BCE3FD9B7FC21C3838D09B16D9A6D5D5420B6C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				NetworkTransformMessage_Serialize_m274523A28831D231D96C66E0737CC09D9641E75D(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				NetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisNetworkTransformMessage_t433B7AEA5929A04F08AE0330255725E86CD57146_mA832B2F9BAF38DD4E0E3CD5DF38E611D9AC66A4D(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9A20798AB6A25CCEF282FC2CE4F4545205C81E86_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				NetworkVariableDeltaMessage_Serialize_m9B8B70E9B70531DDBAC13DFAC648D5371E2DB8EF(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ParentSyncMessage_Serialize_m9AE44A0039CBE4A5F8182C91DBEF9E99CBDC7455(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD8715CC2DEB7C0344EF681CCE7DB9BC34E0A3996_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ProxyMessage_Serialize_m705983F8CC4D0E4C83A3E5AC973A3AECF6CC67BF(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				RpcMessage_Serialize_m364D337A54D4BAB922557F16EC9B7F0E51F9FCD1(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisRuntimeObject_mFFBA30695FFC4E00683D42946A25951FF36723D0_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ServerLogMessage_Serialize_m75D84FCE387D3673972DEFF9C60DAC20569E951C(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				ServerRpcMessage_Serialize_m78B363B31FF63D5514A415E89C221F018CE90EBB(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisRuntimeObject_mC6E22D655D8765FDFB3C5F503B2C1109A651CE13_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_3 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_4 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_5 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_4);
		V_3 = L_5;
		int32_t L_6;
		L_6 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_16 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_17 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		uint64_t L_19;
		L_19 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_3), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_41 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_42 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_41);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_43 = L_42;
				RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_43);
				V_13 = (RuntimeObject*)L_44;
				int32_t L_45 = V_6;
				int32_t L_46;
				L_46 = NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_45, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_46;
				int32_t L_47 = V_9;
				int32_t L_48 = V_0;
				if ((((int32_t)L_47) > ((int32_t)L_48)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_49 = V_0;
				G_B16_0 = L_49;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_50 = V_9;
				G_B16_0 = L_50;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0151:
	{
		int32_t L_52 = V_5;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_53 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_54 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_53);
		V_3 = L_54;
		int32_t L_55;
		L_55 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_14 = (bool)((((int32_t)L_52) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (L_56)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_57 = V_0;
		V_4 = L_57;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisRuntimeObject_m0034C81E06473B370A38595BCA7830218AF778B6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_3 = L_1;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		RuntimeObject** L_4 = ___2_clientIds;
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		V_3 = L_5;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_6, L_7, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		V_10 = L_12;
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeObject** L_16 = ___2_clientIds;
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		V_3 = L_17;
		int32_t L_18 = V_5;
		NullCheck((RuntimeObject*)(V_3));
		uint64_t L_19;
		L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3), L_18);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_19, (bool)0, NULL);
		V_6 = L_20;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_23 = V_6;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_26, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_28 = ___1_delivery;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_29;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_30 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_30;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_31 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_33, L_34)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_35 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_36 = V_8;
				int32_t L_37 = V_6;
				UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192(L_35, L_36, L_37, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_38 = V_7;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				RuntimeObject** L_41 = ___2_clientIds;
				RuntimeObject* L_42 = (*(RuntimeObject**)L_41);
				V_13 = (RuntimeObject*)L_42;
				int32_t L_43 = V_6;
				int32_t L_44;
				L_44 = NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612(__this, (&V_8), L_38, L_39, L_40, (&V_13), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_44;
				int32_t L_45 = V_9;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B16_0 = L_47;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_48 = V_9;
				G_B16_0 = L_48;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0151:
	{
		int32_t L_50 = V_5;
		RuntimeObject** L_51 = ___2_clientIds;
		RuntimeObject* L_52 = (*(RuntimeObject**)L_51);
		V_3 = L_52;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
		V_14 = (bool)((((int32_t)L_50) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_14;
		if (L_54)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		V_4 = L_55;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_56 = V_4;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m98ED23C85B854B894EC3815376E71B2A80F99D81_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, Il2CppFullySharedGenericAny* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 6)));
	void* L_58 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	const Il2CppFullySharedGenericAny L_6 = L_1;
	const Il2CppFullySharedGenericAny L_19 = L_1;
	const Il2CppFullySharedGenericAny L_46 = L_1;
	const Il2CppFullySharedGenericAny L_57 = L_1;
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	memset(V_3, 0, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_3, L_1, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_3;
		L_3 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, (void*)(Il2CppFullySharedGenericAny*)V_3);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		V_4 = 0;
		goto IL_017f;
	}

IL_0025:
	{
		V_0 = 0;
		Il2CppFullySharedGenericAny* L_5 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_3, L_6, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, (void*)(Il2CppFullySharedGenericAny*)V_3);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9;
		L_9 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_8, L_9, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0151;
	}

IL_0050:
	{
		V_6 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_11, L_13, NULL);
		V_10 = L_14;
		bool L_15 = V_10;
		if (!L_15)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		Il2CppFullySharedGenericAny* L_18 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_3, L_19, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_20 = V_5;
		uint64_t L_22;
		L_22 = ConstrainedFuncInvoker1< uint64_t, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_21, (void*)(Il2CppFullySharedGenericAny*)V_3, L_20);
		int32_t L_23;
		L_23 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_17, L_22, (bool)0, NULL);
		V_6 = L_23;
		int32_t L_24 = V_6;
		V_11 = (bool)((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_014b;
	}

IL_00ae:
	{
	}

IL_00af:
	{
		int32_t L_26 = V_6;
		bool L_27;
		L_27 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_26, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		V_12 = L_27;
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_014b;
	}

IL_00c4:
	{
		int32_t L_29 = V_6;
		bool L_30;
		L_30 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_29, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_31 = ___1_delivery;
		if ((((int32_t)L_31) == ((int32_t)4)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_32 = __this->___NonFragmentedMessageMaxSize;
		G_B12_0 = L_32;
		goto IL_00e0;
	}

IL_00da:
	{
		int32_t L_33 = __this->___FragmentedMessageMaxSize;
		G_B12_0 = L_33;
	}

IL_00e0:
	{
		V_7 = G_B12_0;
		int32_t L_34 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_36 = V_7;
		int32_t L_37;
		L_37 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_8), ((int32_t)il2cpp_codegen_subtract(L_34, L_35)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_8), NULL);
				return;
			}
		});
		try
		{
			{
				Il2CppFullySharedGenericAny* L_38 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_39 = V_8;
				int32_t L_40 = V_6;
				ConstrainedActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 6), il2cpp_rgctx_method(method->rgctx_data, 7), L_41, (void*)L_38, L_39, L_40);
				int32_t L_42 = V_7;
				Il2CppFullySharedGenericAny* L_43 = ___0_message;
				int32_t L_44 = ___1_delivery;
				Il2CppFullySharedGenericAny* L_45 = ___2_clientIds;
				il2cpp_codegen_memcpy(L_46, L_45, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
				RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_46);
				V_13 = (RuntimeObject*)L_47;
				int32_t L_48 = V_6;
				int32_t L_49;
				L_49 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(__this, (&V_8), L_42, L_43, L_44, (&V_13), L_48, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_9 = L_49;
				int32_t L_50 = V_9;
				int32_t L_51 = V_0;
				if ((((int32_t)L_50) > ((int32_t)L_51)))
				{
					goto IL_0136_1;
				}
			}
			{
				int32_t L_52 = V_0;
				G_B16_0 = L_52;
				goto IL_0138_1;
			}

IL_0136_1:
			{
				int32_t L_53 = V_9;
				G_B16_0 = L_53;
			}

IL_0138_1:
			{
				V_0 = G_B16_0;
				goto IL_014a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014a:
	{
	}

IL_014b:
	{
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0151:
	{
		int32_t L_55 = V_5;
		Il2CppFullySharedGenericAny* L_56 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_57, L_56, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_3, L_57, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_59;
		L_59 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_58, (void*)(Il2CppFullySharedGenericAny*)V_3);
		V_14 = (bool)((((int32_t)L_55) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_14;
		if (L_60)
		{
			goto IL_0050;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_61 = V_0;
		V_4 = L_61;
		goto IL_017f;
	}

IL_017f:
	{
		int32_t L_62 = V_4;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mAFB12215C9F2EEAE909C5FA628533350988D9815_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mF15528C300DE197DDEE677642AEED3CC3E59F76D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mEA0B1C2CA4DBF250F8ADEF1D6D979E76643B3971_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mD0C07DA170C5120D4FD019CFF401CED215CACAAA_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_m929FC81DCDED8F61D87BDD675D3FF973F681252E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3F324491879C6A8677828DBBAC072F30E55F4A59_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_m8233A3460E59E5B018862FD72F978BFDF1347170_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_m31E12E8A1890164B9E0716354BF9929618F739A3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, Il2CppFullySharedGenericAny*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisIl2CppFullySharedGenericAny_mD33E551829BF0B488C452A0185975E9136415C4D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, Il2CppFullySharedGenericAny* ___2_message, int32_t ___3_delivery, uint64_t ___4_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	{
		V_0 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		uint64_t L_8 = ___4_clientId;
		int32_t L_9;
		L_9 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_7, L_8, (bool)0, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		V_4 = 0;
		goto IL_006d;
	}

IL_0043:
	{
	}

IL_0044:
	{
		uintptr_t L_12 = ((uintptr_t)8);
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		int8_t* L_14 = (L_13);
		uint64_t L_15 = ___4_clientId;
		*((int64_t*)L_14) = (int64_t)L_15;
		V_1 = (uint64_t*)L_14;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_16 = ___0_tmpSerializer;
		int32_t L_17 = ___1_maxSize;
		Il2CppFullySharedGenericAny* L_18 = ___2_message;
		int32_t L_19 = ___3_delivery;
		uint64_t* L_20 = V_1;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_21;
		memset((&L_21), 0, sizeof(L_21));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_21), L_20, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_22 = L_21;
		RuntimeObject* L_23 = Box(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var, &L_22);
		V_5 = (RuntimeObject*)L_23;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_16, L_17, L_18, L_19, (&V_5), L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_4 = L_25;
		goto IL_006d;
	}

IL_006d:
	{
		int32_t L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mAEE61DE5E0453455E4A67732DF3C4C0E4A9F80CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_m372B20212C2BADA3F5D15515807418727D99645C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_23 = NULL;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t G_B26_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d3:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_03a4_1;
			}

IL_006c_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				V_9 = L_20;
				bool L_21 = V_9;
				if (!L_21)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_008e_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				bool L_26;
				L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
				V_10 = L_26;
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00f2_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_29;
				L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
				RuntimeObject** L_30 = ___4_clientIds;
				RuntimeObject* L_31 = *((RuntimeObject**)L_30);
				int32_t L_32 = V_4;
				NullCheck(L_31);
				uint64_t L_33;
				L_33 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_31, L_32);
				int32_t L_34;
				L_34 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_29, L_33, (bool)0, NULL);
				V_11 = L_34;
				int32_t L_35 = V_11;
				V_12 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_00dc_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00dc_1:
			{
				int32_t L_37 = V_11;
				int32_t L_38 = ___5_messageVersionFilter;
				V_13 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_39 = V_13;
				if (!L_39)
				{
					goto IL_00f1_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_00f1_1:
			{
			}

IL_00f2_1:
			{
				RuntimeObject** L_40 = ___4_clientIds;
				RuntimeObject* L_41 = *((RuntimeObject**)L_40);
				int32_t L_42 = V_4;
				NullCheck(L_41);
				uint64_t L_43;
				L_43 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_41, L_42);
				V_5 = L_43;
				uint64_t L_44 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				int32_t L_47 = ___3_delivery;
				bool L_48;
				L_48 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_44, L_46, L_47, NULL);
				V_14 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
				bool L_49 = V_14;
				if (!L_49)
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0121_1:
			{
				int32_t L_50 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_50;
				int32_t L_51 = ___3_delivery;
				V_15 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_52 = V_15;
				if (!L_52)
				{
					goto IL_019d_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_53 = __this->___PeerMTUSizes;
				uint64_t L_54 = V_5;
				NullCheck(L_53);
				bool L_55;
				L_55 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_53, L_54, (&V_16), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				V_17 = L_55;
				bool L_56 = V_17;
				if (!L_56)
				{
					goto IL_0153_1;
				}
			}
			{
				int32_t L_57 = V_16;
				___1_maxSize = L_57;
			}

IL_0153_1:
			{
				int32_t L_58 = ___1_maxSize;
				V_6 = L_58;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_59 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_60 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_59);
				V_3 = L_60;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_61;
				L_61 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_62 = ___1_maxSize;
				V_18 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_63 = V_18;
				if (!L_63)
				{
					goto IL_019c_1;
				}
			}
			{
				uint64_t L_64 = V_5;
				uint64_t L_65 = L_64;
				RuntimeObject* L_66 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_65);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_68;
				L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
				NullCheck(L_68);
				String_t* L_69;
				L_69 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_68);
				String_t* L_70;
				L_70 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_66, (RuntimeObject*)L_69, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_70, NULL);
				goto IL_039e_1;
			}

IL_019c_1:
			{
			}

IL_019d_1:
			{
				V_19 = 0;
				goto IL_01c2_1;
			}

IL_01a2_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				int32_t L_72 = V_19;
				NullCheck(L_71);
				RuntimeObject* L_73;
				L_73 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_71, L_72, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_74 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_75 = ___2_message;
				int32_t L_76 = ___3_delivery;
				NullCheck(L_73);
				GenericInterfaceActionInvoker3< uint64_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_73, L_74, L_75, L_76);
				int32_t L_77 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_77, 1));
			}

IL_01c2_1:
			{
				int32_t L_78 = V_19;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_79 = __this->___m_Hooks;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_79, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_78) < ((int32_t)L_80))? 1 : 0);
				bool L_81 = V_20;
				if (L_81)
				{
					goto IL_01a2_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_82 = __this->___m_SendQueues;
				uint64_t L_83 = V_5;
				NullCheck(L_82);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_84;
				L_84 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_82, L_83, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_84;
				int32_t L_85;
				L_85 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_85) == ((int32_t)0))? 1 : 0);
				bool L_86 = V_21;
				if (!L_86)
				{
					goto IL_022d_1;
				}
			}
			{
				int32_t L_87 = ___3_delivery;
				int32_t L_88 = V_6;
				int32_t L_89 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_90;
				memset((&L_90), 0, sizeof(L_90));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_90), L_87, L_88, (int32_t)3, L_89, NULL);
				V_22 = L_90;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91;
				L_91 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				uint32_t L_93 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_92, (int32_t)L_93, NULL);
				goto IL_02c0_1;
			}

IL_022d_1:
			{
				int32_t L_94;
				L_94 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_95;
				L_95 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_94, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_23 = L_95;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_96 = V_23;
				int32_t L_97 = L_96->___NetworkDelivery;
				int32_t L_98 = ___3_delivery;
				if ((!(((uint32_t)L_97) == ((uint32_t)L_98))))
				{
					goto IL_027e_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_99 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_100 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_99->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_101;
				L_101 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_100, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_102 = V_23;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_103 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_102->___Writer);
				int32_t L_104;
				L_104 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_103, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_106 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_105);
				V_3 = L_106;
				int32_t L_107;
				L_107 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_108;
				L_108 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				G_B26_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_101, L_104))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))))? 1 : 0);
				goto IL_027f_1;
			}

IL_027e_1:
			{
				G_B26_0 = 1;
			}

IL_027f_1:
			{
				V_24 = (bool)G_B26_0;
				bool L_109 = V_24;
				if (!L_109)
				{
					goto IL_02bf_1;
				}
			}
			{
				int32_t L_110 = ___3_delivery;
				int32_t L_111 = V_6;
				int32_t L_112 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_113;
				memset((&L_113), 0, sizeof(L_113));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_113), L_110, L_111, (int32_t)3, L_112, NULL);
				V_22 = L_113;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_22), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_114;
				L_114 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_115;
				L_115 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_114, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_116 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_115->___Writer);
				uint32_t L_117 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_116, (int32_t)L_117, NULL);
			}

IL_02bf_1:
			{
			}

IL_02c0_1:
			{
				int32_t L_118;
				L_118 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_119;
				L_119 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_118, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_119;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_124;
				L_124 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_125;
				L_125 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_126;
				L_126 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_121, ((int32_t)il2cpp_codegen_add(L_124, L_125)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_127 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_128 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_127->___Writer);
				uint8_t* L_129;
				L_129 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_130;
				L_130 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_128, L_129, L_130, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_131 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_132 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_131->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_134 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_133);
				V_3 = L_134;
				uint8_t* L_135;
				L_135 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_136 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_137 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_136);
				V_3 = L_137;
				int32_t L_138;
				L_138 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_132, L_135, L_138, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_139 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_140 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_139->___BatchHeader);
				uint16_t* L_141 = (uint16_t*)(&L_140->___BatchCount);
				uint16_t* L_142 = L_141;
				int32_t L_143 = *((uint16_t*)L_142);
				*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_143, 1)));
				V_25 = 0;
				goto IL_0388_1;
			}

IL_0352_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				int32_t L_145 = V_25;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_144, L_145, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_147 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_148 = ___2_message;
				int32_t L_149 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_150 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_151 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_150);
				V_3 = L_151;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_152;
				L_152 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_146);
				GenericInterfaceActionInvoker4< uint64_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_146, L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
				int32_t L_154 = V_25;
				V_25 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_0388_1:
			{
				int32_t L_155 = V_25;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_156 = __this->___m_Hooks;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_156, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				V_26 = (bool)((((int32_t)L_155) < ((int32_t)L_157))? 1 : 0);
				bool L_158 = V_26;
				if (L_158)
				{
					goto IL_0352_1;
				}
			}
			{
			}

IL_039e_1:
			{
				int32_t L_159 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_03a4_1:
			{
				int32_t L_160 = V_4;
				RuntimeObject** L_161 = ___4_clientIds;
				RuntimeObject* L_162 = *((RuntimeObject**)L_161);
				NullCheck((RuntimeObject*)L_162);
				int32_t L_163;
				L_163 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_162);
				V_27 = (bool)((((int32_t)L_160) < ((int32_t)L_163))? 1 : 0);
				bool L_164 = V_27;
				if (L_164)
				{
					goto IL_006c_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_165 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_166 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_165);
				V_3 = L_166;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_167;
				L_167 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_168;
				L_168 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_28 = ((int32_t)il2cpp_codegen_add(L_167, L_168));
				goto IL_03e2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03e2:
	{
		int32_t L_169 = V_28;
		return L_169;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length;
		G_B3_0 = L_5;
		goto IL_0030;
	}

IL_0025:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_where, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_1 = __this->___Handle;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Capacity;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_2, NULL);
		___0_where = L_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = ___0_where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_9 = __this->___Handle;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Position;
		G_B3_0 = ((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B3_0 = 0;
	}

IL_003d:
	{
		V_0 = (bool)G_B3_0;
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_13 = __this->___Handle;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Position;
		NullCheck(L_12);
		L_12->___Length = L_14;
	}

IL_0059:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_15 = __this->___Handle;
		int32_t L_16 = ___0_where;
		NullCheck(L_15);
		L_15->___Position = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxCapacity;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		bool L_1 = L_0->___InBitwiseContext;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF9A35089103E5784EF02A898717C81941E4D1A8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_RuntimeMethod_var)));
	}

IL_001c:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position;
		int32_t L_6 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Capacity;
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Position;
		int32_t L_12 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_13 = __this->___Handle;
		NullCheck(L_13);
		int32_t L_14 = L_13->___MaxCapacity;
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_11, L_12))) > ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00aa;
	}

IL_005e:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_16 = __this->___Handle;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Capacity;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_18 = __this->___Handle;
		NullCheck(L_18);
		int32_t L_19 = L_18->___MaxCapacity;
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_21 = ___0_bytes;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_21, NULL);
		goto IL_008d;
	}

IL_0088:
	{
		V_3 = (bool)0;
		goto IL_00aa;
	}

IL_008d:
	{
	}

IL_008e:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_22 = __this->___Handle;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_23 = __this->___Handle;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Position;
		int32_t L_25 = ___0_bytes;
		NullCheck(L_22);
		L_22->___AllowedWriteMark = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		V_3 = (bool)1;
		goto IL_00aa;
	}

IL_00aa:
	{
		bool L_26 = V_3;
		return L_26;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint8_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		bool L_1 = L_0->___InBitwiseContext;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF9A35089103E5784EF02A898717C81941E4D1A8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_RuntimeMethod_var)));
	}

IL_001c:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position;
		int32_t L_6 = ___1_size;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t L_8 = L_7->___AllowedWriteMark;
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_10 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAB8889CE6B3C03F0E652F0A3D115D1AFB74AD56)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_RuntimeMethod_var)));
	}

IL_0046:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_11 = __this->___Handle;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___BufferPointer;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_13 = __this->___Handle;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Position;
		uint8_t* L_15 = ___0_value;
		int32_t L_16 = ___2_offset;
		int32_t L_17 = ___1_size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_14)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16)), ((int64_t)L_17), NULL);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_18 = __this->___Handle;
		NullCheck(L_18);
		int32_t* L_19 = (int32_t*)(&L_18->___Position);
		int32_t* L_20 = L_19;
		int32_t L_21 = *((int32_t*)L_20);
		int32_t L_22 = ___1_size;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, L_22));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = __this->___m_Value;
		int32_t L_1 = ___0_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		return L_3;
	}
}