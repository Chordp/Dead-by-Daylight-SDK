// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDGameplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DBDGameplay.FadeComponent.GetFadePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680104D30              		 offset:ff4d30                        

float UFadeComponent::GetFadePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FadeComponent.GetFadePercent"));

	UFadeComponent_GetFadePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
// (Final, Native, Private)
// FunctionAddress:0x00007FF680104F20              		 offset:ff4f20                        

void UInteractionStarterComponent::OnRep_ShouldStartInteraction()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction"));

	UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
// (Final, Native, Private)
// FunctionAddress:0x00007FF680104F00              		 offset:ff4f00                        

void UInteractionStarterComponent::OnInteractionStarted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted"));

	UInteractionStarterComponent_OnInteractionStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
// (Final, Native, Private, Const)
// Parameters:
// float*                         previousCharge                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6801051D0              		 offset:ff51d0                        

void UPowerChargeComponent::OnRep_CurrentCharge(float* previousCharge)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge"));

	UPowerChargeComponent_OnRep_CurrentCharge_Params params;
	params.previousCharge = previousCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDGameplay.PowerChargeComponent.Debug_Server_SetForceFullCharge
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool*                          forceFullCharge                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680105110              		 offset:ff5110                        

void UPowerChargeComponent::Debug_Server_SetForceFullCharge(bool* forceFullCharge)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PowerChargeComponent.Debug_Server_SetForceFullCharge"));

	UPowerChargeComponent_Debug_Server_SetForceFullCharge_Params params;
	params.forceFullCharge = forceFullCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
// (Final, Native, Private, Const)
// FunctionAddress:0x00007FF6801054C0              		 offset:ff54c0                        

void UPowerToggleComponent::OnRep_IsInPower()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower"));

	UPowerToggleComponent_OnRep_IsInPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
