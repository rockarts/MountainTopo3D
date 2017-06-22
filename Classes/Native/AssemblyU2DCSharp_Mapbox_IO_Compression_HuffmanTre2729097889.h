#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t2729097889;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.HuffmanTree
struct  HuffmanTree_t2729097889  : public Il2CppObject
{
public:
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableBits
	int32_t ___tableBits_4;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::table
	Int16U5BU5D_t3104283263* ___table_5;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::left
	Int16U5BU5D_t3104283263* ___left_6;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::right
	Int16U5BU5D_t3104283263* ___right_7;
	// System.Byte[] Mapbox.IO.Compression.HuffmanTree::codeLengthArray
	ByteU5BU5D_t3397334013* ___codeLengthArray_8;
	// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::codeArrayDebug
	UInt32U5BU5D_t59386216* ___codeArrayDebug_9;
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableMask
	int32_t ___tableMask_10;

public:
	inline static int32_t get_offset_of_tableBits_4() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___tableBits_4)); }
	inline int32_t get_tableBits_4() const { return ___tableBits_4; }
	inline int32_t* get_address_of_tableBits_4() { return &___tableBits_4; }
	inline void set_tableBits_4(int32_t value)
	{
		___tableBits_4 = value;
	}

	inline static int32_t get_offset_of_table_5() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___table_5)); }
	inline Int16U5BU5D_t3104283263* get_table_5() const { return ___table_5; }
	inline Int16U5BU5D_t3104283263** get_address_of_table_5() { return &___table_5; }
	inline void set_table_5(Int16U5BU5D_t3104283263* value)
	{
		___table_5 = value;
		Il2CppCodeGenWriteBarrier(&___table_5, value);
	}

	inline static int32_t get_offset_of_left_6() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___left_6)); }
	inline Int16U5BU5D_t3104283263* get_left_6() const { return ___left_6; }
	inline Int16U5BU5D_t3104283263** get_address_of_left_6() { return &___left_6; }
	inline void set_left_6(Int16U5BU5D_t3104283263* value)
	{
		___left_6 = value;
		Il2CppCodeGenWriteBarrier(&___left_6, value);
	}

	inline static int32_t get_offset_of_right_7() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___right_7)); }
	inline Int16U5BU5D_t3104283263* get_right_7() const { return ___right_7; }
	inline Int16U5BU5D_t3104283263** get_address_of_right_7() { return &___right_7; }
	inline void set_right_7(Int16U5BU5D_t3104283263* value)
	{
		___right_7 = value;
		Il2CppCodeGenWriteBarrier(&___right_7, value);
	}

	inline static int32_t get_offset_of_codeLengthArray_8() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___codeLengthArray_8)); }
	inline ByteU5BU5D_t3397334013* get_codeLengthArray_8() const { return ___codeLengthArray_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_codeLengthArray_8() { return &___codeLengthArray_8; }
	inline void set_codeLengthArray_8(ByteU5BU5D_t3397334013* value)
	{
		___codeLengthArray_8 = value;
		Il2CppCodeGenWriteBarrier(&___codeLengthArray_8, value);
	}

	inline static int32_t get_offset_of_codeArrayDebug_9() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___codeArrayDebug_9)); }
	inline UInt32U5BU5D_t59386216* get_codeArrayDebug_9() const { return ___codeArrayDebug_9; }
	inline UInt32U5BU5D_t59386216** get_address_of_codeArrayDebug_9() { return &___codeArrayDebug_9; }
	inline void set_codeArrayDebug_9(UInt32U5BU5D_t59386216* value)
	{
		___codeArrayDebug_9 = value;
		Il2CppCodeGenWriteBarrier(&___codeArrayDebug_9, value);
	}

	inline static int32_t get_offset_of_tableMask_10() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889, ___tableMask_10)); }
	inline int32_t get_tableMask_10() const { return ___tableMask_10; }
	inline int32_t* get_address_of_tableMask_10() { return &___tableMask_10; }
	inline void set_tableMask_10(int32_t value)
	{
		___tableMask_10 = value;
	}
};

struct HuffmanTree_t2729097889_StaticFields
{
public:
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticLiteralLengthTree
	HuffmanTree_t2729097889 * ___staticLiteralLengthTree_11;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticDistanceTree
	HuffmanTree_t2729097889 * ___staticDistanceTree_12;

public:
	inline static int32_t get_offset_of_staticLiteralLengthTree_11() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889_StaticFields, ___staticLiteralLengthTree_11)); }
	inline HuffmanTree_t2729097889 * get_staticLiteralLengthTree_11() const { return ___staticLiteralLengthTree_11; }
	inline HuffmanTree_t2729097889 ** get_address_of_staticLiteralLengthTree_11() { return &___staticLiteralLengthTree_11; }
	inline void set_staticLiteralLengthTree_11(HuffmanTree_t2729097889 * value)
	{
		___staticLiteralLengthTree_11 = value;
		Il2CppCodeGenWriteBarrier(&___staticLiteralLengthTree_11, value);
	}

	inline static int32_t get_offset_of_staticDistanceTree_12() { return static_cast<int32_t>(offsetof(HuffmanTree_t2729097889_StaticFields, ___staticDistanceTree_12)); }
	inline HuffmanTree_t2729097889 * get_staticDistanceTree_12() const { return ___staticDistanceTree_12; }
	inline HuffmanTree_t2729097889 ** get_address_of_staticDistanceTree_12() { return &___staticDistanceTree_12; }
	inline void set_staticDistanceTree_12(HuffmanTree_t2729097889 * value)
	{
		___staticDistanceTree_12 = value;
		Il2CppCodeGenWriteBarrier(&___staticDistanceTree_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
