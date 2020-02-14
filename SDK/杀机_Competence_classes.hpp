#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Competence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Competence.BaseModifierContainer
// 0x0020 (0x0120 - 0x0100)
class UBaseModifierContainer : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0100(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class UEventDrivenModifierCondition*               _eventDrivenCondition;                                    // 0x0118(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.BaseModifierContainer"));

		return ptr;
	}


	bool IsApplicable();
	class UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(class UClass** conditionType);
	void Authority_OnInstantiateModifierConditions();
};


// Class Competence.BaseModifierCondition
// 0x0018 (0x0118 - 0x0100)
class UBaseModifierCondition : public UActorComponent
{
public:
	class UBaseModifierContainer*                      _owningModifier;                                          // 0x0100(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UModifierSubjectProvider*                    _subjectProvider;                                         // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      _subjectProviderClass;                                    // 0x0110(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.BaseModifierCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class Competence.EventDrivenModifierCondition
// 0x0018 (0x0130 - 0x0118)
class UEventDrivenModifierCondition : public UBaseModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.EventDrivenModifierCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class Competence.ModifierSubjectProvider
// 0x0018 (0x0048 - 0x0030)
class UModifierSubjectProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.ModifierSubjectProvider"));

		return ptr;
	}

};


// Class Competence.RangeBasedCondition
// 0x0008 (0x0138 - 0x0130)
class URangeBasedCondition : public UEventDrivenModifierCondition
{
public:
	float                                              _range;                                                   // 0x0130(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.RangeBasedCondition"));

		return ptr;
	}


	void OnRep_Range();
};


// Class Competence.CompositeModifierCondition
// 0x0018 (0x0148 - 0x0130)
class UCompositeModifierCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	TArray<class UEventDrivenModifierCondition*>       _conditions;                                              // 0x0138(0x0010) (ExportObject, Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.CompositeModifierCondition"));

		return ptr;
	}


	void OnRep_Conditions();
};


// Class Competence.AndModifierCondition
// 0x0000 (0x0148 - 0x0148)
class UAndModifierCondition : public UCompositeModifierCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.AndModifierCondition"));

		return ptr;
	}


	void OnRep_Conditions();
};


// Class Competence.CompetenceDebugger
// 0x0020 (0x0050 - 0x0030)
class UCompetenceDebugger : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.CompetenceDebugger"));

		return ptr;
	}

};


// Class Competence.ConditionFactory
// 0x0000 (0x0030 - 0x0030)
class UConditionFactory : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.ConditionFactory"));

		return ptr;
	}

};


// Class Competence.HasObjectState
// 0x0038 (0x0168 - 0x0130)
class UHasObjectState : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTag                                _state;                                                   // 0x0130(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x013C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.HasObjectState"));

		return ptr;
	}


	void SetState(struct FGameplayTag* State);
};


// Class Competence.CompetenceFlagProvider
// 0x0000 (0x0030 - 0x0030)
class UCompetenceFlagProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.CompetenceFlagProvider"));

		return ptr;
	}

};


// Class Competence.ConditionReceiver
// 0x0000 (0x0030 - 0x0030)
class UConditionReceiver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.ConditionReceiver"));

		return ptr;
	}

};


// Class Competence.ModifierProvider
// 0x0000 (0x0030 - 0x0030)
class UModifierProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.ModifierProvider"));

		return ptr;
	}

};


// Class Competence.IsTimerDoneCondition
// 0x0010 (0x0140 - 0x0130)
class UIsTimerDoneCondition : public UEventDrivenModifierCondition
{
public:
	class UTimerObject*                                _timer;                                                   // 0x0130(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.IsTimerDoneCondition"));

		return ptr;
	}


	void SetTimer(class UTimerObject** Timer);
	void OnRep_Timer();
};


// Class Competence.NotModifierCondition
// 0x0010 (0x0140 - 0x0130)
class UNotModifierCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	class UEventDrivenModifierCondition*               _condition;                                               // 0x0138(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.NotModifierCondition"));

		return ptr;
	}


	void OnRep_Condition();
};


// Class Competence.OrModifierCondition
// 0x0000 (0x0148 - 0x0148)
class UOrModifierCondition : public UCompositeModifierCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.OrModifierCondition"));

		return ptr;
	}


	void OnRep_Conditions();
};


// Class Competence.OwnerSubjectProvider
// 0x0000 (0x0048 - 0x0048)
class UOwnerSubjectProvider : public UModifierSubjectProvider
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.OwnerSubjectProvider"));

		return ptr;
	}

};


// Class Competence.TestEventDrivenModifierCondition
// 0x0000 (0x0130 - 0x0130)
class UTestEventDrivenModifierCondition : public UEventDrivenModifierCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.TestEventDrivenModifierCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class Competence.TestObjectStateProviderComponent
// 0x0010 (0x0110 - 0x0100)
class UTestObjectStateProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class UGameplayTagContainerComponent*              GameplayTagContainerComponent;                            // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Competence.TestObjectStateProviderComponent"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
