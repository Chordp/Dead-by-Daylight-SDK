// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PhysicsUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68230A780              		 offset:31fa780                       

void UDynamicCapsuleResizerComponent::SetShrinkingEnabled(bool* Enabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled"));

	UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230A5D0              		 offset:31fa5d0                       

void UDynamicCapsuleResizerComponent::OnHit(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit"));

	UDynamicCapsuleResizerComponent_OnHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsUtilities.PrimitiveCollection.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68230AAE0              		 offset:31faae0                       

void UPrimitiveCollection::Remove(class UPrimitiveComponent** Primitive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysicsUtilities.PrimitiveCollection.Remove"));

	UPrimitiveCollection_Remove_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsUtilities.PrimitiveCollection.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68230AA60              		 offset:31faa60                       

void UPrimitiveCollection::Add(class UPrimitiveComponent** Primitive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysicsUtilities.PrimitiveCollection.Add"));

	UPrimitiveCollection_Add_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*>* primitives                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF68230ACC0              		 offset:31facc0                       

void UPrimitivesRegistererComponent::SetPrimitives(TArray<class UPrimitiveComponent*>* primitives)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives"));

	UPrimitivesRegistererComponent_SetPrimitives_Params params;
	params.primitives = primitives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
