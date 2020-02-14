// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SystemUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SystemUtilities.TimerObject.OnRep_TimerDataUpdated
// (Final, Native, Private)
// Parameters:
// struct FReplicationTimerData*  oldData                        (Parm)
// FunctionAddress:0x00007FF6822DF2E0              		 offset:31cf2e0                       

void UTimerObject::OnRep_TimerDataUpdated(struct FReplicationTimerData* oldData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.OnRep_TimerDataUpdated"));

	UTimerObject_OnRep_TimerDataUpdated_Params params;
	params.oldData = oldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemUtilities.TimerObject.IsTimerActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF2B0              		 offset:31cf2b0                       

bool UTimerObject::IsTimerActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.IsTimerActive"));

	UTimerObject_IsTimerActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF280              		 offset:31cf280                       

bool UTimerObject::IsPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.IsPaused"));

	UTimerObject_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF250              		 offset:31cf250                       

bool UTimerObject::IsDone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.IsDone"));

	UTimerObject_IsDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.GetRemainingTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF220              		 offset:31cf220                       

float UTimerObject::GetRemainingTimePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.GetRemainingTimePercent"));

	UTimerObject_GetRemainingTimePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.GetRemainingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF1F0              		 offset:31cf1f0                       

float UTimerObject::GetRemainingTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.GetRemainingTime"));

	UTimerObject_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.GetElapsedTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF1C0              		 offset:31cf1c0                       

float UTimerObject::GetElapsedTimePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.GetElapsedTimePercent"));

	UTimerObject_GetElapsedTimePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.GetElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF190              		 offset:31cf190                       

float UTimerObject::GetElapsedTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.GetElapsedTime"));

	UTimerObject_GetElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF160              		 offset:31cf160                       

float UTimerObject::GetDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.GetDuration"));

	UTimerObject_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.CreateTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTimerObject*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF0E0              		 offset:31cf0e0                       

class UTimerObject* UTimerObject::STATIC_CreateTimer(class AActor** Owner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.CreateTimer"));

	UTimerObject_CreateTimer_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SystemUtilities.TimerObject.Authority_Unpause
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6822DF0C0              		 offset:31cf0c0                       

void UTimerObject::Authority_Unpause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.Authority_Unpause"));

	UTimerObject_Authority_Unpause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemUtilities.TimerObject.Authority_Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822DF040              		 offset:31cf040                       

void UTimerObject::Authority_Start(float* Duration)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.Authority_Start"));

	UTimerObject_Authority_Start_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemUtilities.TimerObject.Authority_SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          paused                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822DEFB0              		 offset:31cefb0                       

void UTimerObject::Authority_SetPaused(bool* paused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.Authority_SetPaused"));

	UTimerObject_Authority_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemUtilities.TimerObject.Authority_Pause
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6822DEF90              		 offset:31cef90                       

void UTimerObject::Authority_Pause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.Authority_Pause"));

	UTimerObject_Authority_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SystemUtilities.TimerObject.Authority_Clear
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6822DEF70              		 offset:31cef70                       

void UTimerObject::Authority_Clear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SystemUtilities.TimerObject.Authority_Clear"));

	UTimerObject_Authority_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
