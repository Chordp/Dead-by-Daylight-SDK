#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheClown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
struct ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params
{
	float*                                             value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
struct ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheClown.GassedStatusEffect.OnRep_IsInCloud
struct UGassedStatusEffect_OnRep_IsInCloud_Params
{
};

// Function TheClown.GassedStatusEffect.IsInCloud
struct UGassedStatusEffect_IsInCloud_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
struct UGassedStatusEffect_Authority_SetIsInCloud_Params
{
	bool*                                              value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
struct UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params
{
	class ABaseGasCloudProjectile**                    cloud;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
struct UGassedStatusEffect_Authority_AddOverlappingCloud_Params
{
	class ABaseGasCloudProjectile**                    cloud;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
