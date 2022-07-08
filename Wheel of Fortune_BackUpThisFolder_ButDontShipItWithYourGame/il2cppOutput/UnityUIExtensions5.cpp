#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Extensions.Tweens.FloatTween/FloatFinishCallback
struct FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF;
// UnityEngine.UI.Extensions.Tweens.FloatTween/FloatTweenCallback
struct FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155;

IL2CPP_EXTERN_C RuntimeClass* FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.UI.Extensions.Tweens.FloatTween
struct FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42 
{
	// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::m_StartFloat
	float ___m_StartFloat_0;
	// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::m_TargetFloat
	float ___m_TargetFloat_1;
	// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::m_Duration
	float ___m_Duration_2;
	// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_3;
	// UnityEngine.UI.Extensions.Tweens.FloatTween/FloatTweenCallback UnityEngine.UI.Extensions.Tweens.FloatTween::m_Target
	FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* ___m_Target_4;
	// UnityEngine.UI.Extensions.Tweens.FloatTween/FloatFinishCallback UnityEngine.UI.Extensions.Tweens.FloatTween::m_Finish
	FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* ___m_Finish_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Extensions.Tweens.FloatTween
struct FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_pinvoke
{
	float ___m_StartFloat_0;
	float ___m_TargetFloat_1;
	float ___m_Duration_2;
	int32_t ___m_IgnoreTimeScale_3;
	FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* ___m_Target_4;
	FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* ___m_Finish_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Extensions.Tweens.FloatTween
struct FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_com
{
	float ___m_StartFloat_0;
	float ___m_TargetFloat_1;
	float ___m_Duration_2;
	int32_t ___m_IgnoreTimeScale_3;
	FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* ___m_Target_4;
	FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* ___m_Finish_5;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.UI.Extensions.Tweens.FloatTween/FloatFinishCallback
struct FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Extensions.Tweens.FloatTween/FloatTweenCallback
struct FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_startFloat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_startFloat_mA7938BD2EB94F5FBB000AAF2BE3B075E4990C67A_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_startFloat(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_startFloat_m36024603678A28FAEEADEBB0B1E5EDA0EA0BC324_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_targetFloat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_targetFloat_m1267F14A0F758CA89E25BDB542FA3BB508782B7E_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_targetFloat(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_targetFloat_mE227A24538473254661C0828B47D34BCBFBCDDE3_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_duration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_duration_mB0AFD1668FC984E8F1796076B2AFC21814ADDD80_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_duration(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_duration_m8E0271E099855C8EFA148AB7C7F3F7DEC454E69E_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::get_ignoreTimeScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m59E80D990E804975F02B59C03C753207B373EAA9_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_ignoreTimeScale(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_ignoreTimeScale_mF579895AA936C1EF4343DE7E2C33A8E951C386EC_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m02065D57BF39DDB686A745EB0DA55EAEB0B2DCB8 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m1E2D0ECA52DE7BF26076D90F78F3D795D83715A8 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___floatPercentage0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween/FloatTweenCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTweenCallback__ctor_mC007034A669C0C26588838D8EFCDE941D8C82BCE (FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_AddOnChangedCallback_m8E27450D33D16C5A8853AFFFF4F35520B142C23E (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___callback0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween/FloatFinishCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatFinishCallback__ctor_mE31628D5E5019A471B42B58E23E3878ACF46CA67 (FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::AddOnFinishCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_AddOnFinishCallback_mBBA52E74F9908FFDDC52004C493760327E4F27A0 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::GetIgnoreTimescale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FloatTween_GetIgnoreTimescale_m9E843D6124865F8261B31595A9A20E38F0ECF67B_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::GetDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_GetDuration_m1D2AD24336A8F5F8450DF948BA7671C624CB29E6_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_Finished_mDFBE2F04A094DBBC3FF360C8572A231CAC0C9F4D (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UI.Extensions.Tweens.FloatTween
IL2CPP_EXTERN_C void FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshal_pinvoke(const FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42& unmarshaled, FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Target_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Target' of type 'FloatTween': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Target_4Exception, NULL);
}
IL2CPP_EXTERN_C void FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshal_pinvoke_back(const FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_pinvoke& marshaled, FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42& unmarshaled)
{
	Exception_t* ___m_Target_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Target' of type 'FloatTween': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Target_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UI.Extensions.Tweens.FloatTween
IL2CPP_EXTERN_C void FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshal_pinvoke_cleanup(FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UI.Extensions.Tweens.FloatTween
IL2CPP_EXTERN_C void FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshal_com(const FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42& unmarshaled, FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_com& marshaled)
{
	Exception_t* ___m_Target_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Target' of type 'FloatTween': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Target_4Exception, NULL);
}
IL2CPP_EXTERN_C void FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshal_com_back(const FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_com& marshaled, FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42& unmarshaled)
{
	Exception_t* ___m_Target_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Target' of type 'FloatTween': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Target_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UI.Extensions.Tweens.FloatTween
IL2CPP_EXTERN_C void FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshal_com_cleanup(FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42_marshaled_com& marshaled)
{
}
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_startFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_get_startFloat_mA7938BD2EB94F5FBB000AAF2BE3B075E4990C67A (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_StartFloat; }
		float L_0 = __this->___m_StartFloat_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float FloatTween_get_startFloat_mA7938BD2EB94F5FBB000AAF2BE3B075E4990C67A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatTween_get_startFloat_mA7938BD2EB94F5FBB000AAF2BE3B075E4990C67A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_startFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_set_startFloat_m36024603678A28FAEEADEBB0B1E5EDA0EA0BC324 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_StartFloat = value; }
		float L_0 = ___value0;
		__this->___m_StartFloat_0 = L_0;
		// set { m_StartFloat = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_set_startFloat_m36024603678A28FAEEADEBB0B1E5EDA0EA0BC324_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_set_startFloat_m36024603678A28FAEEADEBB0B1E5EDA0EA0BC324_inline(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_targetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_get_targetFloat_m1267F14A0F758CA89E25BDB542FA3BB508782B7E (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_TargetFloat; }
		float L_0 = __this->___m_TargetFloat_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float FloatTween_get_targetFloat_m1267F14A0F758CA89E25BDB542FA3BB508782B7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatTween_get_targetFloat_m1267F14A0F758CA89E25BDB542FA3BB508782B7E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_targetFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_set_targetFloat_mE227A24538473254661C0828B47D34BCBFBCDDE3 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_TargetFloat = value; }
		float L_0 = ___value0;
		__this->___m_TargetFloat_1 = L_0;
		// set { m_TargetFloat = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_set_targetFloat_mE227A24538473254661C0828B47D34BCBFBCDDE3_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_set_targetFloat_mE227A24538473254661C0828B47D34BCBFBCDDE3_inline(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_get_duration_mB0AFD1668FC984E8F1796076B2AFC21814ADDD80 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Duration; }
		float L_0 = __this->___m_Duration_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float FloatTween_get_duration_mB0AFD1668FC984E8F1796076B2AFC21814ADDD80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatTween_get_duration_mB0AFD1668FC984E8F1796076B2AFC21814ADDD80_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_duration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_set_duration_m8E0271E099855C8EFA148AB7C7F3F7DEC454E69E (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Duration = value; }
		float L_0 = ___value0;
		__this->___m_Duration_2 = L_0;
		// set { m_Duration = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_set_duration_m8E0271E099855C8EFA148AB7C7F3F7DEC454E69E_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_set_duration_m8E0271E099855C8EFA148AB7C7F3F7DEC454E69E_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m59E80D990E804975F02B59C03C753207B373EAA9 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->___m_IgnoreTimeScale_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool FloatTween_get_ignoreTimeScale_m59E80D990E804975F02B59C03C753207B373EAA9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	bool _returnValue;
	_returnValue = FloatTween_get_ignoreTimeScale_m59E80D990E804975F02B59C03C753207B373EAA9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::set_ignoreTimeScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_set_ignoreTimeScale_mF579895AA936C1EF4343DE7E2C33A8E951C386EC (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_IgnoreTimeScale = value; }
		bool L_0 = ___value0;
		__this->___m_IgnoreTimeScale_3 = L_0;
		// set { m_IgnoreTimeScale = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_set_ignoreTimeScale_mF579895AA936C1EF4343DE7E2C33A8E951C386EC_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_set_ignoreTimeScale_mF579895AA936C1EF4343DE7E2C33A8E951C386EC_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m1E2D0ECA52DE7BF26076D90F78F3D795D83715A8 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___floatPercentage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!ValidTarget())
		bool L_0;
		L_0 = FloatTween_ValidTarget_m02065D57BF39DDB686A745EB0DA55EAEB0B2DCB8(__this, NULL);
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
		// m_Target.Invoke( Mathf.Lerp (m_StartFloat, m_TargetFloat, floatPercentage) );
		FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* L_1 = __this->___m_Target_4;
		float L_2 = __this->___m_StartFloat_0;
		float L_3 = __this->___m_TargetFloat_1;
		float L_4 = ___floatPercentage0;
		float L_5;
		L_5 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_2, L_3, L_4, NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_5, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_TweenValue_m1E2D0ECA52DE7BF26076D90F78F3D795D83715A8_AdjustorThunk (RuntimeObject* __this, float ___floatPercentage0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_TweenValue_m1E2D0ECA52DE7BF26076D90F78F3D795D83715A8(_thisAdjusted, ___floatPercentage0, method);
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_AddOnChangedCallback_m8E27450D33D16C5A8853AFFFF4F35520B142C23E (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Target == null)
		FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* L_0 = __this->___m_Target_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Target = new FloatTweenCallback();
		FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* L_1 = (FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155*)il2cpp_codegen_object_new(FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatTweenCallback__ctor_mC007034A669C0C26588838D8EFCDE941D8C82BCE(L_1, NULL);
		__this->___m_Target_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target_4), (void*)L_1);
	}

IL_0013:
	{
		// m_Target.AddListener(callback);
		FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* L_2 = __this->___m_Target_4;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = ___callback0;
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_AddOnChangedCallback_m8E27450D33D16C5A8853AFFFF4F35520B142C23E_AdjustorThunk (RuntimeObject* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___callback0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_AddOnChangedCallback_m8E27450D33D16C5A8853AFFFF4F35520B142C23E(_thisAdjusted, ___callback0, method);
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::AddOnFinishCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_AddOnFinishCallback_mBBA52E74F9908FFDDC52004C493760327E4F27A0 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Finish == null)
		FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* L_0 = __this->___m_Finish_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Finish = new FloatFinishCallback();
		FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* L_1 = (FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF*)il2cpp_codegen_object_new(FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FloatFinishCallback__ctor_mE31628D5E5019A471B42B58E23E3878ACF46CA67(L_1, NULL);
		__this->___m_Finish_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Finish_5), (void*)L_1);
	}

IL_0013:
	{
		// m_Finish.AddListener(callback);
		FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* L_2 = __this->___m_Finish_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___callback0;
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_AddOnFinishCallback_mBBA52E74F9908FFDDC52004C493760327E4F27A0_AdjustorThunk (RuntimeObject* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback0, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_AddOnFinishCallback_mBBA52E74F9908FFDDC52004C493760327E4F27A0(_thisAdjusted, ___callback0, method);
}
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::GetIgnoreTimescale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_GetIgnoreTimescale_m9E843D6124865F8261B31595A9A20E38F0ECF67B (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// return m_IgnoreTimeScale;
		bool L_0 = __this->___m_IgnoreTimeScale_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool FloatTween_GetIgnoreTimescale_m9E843D6124865F8261B31595A9A20E38F0ECF67B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	bool _returnValue;
	_returnValue = FloatTween_GetIgnoreTimescale_m9E843D6124865F8261B31595A9A20E38F0ECF67B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.UI.Extensions.Tweens.FloatTween::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_GetDuration_m1D2AD24336A8F5F8450DF948BA7671C624CB29E6 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// return m_Duration;
		float L_0 = __this->___m_Duration_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float FloatTween_GetDuration_m1D2AD24336A8F5F8450DF948BA7671C624CB29E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatTween_GetDuration_m1D2AD24336A8F5F8450DF948BA7671C624CB29E6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UI.Extensions.Tweens.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m02065D57BF39DDB686A745EB0DA55EAEB0B2DCB8 (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// return m_Target != null;
		FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* L_0 = __this->___m_Target_4;
		return (bool)((!(((RuntimeObject*)(FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FloatTween_ValidTarget_m02065D57BF39DDB686A745EB0DA55EAEB0B2DCB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	bool _returnValue;
	_returnValue = FloatTween_ValidTarget_m02065D57BF39DDB686A745EB0DA55EAEB0B2DCB8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween::Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_Finished_mDFBE2F04A094DBBC3FF360C8572A231CAC0C9F4D (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Finish != null)
		FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* L_0 = __this->___m_Finish_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_Finish.Invoke();
		FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* L_1 = __this->___m_Finish_5;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatTween_Finished_mDFBE2F04A094DBBC3FF360C8572A231CAC0C9F4D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42*>(__this + _offset);
	FloatTween_Finished_mDFBE2F04A094DBBC3FF360C8572A231CAC0C9F4D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween/FloatTweenCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTweenCallback__ctor_mC007034A669C0C26588838D8EFCDE941D8C82BCE (FloatTweenCallback_tADDB9B67F87FA78AAAAD5F3474B4CE0A75F98155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.Extensions.Tweens.FloatTween/FloatFinishCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatFinishCallback__ctor_mE31628D5E5019A471B42B58E23E3878ACF46CA67 (FloatFinishCallback_t904C285E9F46DFD2BABF80F85DB6BB12C3AE3ECF* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_startFloat_mA7938BD2EB94F5FBB000AAF2BE3B075E4990C67A_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_StartFloat; }
		float L_0 = __this->___m_StartFloat_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_startFloat_m36024603678A28FAEEADEBB0B1E5EDA0EA0BC324_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_StartFloat = value; }
		float L_0 = ___value0;
		__this->___m_StartFloat_0 = L_0;
		// set { m_StartFloat = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_targetFloat_m1267F14A0F758CA89E25BDB542FA3BB508782B7E_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_TargetFloat; }
		float L_0 = __this->___m_TargetFloat_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_targetFloat_mE227A24538473254661C0828B47D34BCBFBCDDE3_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_TargetFloat = value; }
		float L_0 = ___value0;
		__this->___m_TargetFloat_1 = L_0;
		// set { m_TargetFloat = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_duration_mB0AFD1668FC984E8F1796076B2AFC21814ADDD80_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Duration; }
		float L_0 = __this->___m_Duration_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_duration_m8E0271E099855C8EFA148AB7C7F3F7DEC454E69E_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Duration = value; }
		float L_0 = ___value0;
		__this->___m_Duration_2 = L_0;
		// set { m_Duration = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m59E80D990E804975F02B59C03C753207B373EAA9_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->___m_IgnoreTimeScale_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatTween_set_ignoreTimeScale_mF579895AA936C1EF4343DE7E2C33A8E951C386EC_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_IgnoreTimeScale = value; }
		bool L_0 = ___value0;
		__this->___m_IgnoreTimeScale_3 = L_0;
		// set { m_IgnoreTimeScale = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FloatTween_GetIgnoreTimescale_m9E843D6124865F8261B31595A9A20E38F0ECF67B_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// return m_IgnoreTimeScale;
		bool L_0 = __this->___m_IgnoreTimeScale_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_GetDuration_m1D2AD24336A8F5F8450DF948BA7671C624CB29E6_inline (FloatTween_tD96D52946F2259A431ED40D32D0E0B876B9F2B42* __this, const RuntimeMethod* method) 
{
	{
		// return m_Duration;
		float L_0 = __this->___m_Duration_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
