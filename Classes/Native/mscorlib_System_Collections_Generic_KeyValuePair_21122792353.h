﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Mapbox_Map_UnwrappedTileId2874398135.h"

// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t1638965251;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Mapbox.Map.UnwrappedTileId,Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct  KeyValuePair_2_t1122792353 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	UnwrappedTileId_t2874398135  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UnityTile_t1638965251 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1122792353, ___key_0)); }
	inline UnwrappedTileId_t2874398135  get_key_0() const { return ___key_0; }
	inline UnwrappedTileId_t2874398135 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(UnwrappedTileId_t2874398135  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1122792353, ___value_1)); }
	inline UnityTile_t1638965251 * get_value_1() const { return ___value_1; }
	inline UnityTile_t1638965251 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(UnityTile_t1638965251 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
