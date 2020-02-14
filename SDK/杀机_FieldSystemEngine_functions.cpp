// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_FieldSystemEngine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68236A030              		 offset:325a030                       

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool* Enabled, struct FVector* Position, struct FVector* Direction, float* Radius, float* Magnitude)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce"));

	UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevelPerCommand             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682369EC0              		 offset:3259ec0                       

void UFieldSystemComponent::ApplyStayDynamicField(bool* Enabled, struct FVector* Position, float* Radius, int* MaxLevelPerCommand)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField"));

	UFieldSystemComponent_ApplyStayDynamicField_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.MaxLevelPerCommand = MaxLevelPerCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682369D50              		 offset:3259d50                       

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce"));

	UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682369C30              		 offset:3259c30                       

void UFieldSystemComponent::ApplyRadialForce(bool* Enabled, struct FVector* Position, float* Magnitude)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce"));

	UFieldSystemComponent_ApplyRadialForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682369B10              		 offset:3259b10                       

void UFieldSystemComponent::ApplyLinearForce(bool* Enabled, struct FVector* Direction, float* Magnitude)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce"));

	UFieldSystemComponent_ApplyLinearForce_Params params;
	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
