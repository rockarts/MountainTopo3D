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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modifi52910206.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi3743118504.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi3654206437.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_MeshGeneration_Modi2178605430.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Telemetry_Telemetry4023756181.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Telemetry_TelemetryI582153264.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_Conversion156910749.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_GeocodeAtt630057338.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_HTTPReque1810968295.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_HTTPReque2787124111.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_OpenUrlOn3313525014.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_Runnable3925483335.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_Runnable_1575210082.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_Telemetry3421230039.h"
#include "AssemblyU2DCSharp_Mapbox_Unity_Utilities_VectorExt1080051393.h"
#include "AssemblyU2DCSharp_ParticlePainter1073897267.h"
#include "AssemblyU2DCSharp_RasterMap4096558261.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARAmbient680084560.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1486305137.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3379926265.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3469664187.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU4186495411.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU2306864765.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3762068660.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1568637719.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1568637717.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3740780830.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU2731437132.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1459944470.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3762068664.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3200 = { sizeof (UvModifier_t52910206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3200[1] = 
{
	UvModifier_t52910206::get_offset_of_UseSatelliteRoof_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3201 = { sizeof (ModifierBase_t3743118504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3201[1] = 
{
	ModifierBase_t3743118504::get_offset_of_Active_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3202 = { sizeof (ModifierStack_t3654206437), -1, sizeof(ModifierStack_t3654206437_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3202[4] = 
{
	ModifierStack_t3654206437::get_offset_of_MeshModifiers_2(),
	ModifierStack_t3654206437::get_offset_of_GoModifiers_3(),
	ModifierStack_t3654206437_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_4(),
	ModifierStack_t3654206437_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3203 = { sizeof (ModifierStackBase_t2178605430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3204 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3205 = { sizeof (TelemetryDummy_t4023756181), -1, sizeof(TelemetryDummy_t4023756181_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3205[1] = 
{
	TelemetryDummy_t4023756181_StaticFields::get_offset_of__instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3206 = { sizeof (TelemetryIos_t582153264), -1, sizeof(TelemetryIos_t582153264_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3206[1] = 
{
	TelemetryIos_t582153264_StaticFields::get_offset_of__instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3207 = { sizeof (Conversions_t156910749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3207[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3208 = { sizeof (GeocodeAttribute_t630057338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3209 = { sizeof (HTTPRequest_t1810968295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3209[5] = 
{
	HTTPRequest_t1810968295::get_offset_of__request_0(),
	HTTPRequest_t1810968295::get_offset_of__timeout_1(),
	HTTPRequest_t1810968295::get_offset_of__callback_2(),
	HTTPRequest_t1810968295::get_offset_of__wasCancelled_3(),
	HTTPRequest_t1810968295::get_offset_of_U3CIsCompletedU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3210 = { sizeof (U3CDoRequestU3Ec__Iterator0_t2787124111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3210[5] = 
{
	U3CDoRequestU3Ec__Iterator0_t2787124111::get_offset_of_U3CresponseU3E__0_0(),
	U3CDoRequestU3Ec__Iterator0_t2787124111::get_offset_of_U24this_1(),
	U3CDoRequestU3Ec__Iterator0_t2787124111::get_offset_of_U24current_2(),
	U3CDoRequestU3Ec__Iterator0_t2787124111::get_offset_of_U24disposing_3(),
	U3CDoRequestU3Ec__Iterator0_t2787124111::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3211 = { sizeof (OpenUrlOnButtonClick_t3313525014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3211[1] = 
{
	OpenUrlOnButtonClick_t3313525014::get_offset_of__url_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3212 = { sizeof (Runnable_t3925483335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3212[2] = 
{
	Runnable_t3925483335::get_offset_of_m_Routines_2(),
	Runnable_t3925483335::get_offset_of_m_NextRoutineId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3213 = { sizeof (Routine_t1575210082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3213[4] = 
{
	Routine_t1575210082::get_offset_of_U3CIDU3Ek__BackingField_0(),
	Routine_t1575210082::get_offset_of_U3CStopU3Ek__BackingField_1(),
	Routine_t1575210082::get_offset_of_m_bMoveNext_2(),
	Routine_t1575210082::get_offset_of_m_Enumerator_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3214 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3214[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3215 = { sizeof (TelemetryConfigurationButton_t3421230039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3215[1] = 
{
	TelemetryConfigurationButton_t3421230039::get_offset_of__booleanValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3216 = { sizeof (VectorExtensions_t1080051393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3217 = { sizeof (ParticlePainter_t1073897267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3217[14] = 
{
	ParticlePainter_t1073897267::get_offset_of_painterParticlePrefab_2(),
	ParticlePainter_t1073897267::get_offset_of_minDistanceThreshold_3(),
	ParticlePainter_t1073897267::get_offset_of_maxDistanceThreshold_4(),
	ParticlePainter_t1073897267::get_offset_of_frameUpdated_5(),
	ParticlePainter_t1073897267::get_offset_of_particleSize_6(),
	ParticlePainter_t1073897267::get_offset_of_penDistance_7(),
	ParticlePainter_t1073897267::get_offset_of_colorPicker_8(),
	ParticlePainter_t1073897267::get_offset_of_currentPS_9(),
	ParticlePainter_t1073897267::get_offset_of_particles_10(),
	ParticlePainter_t1073897267::get_offset_of_previousPosition_11(),
	ParticlePainter_t1073897267::get_offset_of_currentPaintVertices_12(),
	ParticlePainter_t1073897267::get_offset_of_currentColor_13(),
	ParticlePainter_t1073897267::get_offset_of_paintSystems_14(),
	ParticlePainter_t1073897267::get_offset_of_paintMode_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3218 = { sizeof (RasterMap_t4096558261), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3219 = { sizeof (UnityARAmbient_t680084560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3219[2] = 
{
	UnityARAmbient_t680084560::get_offset_of_l_2(),
	UnityARAmbient_t680084560::get_offset_of_m_Session_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3220 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305147), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3220[16] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DAF107E8E5539AA04145F09728F7CE4E2B4AC5E72_13(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DD3759F70F1732218F863B5A15ED41A79466DAF58_14(),
	U3CPrivateImplementationDetailsU3E_t1486305147_StaticFields::get_offset_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3221 = { sizeof (U24ArrayTypeU3D1024_t3379926265)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D1024_t3379926265 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3222 = { sizeof (U24ArrayTypeU3D100_t3469664187)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D100_t3469664187 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3223 = { sizeof (U24ArrayTypeU3D2052_t4186495411)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D2052_t4186495411 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3224 = { sizeof (U24ArrayTypeU3D128_t2306864765)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D128_t2306864765 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3225 = { sizeof (U24ArrayTypeU3D64_t762068660)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D64_t762068660 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3226 = { sizeof (U24ArrayTypeU3D32_t1568637719)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D32_t1568637719 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3227 = { sizeof (U24ArrayTypeU3D12_t1568637718)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D12_t1568637718 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3228 = { sizeof (U24ArrayTypeU3D116_t740780830)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D116_t740780830 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3229 = { sizeof (U24ArrayTypeU3D20_t2731437132)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D20_t2731437132 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3230 = { sizeof (U24ArrayTypeU3D4_t1459944470)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D4_t1459944470 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3231 = { sizeof (U24ArrayTypeU3D24_t762068665)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D24_t762068665 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3232 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3232[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3233 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3233[2] = 
{
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
