#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GameplayTagUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayTagUtilities.DBDGameplayTagUtilities
// 0x0000 (0x0030 - 0x0030)
class UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayTagUtilities.DBDGameplayTagUtilities"));

		return ptr;
	}

};


// Class GameplayTagUtilities.GameplayTagContainerComponent
// 0x0070 (0x0170 - 0x0100)
class UGameplayTagContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayTagUtilities.GameplayTagContainerComponent"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class GameplayTagUtilities.ObjectStateProvider
// 0x0000 (0x0030 - 0x0030)
class UObjectStateProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayTagUtilities.ObjectStateProvider"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
