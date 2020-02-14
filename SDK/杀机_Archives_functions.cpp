// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Archives_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UAfterExitOpenQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UAfterExitOpenQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UBloodPointsQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UBloodPointsQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UCustomValuePercentQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UCustomValuePercentQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UCustomValueQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UCustomValueQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UDoBeforeHookQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UDoBeforeHookQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UDuringEndGameCollapseQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UDuringEndGameCollapseQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UEarnEmblemQualityQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UEarnEmblemQualityQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UEventInTimeQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UEventInTimeQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UNearKillerQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UNearKillerQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UHideNearKillerQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UHideNearKillerQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void USurvivorHookSameTimeQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	USurvivorHookSameTimeQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UHookSameTimeBasementQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UHookSameTimeBasementQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UInLockerNearKillerQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UInLockerNearKillerQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UInstigatorHookCountQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UInstigatorHookCountQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UInstigatorInBasementQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UInstigatorInBasementQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UInstigatorInBasementPercentQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UInstigatorInBasementPercentQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UItemConsumedQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UItemConsumedQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UItemPerformedQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UItemPerformedQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UItemPerformedPercentQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UItemPerformedPercentQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void ULivingSurvivorsCountQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	ULivingSurvivorsCountQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archives.QuestEventsHandler.OnPlayergameStateChanged
// (Final, Native, Private)
// Parameters:
// EGameState*                    GameState                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800CFF90              		 offset:fbff90                        

void UQuestEventsHandler::OnPlayergameStateChanged(EGameState* GameState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.OnPlayergameStateChanged"));

	UQuestEventsHandler_OnPlayergameStateChanged_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archives.QuestEventsHandler.OnGameEnded
// (Final, Native, Private)
// Parameters:
// EEndGameReason*                Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800CFCF0              		 offset:fbfcf0                        

void UQuestEventsHandler::OnGameEnded(EEndGameReason* Reason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.OnGameEnded"));

	UQuestEventsHandler_OnGameEnded_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archives.QuestEventsHandler.OnFinishedPlaying
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800CFBE0              		 offset:fbfbe0                        

void UQuestEventsHandler::OnFinishedPlaying(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.OnFinishedPlaying"));

	UQuestEventsHandler_OnFinishedPlaying_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
// (Final, Exec, Native, Public)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UQuestEventsHandler::DBD_ShowInGameCurrentQuestInfos()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos"));

	UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
// (Final, Exec, Native, Public)
// Parameters:
// int*                           amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800CF340              		 offset:fbf340                        

void UQuestEventsHandler::DBD_InGameAddProgressionToCurrentQuest(int* amount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest"));

	UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void USkillCheckConsecutiveQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	USkillCheckConsecutiveQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void USlasherIsCarryingQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	USlasherIsCarryingQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UTargetInBasementQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UTargetInBasementQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag*           gameEventType                  (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68074EA70              		 offset:163ea70                       

void UTargetIsObsessionQEEvaluator::OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent"));

	UTargetIsObsessionQEEvaluator_OnGameEvent_Params params;
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
