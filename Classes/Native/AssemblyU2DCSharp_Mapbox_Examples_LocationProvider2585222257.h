#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_t1382569190;
// Mapbox.Unity.Location.ILocationProvider
struct ILocationProvider_t1903064329;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Examples.LocationProvider.PositionWithLocationProvider
struct  PositionWithLocationProvider_t2585222257  : public MonoBehaviour_t1158329972
{
public:
	// Mapbox.Unity.Map.AbstractMap Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_map
	AbstractMap_t1382569190 * ____map_2;
	// System.Single Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_positionFollowFactor
	float ____positionFollowFactor_3;
	// System.Boolean Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_useTransformLocationProvider
	bool ____useTransformLocationProvider_4;
	// System.Boolean Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_isInitialized
	bool ____isInitialized_5;
	// Mapbox.Unity.Location.ILocationProvider Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_locationProvider
	Il2CppObject * ____locationProvider_6;
	// UnityEngine.Vector3 Mapbox.Examples.LocationProvider.PositionWithLocationProvider::_targetPosition
	Vector3_t2243707580  ____targetPosition_7;

public:
	inline static int32_t get_offset_of__map_2() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____map_2)); }
	inline AbstractMap_t1382569190 * get__map_2() const { return ____map_2; }
	inline AbstractMap_t1382569190 ** get_address_of__map_2() { return &____map_2; }
	inline void set__map_2(AbstractMap_t1382569190 * value)
	{
		____map_2 = value;
		Il2CppCodeGenWriteBarrier(&____map_2, value);
	}

	inline static int32_t get_offset_of__positionFollowFactor_3() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____positionFollowFactor_3)); }
	inline float get__positionFollowFactor_3() const { return ____positionFollowFactor_3; }
	inline float* get_address_of__positionFollowFactor_3() { return &____positionFollowFactor_3; }
	inline void set__positionFollowFactor_3(float value)
	{
		____positionFollowFactor_3 = value;
	}

	inline static int32_t get_offset_of__useTransformLocationProvider_4() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____useTransformLocationProvider_4)); }
	inline bool get__useTransformLocationProvider_4() const { return ____useTransformLocationProvider_4; }
	inline bool* get_address_of__useTransformLocationProvider_4() { return &____useTransformLocationProvider_4; }
	inline void set__useTransformLocationProvider_4(bool value)
	{
		____useTransformLocationProvider_4 = value;
	}

	inline static int32_t get_offset_of__isInitialized_5() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____isInitialized_5)); }
	inline bool get__isInitialized_5() const { return ____isInitialized_5; }
	inline bool* get_address_of__isInitialized_5() { return &____isInitialized_5; }
	inline void set__isInitialized_5(bool value)
	{
		____isInitialized_5 = value;
	}

	inline static int32_t get_offset_of__locationProvider_6() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____locationProvider_6)); }
	inline Il2CppObject * get__locationProvider_6() const { return ____locationProvider_6; }
	inline Il2CppObject ** get_address_of__locationProvider_6() { return &____locationProvider_6; }
	inline void set__locationProvider_6(Il2CppObject * value)
	{
		____locationProvider_6 = value;
		Il2CppCodeGenWriteBarrier(&____locationProvider_6, value);
	}

	inline static int32_t get_offset_of__targetPosition_7() { return static_cast<int32_t>(offsetof(PositionWithLocationProvider_t2585222257, ____targetPosition_7)); }
	inline Vector3_t2243707580  get__targetPosition_7() const { return ____targetPosition_7; }
	inline Vector3_t2243707580 * get_address_of__targetPosition_7() { return &____targetPosition_7; }
	inline void set__targetPosition_7(Vector3_t2243707580  value)
	{
		____targetPosition_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
