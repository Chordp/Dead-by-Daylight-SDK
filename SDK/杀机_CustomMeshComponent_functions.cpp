// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_CustomMeshComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ParameterValue                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820B0FE0              		 offset:2fa0fe0                       

void UCustomMeshComponent::SetVectorParameterValueOnMaterials(struct FName* ParameterName, struct FVector* ParameterValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.SetVectorParameterValueOnMaterials"));

	UCustomMeshComponent_SetVectorParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ParameterValue                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820B0F00              		 offset:2fa0f00                       

void UCustomMeshComponent::SetScalarParameterValueOnMaterials(struct FName* ParameterName, float* ParameterValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.SetScalarParameterValueOnMaterials"));

	UCustomMeshComponent_SetScalarParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.SaveMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820B0D70              		 offset:2fa0d70                       

bool UCustomMeshComponent::SaveMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.SaveMaterials"));

	UCustomMeshComponent_SaveMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.RestoreMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820B0D20              		 offset:2fa0d20                       

bool UCustomMeshComponent::RestoreMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.RestoreMaterials"));

	UCustomMeshComponent_RestoreMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.PrestreamTextures
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPrioritizeCharacterTextures   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820B0C10              		 offset:2fa0c10                       

void UCustomMeshComponent::PrestreamTextures(float* Seconds, bool* bPrioritizeCharacterTextures, int* CinematicTextureGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.PrestreamTextures"));

	UCustomMeshComponent_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bPrioritizeCharacterTextures = bPrioritizeCharacterTextures;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.IsMaterialSlotNameValid
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820B0B60              		 offset:2fa0b60                       

bool UCustomMeshComponent::IsMaterialSlotNameValid(struct FName* MaterialSlotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.IsMaterialSlotNameValid"));

	UCustomMeshComponent_IsMaterialSlotNameValid_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialSlotNames
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820B0A60              		 offset:2fa0a60                       

TArray<struct FName> UCustomMeshComponent::GetMaterialSlotNames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.GetMaterialSlotNames"));

	UCustomMeshComponent_GetMaterialSlotNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterials
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMaterialInterface*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820B0AE0              		 offset:2fa0ae0                       

TArray<class UMaterialInterface*> UCustomMeshComponent::GetMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.GetMaterials"));

	UCustomMeshComponent_GetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820B09B0              		 offset:2fa09b0                       

int UCustomMeshComponent::GetMaterialIndex(struct FName* MaterialSlotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.GetMaterialIndex"));

	UCustomMeshComponent_GetMaterialIndex_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
