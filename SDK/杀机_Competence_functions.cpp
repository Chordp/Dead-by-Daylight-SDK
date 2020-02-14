// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Competence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Competence.BaseModifierContainer.IsApplicable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EAB10              		 offset:31dab10                       

bool UBaseModifierContainer::IsApplicable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierContainer.IsApplicable"));

	UBaseModifierContainer_IsApplicable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 conditionType                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEventDrivenModifierCondition* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6822EAA80              		 offset:31daa80                       

class UEventDrivenModifierCondition* UBaseModifierContainer::CreateAndSetEventDrivenCondition(class UClass** conditionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition"));

	UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params params;
	params.conditionType = conditionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseModifierContainer::Authority_OnInstantiateModifierConditions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions"));

	UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UBaseModifierCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UBaseModifierCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UBaseModifierCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UBaseModifierCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UBaseModifierCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UBaseModifierCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UBaseModifierCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UBaseModifierCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UBaseModifierCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UBaseModifierCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UEventDrivenModifierCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UEventDrivenModifierCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UEventDrivenModifierCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UEventDrivenModifierCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UEventDrivenModifierCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UEventDrivenModifierCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UEventDrivenModifierCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UEventDrivenModifierCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UEventDrivenModifierCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UEventDrivenModifierCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.RangeBasedCondition.OnRep_Range
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822ECCD0              		 offset:31dccd0                       

void URangeBasedCondition::OnRep_Range()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.RangeBasedCondition.OnRep_Range"));

	URangeBasedCondition_OnRep_Range_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.CompositeModifierCondition.OnRep_Conditions
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EAE60              		 offset:31dae60                       

void UCompositeModifierCondition::OnRep_Conditions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.CompositeModifierCondition.OnRep_Conditions"));

	UCompositeModifierCondition_OnRep_Conditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.CompositeModifierCondition.OnRep_Conditions
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EAE60              		 offset:31dae60                       

void UAndModifierCondition::OnRep_Conditions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.CompositeModifierCondition.OnRep_Conditions"));

	UAndModifierCondition_OnRep_Conditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.HasObjectState.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           State                          (Parm)
// FunctionAddress:0x00007FF6822EBF50              		 offset:31dbf50                       

void UHasObjectState::SetState(struct FGameplayTag* State)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.HasObjectState.SetState"));

	UHasObjectState_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.IsTimerDoneCondition.SetTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimerObject**           Timer                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6822EC4C0              		 offset:31dc4c0                       

void UIsTimerDoneCondition::SetTimer(class UTimerObject** Timer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.IsTimerDoneCondition.SetTimer"));

	UIsTimerDoneCondition_SetTimer_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.IsTimerDoneCondition.OnRep_Timer
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EC4A0              		 offset:31dc4a0                       

void UIsTimerDoneCondition::OnRep_Timer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.IsTimerDoneCondition.OnRep_Timer"));

	UIsTimerDoneCondition_OnRep_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.NotModifierCondition.OnRep_Condition
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EC880              		 offset:31dc880                       

void UNotModifierCondition::OnRep_Condition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.NotModifierCondition.OnRep_Condition"));

	UNotModifierCondition_OnRep_Condition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.CompositeModifierCondition.OnRep_Conditions
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EAE60              		 offset:31dae60                       

void UOrModifierCondition::OnRep_Conditions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.CompositeModifierCondition.OnRep_Conditions"));

	UOrModifierCondition_OnRep_Conditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UTestEventDrivenModifierCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UTestEventDrivenModifierCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UTestEventDrivenModifierCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UTestEventDrivenModifierCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UTestEventDrivenModifierCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UTestEventDrivenModifierCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UTestEventDrivenModifierCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UTestEventDrivenModifierCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UTestEventDrivenModifierCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UTestEventDrivenModifierCondition_GetOwningActor_Params params;

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
