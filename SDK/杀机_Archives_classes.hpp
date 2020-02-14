#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Archives_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Archives.AfterExitOpenQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.AfterExitOpenQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.BloodPointsQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UBloodPointsQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.BloodPointsQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.CustomDistanceEvaluatorCondition
// 0x0008 (0x0050 - 0x0048)
class UCustomDistanceEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.CustomDistanceEvaluatorCondition"));

		return ptr;
	}

};


// Class Archives.CustomValuePercentQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UCustomValuePercentQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.CustomValuePercentQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.CustomValueQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.CustomValueQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.DoBeforeHookQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.DoBeforeHookQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.DuringEndGameCollapseQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.DuringEndGameCollapseQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.EarnEmblemQualityQEEvaluator
// 0x0010 (0x00A0 - 0x0090)
class UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.EarnEmblemQualityQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.EventInTimeQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class UEventInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.EventInTimeQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.HasEventHappenedEvaluatorCondition
// 0x0010 (0x0058 - 0x0048)
class UHasEventHappenedEvaluatorCondition : public UEvaluatorCondition
{
public:
	struct FGameplayTag                                _firstGameEvent;                                          // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.HasEventHappenedEvaluatorCondition"));

		return ptr;
	}

};


// Class Archives.HasGameplayTagEvaluatorCondition
// 0x0010 (0x0058 - 0x0048)
class UHasGameplayTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FGameplayTag>                        _gameplayTagList;                                         // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.HasGameplayTagEvaluatorCondition"));

		return ptr;
	}

};


// Class Archives.NearKillerQEEvaluator
// 0x0030 (0x00C0 - 0x0090)
class UNearKillerQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.NearKillerQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.HideNearKillerQEEvaluator
// 0x0028 (0x00E8 - 0x00C0)
class UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.HideNearKillerQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.SurvivorHookSameTimeQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.SurvivorHookSameTimeQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.HookSameTimeBasementQEEvaluator
// 0x0000 (0x0098 - 0x0098)
class UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.HookSameTimeBasementQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.InflictMadnessBaseQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class UInflictMadnessBaseQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	int                                                _requiredTier;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.InflictMadnessBaseQEEvaluator"));

		return ptr;
	}

};


// Class Archives.InLockerNearKillerQEEvaluator
// 0x0008 (0x00C8 - 0x00C0)
class UInLockerNearKillerQEEvaluator : public UNearKillerQEEvaluator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.InLockerNearKillerQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.InstigatorHookCountQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class UInstigatorHookCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.InstigatorHookCountQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.InstigatorInBasementQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UInstigatorInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.InstigatorInBasementQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.InstigatorInBasementPercentQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UInstigatorInBasementPercentQEEvaluator : public UInstigatorInBasementQEEvaluator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.InstigatorInBasementPercentQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.ItemConsumedQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.ItemConsumedQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.ItemPerformedQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UItemPerformedQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.ItemPerformedQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.ItemPerformedPercentQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UItemPerformedPercentQEEvaluator : public UItemPerformedQEEvaluator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.ItemPerformedPercentQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.LivingSurvivorsCountQEEvaluator
// 0x0010 (0x00A0 - 0x0090)
class ULivingSurvivorsCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.LivingSurvivorsCountQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.MaxSameTargetQEEvaluator
// 0x0050 (0x00E0 - 0x0090)
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TMap<TWeakObjectPtr<class AActor>, int>            _targetList;                                              // 0x0090(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.MaxSameTargetQEEvaluator"));

		return ptr;
	}

};


// Class Archives.NearMeEvaluatorCondition
// 0x0008 (0x0050 - 0x0048)
class UNearMeEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.NearMeEvaluatorCondition"));

		return ptr;
	}

};


// Class Archives.QuestEventsHandler
// 0x0048 (0x0148 - 0x0100)
class UQuestEventsHandler : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	TArray<class UQuestEventEvaluatorBase*>            _evaluatorList;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.QuestEventsHandler"));

		return ptr;
	}


	void OnPlayergameStateChanged(EGameState* GameState);
	void OnGameEnded(EEndGameReason* Reason);
	void OnFinishedPlaying(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
	void DBD_ShowInGameCurrentQuestInfos();
	void DBD_InGameAddProgressionToCurrentQuest(int* amount);
};


// Class Archives.QuestEventsHandlerTest
// 0x0008 (0x0150 - 0x0148)
class UQuestEventsHandlerTest : public UQuestEventsHandler
{
public:
	class ADBDPlayer*                                  _dbdPlayer;                                               // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.QuestEventsHandlerTest"));

		return ptr;
	}

};


// Class Archives.QuestEventsHandlerUtilities
// 0x0000 (0x0030 - 0x0030)
class UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.QuestEventsHandlerUtilities"));

		return ptr;
	}

};


// Class Archives.ReturnTheFavorQEEvaluator
// 0x0050 (0x00E0 - 0x0090)
class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty Archives.ReturnTheFavorQEEvaluator._instigatorList

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.ReturnTheFavorQEEvaluator"));

		return ptr;
	}

};


// Class Archives.SkillCheckConsecutiveQEEvaluator
// 0x0008 (0x0098 - 0x0090)
class USkillCheckConsecutiveQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.SkillCheckConsecutiveQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.SlasherIsCarryingQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class USlasherIsCarryingQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.SlasherIsCarryingQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.StateTagEvaluatorCondition
// 0x0010 (0x0058 - 0x0048)
class UStateTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	struct FGameplayTag                                _gameplayTag;                                             // 0x0048(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.StateTagEvaluatorCondition"));

		return ptr;
	}

};


// Class Archives.TargetInBasementQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UTargetInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.TargetInBasementQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.TargetIsObsessionQEEvaluator
// 0x0000 (0x0090 - 0x0090)
class UTargetIsObsessionQEEvaluator : public UQuestEventEvaluatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.TargetIsObsessionQEEvaluator"));

		return ptr;
	}


	void OnGameEvent(struct FGameplayTag* gameEventType, struct FGameEventData* GameEventData);
};


// Class Archives.UniqueTargetIncrementQEEvaluator
// 0x0050 (0x00E0 - 0x0090)
class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty Archives.UniqueTargetIncrementQEEvaluator._targetList

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Archives.UniqueTargetIncrementQEEvaluator"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
