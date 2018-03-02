#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t3269448970;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t3398609381;
// System.Func`3<System.Object,System.Object,System.Threading.Tasks.VoidTaskResult>
struct Func_3_t2935091796;
// System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>
struct Func_3_t2065982592;
// System.Func`4<System.Object,System.Object,System.Boolean,System.Object>
struct Func_4_t1471758999;
// System.Func`4<System.Object,System.Object,System.Linq.Expressions.Compiler.StackSpiller/Stack,System.Linq.Expressions.Compiler.StackSpiller/Result>
struct Func_4_t694756426;
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t1418280132;
// System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.Object,System.Object,System.Object>
struct Func_5_t3246075079;
// System.Func`5<System.Object,System.Object,System.Boolean,System.Object,System.Object>
struct Func_5_t217386776;
// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Func_5_t723684759;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Linq.Expressions.Expression
struct Expression_t1588164026;

extern RuntimeClass* CancellationToken_t784455623_il2cpp_TypeInfo_var;
extern const uint32_t Func_3_BeginInvoke_m1765976286_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t Func_4_BeginInvoke_m430900474_MetadataUsageId;
extern RuntimeClass* Stack_t3075535187_il2cpp_TypeInfo_var;
extern const uint32_t Func_4_BeginInvoke_m2178549751_MetadataUsageId;
extern RuntimeClass* ReadWriteParameters_t1050632132_il2cpp_TypeInfo_var;
extern const uint32_t Func_5_BeginInvoke_m1612318331_MetadataUsageId;
extern const uint32_t Func_5_BeginInvoke_m3385694961_MetadataUsageId;

struct DelegateU5BU5D_t1703627840;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t540272775 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___m_source_0)); }
	inline CancellationTokenSource_t540272775 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t540272775 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t784455623_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3252573759 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3252573759 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3252573759 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3252573759 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef VOIDTASKRESULT_T2616588579_H
