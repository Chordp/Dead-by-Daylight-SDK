// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TileBase01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TileBase01.TileBase01_C.SelectSpawnpoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTileSpawnPoint*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::SelectSpawnpoint(TArray<class UTileSpawnPoint*>* Array)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.SelectSpawnpoint"));

	ATileBase01_C_SelectSpawnpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 GeneratorSpawnPoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UChildActorComponent*> GeneratorDrivenElements        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::SetupGeneratorDrivenElements(class AActor** GeneratorSpawnPoint, TArray<class UChildActorComponent*>* GeneratorDrivenElements)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements"));

	ATileBase01_C_SetupGeneratorDrivenElements_Params params;
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GeneratorDrivenElements != nullptr)
		*GeneratorDrivenElements = params.GeneratorDrivenElements;
}


// Function TileBase01.TileBase01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.ReceiveTick"));

	ATileBase01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.OnLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::OnLevelLoaded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.OnLevelLoaded"));

	ATileBase01_C_OnLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTileSpawnPoint**        SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 spawnedObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::SetGeneratorDrivenObjects(class UTileSpawnPoint** SpawnPoint, class AActor** spawnedObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects"));

	ATileBase01_C_SetGeneratorDrivenObjects_Params params;
	params.SpawnPoint = SpawnPoint;
	params.spawnedObject = spawnedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         generators                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::SetGeneratorDrivenScoreEvent(TArray<class AActor*>* generators)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent"));

	ATileBase01_C_SetGeneratorDrivenScoreEvent_Params params;
	params.generators = generators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATileBase01_C::ExecuteUbergraph_TileBase01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01"));

	ATileBase01_C_ExecuteUbergraph_TileBase01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
