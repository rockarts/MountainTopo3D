﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TriangleNet.Topology.DCEL.HalfEdge[]
struct HalfEdgeU5BU5D_t2811653951;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1<TriangleNet.Topology.DCEL.HalfEdge>
struct  ObjectPool_1_t1981369973  : public Il2CppObject
{
public:
	// System.Int32 TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1::index
	int32_t ___index_0;
	// System.Int32 TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1::count
	int32_t ___count_1;
	// T[] TriangleNet.Smoothing.VoronoiFactory/ObjectPool`1::pool
	HalfEdgeU5BU5D_t2811653951* ___pool_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1981369973, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1981369973, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t1981369973, ___pool_2)); }
	inline HalfEdgeU5BU5D_t2811653951* get_pool_2() const { return ___pool_2; }
	inline HalfEdgeU5BU5D_t2811653951** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(HalfEdgeU5BU5D_t2811653951* value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier(&___pool_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
