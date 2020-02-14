// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_SpawnOnEvent_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.SetSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorSpawner**          spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SpawnOnEvent_01_C::SetSpawner(class UActorSpawner** spawner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.SetSpawner"));

	ABP_SpawnOnEvent_01_C_SetSpawner_Params params;
	params.spawner = spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnInitGeneratorDrivenActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGenerator**             Generator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SpawnOnEvent_01_C::OnInitGeneratorDrivenActor(class AGenerator** Generator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnInitGeneratorDrivenActor"));

	ABP_SpawnOnEvent_01_C_OnInitGeneratorDrivenActor_Params params;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnAsyncActorSpawned_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 actorSpawned                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SpawnOnEvent_01_C::OnAsyncActorSpawned_Event(class AActor** actorSpawned)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnAsyncActorSpawned_Event"));

	ABP_SpawnOnEvent_01_C_OnAsyncActorSpawned_Event_Params params;
	params.actorSpawned = actorSpawned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnActivateGeneratorDrivenActor
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SpawnOnEvent_01_C::OnActivateGeneratorDrivenActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnActivateGeneratorDrivenActor"));

	ABP_SpawnOnEvent_01_C_OnActivateGeneratorDrivenActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.ExecuteUbergraph_BP_SpawnOnEvent_01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SpawnOnEvent_01_C::ExecuteUbergraph_BP_SpawnOnEvent_01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.ExecuteUbergraph_BP_SpawnOnEvent_01"));

	ABP_SpawnOnEvent_01_C_ExecuteUbergraph_BP_SpawnOnEvent_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
