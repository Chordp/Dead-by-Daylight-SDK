// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheClown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// float*                         value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A1D70              		 offset:1691d70                       

void ABaseGasCloudProjectile::Authority_SetCumulativeLifetime(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime"));

	ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A1D40              		 offset:1691d40                       

float ABaseGasCloudProjectile::Authority_GetCumulativeLifetime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime"));

	ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.OnRep_IsInCloud
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807A2370              		 offset:1692370                       

void UGassedStatusEffect::OnRep_IsInCloud()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.GassedStatusEffect.OnRep_IsInCloud"));

	UGassedStatusEffect_OnRep_IsInCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheClown.GassedStatusEffect.IsInCloud
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A2340              		 offset:1692340                       

bool UGassedStatusEffect::IsInCloud()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.GassedStatusEffect.IsInCloud"));

	UGassedStatusEffect_IsInCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
// (Final, BlueprintAuthorityOnly, Native, Private, BlueprintCallable)
// Parameters:
// bool*                          value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A22B0              		 offset:16922b0                       

void UGassedStatusEffect::Authority_SetIsInCloud(bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.GassedStatusEffect.Authority_SetIsInCloud"));

	UGassedStatusEffect_Authority_SetIsInCloud_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
// (Final, BlueprintAuthorityOnly, Native, Private, BlueprintCallable)
// Parameters:
// class ABaseGasCloudProjectile** cloud                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A2230              		 offset:1692230                       

void UGassedStatusEffect::Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile** cloud)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud"));

	UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params params;
	params.cloud = cloud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
// (Final, BlueprintAuthorityOnly, Native, Private, BlueprintCallable)
// Parameters:
// class ABaseGasCloudProjectile** cloud                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A21B0              		 offset:16921b0                       

void UGassedStatusEffect::Authority_AddOverlappingCloud(class ABaseGasCloudProjectile** cloud)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud"));

	UGassedStatusEffect_Authority_AddOverlappingCloud_Params params;
	params.cloud = cloud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
