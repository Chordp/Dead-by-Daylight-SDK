#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Archives_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UAfterExitOpenQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UBloodPointsQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UCustomValuePercentQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UCustomValueQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UDoBeforeHookQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UDuringEndGameCollapseQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UEarnEmblemQualityQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UEventInTimeQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UNearKillerQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UHideNearKillerQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct USurvivorHookSameTimeQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UHookSameTimeBasementQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UInLockerNearKillerQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UInstigatorHookCountQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UInstigatorInBasementQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UInstigatorInBasementPercentQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UItemConsumedQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UItemPerformedQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UItemPerformedPercentQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct ULivingSurvivorsCountQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archives.QuestEventsHandler.OnPlayergameStateChanged
struct UQuestEventsHandler_OnPlayergameStateChanged_Params
{
	EGameState*                                        GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archives.QuestEventsHandler.OnGameEnded
struct UQuestEventsHandler_OnGameEnded_Params
{
	EEndGameReason*                                    Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archives.QuestEventsHandler.OnFinishedPlaying
struct UQuestEventsHandler_OnFinishedPlaying_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
struct UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params
{
};

// Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
struct UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params
{
	int*                                               amount;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct USkillCheckConsecutiveQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct USlasherIsCarryingQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UTargetInBasementQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.QuestEventEvaluatorBase.OnGameEvent
struct UTargetIsObsessionQEEvaluator_OnGameEvent_Params
{
	struct FGameplayTag*                               gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