#define VOIDTASKRESULT_T2616588579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t2616588579 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t2616588579__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDTASKRESULT_T2616588579_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef READWRITEPARAMETERS_T1050632132_H
#define READWRITEPARAMETERS_T1050632132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream/ReadWriteParameters
struct  ReadWriteParameters_t1050632132 
{
public:
	// System.Byte[] System.IO.Stream/ReadWriteParameters::Buffer
	ByteU5BU5D_t4116647657* ___Buffer_0;
	// System.Int32 System.IO.Stream/ReadWriteParameters::Offset
	int32_t ___Offset_1;
	// System.Int32 System.IO.Stream/ReadWriteParameters::Count
	int32_t ___Count_2;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(ReadWriteParameters_t1050632132, ___Buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_0), value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ReadWriteParameters_t1050632132, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(ReadWriteParameters_t1050632132, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.Stream/ReadWriteParameters
struct ReadWriteParameters_t1050632132_marshaled_pinvoke
{
	uint8_t* ___Buffer_0;
	int32_t ___Offset_1;
	int32_t ___Count_2;
};
// Native definition for COM marshalling of System.IO.Stream/ReadWriteParameters
struct ReadWriteParameters_t1050632132_marshaled_com
{
	uint8_t* ___Buffer_0;
	int32_t ___Offset_1;
	int32_t ___Count_2;
};
#endif // READWRITEPARAMETERS_T1050632132_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef REWRITEACTION_T2963939851_H
#define REWRITEACTION_T2963939851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Compiler.StackSpiller/RewriteAction
struct  RewriteAction_t2963939851 
{
public:
	// System.Int32 System.Linq.Expressions.Compiler.StackSpiller/RewriteAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RewriteAction_t2963939851, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWRITEACTION_T2963939851_H
#ifndef STACK_T3075535187_H
#define STACK_T3075535187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Compiler.StackSpiller/Stack
struct  Stack_t3075535187 
{
public:
	// System.Int32 System.Linq.Expressions.Compiler.StackSpiller/Stack::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stack_t3075535187, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T3075535187_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef MULTICASTDELEGATE_T157516450_H
#define MULTICASTDELEGATE_T157516450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t157516450  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t157516450, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t157516450_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t157516450_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T157516450_H
#ifndef RESULT_T1811329589_H
#define RESULT_T1811329589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Compiler.StackSpiller/Result
struct  Result_t1811329589 
{
public:
	// System.Linq.Expressions.Compiler.StackSpiller/RewriteAction System.Linq.Expressions.Compiler.StackSpiller/Result::Action
	int32_t ___Action_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.Compiler.StackSpiller/Result::Node
	Expression_t1588164026 * ___Node_1;

public:
	inline static int32_t get_offset_of_Action_0() { return static_cast<int32_t>(offsetof(Result_t1811329589, ___Action_0)); }
	inline int32_t get_Action_0() const { return ___Action_0; }
	inline int32_t* get_address_of_Action_0() { return &___Action_0; }
	inline void set_Action_0(int32_t value)
	{
		___Action_0 = value;
	}

	inline static int32_t get_offset_of_Node_1() { return static_cast<int32_t>(offsetof(Result_t1811329589, ___Node_1)); }
	inline Expression_t1588164026 * get_Node_1() const { return ___Node_1; }
	inline Expression_t1588164026 ** get_address_of_Node_1() { return &___Node_1; }
	inline void set_Node_1(Expression_t1588164026 * value)
	{
		___Node_1 = value;
		Il2CppCodeGenWriteBarrier((&___Node_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Linq.Expressions.Compiler.StackSpiller/Result
struct Result_t1811329589_marshaled_pinvoke
{
	int32_t ___Action_0;
	Expression_t1588164026 * ___Node_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Compiler.StackSpiller/Result
struct Result_t1811329589_marshaled_com
{
	int32_t ___Action_0;
	Expression_t1588164026 * ___Node_1;
};
#endif // RESULT_T1811329589_H
#ifndef FUNC_5_T217386776_H
#define FUNC_5_T217386776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`5<System.Object,System.Object,System.Boolean,System.Object,System.Object>
struct  Func_5_t217386776  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_5_T217386776_H
#ifndef FUNC_3_T3269448970_H
#define FUNC_3_T3269448970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Object,System.Int32>
struct  Func_3_t3269448970  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3269448970_H
#ifndef FUNC_4_T1471758999_H
#define FUNC_4_T1471758999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`4<System.Object,System.Object,System.Boolean,System.Object>
struct  Func_4_t1471758999  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_4_T1471758999_H
#ifndef FUNC_5_T723684759_H
#define FUNC_5_T723684759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct  Func_5_t723684759  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_5_T723684759_H
#ifndef FUNC_3_T2065982592_H
#define FUNC_3_T2065982592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>
struct  Func_3_t2065982592  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2065982592_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef FUNC_3_T2935091796_H
#define FUNC_3_T2935091796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Object,System.Threading.Tasks.VoidTaskResult>
struct  Func_3_t2935091796  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T2935091796_H
#ifndef FUNC_4_T694756426_H
#define FUNC_4_T694756426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`4<System.Object,System.Object,System.Linq.Expressions.Compiler.StackSpiller/Stack,System.Linq.Expressions.Compiler.StackSpiller/Result>
struct  Func_4_t694756426  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_4_T694756426_H
#ifndef FUNC_5_T3246075079_H
#define FUNC_5_T3246075079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.Object,System.Object,System.Object>
struct  Func_5_t3246075079  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_5_T3246075079_H
#ifndef FUNC_4_T1418280132_H
#define FUNC_4_T1418280132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct  Func_4_t1418280132  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_4_T1418280132_H
#ifndef FUNC_3_T3398609381_H
#define FUNC_3_T3398609381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.Object,System.Object,System.Object>
struct  Func_3_t3398609381  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3398609381_H
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Func`3<System.Object,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m1668404621_gshared (Func_3_t3269448970 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`3<System.Object,System.Object,System.Int32>::Invoke(T1,T2)
extern "C"  int32_t Func_3_Invoke_m4264333198_gshared (Func_3_t3269448970 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	int32_t result = 0;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef int32_t (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef int32_t (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef int32_t (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef int32_t (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Int32>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_3_BeginInvoke_m2791700591_gshared (Func_3_t3269448970 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult System.Func`3<System.Object,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Func_3_EndInvoke_m2228663912_gshared (Func_3_t3269448970 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m2681077561_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C"  RuntimeObject * Func_3_Invoke_m2196145582_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_3_BeginInvoke_m2630894088_gshared (Func_3_t3398609381 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_3_EndInvoke_m1514942219_gshared (Func_3_t3398609381 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
// System.Void System.Func`3<System.Object,System.Object,System.Threading.Tasks.VoidTaskResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m3092049189_gshared (Func_3_t2935091796 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`3<System.Object,System.Object,System.Threading.Tasks.VoidTaskResult>::Invoke(T1,T2)
extern "C"  VoidTaskResult_t2616588579  Func_3_Invoke_m3170778093_gshared (Func_3_t2935091796 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	VoidTaskResult_t2616588579  result;
	memset(&result, 0, sizeof(result));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef VoidTaskResult_t2616588579  (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef VoidTaskResult_t2616588579  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef VoidTaskResult_t2616588579  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef VoidTaskResult_t2616588579  (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef VoidTaskResult_t2616588579  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef VoidTaskResult_t2616588579  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Threading.Tasks.VoidTaskResult>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_3_BeginInvoke_m729627687_gshared (Func_3_t2935091796 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult System.Func`3<System.Object,System.Object,System.Threading.Tasks.VoidTaskResult>::EndInvoke(System.IAsyncResult)
extern "C"  VoidTaskResult_t2616588579  Func_3_EndInvoke_m3523627605_gshared (Func_3_t2935091796 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(VoidTaskResult_t2616588579 *)UnBox ((RuntimeObject*)__result);
}
// System.Void System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m4151600685_gshared (Func_3_t2065982592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::Invoke(T1,T2)
extern "C"  RuntimeObject * Func_3_Invoke_m387587721_gshared (Func_3_t2065982592 * __this, CancellationToken_t784455623  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, CancellationToken_t784455623  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, CancellationToken_t784455623  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, CancellationToken_t784455623  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, CancellationToken_t784455623  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_3_BeginInvoke_m1765976286_gshared (Func_3_t2065982592 * __this, CancellationToken_t784455623  ___arg10, RuntimeObject * ___arg21, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_3_BeginInvoke_m1765976286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(CancellationToken_t784455623_il2cpp_TypeInfo_var, &___arg10);
	__d_args[1] = ___arg21;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_3_EndInvoke_m2632789311_gshared (Func_3_t2065982592 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
// System.Void System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m3210866353_gshared (Func_4_t1471758999 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::Invoke(T1,T2,T3)
extern "C"  RuntimeObject * Func_4_Invoke_m1837189164_gshared (Func_4_t1471758999 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_4_BeginInvoke_m430900474_gshared (Func_4_t1471758999 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_4_BeginInvoke_m430900474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___arg32);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TResult System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_4_EndInvoke_m4023713244_gshared (Func_4_t1471758999 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
// System.Void System.Func`4<System.Object,System.Object,System.Linq.Expressions.Compiler.StackSpiller/Stack,System.Linq.Expressions.Compiler.StackSpiller/Result>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m3815498091_gshared (Func_4_t694756426 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`4<System.Object,System.Object,System.Linq.Expressions.Compiler.StackSpiller/Stack,System.Linq.Expressions.Compiler.StackSpiller/Result>::Invoke(T1,T2,T3)
extern "C"  Result_t1811329589  Func_4_Invoke_m4034959123_gshared (Func_4_t694756426 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	Result_t1811329589  result;
	memset(&result, 0, sizeof(result));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef Result_t1811329589  (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef Result_t1811329589  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef Result_t1811329589  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef Result_t1811329589  (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef Result_t1811329589  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef Result_t1811329589  (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, int32_t ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Linq.Expressions.Compiler.StackSpiller/Stack,System.Linq.Expressions.Compiler.StackSpiller/Result>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_4_BeginInvoke_m2178549751_gshared (Func_4_t694756426 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, int32_t ___arg32, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_4_BeginInvoke_m2178549751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = Box(Stack_t3075535187_il2cpp_TypeInfo_var, &___arg32);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TResult System.Func`4<System.Object,System.Object,System.Linq.Expressions.Compiler.StackSpiller/Stack,System.Linq.Expressions.Compiler.StackSpiller/Result>::EndInvoke(System.IAsyncResult)
extern "C"  Result_t1811329589  Func_4_EndInvoke_m2908244492_gshared (Func_4_t694756426 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Result_t1811329589 *)UnBox ((RuntimeObject*)__result);
}
// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m3961015854_gshared (Func_4_t1418280132 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C"  RuntimeObject * Func_4_Invoke_m3734807353_gshared (Func_4_t1418280132 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_4_BeginInvoke_m2331348284_gshared (Func_4_t1418280132 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_4_EndInvoke_m2250030065_gshared (Func_4_t1418280132 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
// System.Void System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_5__ctor_m693909441_gshared (Func_5_t3246075079 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  RuntimeObject * Func_5_Invoke_m623271308_gshared (Func_5_t3246075079 * __this, RuntimeObject * ___arg10, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_5_BeginInvoke_m1612318331_gshared (Func_5_t3246075079 * __this, RuntimeObject * ___arg10, ReadWriteParameters_t1050632132  ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_5_BeginInvoke_m1612318331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = Box(ReadWriteParameters_t1050632132_il2cpp_TypeInfo_var, &___arg21);
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TResult System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_5_EndInvoke_m1634948361_gshared (Func_5_t3246075079 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
// System.Void System.Func`5<System.Object,System.Object,System.Boolean,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_5__ctor_m1168977248_gshared (Func_5_t217386776 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`5<System.Object,System.Object,System.Boolean,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  RuntimeObject * Func_5_Invoke_m2983476262_gshared (Func_5_t217386776 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Boolean,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_5_BeginInvoke_m3385694961_gshared (Func_5_t217386776 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, RuntimeObject * ___arg43, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Func_5_BeginInvoke_m3385694961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___arg32);
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TResult System.Func`5<System.Object,System.Object,System.Boolean,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_5_EndInvoke_m2775505014_gshared (Func_5_t217386776 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
// System.Void System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_5__ctor_m1166513878_gshared (Func_5_t723684759 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  RuntimeObject * Func_5_Invoke_m1067962705_gshared (Func_5_t723684759 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else if (currentDelegate->get_m_target_2() != NULL || ___methodIsStatic)
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
				result = ((FunctionPointerType)currentDelegate->get_method_ptr_0())(___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
		return result;
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
		else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef RuntimeObject * (*FunctionPointerType) (void* __this, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
			return ((FunctionPointerType)__this->get_method_ptr_0())(___arg10, ___arg21, ___arg32, ___arg43,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Func_5_BeginInvoke_m811521959_gshared (Func_5_t723684759 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TResult System.Func`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject * Func_5_EndInvoke_m3078321021_gshared (Func_5_t723684759 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
