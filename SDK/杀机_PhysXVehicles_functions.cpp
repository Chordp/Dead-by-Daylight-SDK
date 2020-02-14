// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PhysXVehicles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE8A0              		 offset:f9e8a0                        

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool* bUseAuto)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears"));

	UWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Throttle                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE820              		 offset:f9e820                        

void UWheeledVehicleMovementComponent::SetThrottleInput(float* Throttle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput"));

	UWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GearNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE760              		 offset:f9e760                        

void UWheeledVehicleMovementComponent::SetTargetGear(int* GearNum, bool* bImmediate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear"));

	UWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Steering                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE6E0              		 offset:f9e6e0                        

void UWheeledVehicleMovementComponent::SetSteeringInput(float* Steering)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput"));

	UWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE580              		 offset:f9e580                        

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool* bNewHandbrake)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput"));

	UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE4F0              		 offset:f9e4f0                        

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask"));

	UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE470              		 offset:f9e470                        

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore"));

	UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE3E0              		 offset:f9e3e0                        

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask"));

	UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE360              		 offset:f9e360                        

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid"));

	UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE2D0              		 offset:f9e2d0                        

void UWheeledVehicleMovementComponent::SetGearUp(bool* bNewGearUp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp"));

	UWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE240              		 offset:f9e240                        

void UWheeledVehicleMovementComponent::SetGearDown(bool* bNewGearDown)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown"));

	UWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Brake                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE020              		 offset:f9e020                        

void UWheeledVehicleMovementComponent::SetBrakeInput(float* Brake)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput"));

	UWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADF90              		 offset:f9df90                        

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask"));

	UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADF10              		 offset:f9df10                        

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup"));

	UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADE80              		 offset:f9de80                        

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool* bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled"));

	UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float*                         InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADCB0              		 offset:f9dcb0                        

void UWheeledVehicleMovementComponent::ServerUpdateState(float* InSteeringInput, float* InThrottleInput, float* InBrakeInput, float* InHandbrakeInput, int* CurrentGear)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState"));

	UWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADC20              		 offset:f9dc20                        

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears"));

	UWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADBF0              		 offset:f9dbf0                        

int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear"));

	UWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADB30              		 offset:f9db30                        

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed"));

	UWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADB00              		 offset:f9db00                        

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed"));

	UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADAD0              		 offset:f9dad0                        

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed"));

	UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADAA0              		 offset:f9daa0                        

int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear"));

	UWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE8A0              		 offset:f9e8a0                        

void USimpleWheeledVehicleMovementComponent::SetUseAutoGears(bool* bUseAuto)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears"));

	USimpleWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Throttle                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE820              		 offset:f9e820                        

void USimpleWheeledVehicleMovementComponent::SetThrottleInput(float* Throttle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput"));

	USimpleWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GearNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE760              		 offset:f9e760                        

void USimpleWheeledVehicleMovementComponent::SetTargetGear(int* GearNum, bool* bImmediate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear"));

	USimpleWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Steering                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE6E0              		 offset:f9e6e0                        

void USimpleWheeledVehicleMovementComponent::SetSteeringInput(float* Steering)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput"));

	USimpleWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE580              		 offset:f9e580                        

void USimpleWheeledVehicleMovementComponent::SetHandbrakeInput(bool* bNewHandbrake)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput"));

	USimpleWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE4F0              		 offset:f9e4f0                        

void USimpleWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask"));

	USimpleWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE470              		 offset:f9e470                        

void USimpleWheeledVehicleMovementComponent::SetGroupsToIgnore(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore"));

	USimpleWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE3E0              		 offset:f9e3e0                        

void USimpleWheeledVehicleMovementComponent::SetGroupsToAvoidMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask"));

	USimpleWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE360              		 offset:f9e360                        

void USimpleWheeledVehicleMovementComponent::SetGroupsToAvoid(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid"));

	USimpleWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE2D0              		 offset:f9e2d0                        

void USimpleWheeledVehicleMovementComponent::SetGearUp(bool* bNewGearUp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp"));

	USimpleWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE240              		 offset:f9e240                        

void USimpleWheeledVehicleMovementComponent::SetGearDown(bool* bNewGearDown)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown"));

	USimpleWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Brake                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800AE020              		 offset:f9e020                        

void USimpleWheeledVehicleMovementComponent::SetBrakeInput(float* Brake)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput"));

	USimpleWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADF90              		 offset:f9df90                        

void USimpleWheeledVehicleMovementComponent::SetAvoidanceGroupMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask"));

	USimpleWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADF10              		 offset:f9df10                        

void USimpleWheeledVehicleMovementComponent::SetAvoidanceGroup(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup"));

	USimpleWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADE80              		 offset:f9de80                        

void USimpleWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool* bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled"));

	USimpleWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float*                         InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADCB0              		 offset:f9dcb0                        

void USimpleWheeledVehicleMovementComponent::ServerUpdateState(float* InSteeringInput, float* InThrottleInput, float* InBrakeInput, float* InHandbrakeInput, int* CurrentGear)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState"));

	USimpleWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADC20              		 offset:f9dc20                        

bool USimpleWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears"));

	USimpleWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADBF0              		 offset:f9dbf0                        

int USimpleWheeledVehicleMovementComponent::GetTargetGear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear"));

	USimpleWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADB30              		 offset:f9db30                        

float USimpleWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed"));

	USimpleWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADB00              		 offset:f9db00                        

float USimpleWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed"));

	USimpleWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADAD0              		 offset:f9dad0                        

float USimpleWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed"));

	USimpleWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADAA0              		 offset:f9daa0                        

int USimpleWheeledVehicleMovementComponent::GetCurrentGear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear"));

	USimpleWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADC50              		 offset:f9dc50                        

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleAnimInstance.GetVehicle"));

	UVehicleAnimInstance_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADC80              		 offset:f9dc80                        

bool UVehicleWheel::IsInAir()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.IsInAir"));

	UVehicleWheel_IsInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADBC0              		 offset:f9dbc0                        

float UVehicleWheel::GetSuspensionOffset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset"));

	UVehicleWheel_GetSuspensionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADB90              		 offset:f9db90                        

float UVehicleWheel::GetSteerAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetSteerAngle"));

	UVehicleWheel_GetSteerAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800ADB60              		 offset:f9db60                        

float UVehicleWheel::GetRotationAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetRotationAngle"));

	UVehicleWheel_GetRotationAngle_Params params;

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
