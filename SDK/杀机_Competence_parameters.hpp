#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Competence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Competence.BaseModifierContainer.IsApplicable
struct UBaseModifierContainer_IsApplicable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
struct UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params
{
	class UClass**                                     conditionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEventDrivenModifierCondition*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
struct UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params
{
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UBaseModifierCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UBaseModifierCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UBaseModifierCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UBaseModifierCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UBaseModifierCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UEventDrivenModifierCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UEventDrivenModifierCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UEventDrivenModifierCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UEventDrivenModifierCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UEventDrivenModifierCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.RangeBasedCondition.OnRep_Range
struct URangeBasedCondition_OnRep_Range_Params
{
};

// Function Competence.CompositeModifierCondition.OnRep_Conditions
struct UCompositeModifierCondition_OnRep_Conditions_Params
{
};

// Function Competence.CompositeModifierCondition.OnRep_Conditions
struct UAndModifierCondition_OnRep_Conditions_Params
{
};

// Function Competence.HasObjectState.SetState
struct UHasObjectState_SetState_Params
{
	struct FGameplayTag*                               State;                                                    // (Parm)
};

// Function Competence.IsTimerDoneCondition.SetTimer
struct UIsTimerDoneCondition_SetTimer_Params
{
	class UTimerObject**                               Timer;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Competence.IsTimerDoneCondition.OnRep_Timer
struct UIsTimerDoneCondition_OnRep_Timer_Params
{
};

// Function Competence.NotModifierCondition.OnRep_Condition
struct UNotModifierCondition_OnRep_Condition_Params
{
};

// Function Competence.CompositeModifierCondition.OnRep_Conditions
struct UOrModifierCondition_OnRep_Conditions_Params
{
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UTestEventDrivenModifierCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UTestEventDrivenModifierCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UTestEventDrivenModifierCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UTestEventDrivenModifierCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UTestEventDrivenModifierCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
