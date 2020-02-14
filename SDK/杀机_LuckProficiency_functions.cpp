// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LuckProficiency_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.InteractionProficiency.GetValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68071BF00              		 offset:160bf00                       

float ULuckProficiency_C::GetValue(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionProficiency.GetValue"));

	ULuckProficiency_C_GetValue_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionProficiency.GetType
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EStatusEffectType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68071BE70              		 offset:160be70                       

EStatusEffectType ULuckProficiency_C::GetType(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionProficiency.GetType"));

	ULuckProficiency_C_GetType_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionProficiency.GetLevel
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68071BDA0              		 offset:160bda0                       

int ULuckProficiency_C::GetLevel(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionProficiency.GetLevel"));

	ULuckProficiency_C_GetLevel_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionProficiency.GetIsActive
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68071BC40              		 offset:160bc40                       

bool ULuckProficiency_C::GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionProficiency.GetIsActive"));

	ULuckProficiency_C_GetIsActive_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.Player = Player;

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
