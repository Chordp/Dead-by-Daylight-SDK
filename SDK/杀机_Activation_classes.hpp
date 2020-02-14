#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Activation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Activation.ActivatableMock
// 0x0050 (0x0150 - 0x0100)
class UActivatableMock : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Activation.ActivatableMock"));

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


// Class Activation.ActivatorComponent
// 0x0018 (0x0118 - 0x0100)
class UActivatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Activation.ActivatorComponent"));

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


// Class Activation.Activatable
// 0x0000 (0x0030 - 0x0030)
class UActivatable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Activation.Activatable"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
