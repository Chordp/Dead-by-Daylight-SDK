#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_SpawnOnEvent_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.SetSpawner
struct ABP_SpawnOnEvent_01_C_SetSpawner_Params
{
	class UActorSpawner**                              spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnInitGeneratorDrivenActor
struct ABP_SpawnOnEvent_01_C_OnInitGeneratorDrivenActor_Params
{
	class AGenerator**                                 Generator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnAsyncActorSpawned_Event
struct ABP_SpawnOnEvent_01_C_OnAsyncActorSpawned_Event_Params
{
	class AActor**                                     actorSpawned;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnActivateGeneratorDrivenActor
struct ABP_SpawnOnEvent_01_C_OnActivateGeneratorDrivenActor_Params
{
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.ExecuteUbergraph_BP_SpawnOnEvent_01
struct ABP_SpawnOnEvent_01_C_ExecuteUbergraph_BP_SpawnOnEvent_01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
