#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_VFXUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.DecalComponent.SetSortOrder
struct UDBDDecalComponent_SetSortOrder_Params
{
	int*                                               value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.SetFadeScreenSize
struct UDBDDecalComponent_SetFadeScreenSize_Params
{
	float*                                             NewFadeScreenSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.SetFadeOut
struct UDBDDecalComponent_SetFadeOut_Params
{
	float*                                             StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DestroyOwnerAfterFade;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.SetFadeIn
struct UDBDDecalComponent_SetFadeIn_Params
{
	float*                                             StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duaration;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.SetDecalMaterial
struct UDBDDecalComponent_SetDecalMaterial_Params
{
	class UMaterialInterface**                         NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalComponent.GetFadeStartDelay
struct UDBDDecalComponent_GetFadeStartDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.GetFadeInStartDelay
struct UDBDDecalComponent_GetFadeInStartDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.GetFadeInDuration
struct UDBDDecalComponent_GetFadeInDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.GetFadeDuration
struct UDBDDecalComponent_GetFadeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.GetDecalMaterial
struct UDBDDecalComponent_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalComponent.CreateDynamicMaterialInstance
struct UDBDDecalComponent_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VFXUtilities.DecalSpawnerCollection.SpawnDecalAtLocation
struct UDecalSpawnerCollection_SpawnDecalAtLocation_Params
{
	struct FName*                                      decalSpawnerName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DecalSize;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VFXUtilities.DecalSpawnerCollection.ReleaseDecalSpawner
struct UDecalSpawnerCollection_ReleaseDecalSpawner_Params
{
	struct FName*                                      decalSpawnerName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VFXUtilities.DecalSpawnerCollection.CreateDecalSpawner
struct UDecalSpawnerCollection_CreateDecalSpawner_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      decalSpawnerName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PoolSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESpawnerStrategyType*                              spawnerStrateryType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
