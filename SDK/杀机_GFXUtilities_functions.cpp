// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GFXUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682302150              		 offset:31f2150                       

void UBatchMeshCommands::UpdateMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.UpdateMaterials"));

	UBatchMeshCommands_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF682302060              		 offset:31f2060                       

void UBatchMeshCommands::SetVectorParameter(struct FName* ParameterName, struct FVector* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetVectorParameter"));

	UBatchMeshCommands_SetVectorParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               newTexture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301F80              		 offset:31f1f80                       

void UBatchMeshCommands::SetTextureParameter(struct FName* ParameterName, class UTexture** newTexture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetTextureParameter"));

	UBatchMeshCommands_SetTextureParameter_Params params;
	params.ParameterName = ParameterName;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301EA0              		 offset:31f1ea0                       

void UBatchMeshCommands::SetScalarParameter(struct FName* ParameterName, float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetScalarParameter"));

	UBatchMeshCommands_SetScalarParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inRenderInMainPass             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301E10              		 offset:31f1e10                       

void UBatchMeshCommands::SetRenderInMainPass(bool* inRenderInMainPass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass"));

	UBatchMeshCommands_SetRenderInMainPass_Params params;
	params.inRenderInMainPass = inRenderInMainPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          renderInCustomDepth            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301D80              		 offset:31f1d80                       

void UBatchMeshCommands::SetRenderInCustomDepth(bool* renderInCustomDepth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth"));

	UBatchMeshCommands_SetRenderInCustomDepth_Params params;
	params.renderInCustomDepth = renderInCustomDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          renderInCustomColour           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301CF0              		 offset:31f1cf0                       

void UBatchMeshCommands::SetRenderInCustomColourNoDepth(bool* renderInCustomColour)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth"));

	UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params params;
	params.renderInCustomColour = renderInCustomColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          receivesDecals                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301C60              		 offset:31f1c60                       

void UBatchMeshCommands::SetReceivesDecals(bool* receivesDecals)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetReceivesDecals"));

	UBatchMeshCommands_SetReceivesDecals_Params params;
	params.receivesDecals = receivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                GroupName                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF682301BC0              		 offset:31f1bc0                       

void UBatchMeshCommands::SetMaterial(struct FString* GroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetMaterial"));

	UBatchMeshCommands_SetMaterial_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLightingChannels*      LightingChannels               (Parm)
// FunctionAddress:0x00007FF682301B40              		 offset:31f1b40                       

void UBatchMeshCommands::SetLightingChannelForAllMeshes(struct FLightingChannels* LightingChannels)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes"));

	UBatchMeshCommands_SetLightingChannelForAllMeshes_Params params;
	params.LightingChannels = LightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomColourWriteMask*        WriteMask                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301AC0              		 offset:31f1ac0                       

void UBatchMeshCommands::SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask"));

	UBatchMeshCommands_SetCustomColourWriteMask_Params params;
	params.WriteMask = WriteMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetColourParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823019E0              		 offset:31f19e0                       

void UBatchMeshCommands::SetColourParameter(struct FName* ParameterName, struct FLinearColor* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetColourParameter"));

	UBatchMeshCommands_SetColourParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          castCinematicShadows           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301950              		 offset:31f1950                       

void UBatchMeshCommands::SetCastCinematicShadows(bool* castCinematicShadows)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows"));

	UBatchMeshCommands_SetCastCinematicShadows_Params params;
	params.castCinematicShadows = castCinematicShadows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     MaterialInterface              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823018D0              		 offset:31f18d0                       

void UBatchMeshCommands::SetAllToSameMaterial(class UMaterialInterface** MaterialInterface)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial"));

	UBatchMeshCommands_SetAllToSameMaterial_Params params;
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.ResetMaterials
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6823018B0              		 offset:31f18b0                       

void UBatchMeshCommands::ResetMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.ResetMaterials"));

	UBatchMeshCommands_ResetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          outValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6823017B0              		 offset:31f17b0                       

bool UBatchMeshCommands::CopyFirstScalarParameter(struct FName* ParameterName, float* outValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter"));

	UBatchMeshCommands_CopyFirstScalarParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outValue != nullptr)
		*outValue = params.outValue;

	return params.ReturnValue;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823016E0              		 offset:31f16e0                       

void UBatchMeshCommands::BatchSetVisibility(bool* bNewVisibility, bool* bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetVisibility"));

	UBatchMeshCommands_BatchSetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Skip                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301650              		 offset:31f1650                       

void UBatchMeshCommands::BatchSetSkipComponentAndChildrenTransformUpdate(bool* Skip)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate"));

	UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params params;
	params.Skip = Skip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823015C0              		 offset:31f15c0                       

void UBatchMeshCommands::BatchSetComponentTickEnabled(bool* Enabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled"));

	UBatchMeshCommands_BatchSetComponentTickEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*>* ignoredPrimitives              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6823022D0              		 offset:31f22d0                       

void UClippableProviderComponent::SetIgnoredPrimitives(TArray<class UPrimitiveComponent*>* ignoredPrimitives)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives"));

	UClippableProviderComponent_SetIgnoredPrimitives_Params params;
	params.ignoredPrimitives = ignoredPrimitives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetStaticMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh**            NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF98410              		 offset:e88410                        

bool UClonedStaticMeshComponent::SetStaticMesh(class UStaticMesh** NewMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetStaticMesh"));

	UClonedStaticMeshComponent_SetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StaticMeshComponent.SetReverseCulling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ReverseCulling                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682112170              		 offset:3002170                       

void UClonedStaticMeshComponent::SetReverseCulling(bool* ReverseCulling)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetReverseCulling"));

	UClonedStaticMeshComponent_SetReverseCulling_Params params;
	params.ReverseCulling = ReverseCulling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetForcedLodModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NewForcedLodModel              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111ED0              		 offset:3001ed0                       

void UClonedStaticMeshComponent::SetForcedLodModel(int* NewForcedLodModel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetForcedLodModel"));

	UClonedStaticMeshComponent_SetForcedLodModel_Params params;
	params.NewForcedLodModel = NewForcedLodModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111E50              		 offset:3001e50                       

void UClonedStaticMeshComponent::SetDistanceFieldSelfShadowBias(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias"));

	UClonedStaticMeshComponent_SetDistanceFieldSelfShadowBias_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.OnRep_StaticMesh
// (Final, Native, Public)
// Parameters:
// class UStaticMesh**            OldStaticMesh                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111DD0              		 offset:3001dd0                       

void UClonedStaticMeshComponent::OnRep_StaticMesh(class UStaticMesh** OldStaticMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.OnRep_StaticMesh"));

	UClonedStaticMeshComponent_OnRep_StaticMesh_Params params;
	params.OldStaticMesh = OldStaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.GetLocalBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111A90              		 offset:3001a90                       

void UClonedStaticMeshComponent::GetLocalBounds(struct FVector* Min, struct FVector* Max)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.GetLocalBounds"));

	UClonedStaticMeshComponent_GetLocalBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bRestoreSimulationSpace        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8810              		 offset:2fe8810                       

void UClonedSkeletalMeshComponent::UnbindClothFromMasterPoseComponent(bool* bRestoreSimulationSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent"));

	UClonedSkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params params;
	params.bRestoreSimulationSpace = bRestoreSimulationSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F87F0              		 offset:2fe87f0                       

void UClonedSkeletalMeshComponent::ToggleDisablePostProcessBlueprint()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint"));

	UClonedSkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.TermBodiesBelow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParentBoneName                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8750              		 offset:2fe8750                       

void UClonedSkeletalMeshComponent::TermBodiesBelow(struct FName* ParentBoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.TermBodiesBelow"));

	UClonedSkeletalMeshComponent_TermBodiesBelow_Params params;
	params.ParentBoneName = ParentBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SuspendClothingSimulation
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F8730              		 offset:2fe8730                       

void UClonedSkeletalMeshComponent::SuspendClothingSimulation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SuspendClothingSimulation"));

	UClonedSkeletalMeshComponent_SuspendClothingSimulation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F8710              		 offset:2fe8710                       

void UClonedSkeletalMeshComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.Stop"));

	UClonedSkeletalMeshComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SnapshotPose
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseSnapshot           Snapshot                       (Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6820F8640              		 offset:2fe8640                       

void UClonedSkeletalMeshComponent::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SnapshotPose"));

	UClonedSkeletalMeshComponent_SnapshotPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewUpdateState                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806A7310              		 offset:1597310                       

void UClonedSkeletalMeshComponent::SetUpdateAnimationInEditor(bool* NewUpdateState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor"));

	UClonedSkeletalMeshComponent_SetUpdateAnimationInEditor_Params params;
	params.NewUpdateState = NewUpdateState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F85C0              		 offset:2fe85c0                       

void UClonedSkeletalMeshComponent::SetTeleportRotationThreshold(float* Threshold)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold"));

	UClonedSkeletalMeshComponent_SetTeleportRotationThreshold_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8540              		 offset:2fe8540                       

void UClonedSkeletalMeshComponent::SetTeleportDistanceThreshold(float* Threshold)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold"));

	UClonedSkeletalMeshComponent_SetTeleportDistanceThreshold_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InPos                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFireNotifies                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8470              		 offset:2fe8470                       

void UClonedSkeletalMeshComponent::SetPosition(float* InPos, bool* bFireNotifies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetPosition"));

	UClonedSkeletalMeshComponent_SetPosition_Params params;
	params.InPos = InPos;
	params.bFireNotifies = bFireNotifies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F83F0              		 offset:2fe83f0                       

void UClonedSkeletalMeshComponent::SetPlayRate(float* Rate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetPlayRate"));

	UClonedSkeletalMeshComponent_SetPlayRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         PhysicsBlendWeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8370              		 offset:2fe8370                       

void UClonedSkeletalMeshComponent::SetPhysicsBlendWeight(float* PhysicsBlendWeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight"));

	UClonedSkeletalMeshComponent_SetPhysicsBlendWeight_Params params;
	params.PhysicsBlendWeight = PhysicsBlendWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8250              		 offset:2fe8250                       

void UClonedSkeletalMeshComponent::SetNotifyRigidBodyCollisionBelow(bool* bNewNotifyRigidBodyCollision, struct FName* BoneName, bool* bIncludeSelf)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow"));

	UClonedSkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;
	params.BoneName = BoneName;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetMorphTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRemoveZeroWeight              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F8130              		 offset:2fe8130                       

void UClonedSkeletalMeshComponent::SetMorphTarget(struct FName* MorphTargetName, float* value, bool* bRemoveZeroWeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetMorphTarget"));

	UClonedSkeletalMeshComponent_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.value = value;
	params.bRemoveZeroWeight = bRemoveZeroWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewBlendPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F80A0              		 offset:2fe80a0                       

void UClonedSkeletalMeshComponent::SetEnablePhysicsBlending(bool* bNewBlendPhysics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending"));

	UClonedSkeletalMeshComponent_SetEnablePhysicsBlending_Params params;
	params.bNewBlendPhysics = bNewBlendPhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnableGravity                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7F80              		 offset:2fe7f80                       

void UClonedSkeletalMeshComponent::SetEnableGravityOnAllBodiesBelow(bool* bEnableGravity, struct FName* BoneName, bool* bIncludeSelf)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow"));

	UClonedSkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Params params;
	params.bEnableGravity = bEnableGravity;
	params.BoneName = BoneName;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetEnableBodyGravity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnableGravity                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7E90              		 offset:2fe7e90                       

void UClonedSkeletalMeshComponent::SetEnableBodyGravity(bool* bEnableGravity, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetEnableBodyGravity"));

	UClonedSkeletalMeshComponent_SetEnableBodyGravity_Params params;
	params.bEnableGravity = bEnableGravity;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInDisablePostProcess          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7E00              		 offset:2fe7e00                       

void UClonedSkeletalMeshComponent::SetDisablePostProcessBlueprint(bool* bInDisablePostProcess)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint"));

	UClonedSkeletalMeshComponent_SetDisablePostProcessBlueprint_Params params;
	params.bInDisablePostProcess = bInDisablePostProcess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetDisableAnimCurves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInDisableAnimCurves           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7D70              		 offset:2fe7d70                       

void UClonedSkeletalMeshComponent::SetDisableAnimCurves(bool* bInDisableAnimCurves)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetDisableAnimCurves"));

	UClonedSkeletalMeshComponent_SetDisableAnimCurves_Params params;
	params.bInDisableAnimCurves = bInDisableAnimCurves;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ProfileName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDefaultIfNotFound             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7C90              		 offset:2fe7c90                       

void UClonedSkeletalMeshComponent::SetConstraintProfileForAll(struct FName* ProfileName, bool* bDefaultIfNotFound)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll"));

	UClonedSkeletalMeshComponent_SetConstraintProfileForAll_Params params;
	params.ProfileName = ProfileName;
	params.bDefaultIfNotFound = bDefaultIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetConstraintProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  JointName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ProfileName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDefaultIfNotFound             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7B60              		 offset:2fe7b60                       

void UClonedSkeletalMeshComponent::SetConstraintProfile(struct FName* JointName, struct FName* ProfileName, bool* bDefaultIfNotFound)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetConstraintProfile"));

	UClonedSkeletalMeshComponent_SetConstraintProfile_Params params;
	params.JointName = JointName;
	params.ProfileName = ProfileName;
	params.bDefaultIfNotFound = bDefaultIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7AE0              		 offset:2fe7ae0                       

void UClonedSkeletalMeshComponent::SetClothMaxDistanceScale(float* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale"));

	UClonedSkeletalMeshComponent_SetClothMaxDistanceScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F79F0              		 offset:2fe79f0                       

void UClonedSkeletalMeshComponent::SetBodyNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision"));

	UClonedSkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAnimationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EAnimationMode>*   InAnimationMode                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7970              		 offset:2fe7970                       

void UClonedSkeletalMeshComponent::SetAnimationMode(TEnumAsByte<EAnimationMode>* InAnimationMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAnimationMode"));

	UClonedSkeletalMeshComponent_SetAnimationMode_Params params;
	params.InAnimationMode = InAnimationMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimationAsset**        NewAnimToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F78F0              		 offset:2fe78f0                       

void UClonedSkeletalMeshComponent::SetAnimation(class UAnimationAsset** NewAnimToPlay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAnimation"));

	UClonedSkeletalMeshComponent_SetAnimation_Params params;
	params.NewAnimToPlay = NewAnimToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAngularLimits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Swing1LimitAngle               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TwistLimitAngle                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Swing2LimitAngle               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7780              		 offset:2fe7780                       

void UClonedSkeletalMeshComponent::SetAngularLimits(struct FName* InBoneName, float* Swing1LimitAngle, float* TwistLimitAngle, float* Swing2LimitAngle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAngularLimits"));

	UClonedSkeletalMeshComponent_SetAngularLimits_Params params;
	params.InBoneName = InBoneName;
	params.Swing1LimitAngle = Swing1LimitAngle;
	params.TwistLimitAngle = TwistLimitAngle;
	params.Swing2LimitAngle = Swing2LimitAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          List                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bAllow                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7680              		 offset:2fe7680                       

void UClonedSkeletalMeshComponent::SetAllowedAnimCurvesEvaluation(TArray<struct FName>* List, bool* bAllow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation"));

	UClonedSkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Params params;
	params.List = List;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAllow                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F75F0              		 offset:2fe75f0                       

void UClonedSkeletalMeshComponent::SetAllowAnimCurveEvaluation(bool* bInAllow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation"));

	UClonedSkeletalMeshComponent_SetAllowAnimCurveEvaluation_Params params;
	params.bInAllow = bInAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnableSwingDrive              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableTwistDrive              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipCustomPhysicsType         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F74D0              		 offset:2fe74d0                       

void UClonedSkeletalMeshComponent::SetAllMotorsAngularVelocityDrive(bool* bEnableSwingDrive, bool* bEnableTwistDrive, bool* bSkipCustomPhysicsType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive"));

	UClonedSkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params params;
	params.bEnableSwingDrive = bEnableSwingDrive;
	params.bEnableTwistDrive = bEnableTwistDrive;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnableSwingDrive              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableTwistDrive              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipCustomPhysicsType         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F73B0              		 offset:2fe73b0                       

void UClonedSkeletalMeshComponent::SetAllMotorsAngularPositionDrive(bool* bEnableSwingDrive, bool* bEnableTwistDrive, bool* bSkipCustomPhysicsType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive"));

	UClonedSkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params params;
	params.bEnableSwingDrive = bEnableSwingDrive;
	params.bEnableTwistDrive = bEnableTwistDrive;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InSpring                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InForceLimit                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipCustomPhysicsType         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F7250              		 offset:2fe7250                       

void UClonedSkeletalMeshComponent::SetAllMotorsAngularDriveParams(float* InSpring, float* InDamping, float* InForceLimit, bool* bSkipCustomPhysicsType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams"));

	UClonedSkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params params;
	params.InSpring = InSpring;
	params.InDamping = InDamping;
	params.InForceLimit = InForceLimit;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewSimulate                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F71C0              		 offset:2fe71c0                       

void UClonedSkeletalMeshComponent::SetAllBodiesSimulatePhysics(bool* bNewSimulate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics"));

	UClonedSkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params params;
	params.bNewSimulate = bNewSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         PhysicsBlendWeight             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipCustomPhysicsType         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F70F0              		 offset:2fe70f0                       

void UClonedSkeletalMeshComponent::SetAllBodiesPhysicsBlendWeight(float* PhysicsBlendWeight, bool* bSkipCustomPhysicsType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight"));

	UClonedSkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params params;
	params.PhysicsBlendWeight = PhysicsBlendWeight;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  InBoneName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bNewSimulate                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6FC0              		 offset:2fe6fc0                       

void UClonedSkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics(struct FName* InBoneName, bool* bNewSimulate, bool* bIncludeSelf)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics"));

	UClonedSkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params params;
	params.InBoneName = InBoneName;
	params.bNewSimulate = bNewSimulate;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  InBoneName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         PhysicsBlendWeight             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipCustomPhysicsType         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6E40              		 offset:2fe6e40                       

void UClonedSkeletalMeshComponent::SetAllBodiesBelowPhysicsBlendWeight(struct FName* InBoneName, float* PhysicsBlendWeight, bool* bSkipCustomPhysicsType, bool* bIncludeSelf)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight"));

	UClonedSkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params params;
	params.InBoneName = InBoneName;
	params.PhysicsBlendWeight = PhysicsBlendWeight;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ResumeClothingSimulation
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F6E20              		 offset:2fe6e20                       

void UClonedSkeletalMeshComponent::ResumeClothingSimulation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ResumeClothingSimulation"));

	UClonedSkeletalMeshComponent_ResumeClothingSimulation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ResetClothTeleportMode
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F6E00              		 offset:2fe6e00                       

void UClonedSkeletalMeshComponent::ResetClothTeleportMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ResetClothTeleportMode"));

	UClonedSkeletalMeshComponent_ResetClothTeleportMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ETeleportType*                 InTeleportType                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6D80              		 offset:2fe6d80                       

void UClonedSkeletalMeshComponent::ResetAnimInstanceDynamics(ETeleportType* InTeleportType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics"));

	UClonedSkeletalMeshComponent_ResetAnimInstanceDynamics_Params params;
	params.InTeleportType = InTeleportType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F6D60              		 offset:2fe6d60                       

void UClonedSkeletalMeshComponent::ResetAllowedAnimCurveEvaluation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation"));

	UClonedSkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F6D40              		 offset:2fe6d40                       

void UClonedSkeletalMeshComponent::ResetAllBodiesSimulatePhysics()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics"));

	UClonedSkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.PlayAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimationAsset**        NewAnimToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLooping                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6C70              		 offset:2fe6c70                       

void UClonedSkeletalMeshComponent::PlayAnimation(class UAnimationAsset** NewAnimToPlay, bool* bLooping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.PlayAnimation"));

	UClonedSkeletalMeshComponent_PlayAnimation_Params params;
	params.NewAnimToPlay = NewAnimToPlay;
	params.bLooping = bLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bLooping                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6BE0              		 offset:2fe6be0                       

void UClonedSkeletalMeshComponent::Play(bool* bLooping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.Play"));

	UClonedSkeletalMeshComponent_Play_Params params;
	params.bLooping = bLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.OverrideAnimationData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimationAsset**        InAnimToPlay                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLooping                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPlaying                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6A40              		 offset:2fe6a40                       

void UClonedSkeletalMeshComponent::OverrideAnimationData(class UAnimationAsset** InAnimToPlay, bool* bIsLooping, bool* bIsPlaying, float* Position, float* PlayRate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.OverrideAnimationData"));

	UClonedSkeletalMeshComponent_OverrideAnimationData_Params params;
	params.InAnimToPlay = InAnimToPlay;
	params.bIsLooping = bIsLooping;
	params.bIsPlaying = bIsPlaying;
	params.Position = Position;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.K2_SetAnimInstanceClass
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 NewClass                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F69B0              		 offset:2fe69b0                       

void UClonedSkeletalMeshComponent::K2_SetAnimInstanceClass(class UClass** NewClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.K2_SetAnimInstanceClass"));

	UClonedSkeletalMeshComponent_K2_SetAnimInstanceClass_Params params;
	params.NewClass = NewClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ClosestWorldPosition           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F67A0              		 offset:2fe67a0                       

bool UClonedSkeletalMeshComponent::K2_GetClosestPointOnPhysicsAsset(struct FVector* WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset"));

	UClonedSkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestWorldPosition != nullptr)
		*ClosestWorldPosition = params.ClosestWorldPosition;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (Distance != nullptr)
		*Distance = params.Distance;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6770              		 offset:2fe6770                       

bool UClonedSkeletalMeshComponent::IsPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.IsPlaying"));

	UClonedSkeletalMeshComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6740              		 offset:2fe6740                       

bool UClonedSkeletalMeshComponent::IsClothingSimulationSuspended()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended"));

	UClonedSkeletalMeshComponent_IsClothingSimulationSuspended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6690              		 offset:2fe6690                       

bool UClonedSkeletalMeshComponent::IsBodyGravityEnabled(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled"));

	UClonedSkeletalMeshComponent_IsBodyGravityEnabled_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.HasValidAnimationInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6660              		 offset:2fe6660                       

bool UClonedSkeletalMeshComponent::HasValidAnimationInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.HasValidAnimationInstance"));

	UClonedSkeletalMeshComponent_HasValidAnimationInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6630              		 offset:2fe6630                       

float UClonedSkeletalMeshComponent::GetTeleportRotationThreshold()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold"));

	UClonedSkeletalMeshComponent_GetTeleportRotationThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6630              		 offset:2fe6630                       

float UClonedSkeletalMeshComponent::GetTeleportDistanceThreshold()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold"));

	UClonedSkeletalMeshComponent_GetTeleportDistanceThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetSubInstanceByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InName                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6580              		 offset:2fe6580                       

class UAnimInstance* UClonedSkeletalMeshComponent::GetSubInstanceByName(struct FName* InName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetSubInstanceByName"));

	UClonedSkeletalMeshComponent_GetSubInstanceByName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6540              		 offset:2fe6540                       

struct FVector UClonedSkeletalMeshComponent::GetSkeletalCenterOfMass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass"));

	UClonedSkeletalMeshComponent_GetSkeletalCenterOfMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetPostProcessInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6510              		 offset:2fe6510                       

class UAnimInstance* UClonedSkeletalMeshComponent::GetPostProcessInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetPostProcessInstance"));

	UClonedSkeletalMeshComponent_GetPostProcessInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F64E0              		 offset:2fe64e0                       

float UClonedSkeletalMeshComponent::GetPosition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetPosition"));

	UClonedSkeletalMeshComponent_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F64B0              		 offset:2fe64b0                       

float UClonedSkeletalMeshComponent::GetPlayRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetPlayRate"));

	UClonedSkeletalMeshComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetMorphTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6400              		 offset:2fe6400                       

float UClonedSkeletalMeshComponent::GetMorphTarget(struct FName* MorphTargetName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetMorphTarget"));

	UClonedSkeletalMeshComponent_GetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F63D0              		 offset:2fe63d0                       

bool UClonedSkeletalMeshComponent::GetDisablePostProcessBlueprint()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint"));

	UClonedSkeletalMeshComponent_GetDisablePostProcessBlueprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetDisableAnimCurves
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F63A0              		 offset:2fe63a0                       

bool UClonedSkeletalMeshComponent::GetDisableAnimCurves()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetDisableAnimCurves"));

	UClonedSkeletalMeshComponent_GetDisableAnimCurves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetCurrentJointAngles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Swing1Angle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TwistAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Swing2Angle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F61F0              		 offset:2fe61f0                       

void UClonedSkeletalMeshComponent::GetCurrentJointAngles(struct FName* InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetCurrentJointAngles"));

	UClonedSkeletalMeshComponent_GetCurrentJointAngles_Params params;
	params.InBoneName = InBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Swing1Angle != nullptr)
		*Swing1Angle = params.Swing1Angle;
	if (TwistAngle != nullptr)
		*TwistAngle = params.TwistAngle;
	if (Swing2Angle != nullptr)
		*Swing2Angle = params.Swing2Angle;
}


// Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6190              		 offset:2fe6190                       

float UClonedSkeletalMeshComponent::GetClothMaxDistanceScale()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale"));

	UClonedSkeletalMeshComponent_GetClothMaxDistanceScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClothingSimulationInteractor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F61C0              		 offset:2fe61c0                       

class UClothingSimulationInteractor* UClonedSkeletalMeshComponent::GetClothingSimulationInteractor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor"));

	UClonedSkeletalMeshComponent_GetClothingSimulationInteractor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetBoneMass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bScaleMass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F60A0              		 offset:2fe60a0                       

float UClonedSkeletalMeshComponent::GetBoneMass(struct FName* BoneName, bool* bScaleMass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetBoneMass"));

	UClonedSkeletalMeshComponent_GetBoneMass_Params params;
	params.BoneName = BoneName;
	params.bScaleMass = bScaleMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetAnimInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6040              		 offset:2fe6040                       

class UAnimInstance* UClonedSkeletalMeshComponent::GetAnimInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetAnimInstance"));

	UClonedSkeletalMeshComponent_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetAnimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EAnimationMode>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6070              		 offset:2fe6070                       

TEnumAsByte<EAnimationMode> UClonedSkeletalMeshComponent::GetAnimationMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetAnimationMode"));

	UClonedSkeletalMeshComponent_GetAnimationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F6010              		 offset:2fe6010                       

bool UClonedSkeletalMeshComponent::GetAllowedAnimCurveEvaluate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate"));

	UClonedSkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F5FF0              		 offset:2fe5ff0                       

void UClonedSkeletalMeshComponent::ForceClothNextUpdateTeleportAndReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset"));

	UClonedSkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F5FD0              		 offset:2fe5fd0                       

void UClonedSkeletalMeshComponent::ForceClothNextUpdateTeleport()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport"));

	UClonedSkeletalMeshComponent_ForceClothNextUpdateTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.FindConstraintBoneName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ConstraintIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F5F30              		 offset:2fe5f30                       

struct FName UClonedSkeletalMeshComponent::FindConstraintBoneName(int* ConstraintIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.FindConstraintBoneName"));

	UClonedSkeletalMeshComponent_FindConstraintBoneName_Params params;
	params.ConstraintIndex = ConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SkeletalMeshComponent.ClearMorphTargets
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F5F10              		 offset:2fe5f10                       

void UClonedSkeletalMeshComponent::ClearMorphTargets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.ClearMorphTargets"));

	UClonedSkeletalMeshComponent_ClearMorphTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.BreakConstraint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F5DD0              		 offset:2fe5dd0                       

void UClonedSkeletalMeshComponent::BreakConstraint(struct FVector* Impulse, struct FVector* HitLocation, struct FName* InBoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.BreakConstraint"));

	UClonedSkeletalMeshComponent_BreakConstraint_Params params;
	params.Impulse = Impulse;
	params.HitLocation = HitLocation;
	params.InBoneName = InBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F5DB0              		 offset:2fe5db0                       

void UClonedSkeletalMeshComponent::BindClothToMasterPoseComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent"));

	UClonedSkeletalMeshComponent_BindClothToMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  NameOfCurve                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllow                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F5CD0              		 offset:2fe5cd0                       

void UClonedSkeletalMeshComponent::AllowAnimCurveEvaluation(struct FName* NameOfCurve, bool* bAllow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation"));

	UClonedSkeletalMeshComponent_AllowAnimCurveEvaluation_Params params;
	params.NameOfCurve = NameOfCurve;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F5B60              		 offset:2fe5b60                       

void UClonedSkeletalMeshComponent::AddImpulseToAllBodiesBelow(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange, bool* bIncludeSelf)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow"));

	UClonedSkeletalMeshComponent_AddImpulseToAllBodiesBelow_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F59F0              		 offset:2fe59f0                       

void UClonedSkeletalMeshComponent::AddForceToAllBodiesBelow(struct FVector* force, struct FName* BoneName, bool* bAccelChange, bool* bIncludeSelf)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow"));

	UClonedSkeletalMeshComponent_AddForceToAllBodiesBelow_Params params;
	params.force = force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  InBoneName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         AddPhysicsBlendWeight          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipCustomPhysicsType         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F58D0              		 offset:2fe58d0                       

void UClonedSkeletalMeshComponent::AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName* InBoneName, float* AddPhysicsBlendWeight, bool* bSkipCustomPhysicsType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight"));

	UClonedSkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params params;
	params.InBoneName = InBoneName;
	params.AddPhysicsBlendWeight = AddPhysicsBlendWeight;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.LightIntensityTimelineComponent.Reset
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682302D10              		 offset:31f2d10                       

void ULightIntensityTimelineComponent::Reset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.Reset"));

	ULightIntensityTimelineComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialHelper**        matHelper                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  propName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682302BF0              		 offset:31f2bf0                       

void ULightIntensityTimelineComponent::AddMaterialHelper(class UMaterialHelper** matHelper, struct FName* propName, float* Multiplier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper"));

	ULightIntensityTimelineComponent_AddMaterialHelper_Params params;
	params.matHelper = matHelper;
	params.propName = propName;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.LightIntensityTimelineComponent.AddLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULightComponent**        Light                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682302B20              		 offset:31f2b20                       

void ULightIntensityTimelineComponent::AddLight(class ULightComponent** Light, float* Multiplier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.LightIntensityTimelineComponent.AddLight"));

	ULightIntensityTimelineComponent_AddLight_Params params;
	params.Light = Light;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682302150              		 offset:31f2150                       

void UMaterialHelper::UpdateMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.UpdateMaterials"));

	UMaterialHelper_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF682302060              		 offset:31f2060                       

void UMaterialHelper::SetVectorParameter(struct FName* ParameterName, struct FVector* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetVectorParameter"));

	UMaterialHelper_SetVectorParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               newTexture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301F80              		 offset:31f1f80                       

void UMaterialHelper::SetTextureParameter(struct FName* ParameterName, class UTexture** newTexture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetTextureParameter"));

	UMaterialHelper_SetTextureParameter_Params params;
	params.ParameterName = ParameterName;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301EA0              		 offset:31f1ea0                       

void UMaterialHelper::SetScalarParameter(struct FName* ParameterName, float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetScalarParameter"));

	UMaterialHelper_SetScalarParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inRenderInMainPass             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301E10              		 offset:31f1e10                       

void UMaterialHelper::SetRenderInMainPass(bool* inRenderInMainPass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass"));

	UMaterialHelper_SetRenderInMainPass_Params params;
	params.inRenderInMainPass = inRenderInMainPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          renderInCustomDepth            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301D80              		 offset:31f1d80                       

void UMaterialHelper::SetRenderInCustomDepth(bool* renderInCustomDepth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth"));

	UMaterialHelper_SetRenderInCustomDepth_Params params;
	params.renderInCustomDepth = renderInCustomDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          renderInCustomColour           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301CF0              		 offset:31f1cf0                       

void UMaterialHelper::SetRenderInCustomColourNoDepth(bool* renderInCustomColour)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth"));

	UMaterialHelper_SetRenderInCustomColourNoDepth_Params params;
	params.renderInCustomColour = renderInCustomColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          receivesDecals                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301C60              		 offset:31f1c60                       

void UMaterialHelper::SetReceivesDecals(bool* receivesDecals)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetReceivesDecals"));

	UMaterialHelper_SetReceivesDecals_Params params;
	params.receivesDecals = receivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                GroupName                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF682301BC0              		 offset:31f1bc0                       

void UMaterialHelper::SetMaterial(struct FString* GroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetMaterial"));

	UMaterialHelper_SetMaterial_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLightingChannels*      LightingChannels               (Parm)
// FunctionAddress:0x00007FF682301B40              		 offset:31f1b40                       

void UMaterialHelper::SetLightingChannelForAllMeshes(struct FLightingChannels* LightingChannels)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes"));

	UMaterialHelper_SetLightingChannelForAllMeshes_Params params;
	params.LightingChannels = LightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomColourWriteMask*        WriteMask                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301AC0              		 offset:31f1ac0                       

void UMaterialHelper::SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask"));

	UMaterialHelper_SetCustomColourWriteMask_Params params;
	params.WriteMask = WriteMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetColourParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823019E0              		 offset:31f19e0                       

void UMaterialHelper::SetColourParameter(struct FName* ParameterName, struct FLinearColor* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetColourParameter"));

	UMaterialHelper_SetColourParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          castCinematicShadows           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301950              		 offset:31f1950                       

void UMaterialHelper::SetCastCinematicShadows(bool* castCinematicShadows)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows"));

	UMaterialHelper_SetCastCinematicShadows_Params params;
	params.castCinematicShadows = castCinematicShadows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     MaterialInterface              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823018D0              		 offset:31f18d0                       

void UMaterialHelper::SetAllToSameMaterial(class UMaterialInterface** MaterialInterface)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial"));

	UMaterialHelper_SetAllToSameMaterial_Params params;
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.ResetMaterials
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6823018B0              		 offset:31f18b0                       

void UMaterialHelper::ResetMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.ResetMaterials"));

	UMaterialHelper_ResetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          outValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6823017B0              		 offset:31f17b0                       

bool UMaterialHelper::CopyFirstScalarParameter(struct FName* ParameterName, float* outValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter"));

	UMaterialHelper_CopyFirstScalarParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outValue != nullptr)
		*outValue = params.outValue;

	return params.ReturnValue;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823016E0              		 offset:31f16e0                       

void UMaterialHelper::BatchSetVisibility(bool* bNewVisibility, bool* bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetVisibility"));

	UMaterialHelper_BatchSetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Skip                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301650              		 offset:31f1650                       

void UMaterialHelper::BatchSetSkipComponentAndChildrenTransformUpdate(bool* Skip)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate"));

	UMaterialHelper_BatchSetSkipComponentAndChildrenTransformUpdate_Params params;
	params.Skip = Skip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823015C0              		 offset:31f15c0                       

void UMaterialHelper::BatchSetComponentTickEnabled(bool* Enabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled"));

	UMaterialHelper_BatchSetComponentTickEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetStaticMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh**            NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF98410              		 offset:e88410                        

bool UMaterialHelperUnaffectedStaticMeshComp::SetStaticMesh(class UStaticMesh** NewMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetStaticMesh"));

	UMaterialHelperUnaffectedStaticMeshComp_SetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StaticMeshComponent.SetReverseCulling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ReverseCulling                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682112170              		 offset:3002170                       

void UMaterialHelperUnaffectedStaticMeshComp::SetReverseCulling(bool* ReverseCulling)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetReverseCulling"));

	UMaterialHelperUnaffectedStaticMeshComp_SetReverseCulling_Params params;
	params.ReverseCulling = ReverseCulling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetForcedLodModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NewForcedLodModel              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111ED0              		 offset:3001ed0                       

void UMaterialHelperUnaffectedStaticMeshComp::SetForcedLodModel(int* NewForcedLodModel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetForcedLodModel"));

	UMaterialHelperUnaffectedStaticMeshComp_SetForcedLodModel_Params params;
	params.NewForcedLodModel = NewForcedLodModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111E50              		 offset:3001e50                       

void UMaterialHelperUnaffectedStaticMeshComp::SetDistanceFieldSelfShadowBias(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias"));

	UMaterialHelperUnaffectedStaticMeshComp_SetDistanceFieldSelfShadowBias_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.OnRep_StaticMesh
// (Final, Native, Public)
// Parameters:
// class UStaticMesh**            OldStaticMesh                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111DD0              		 offset:3001dd0                       

void UMaterialHelperUnaffectedStaticMeshComp::OnRep_StaticMesh(class UStaticMesh** OldStaticMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.OnRep_StaticMesh"));

	UMaterialHelperUnaffectedStaticMeshComp_OnRep_StaticMesh_Params params;
	params.OldStaticMesh = OldStaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.GetLocalBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Min                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682111A90              		 offset:3001a90                       

void UMaterialHelperUnaffectedStaticMeshComp::GetLocalBounds(struct FVector* Min, struct FVector* Max)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.GetLocalBounds"));

	UMaterialHelperUnaffectedStaticMeshComp_GetLocalBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682302150              		 offset:31f2150                       

void UMeshCloningFactory::UpdateMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.UpdateMaterials"));

	UMeshCloningFactory_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF682302060              		 offset:31f2060                       

void UMeshCloningFactory::SetVectorParameter(struct FName* ParameterName, struct FVector* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetVectorParameter"));

	UMeshCloningFactory_SetVectorParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               newTexture                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301F80              		 offset:31f1f80                       

void UMeshCloningFactory::SetTextureParameter(struct FName* ParameterName, class UTexture** newTexture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetTextureParameter"));

	UMeshCloningFactory_SetTextureParameter_Params params;
	params.ParameterName = ParameterName;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301EA0              		 offset:31f1ea0                       

void UMeshCloningFactory::SetScalarParameter(struct FName* ParameterName, float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetScalarParameter"));

	UMeshCloningFactory_SetScalarParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inRenderInMainPass             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301E10              		 offset:31f1e10                       

void UMeshCloningFactory::SetRenderInMainPass(bool* inRenderInMainPass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass"));

	UMeshCloningFactory_SetRenderInMainPass_Params params;
	params.inRenderInMainPass = inRenderInMainPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          renderInCustomDepth            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301D80              		 offset:31f1d80                       

void UMeshCloningFactory::SetRenderInCustomDepth(bool* renderInCustomDepth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth"));

	UMeshCloningFactory_SetRenderInCustomDepth_Params params;
	params.renderInCustomDepth = renderInCustomDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          renderInCustomColour           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301CF0              		 offset:31f1cf0                       

void UMeshCloningFactory::SetRenderInCustomColourNoDepth(bool* renderInCustomColour)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth"));

	UMeshCloningFactory_SetRenderInCustomColourNoDepth_Params params;
	params.renderInCustomColour = renderInCustomColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          receivesDecals                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301C60              		 offset:31f1c60                       

void UMeshCloningFactory::SetReceivesDecals(bool* receivesDecals)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetReceivesDecals"));

	UMeshCloningFactory_SetReceivesDecals_Params params;
	params.receivesDecals = receivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                GroupName                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF682301BC0              		 offset:31f1bc0                       

void UMeshCloningFactory::SetMaterial(struct FString* GroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetMaterial"));

	UMeshCloningFactory_SetMaterial_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLightingChannels*      LightingChannels               (Parm)
// FunctionAddress:0x00007FF682301B40              		 offset:31f1b40                       

void UMeshCloningFactory::SetLightingChannelForAllMeshes(struct FLightingChannels* LightingChannels)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes"));

	UMeshCloningFactory_SetLightingChannelForAllMeshes_Params params;
	params.LightingChannels = LightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomColourWriteMask*        WriteMask                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301AC0              		 offset:31f1ac0                       

void UMeshCloningFactory::SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask"));

	UMeshCloningFactory_SetCustomColourWriteMask_Params params;
	params.WriteMask = WriteMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetColourParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823019E0              		 offset:31f19e0                       

void UMeshCloningFactory::SetColourParameter(struct FName* ParameterName, struct FLinearColor* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetColourParameter"));

	UMeshCloningFactory_SetColourParameter_Params params;
	params.ParameterName = ParameterName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          castCinematicShadows           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301950              		 offset:31f1950                       

void UMeshCloningFactory::SetCastCinematicShadows(bool* castCinematicShadows)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows"));

	UMeshCloningFactory_SetCastCinematicShadows_Params params;
	params.castCinematicShadows = castCinematicShadows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     MaterialInterface              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823018D0              		 offset:31f18d0                       

void UMeshCloningFactory::SetAllToSameMaterial(class UMaterialInterface** MaterialInterface)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial"));

	UMeshCloningFactory_SetAllToSameMaterial_Params params;
	params.MaterialInterface = MaterialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.ResetMaterials
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6823018B0              		 offset:31f18b0                       

void UMeshCloningFactory::ResetMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.ResetMaterials"));

	UMeshCloningFactory_ResetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          outValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6823017B0              		 offset:31f17b0                       

bool UMeshCloningFactory::CopyFirstScalarParameter(struct FName* ParameterName, float* outValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter"));

	UMeshCloningFactory_CopyFirstScalarParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outValue != nullptr)
		*outValue = params.outValue;

	return params.ReturnValue;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823016E0              		 offset:31f16e0                       

void UMeshCloningFactory::BatchSetVisibility(bool* bNewVisibility, bool* bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetVisibility"));

	UMeshCloningFactory_BatchSetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Skip                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682301650              		 offset:31f1650                       

void UMeshCloningFactory::BatchSetSkipComponentAndChildrenTransformUpdate(bool* Skip)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate"));

	UMeshCloningFactory_BatchSetSkipComponentAndChildrenTransformUpdate_Params params;
	params.Skip = Skip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6823015C0              		 offset:31f15c0                       

void UMeshCloningFactory::BatchSetComponentTickEnabled(bool* Enabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled"));

	UMeshCloningFactory_BatchSetComponentTickEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFXUtilities.OuterlineComponent.SetIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682303350              		 offset:31f3350                       

void UOuterlineComponent::SetIntensity(float* Intensity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GFXUtilities.OuterlineComponent.SetIntensity"));

	UOuterlineComponent_SetIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
