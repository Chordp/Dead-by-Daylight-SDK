#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_BaseItemVfx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems
struct ABP_BaseItemVfx_C_ClearParticleSystems_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
struct ABP_BaseItemVfx_C_SpawnEmitter_Params
{
	class UParticleSystem**                            EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     AttachToComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      attachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Absolute_Rotation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particle_System;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay
struct ABP_BaseItemVfx_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event
struct ABP_BaseItemVfx_C_OnDestroyed_Event_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility
struct ABP_BaseItemVfx_C_SetEmittersVisibility_Params
{
	bool*                                              visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx
struct ABP_BaseItemVfx_C_ExecuteUbergraph_BP_BaseItemVfx_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
