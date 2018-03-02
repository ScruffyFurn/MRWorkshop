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

// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1712802186;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Type
struct Type_t;
// MS.Internal.Xml.Cache.XPathNode[]
struct XPathNodeU5BU5D_t47339301;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// HoloToolkit.Unity.TimerScheduler/Callback
struct Callback_t2663646540;
// GLTF.Material
struct Material_t1438862258;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>
struct List_1_t3863375399;

extern Il2CppCodeGenString* _stringLiteral3450517380;
extern const uint32_t KeyValuePair_2_ToString_m304267203_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1618382541_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m875328790_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3784847782_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1728257272_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1167308912_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2322562946_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2584609649_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m65692449_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1238786018_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m516993745_MetadataUsageId;
struct XPathNode_t2208072876_marshaled_pinvoke;
struct XPathNode_t2208072876_marshaled_com;



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
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T1712802186_H
#define STRINGBUILDER_T1712802186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t1712802186  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t1712802186 * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t1712802186, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t1712802186, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t1712802186 * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t1712802186 ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t1712802186 * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t1712802186, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t1712802186, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t1712802186, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T1712802186_H
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
#ifndef TYPECONVERTKEY_T285306760_H
#define TYPECONVERTKEY_T285306760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct  TypeConvertKey_t285306760 
{
public:
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t285306760, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((&____initialType_0), value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t285306760, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t285306760_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t285306760_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
#endif // TYPECONVERTKEY_T285306760_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef XPATHNODEREF_T3498189018_H
#define XPATHNODEREF_T3498189018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MS.Internal.Xml.Cache.XPathNodeRef
struct  XPathNodeRef_t3498189018 
{
public:
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeRef::page
	XPathNodeU5BU5D_t47339301* ___page_0;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(XPathNodeRef_t3498189018, ___page_0)); }
	inline XPathNodeU5BU5D_t47339301* get_page_0() const { return ___page_0; }
	inline XPathNodeU5BU5D_t47339301** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(XPathNodeU5BU5D_t47339301* value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((&___page_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(XPathNodeRef_t3498189018, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_t3498189018_marshaled_pinvoke
{
	XPathNode_t2208072876_marshaled_pinvoke* ___page_0;
	int32_t ___idx_1;
};
// Native definition for COM marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_t3498189018_marshaled_com
{
	XPathNode_t2208072876_marshaled_com* ___page_0;
	int32_t ___idx_1;
};
#endif // XPATHNODEREF_T3498189018_H
#ifndef KEYVALUEPAIR_2_T4237331251_H
#define KEYVALUEPAIR_2_T4237331251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t4237331251 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4237331251, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4237331251, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4237331251_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef KEYVALUEPAIR_2_T3373118172_H
#define KEYVALUEPAIR_2_T3373118172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>
struct  KeyValuePair_2_t3373118172 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int16_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3373118172, ___key_0)); }
	inline int16_t get_key_0() const { return ___key_0; }
	inline int16_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int16_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3373118172, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3373118172_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t386037858 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t386037858 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef TIMERDATA_T4056715490_H
#define TIMERDATA_T4056715490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.TimerScheduler/TimerData
struct  TimerData_t4056715490 
{
public:
	// HoloToolkit.Unity.TimerScheduler/Callback HoloToolkit.Unity.TimerScheduler/TimerData::Callback
	Callback_t2663646540 * ___Callback_0;
	// System.Single HoloToolkit.Unity.TimerScheduler/TimerData::Duration
	float ___Duration_1;
	// System.Boolean HoloToolkit.Unity.TimerScheduler/TimerData::Loop
	bool ___Loop_2;
	// System.Int32 HoloToolkit.Unity.TimerScheduler/TimerData::Id
	int32_t ___Id_3;

public:
	inline static int32_t get_offset_of_Callback_0() { return static_cast<int32_t>(offsetof(TimerData_t4056715490, ___Callback_0)); }
	inline Callback_t2663646540 * get_Callback_0() const { return ___Callback_0; }
	inline Callback_t2663646540 ** get_address_of_Callback_0() { return &___Callback_0; }
	inline void set_Callback_0(Callback_t2663646540 * value)
	{
		___Callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___Callback_0), value);
	}

	inline static int32_t get_offset_of_Duration_1() { return static_cast<int32_t>(offsetof(TimerData_t4056715490, ___Duration_1)); }
	inline float get_Duration_1() const { return ___Duration_1; }
	inline float* get_address_of_Duration_1() { return &___Duration_1; }
	inline void set_Duration_1(float value)
	{
		___Duration_1 = value;
	}

	inline static int32_t get_offset_of_Loop_2() { return static_cast<int32_t>(offsetof(TimerData_t4056715490, ___Loop_2)); }
	inline bool get_Loop_2() const { return ___Loop_2; }
	inline bool* get_address_of_Loop_2() { return &___Loop_2; }
	inline void set_Loop_2(bool value)
	{
		___Loop_2 = value;
	}

	inline static int32_t get_offset_of_Id_3() { return static_cast<int32_t>(offsetof(TimerData_t4056715490, ___Id_3)); }
	inline int32_t get_Id_3() const { return ___Id_3; }
	inline int32_t* get_address_of_Id_3() { return &___Id_3; }
	inline void set_Id_3(int32_t value)
	{
		___Id_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.TimerScheduler/TimerData
struct TimerData_t4056715490_marshaled_pinvoke
{
	Il2CppMethodPointer ___Callback_0;
	float ___Duration_1;
	int32_t ___Loop_2;
	int32_t ___Id_3;
};
// Native definition for COM marshalling of HoloToolkit.Unity.TimerScheduler/TimerData
struct TimerData_t4056715490_marshaled_com
{
	Il2CppMethodPointer ___Callback_0;
	float ___Duration_1;
	int32_t ___Loop_2;
	int32_t ___Id_3;
};
#endif // TIMERDATA_T4056715490_H
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
#ifndef MATERIALCACHEKEY_T924020480_H
#define MATERIALCACHEKEY_T924020480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.GLTFLoader/MaterialCacheKey
struct  MaterialCacheKey_t924020480 
{
public:
	// GLTF.Material GLTF.GLTFLoader/MaterialCacheKey::Material
	Material_t1438862258 * ___Material_0;
	// System.Boolean GLTF.GLTFLoader/MaterialCacheKey::UseVertexColors
	bool ___UseVertexColors_1;

public:
	inline static int32_t get_offset_of_Material_0() { return static_cast<int32_t>(offsetof(MaterialCacheKey_t924020480, ___Material_0)); }
	inline Material_t1438862258 * get_Material_0() const { return ___Material_0; }
	inline Material_t1438862258 ** get_address_of_Material_0() { return &___Material_0; }
	inline void set_Material_0(Material_t1438862258 * value)
	{
		___Material_0 = value;
		Il2CppCodeGenWriteBarrier((&___Material_0), value);
	}

	inline static int32_t get_offset_of_UseVertexColors_1() { return static_cast<int32_t>(offsetof(MaterialCacheKey_t924020480, ___UseVertexColors_1)); }
	inline bool get_UseVertexColors_1() const { return ___UseVertexColors_1; }
	inline bool* get_address_of_UseVertexColors_1() { return &___UseVertexColors_1; }
	inline void set_UseVertexColors_1(bool value)
	{
		___UseVertexColors_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GLTF.GLTFLoader/MaterialCacheKey
struct MaterialCacheKey_t924020480_marshaled_pinvoke
{
	Material_t1438862258 * ___Material_0;
	int32_t ___UseVertexColors_1;
};
// Native definition for COM marshalling of GLTF.GLTFLoader/MaterialCacheKey
struct MaterialCacheKey_t924020480_marshaled_com
{
	Material_t1438862258 * ___Material_0;
	int32_t ___UseVertexColors_1;
};
#endif // MATERIALCACHEKEY_T924020480_H
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
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef CONNECTIONPENDINGPLAYERS_T878091664_H
#define CONNECTIONPENDINGPLAYERS_T878091664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct  ConnectionPendingPlayers_t878091664 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo> UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers::players
	List_1_t3863375399 * ___players_0;

public:
	inline static int32_t get_offset_of_players_0() { return static_cast<int32_t>(offsetof(ConnectionPendingPlayers_t878091664, ___players_0)); }
	inline List_1_t3863375399 * get_players_0() const { return ___players_0; }
	inline List_1_t3863375399 ** get_address_of_players_0() { return &___players_0; }
	inline void set_players_0(List_1_t3863375399 * value)
	{
		___players_0 = value;
		Il2CppCodeGenWriteBarrier((&___players_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t878091664_marshaled_pinvoke
{
	List_1_t3863375399 * ___players_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers
struct ConnectionPendingPlayers_t878091664_marshaled_com
{
	List_1_t3863375399 * ___players_0;
};
#endif // CONNECTIONPENDINGPLAYERS_T878091664_H
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
#ifndef KEYEVENT_T245959883_H
#define KEYEVENT_T245959883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager/KeyEvent
struct  KeyEvent_t245959883 
{
public:
	// System.Int32 HoloToolkit.Unity.InputModule.KeyboardManager/KeyEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyEvent_t245959883, ___value___2)); }
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
#endif // KEYEVENT_T245959883_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___2)); }
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
#endif // KEYCODE_T2599294277_H
#ifndef KEYVALUEPAIR_2_T2164477162_H
#define KEYVALUEPAIR_2_T2164477162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct  KeyValuePair_2_t2164477162 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConnectionPendingPlayers_t878091664  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2164477162, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2164477162, ___value_1)); }
	inline ConnectionPendingPlayers_t878091664  get_value_1() const { return ___value_1; }
	inline ConnectionPendingPlayers_t878091664 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ConnectionPendingPlayers_t878091664  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2164477162_H
#ifndef KEYVALUEPAIR_2_T2872605199_H
#define KEYVALUEPAIR_2_T2872605199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>
struct  KeyValuePair_2_t2872605199 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	XPathNodeRef_t3498189018  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	XPathNodeRef_t3498189018  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2872605199, ___key_0)); }
	inline XPathNodeRef_t3498189018  get_key_0() const { return ___key_0; }
	inline XPathNodeRef_t3498189018 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(XPathNodeRef_t3498189018  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2872605199, ___value_1)); }
	inline XPathNodeRef_t3498189018  get_value_1() const { return ___value_1; }
	inline XPathNodeRef_t3498189018 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(XPathNodeRef_t3498189018  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2872605199_H
#ifndef KEYVALUEPAIR_2_T3173707883_H
#define KEYVALUEPAIR_2_T3173707883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>
struct  KeyValuePair_2_t3173707883 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MaterialCacheKey_t924020480  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3173707883, ___key_0)); }
	inline MaterialCacheKey_t924020480  get_key_0() const { return ___key_0; }
	inline MaterialCacheKey_t924020480 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(MaterialCacheKey_t924020480  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3173707883, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3173707883_H
#ifndef MATERIALTYPE_T2967007083_H
#define MATERIALTYPE_T2967007083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.GLTFLoader/MaterialType
struct  MaterialType_t2967007083 
{
public:
	// System.Int32 GLTF.GLTFLoader/MaterialType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaterialType_t2967007083, ___value___2)); }
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
#endif // MATERIALTYPE_T2967007083_H
#ifndef KEYVALUEPAIR_2_T1048133692_H
#define KEYVALUEPAIR_2_T1048133692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>
struct  KeyValuePair_2_t1048133692 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TimerData_t4056715490  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1048133692, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1048133692, ___value_1)); }
	inline TimerData_t4056715490  get_value_1() const { return ___value_1; }
	inline TimerData_t4056715490 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TimerData_t4056715490  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1048133692_H
#ifndef KEYVALUEPAIR_2_T231828568_H
#define KEYVALUEPAIR_2_T231828568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_t231828568 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t231828568, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t231828568, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T231828568_H
#ifndef KEYVALUEPAIR_2_T753628355_H
#define KEYVALUEPAIR_2_T753628355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct  KeyValuePair_2_t753628355 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TypeConvertKey_t285306760  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t753628355, ___key_0)); }
	inline TypeConvertKey_t285306760  get_key_0() const { return ___key_0; }
	inline TypeConvertKey_t285306760 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TypeConvertKey_t285306760  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t753628355, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T753628355_H
#ifndef KEYVALUEPAIR_2_T14778868_H
#define KEYVALUEPAIR_2_T14778868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>
struct  KeyValuePair_2_t14778868 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t14778868, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t14778868, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T14778868_H
#ifndef KEYCODEEVENTPAIR_T1510105498_H
#define KEYCODEEVENTPAIR_T1510105498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair
struct  KeyCodeEventPair_t1510105498 
{
public:
	// UnityEngine.KeyCode HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair::KeyCode
	int32_t ___KeyCode_0;
	// HoloToolkit.Unity.InputModule.KeyboardManager/KeyEvent HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair::KeyEvent
	int32_t ___KeyEvent_1;

public:
	inline static int32_t get_offset_of_KeyCode_0() { return static_cast<int32_t>(offsetof(KeyCodeEventPair_t1510105498, ___KeyCode_0)); }
	inline int32_t get_KeyCode_0() const { return ___KeyCode_0; }
	inline int32_t* get_address_of_KeyCode_0() { return &___KeyCode_0; }
	inline void set_KeyCode_0(int32_t value)
	{
		___KeyCode_0 = value;
	}

	inline static int32_t get_offset_of_KeyEvent_1() { return static_cast<int32_t>(offsetof(KeyCodeEventPair_t1510105498, ___KeyEvent_1)); }
	inline int32_t get_KeyEvent_1() const { return ___KeyEvent_1; }
	inline int32_t* get_address_of_KeyEvent_1() { return &___KeyEvent_1; }
	inline void set_KeyEvent_1(int32_t value)
	{
		___KeyEvent_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODEEVENTPAIR_T1510105498_H
#ifndef KEYVALUEPAIR_2_T2541612585_H
#define KEYVALUEPAIR_2_T2541612585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>
struct  KeyValuePair_2_t2541612585 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	KeyCodeEventPair_t1510105498  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2541612585, ___key_0)); }
	inline KeyCodeEventPair_t1510105498  get_key_0() const { return ___key_0; }
	inline KeyCodeEventPair_t1510105498 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(KeyCodeEventPair_t1510105498  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2541612585, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2541612585_H


// System.Void System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1587324137_gshared (KeyValuePair_2_t3173707883 * __this, MaterialCacheKey_t924020480  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::get_Key()
extern "C"  MaterialCacheKey_t924020480  KeyValuePair_2_get_Key_m2153868138_gshared (KeyValuePair_2_t3173707883 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3014227780_gshared (KeyValuePair_2_t3173707883 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m304267203_gshared (KeyValuePair_2_t3173707883 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1144419023_gshared (KeyValuePair_2_t14778868 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2778821057_gshared (KeyValuePair_2_t14778868 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m631705369_gshared (KeyValuePair_2_t14778868 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1618382541_gshared (KeyValuePair_2_t14778868 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2475282467_gshared (KeyValuePair_2_t2541612585 * __this, KeyCodeEventPair_t1510105498  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::get_Key()
extern "C"  KeyCodeEventPair_t1510105498  KeyValuePair_2_get_Key_m2199460899_gshared (KeyValuePair_2_t2541612585 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2892759683_gshared (KeyValuePair_2_t2541612585 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m875328790_gshared (KeyValuePair_2_t2541612585 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3854325871_gshared (KeyValuePair_2_t2872605199 * __this, XPathNodeRef_t3498189018  ___key0, XPathNodeRef_t3498189018  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Key()
extern "C"  XPathNodeRef_t3498189018  KeyValuePair_2_get_Key_m3002864413_gshared (KeyValuePair_2_t2872605199 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Value()
extern "C"  XPathNodeRef_t3498189018  KeyValuePair_2_get_Value_m3903919478_gshared (KeyValuePair_2_t2872605199 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3784847782_gshared (KeyValuePair_2_t2872605199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2870587947_gshared (KeyValuePair_2_t753628355 * __this, TypeConvertKey_t285306760  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::get_Key()
extern "C"  TypeConvertKey_t285306760  KeyValuePair_2_get_Key_m2096859168_gshared (KeyValuePair_2_t753628355 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2171951189_gshared (KeyValuePair_2_t753628355 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1728257272_gshared (KeyValuePair_2_t753628355 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1315482284_gshared (KeyValuePair_2_t231828568 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
extern "C"  Guid_t  KeyValuePair_2_get_Key_m4294704491_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2666064688_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1167308912_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3811614277_gshared (KeyValuePair_2_t3373118172 * __this, int16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
extern "C"  int16_t KeyValuePair_2_get_Key_m3277879993_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1448500413_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2322562946_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m205375688_gshared (KeyValuePair_2_t1048133692 * __this, int32_t ___key0, TimerData_t4056715490  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1183315111_gshared (KeyValuePair_2_t1048133692 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::get_Value()
extern "C"  TimerData_t4056715490  KeyValuePair_2_get_Value_m513163858_gshared (KeyValuePair_2_t1048133692 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2584609649_gshared (KeyValuePair_2_t1048133692 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m932279514_gshared (KeyValuePair_2_t4237331251 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2635782095_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1804680087_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m65692449_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2118224448_gshared (KeyValuePair_2_t71524366 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1238786018_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3811657099_gshared (KeyValuePair_2_t2164477162 * __this, int32_t ___key0, ConnectionPendingPlayers_t878091664  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m373203839_gshared (KeyValuePair_2_t2164477162 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Value()
extern "C"  ConnectionPendingPlayers_t878091664  KeyValuePair_2_get_Value_m2193227747_gshared (KeyValuePair_2_t2164477162 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m516993745_gshared (KeyValuePair_2_t2164477162 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1587324137(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3173707883 *, MaterialCacheKey_t924020480 , RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1587324137_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2153868138(__this, method) ((  MaterialCacheKey_t924020480  (*) (KeyValuePair_2_t3173707883 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2153868138_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3014227780(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3173707883 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3014227780_gshared)(__this, method)
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
extern "C"  StringBuilder_t1712802186 * StringBuilderCache_Acquire_m4169564332 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t1712802186 * StringBuilder_Append_m2383614642 (StringBuilder_t1712802186 * __this, Il2CppChar ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t1712802186 * StringBuilder_Append_m1965104174 (StringBuilder_t1712802186 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
extern "C"  String_t* StringBuilderCache_GetStringAndRelease_m1110745745 (RuntimeObject * __this /* static, unused */, StringBuilder_t1712802186 * ___sb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::ToString()
#define KeyValuePair_2_ToString_m304267203(__this, method) ((  String_t* (*) (KeyValuePair_2_t3173707883 *, const RuntimeMethod*))KeyValuePair_2_ToString_m304267203_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1144419023(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t14778868 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1144419023_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2778821057(__this, method) ((  int32_t (*) (KeyValuePair_2_t14778868 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2778821057_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m631705369(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t14778868 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m631705369_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1618382541(__this, method) ((  String_t* (*) (KeyValuePair_2_t14778868 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1618382541_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2475282467(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2541612585 *, KeyCodeEventPair_t1510105498 , RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2475282467_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2199460899(__this, method) ((  KeyCodeEventPair_t1510105498  (*) (KeyValuePair_2_t2541612585 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2199460899_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2892759683(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2541612585 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2892759683_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::ToString()
#define KeyValuePair_2_ToString_m875328790(__this, method) ((  String_t* (*) (KeyValuePair_2_t2541612585 *, const RuntimeMethod*))KeyValuePair_2_ToString_m875328790_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3854325871(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2872605199 *, XPathNodeRef_t3498189018 , XPathNodeRef_t3498189018 , const RuntimeMethod*))KeyValuePair_2__ctor_m3854325871_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Key()
#define KeyValuePair_2_get_Key_m3002864413(__this, method) ((  XPathNodeRef_t3498189018  (*) (KeyValuePair_2_t2872605199 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3002864413_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Value()
#define KeyValuePair_2_get_Value_m3903919478(__this, method) ((  XPathNodeRef_t3498189018  (*) (KeyValuePair_2_t2872605199 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3903919478_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::ToString()
#define KeyValuePair_2_ToString_m3784847782(__this, method) ((  String_t* (*) (KeyValuePair_2_t2872605199 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3784847782_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2870587947(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t753628355 *, TypeConvertKey_t285306760 , RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2870587947_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2096859168(__this, method) ((  TypeConvertKey_t285306760  (*) (KeyValuePair_2_t753628355 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2096859168_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2171951189(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t753628355 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2171951189_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1728257272(__this, method) ((  String_t* (*) (KeyValuePair_2_t753628355 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1728257272_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1315482284(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t231828568 *, Guid_t , RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1315482284_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4294704491(__this, method) ((  Guid_t  (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4294704491_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2666064688(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2666064688_gshared)(__this, method)
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1167308912(__this, method) ((  String_t* (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1167308912_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3811614277(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3373118172 *, int16_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3811614277_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3277879993(__this, method) ((  int16_t (*) (KeyValuePair_2_t3373118172 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3277879993_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1448500413(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3373118172 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1448500413_gshared)(__this, method)
// System.String System.Int16::ToString()
extern "C"  String_t* Int16_ToString_m1270547562 (int16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2322562946(__this, method) ((  String_t* (*) (KeyValuePair_2_t3373118172 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2322562946_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m205375688(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1048133692 *, int32_t, TimerData_t4056715490 , const RuntimeMethod*))KeyValuePair_2__ctor_m205375688_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::get_Key()
#define KeyValuePair_2_get_Key_m1183315111(__this, method) ((  int32_t (*) (KeyValuePair_2_t1048133692 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1183315111_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::get_Value()
#define KeyValuePair_2_get_Value_m513163858(__this, method) ((  TimerData_t4056715490  (*) (KeyValuePair_2_t1048133692 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m513163858_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::ToString()
#define KeyValuePair_2_ToString_m2584609649(__this, method) ((  String_t* (*) (KeyValuePair_2_t1048133692 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2584609649_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m932279514(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4237331251 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m932279514_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m2635782095(__this, method) ((  int32_t (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2635782095_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1804680087(__this, method) ((  int32_t (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1804680087_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m65692449(__this, method) ((  String_t* (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_ToString_m65692449_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2118224448(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t71524366 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2118224448_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1839753989(__this, method) ((  int32_t (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1839753989_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3495598764(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3495598764_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1238786018(__this, method) ((  String_t* (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1238786018_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3811657099(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2164477162 *, int32_t, ConnectionPendingPlayers_t878091664 , const RuntimeMethod*))KeyValuePair_2__ctor_m3811657099_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Key()
#define KeyValuePair_2_get_Key_m373203839(__this, method) ((  int32_t (*) (KeyValuePair_2_t2164477162 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m373203839_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Value()
#define KeyValuePair_2_get_Value_m2193227747(__this, method) ((  ConnectionPendingPlayers_t878091664  (*) (KeyValuePair_2_t2164477162 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2193227747_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::ToString()
#define KeyValuePair_2_ToString_m516993745(__this, method) ((  String_t* (*) (KeyValuePair_2_t2164477162 *, const RuntimeMethod*))KeyValuePair_2_ToString_m516993745_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1587324137_gshared (KeyValuePair_2_t3173707883 * __this, MaterialCacheKey_t924020480  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		MaterialCacheKey_t924020480  L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1587324137_AdjustorThunk (RuntimeObject * __this, MaterialCacheKey_t924020480  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3173707883 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3173707883 *>(__this + 1);
	KeyValuePair_2__ctor_m1587324137(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::get_Key()
extern "C"  MaterialCacheKey_t924020480  KeyValuePair_2_get_Key_m2153868138_gshared (KeyValuePair_2_t3173707883 * __this, const RuntimeMethod* method)
{
	{
		MaterialCacheKey_t924020480  L_0 = (MaterialCacheKey_t924020480 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  MaterialCacheKey_t924020480  KeyValuePair_2_get_Key_m2153868138_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3173707883 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3173707883 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2153868138(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3014227780_gshared (KeyValuePair_2_t3173707883 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3014227780_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3173707883 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3173707883 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3014227780(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialCacheKey,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m304267203_gshared (KeyValuePair_2_t3173707883 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m304267203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	MaterialCacheKey_t924020480  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		MaterialCacheKey_t924020480  L_2 = KeyValuePair_2_get_Key_m2153868138((KeyValuePair_2_t3173707883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		MaterialCacheKey_t924020480  L_4 = KeyValuePair_2_get_Key_m2153868138((KeyValuePair_2_t3173707883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (MaterialCacheKey_t924020480 )L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		V_1 = *(MaterialCacheKey_t924020480 *)UnBox(L_5);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_7 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_7);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_7, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3014227780((KeyValuePair_2_t3173707883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_9 = V_0;
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m3014227780((KeyValuePair_2_t3173707883 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_9);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_12 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_12);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m304267203_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3173707883 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3173707883 *>(__this + 1);
	return KeyValuePair_2_ToString_m304267203(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1144419023_gshared (KeyValuePair_2_t14778868 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1144419023_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t14778868 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t14778868 *>(__this + 1);
	KeyValuePair_2__ctor_m1144419023(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2778821057_gshared (KeyValuePair_2_t14778868 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2778821057_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t14778868 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t14778868 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2778821057(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m631705369_gshared (KeyValuePair_2_t14778868 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m631705369_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t14778868 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t14778868 *>(__this + 1);
	return KeyValuePair_2_get_Value_m631705369(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<GLTF.GLTFLoader/MaterialType,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1618382541_gshared (KeyValuePair_2_t14778868 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1618382541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m2778821057((KeyValuePair_2_t14778868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m2778821057((KeyValuePair_2_t14778868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		V_1 = *(int32_t*)UnBox(L_5);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_7 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_7);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_7, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m631705369((KeyValuePair_2_t14778868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_9 = V_0;
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m631705369((KeyValuePair_2_t14778868 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_9);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_12 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_12);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1618382541_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t14778868 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t14778868 *>(__this + 1);
	return KeyValuePair_2_ToString_m1618382541(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2475282467_gshared (KeyValuePair_2_t2541612585 * __this, KeyCodeEventPair_t1510105498  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		KeyCodeEventPair_t1510105498  L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2475282467_AdjustorThunk (RuntimeObject * __this, KeyCodeEventPair_t1510105498  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2541612585 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2541612585 *>(__this + 1);
	KeyValuePair_2__ctor_m2475282467(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::get_Key()
extern "C"  KeyCodeEventPair_t1510105498  KeyValuePair_2_get_Key_m2199460899_gshared (KeyValuePair_2_t2541612585 * __this, const RuntimeMethod* method)
{
	{
		KeyCodeEventPair_t1510105498  L_0 = (KeyCodeEventPair_t1510105498 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  KeyCodeEventPair_t1510105498  KeyValuePair_2_get_Key_m2199460899_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2541612585 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2541612585 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2199460899(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2892759683_gshared (KeyValuePair_2_t2541612585 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2892759683_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2541612585 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2541612585 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2892759683(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<HoloToolkit.Unity.InputModule.KeyboardManager/KeyCodeEventPair,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m875328790_gshared (KeyValuePair_2_t2541612585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m875328790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	KeyCodeEventPair_t1510105498  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		KeyCodeEventPair_t1510105498  L_2 = KeyValuePair_2_get_Key_m2199460899((KeyValuePair_2_t2541612585 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		KeyCodeEventPair_t1510105498  L_4 = KeyValuePair_2_get_Key_m2199460899((KeyValuePair_2_t2541612585 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (KeyCodeEventPair_t1510105498 )L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		V_1 = *(KeyCodeEventPair_t1510105498 *)UnBox(L_5);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_7 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_7);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_7, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2892759683((KeyValuePair_2_t2541612585 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_9 = V_0;
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m2892759683((KeyValuePair_2_t2541612585 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_9);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_12 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_12);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m875328790_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2541612585 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2541612585 *>(__this + 1);
	return KeyValuePair_2_ToString_m875328790(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3854325871_gshared (KeyValuePair_2_t2872605199 * __this, XPathNodeRef_t3498189018  ___key0, XPathNodeRef_t3498189018  ___value1, const RuntimeMethod* method)
{
	{
		XPathNodeRef_t3498189018  L_0 = ___key0;
		__this->set_key_0(L_0);
		XPathNodeRef_t3498189018  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3854325871_AdjustorThunk (RuntimeObject * __this, XPathNodeRef_t3498189018  ___key0, XPathNodeRef_t3498189018  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2872605199 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2872605199 *>(__this + 1);
	KeyValuePair_2__ctor_m3854325871(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Key()
extern "C"  XPathNodeRef_t3498189018  KeyValuePair_2_get_Key_m3002864413_gshared (KeyValuePair_2_t2872605199 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeRef_t3498189018  L_0 = (XPathNodeRef_t3498189018 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  XPathNodeRef_t3498189018  KeyValuePair_2_get_Key_m3002864413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2872605199 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2872605199 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3002864413(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Value()
extern "C"  XPathNodeRef_t3498189018  KeyValuePair_2_get_Value_m3903919478_gshared (KeyValuePair_2_t2872605199 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeRef_t3498189018  L_0 = (XPathNodeRef_t3498189018 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  XPathNodeRef_t3498189018  KeyValuePair_2_get_Value_m3903919478_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2872605199 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2872605199 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3903919478(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3784847782_gshared (KeyValuePair_2_t2872605199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3784847782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	XPathNodeRef_t3498189018  V_1;
	memset(&V_1, 0, sizeof(V_1));
	XPathNodeRef_t3498189018  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		XPathNodeRef_t3498189018  L_2 = KeyValuePair_2_get_Key_m3002864413((KeyValuePair_2_t2872605199 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		XPathNodeRef_t3498189018  L_4 = KeyValuePair_2_get_Key_m3002864413((KeyValuePair_2_t2872605199 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (XPathNodeRef_t3498189018 )L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		V_1 = *(XPathNodeRef_t3498189018 *)UnBox(L_5);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_7 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_7);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_7, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		XPathNodeRef_t3498189018  L_8 = KeyValuePair_2_get_Value_m3903919478((KeyValuePair_2_t2872605199 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1712802186 * L_9 = V_0;
		XPathNodeRef_t3498189018  L_10 = KeyValuePair_2_get_Value_m3903919478((KeyValuePair_2_t2872605199 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (XPathNodeRef_t3498189018 )L_10;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_11);
		V_2 = *(XPathNodeRef_t3498189018 *)UnBox(L_11);
		NullCheck((StringBuilder_t1712802186 *)L_9);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_9, (String_t*)L_12, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_13 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_13);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_13, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_14 = V_0;
		String_t* L_15 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3784847782_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2872605199 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2872605199 *>(__this + 1);
	return KeyValuePair_2_ToString_m3784847782(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2870587947_gshared (KeyValuePair_2_t753628355 * __this, TypeConvertKey_t285306760  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		TypeConvertKey_t285306760  L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2870587947_AdjustorThunk (RuntimeObject * __this, TypeConvertKey_t285306760  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t753628355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t753628355 *>(__this + 1);
	KeyValuePair_2__ctor_m2870587947(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::get_Key()
extern "C"  TypeConvertKey_t285306760  KeyValuePair_2_get_Key_m2096859168_gshared (KeyValuePair_2_t753628355 * __this, const RuntimeMethod* method)
{
	{
		TypeConvertKey_t285306760  L_0 = (TypeConvertKey_t285306760 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  TypeConvertKey_t285306760  KeyValuePair_2_get_Key_m2096859168_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t753628355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t753628355 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2096859168(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2171951189_gshared (KeyValuePair_2_t753628355 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2171951189_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t753628355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t753628355 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2171951189(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1728257272_gshared (KeyValuePair_2_t753628355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1728257272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	TypeConvertKey_t285306760  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		TypeConvertKey_t285306760  L_2 = KeyValuePair_2_get_Key_m2096859168((KeyValuePair_2_t753628355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		TypeConvertKey_t285306760  L_4 = KeyValuePair_2_get_Key_m2096859168((KeyValuePair_2_t753628355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (TypeConvertKey_t285306760 )L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		V_1 = *(TypeConvertKey_t285306760 *)UnBox(L_5);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_7 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_7);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_7, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2171951189((KeyValuePair_2_t753628355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_9 = V_0;
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m2171951189((KeyValuePair_2_t753628355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_9);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_12 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_12);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1728257272_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t753628355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t753628355 *>(__this + 1);
	return KeyValuePair_2_ToString_m1728257272(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1315482284_gshared (KeyValuePair_2_t231828568 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1315482284_AdjustorThunk (RuntimeObject * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t231828568 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t231828568 *>(__this + 1);
	KeyValuePair_2__ctor_m1315482284(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
extern "C"  Guid_t  KeyValuePair_2_get_Key_m4294704491_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = (Guid_t )__this->get_key_0();
		return L_0;
	}
}
extern "C"  Guid_t  KeyValuePair_2_get_Key_m4294704491_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t231828568 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t231828568 *>(__this + 1);
	return KeyValuePair_2_get_Key_m4294704491(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2666064688_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2666064688_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t231828568 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t231828568 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2666064688(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1167308912_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1167308912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		Guid_t  L_2 = KeyValuePair_2_get_Key_m4294704491((KeyValuePair_2_t231828568 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		Guid_t  L_4 = KeyValuePair_2_get_Key_m4294704491((KeyValuePair_2_t231828568 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (Guid_t )L_4;
		String_t* L_5 = Guid_ToString_m3279186591((Guid_t *)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_6 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_6);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_6, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m2666064688((KeyValuePair_2_t231828568 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2666064688((KeyValuePair_2_t231828568 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_8);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_11 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_11);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1167308912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t231828568 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t231828568 *>(__this + 1);
	return KeyValuePair_2_ToString_m1167308912(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3811614277_gshared (KeyValuePair_2_t3373118172 * __this, int16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3811614277_AdjustorThunk (RuntimeObject * __this, int16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3373118172 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3373118172 *>(__this + 1);
	KeyValuePair_2__ctor_m3811614277(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
extern "C"  int16_t KeyValuePair_2_get_Key_m3277879993_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = (int16_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int16_t KeyValuePair_2_get_Key_m3277879993_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3373118172 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3373118172 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3277879993(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1448500413_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1448500413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3373118172 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3373118172 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1448500413(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2322562946_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2322562946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	int16_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int16_t L_2 = KeyValuePair_2_get_Key_m3277879993((KeyValuePair_2_t3373118172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		int16_t L_4 = KeyValuePair_2_get_Key_m3277879993((KeyValuePair_2_t3373118172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int16_t)L_4;
		String_t* L_5 = Int16_ToString_m1270547562((int16_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_6 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_6);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_6, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m1448500413((KeyValuePair_2_t3373118172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1448500413((KeyValuePair_2_t3373118172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_8);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_11 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_11);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2322562946_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3373118172 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3373118172 *>(__this + 1);
	return KeyValuePair_2_ToString_m2322562946(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m205375688_gshared (KeyValuePair_2_t1048133692 * __this, int32_t ___key0, TimerData_t4056715490  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		TimerData_t4056715490  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m205375688_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, TimerData_t4056715490  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1048133692 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1048133692 *>(__this + 1);
	KeyValuePair_2__ctor_m205375688(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1183315111_gshared (KeyValuePair_2_t1048133692 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1183315111_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1048133692 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1048133692 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1183315111(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::get_Value()
extern "C"  TimerData_t4056715490  KeyValuePair_2_get_Value_m513163858_gshared (KeyValuePair_2_t1048133692 * __this, const RuntimeMethod* method)
{
	{
		TimerData_t4056715490  L_0 = (TimerData_t4056715490 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  TimerData_t4056715490  KeyValuePair_2_get_Value_m513163858_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1048133692 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1048133692 *>(__this + 1);
	return KeyValuePair_2_get_Value_m513163858(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,HoloToolkit.Unity.TimerScheduler/TimerData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2584609649_gshared (KeyValuePair_2_t1048133692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2584609649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	int32_t V_1 = 0;
	TimerData_t4056715490  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m1183315111((KeyValuePair_2_t1048133692 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m1183315111((KeyValuePair_2_t1048133692 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_6 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_6);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_6, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		TimerData_t4056715490  L_7 = KeyValuePair_2_get_Value_m513163858((KeyValuePair_2_t1048133692 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1712802186 * L_8 = V_0;
		TimerData_t4056715490  L_9 = KeyValuePair_2_get_Value_m513163858((KeyValuePair_2_t1048133692 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (TimerData_t4056715490 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		V_2 = *(TimerData_t4056715490 *)UnBox(L_10);
		NullCheck((StringBuilder_t1712802186 *)L_8);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_12 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_12);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2584609649_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1048133692 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1048133692 *>(__this + 1);
	return KeyValuePair_2_ToString_m2584609649(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m932279514_gshared (KeyValuePair_2_t4237331251 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		int32_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m932279514_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4237331251 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4237331251 *>(__this + 1);
	KeyValuePair_2__ctor_m932279514(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2635782095_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2635782095_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4237331251 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4237331251 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2635782095(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1804680087_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1804680087_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4237331251 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4237331251 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1804680087(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m65692449_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m65692449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m2635782095((KeyValuePair_2_t4237331251 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m2635782095((KeyValuePair_2_t4237331251 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_6 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_6);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_6, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		int32_t L_7 = KeyValuePair_2_get_Value_m1804680087((KeyValuePair_2_t4237331251 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1712802186 * L_8 = V_0;
		int32_t L_9 = KeyValuePair_2_get_Value_m1804680087((KeyValuePair_2_t4237331251 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m141394615((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_8);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_11 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_11);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m65692449_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4237331251 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4237331251 *>(__this + 1);
	return KeyValuePair_2_ToString_m65692449(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2118224448_gshared (KeyValuePair_2_t71524366 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2118224448_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	KeyValuePair_2__ctor_m2118224448(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1839753989(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3495598764_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3495598764(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1238786018_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1238786018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m1839753989((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m1839753989((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_6 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_6);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_6, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m3495598764((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1712802186 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3495598764((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(V_2));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_2));
		NullCheck((StringBuilder_t1712802186 *)L_8);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_11 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_11);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1238786018_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	return KeyValuePair_2_ToString_m1238786018(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3811657099_gshared (KeyValuePair_2_t2164477162 * __this, int32_t ___key0, ConnectionPendingPlayers_t878091664  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		ConnectionPendingPlayers_t878091664  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3811657099_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, ConnectionPendingPlayers_t878091664  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2164477162 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2164477162 *>(__this + 1);
	KeyValuePair_2__ctor_m3811657099(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m373203839_gshared (KeyValuePair_2_t2164477162 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m373203839_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2164477162 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2164477162 *>(__this + 1);
	return KeyValuePair_2_get_Key_m373203839(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::get_Value()
extern "C"  ConnectionPendingPlayers_t878091664  KeyValuePair_2_get_Value_m2193227747_gshared (KeyValuePair_2_t2164477162 * __this, const RuntimeMethod* method)
{
	{
		ConnectionPendingPlayers_t878091664  L_0 = (ConnectionPendingPlayers_t878091664 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ConnectionPendingPlayers_t878091664  KeyValuePair_2_get_Value_m2193227747_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2164477162 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2164477162 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2193227747(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m516993745_gshared (KeyValuePair_2_t2164477162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m516993745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1712802186 * V_0 = NULL;
	int32_t V_1 = 0;
	ConnectionPendingPlayers_t878091664  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1712802186 * L_0 = StringBuilderCache_Acquire_m4169564332(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1712802186 *)L_0;
		StringBuilder_t1712802186 * L_1 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_1);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m373203839((KeyValuePair_2_t2164477162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1712802186 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m373203839((KeyValuePair_2_t2164477162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1712802186 *)L_3);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1712802186 * L_6 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_6);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_6, (String_t*)_stringLiteral3450517380, /*hidden argument*/NULL);
		ConnectionPendingPlayers_t878091664  L_7 = KeyValuePair_2_get_Value_m2193227747((KeyValuePair_2_t2164477162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1712802186 * L_8 = V_0;
		ConnectionPendingPlayers_t878091664  L_9 = KeyValuePair_2_get_Value_m2193227747((KeyValuePair_2_t2164477162 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (ConnectionPendingPlayers_t878091664 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		V_2 = *(ConnectionPendingPlayers_t878091664 *)UnBox(L_10);
		NullCheck((StringBuilder_t1712802186 *)L_8);
		StringBuilder_Append_m1965104174((StringBuilder_t1712802186 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1712802186 * L_12 = V_0;
		NullCheck((StringBuilder_t1712802186 *)L_12);
		StringBuilder_Append_m2383614642((StringBuilder_t1712802186 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1712802186 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m1110745745(NULL /*static, unused*/, (StringBuilder_t1712802186 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m516993745_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2164477162 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2164477162 *>(__this + 1);
	return KeyValuePair_2_ToString_m516993745(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
