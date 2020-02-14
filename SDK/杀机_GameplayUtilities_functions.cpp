// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GameplayUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor**                 DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822E5CF0              		 offset:31d5cf0                       

void UAuthoritativeActorPoolComponent::Authority_OnActorDestroyed(class AActor** DestroyedActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed"));

	UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822E5EE0              		 offset:31d5ee0                       

void UAuthoritativePoolableActorComponent::OnRep_Acquired()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired"));

	UAuthoritativePoolableActorComponent_OnRep_Acquired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822E6270              		 offset:31d6270                       

float UBoxOcclusionQueryComponent::GetVisiblePercentOfScreen()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen"));

	UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822E6240              		 offset:31d6240                       

float UBoxOcclusionQueryComponent::GetNumberOfVisiblePixels()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels"));

	UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822E6210              		 offset:31d6210                       

float UBoxOcclusionQueryComponent::GetEstimatedRenderedPixelCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount"));

	UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822E6B10              		 offset:31d6b10                       

void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent"));

	UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822E6A90              		 offset:31d6a90                       

void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent"));

	UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822E6A10              		 offset:31d6a10                       

void UCharacterSightComponent::SetMinimumCharacterScreenPercent(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent"));

	UCharacterSightComponent_SetMinimumCharacterScreenPercent_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<class ACharacter*>*     Characters                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6822E6950              		 offset:31d6950                       

void UCharacterSightComponent::Server_UpdateDiscernedCharacters(TArray<class ACharacter*>* Characters)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters"));

	UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params params;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822E6930              		 offset:31d6930                       

void UCharacterSightComponent::OnRep_DiscernibleCharacters()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters"));

	UCharacterSightComponent_OnRep_DiscernibleCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822E6910              		 offset:31d6910                       

void UCharacterSightComponent::OnRep_CanSee()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee"));

	UCharacterSightComponent_OnRep_CanSee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor**                 DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822E5CF0              		 offset:31d5cf0                       

void UMockAuthoritativeActorPoolComponent::Authority_OnActorDestroyed(class AActor** DestroyedActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed"));

	UMockAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
