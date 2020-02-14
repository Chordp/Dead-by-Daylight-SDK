#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TileBase01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TileBase01.TileBase01_C.SelectSpawnpoint
struct ATileBase01_C_SelectSpawnpoint_Params
{
	TArray<class UTileSpawnPoint*>                     Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
struct ATileBase01_C_SetupGeneratorDrivenElements_Params
{
	class AActor**                                     GeneratorSpawnPoint;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UChildActorComponent*>                GeneratorDrivenElements;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TileBase01.TileBase01_C.ReceiveTick
struct ATileBase01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileBase01.TileBase01_C.OnLevelLoaded
struct ATileBase01_C_OnLevelLoaded_Params
{
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
struct ATileBase01_C_SetGeneratorDrivenObjects_Params
{
	class UTileSpawnPoint**                            SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     spawnedObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
struct ATileBase01_C_SetGeneratorDrivenScoreEvent_Params
{
	TArray<class AActor*>*                             generators;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
struct ATileBase01_C_ExecuteUbergraph_TileBase01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
