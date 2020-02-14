// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_ApexDestruction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh**      NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FECC270              		 offset:dbc270                        

void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh** NewMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ApexDestruction.DestructibleComponent.SetDestructibleMesh"));

	UDestructibleComponent_SetDestructibleMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FECC240              		 offset:dbc240                        

class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ApexDestruction.DestructibleComponent.GetDestructibleMesh"));

	UDestructibleComponent_GetDestructibleMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float*                         BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HurtOrigin                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFullDamage                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FECC090              		 offset:dbc090                        

void UDestructibleComponent::ApplyRadiusDamage(float* BaseDamage, struct FVector* HurtOrigin, float* DamageRadius, float* ImpulseStrength, bool* bFullDamage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage"));

	UDestructibleComponent_ApplyRadiusDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpulseDir                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FECBF20              		 offset:dbbf20                        

void UDestructibleComponent::ApplyDamage(float* DamageAmount, struct FVector* HitLocation, struct FVector* ImpulseDir, float* ImpulseStrength)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ApexDestruction.DestructibleComponent.ApplyDamage"));

	UDestructibleComponent_ApplyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.HitLocation = HitLocation;
	params.ImpulseDir = ImpulseDir;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
