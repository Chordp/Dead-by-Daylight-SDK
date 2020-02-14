// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_VFXUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.DecalComponent.SetSortOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682013D40              		 offset:2f03d40                       

void UDBDDecalComponent::SetSortOrder(int* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.SetSortOrder"));

	UDBDDecalComponent_SetSortOrder_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DecalComponent.SetFadeScreenSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewFadeScreenSize              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682013AB0              		 offset:2f03ab0                       

void UDBDDecalComponent::SetFadeScreenSize(float* NewFadeScreenSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.SetFadeScreenSize"));

	UDBDDecalComponent_SetFadeScreenSize_Params params;
	params.NewFadeScreenSize = NewFadeScreenSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DecalComponent.SetFadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         StartDelay                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DestroyOwnerAfterFade          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820139A0              		 offset:2f039a0                       

void UDBDDecalComponent::SetFadeOut(float* StartDelay, float* Duration, bool* DestroyOwnerAfterFade)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.SetFadeOut"));

	UDBDDecalComponent_SetFadeOut_Params params;
	params.StartDelay = StartDelay;
	params.Duration = Duration;
	params.DestroyOwnerAfterFade = DestroyOwnerAfterFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DecalComponent.SetFadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         StartDelay                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duaration                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820138E0              		 offset:2f038e0                       

void UDBDDecalComponent::SetFadeIn(float* StartDelay, float* Duaration)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.SetFadeIn"));

	UDBDDecalComponent_SetFadeIn_Params params;
	params.StartDelay = StartDelay;
	params.Duaration = Duaration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DecalComponent.SetDecalMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     NewDecalMaterial               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682013650              		 offset:2f03650                       

void UDBDDecalComponent::SetDecalMaterial(class UMaterialInterface** NewDecalMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.SetDecalMaterial"));

	UDBDDecalComponent_SetDecalMaterial_Params params;
	params.NewDecalMaterial = NewDecalMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DecalComponent.GetFadeStartDelay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820131A0              		 offset:2f031a0                       

float UDBDDecalComponent::GetFadeStartDelay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.GetFadeStartDelay"));

	UDBDDecalComponent_GetFadeStartDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DecalComponent.GetFadeInStartDelay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682013170              		 offset:2f03170                       

float UDBDDecalComponent::GetFadeInStartDelay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.GetFadeInStartDelay"));

	UDBDDecalComponent_GetFadeInStartDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DecalComponent.GetFadeInDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682013140              		 offset:2f03140                       

float UDBDDecalComponent::GetFadeInDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.GetFadeInDuration"));

	UDBDDecalComponent_GetFadeInDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DecalComponent.GetFadeDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682013110              		 offset:2f03110                       

float UDBDDecalComponent::GetFadeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.GetFadeDuration"));

	UDBDDecalComponent_GetFadeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DecalComponent.GetDecalMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820130E0              		 offset:2f030e0                       

class UMaterialInterface* UDBDDecalComponent::GetDecalMaterial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.GetDecalMaterial"));

	UDBDDecalComponent_GetDecalMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DecalComponent.CreateDynamicMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682012790              		 offset:2f02790                       

class UMaterialInstanceDynamic* UDBDDecalComponent::CreateDynamicMaterialInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalComponent.CreateDynamicMaterialInstance"));

	UDBDDecalComponent_CreateDynamicMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VFXUtilities.DecalSpawnerCollection.SpawnDecalAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  decalSpawnerName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DecalSize                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         LifeSpan                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDecalComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF682345070              		 offset:3235070                       

class UDecalComponent* UDecalSpawnerCollection::SpawnDecalAtLocation(struct FName* decalSpawnerName, struct FVector* DecalSize, struct FVector* Location, struct FRotator* Rotation, float* LifeSpan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function VFXUtilities.DecalSpawnerCollection.SpawnDecalAtLocation"));

	UDecalSpawnerCollection_SpawnDecalAtLocation_Params params;
	params.decalSpawnerName = decalSpawnerName;
	params.DecalSize = DecalSize;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VFXUtilities.DecalSpawnerCollection.ReleaseDecalSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  decalSpawnerName               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682344FD0              		 offset:3234fd0                       

void UDecalSpawnerCollection::ReleaseDecalSpawner(struct FName* decalSpawnerName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function VFXUtilities.DecalSpawnerCollection.ReleaseDecalSpawner"));

	UDecalSpawnerCollection_ReleaseDecalSpawner_Params params;
	params.decalSpawnerName = decalSpawnerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VFXUtilities.DecalSpawnerCollection.CreateDecalSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  decalSpawnerName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PoolSize                       (Parm, ZeroConstructor, IsPlainOldData)
// ESpawnerStrategyType*          spawnerStrateryType            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682344E40              		 offset:3234e40                       

void UDecalSpawnerCollection::CreateDecalSpawner(class UObject** WorldContextObject, struct FName* decalSpawnerName, class UMaterialInterface** DecalMaterial, int* PoolSize, ESpawnerStrategyType* spawnerStrateryType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function VFXUtilities.DecalSpawnerCollection.CreateDecalSpawner"));

	UDecalSpawnerCollection_CreateDecalSpawner_Params params;
	params.WorldContextObject = WorldContextObject;
	params.decalSpawnerName = decalSpawnerName;
	params.DecalMaterial = DecalMaterial;
	params.PoolSize = PoolSize;
	params.spawnerStrateryType = spawnerStrateryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
