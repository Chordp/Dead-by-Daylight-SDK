#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheNightmare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TheNightmare.GeneratorTeleportInteraction
// 0x00B0 (0x0690 - 0x05E0)
class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x05E0(0x0038) MISSED OFFSET
	class AGenerator*                                  _selectedGenerator;                                       // 0x0618(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	class AGenerator*                                  _locallySelectedGenerator;                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0628(0x0008) MISSED OFFSET
	struct FTransform                                  _selectedTeleportLocation;                                // 0x0630(0x0030) (BlueprintVisible, Net, Transient, IsPlainOldData)
	bool                                               _isInteractionOngoing;                                    // 0x0660(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _teleportFailed;                                          // 0x0661(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0662(0x0002) MISSED OFFSET
	float                                              _bloodSpurtInterval;                                      // 0x0664(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _collisionCheckCapsuleHalfHeight;                         // 0x0668(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _collisionCheckCapsuleRadius;                             // 0x066C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     _collisionCheckLocationOffset;                            // 0x0670(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _capsuleTraceAngleIncrement;                              // 0x067C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _generatorTeleportMaxAngle;                               // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _downRaycastLength;                                       // 0x0684(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0688(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheNightmare.GeneratorTeleportInteraction"));

		return ptr;
	}


	bool TeleportPlayerToLocation(class ADBDPlayer** teleportingPlayer, struct FVector* Location, struct FRotator* Rotation);
	void StopBloodSpurts();
	void StartBloodSpurts();
	void ShowBloodSpurtsVFX();
	void Server_SetSelectedGenerator(class AGenerator** Generator);
	void OnTeleportReady();
	void OnTeleportLocationChosen(class AGenerator** Generator, struct FTransform* Location);
	void OnTeleported(struct FTransform* transformBeforeTeleport);
	void OnSelectedGeneratorSet(class AGenerator** selectedGenerator);
	void OnRep_TeleportCooldownTimer();
	void OnRep_SelectedGenerator();
	void OnLocallySelectedGeneratorSet(class AGenerator** selectedGenerator);
	void OnIntroCompleted();
	void Multicast_TeleportPlayer(struct FVector* Location, struct FRotator* Rotation);
	void Multicast_OnTeleportLocationChosen(class AGenerator** Generator, struct FTransform* Location);
	bool IsTeleportAvailable();
	void InitializeTunableValues(class ASlasherPlayer** Killer);
	class ADBDPlayer* GetOwningPlayer();
	class AGenerator* GetInlineGenerator(class ADBDPlayer** Player);
	bool CanTeleportAtGenerator(class AGenerator** Generator);
	bool Authority_TeleportPlayerToGenerator(class ADBDPlayer** playerToTeleport, class AGenerator** Generator);
	void Authority_StartTeleportCooldown(bool* teleported);
};


// Class TheNightmare.PlaceDreamPalletInteraction
// 0x0020 (0x04D0 - 0x04B0)
class UPlaceDreamPalletInteraction : public UInteractionDefinition
{
public:
	TArray<class APalletTracker*>                      _palletTrackers;                                          // 0x04B0(0x0010) (BlueprintVisible, Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	class APalletTracker*                              _closestTracker;                                          // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheNightmare.PlaceDreamPalletInteraction"));

		return ptr;
	}


	void SpawnDreamPallet(class APalletTracker** trackerAtLocation);
	void InitializeTunableValues(class ASlasherPlayer** Killer);
	class APalletTracker* GetTargetedPallet();
	bool CanSpawnDreamPalletAtTracker(class APalletTracker** tracker);
};


// Class TheNightmare.PresentationGeneratorTeleportProgressComponent
// 0x0010 (0x0110 - 0x0100)
class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheNightmare.PresentationGeneratorTeleportProgressComponent"));

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


// Class TheNightmare.SetDreamSnareInteraction
// 0x0010 (0x05F0 - 0x05E0)
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{
public:
	float                                              MaxPlacementDistance;                                     // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x05E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheNightmare.SetDreamSnareInteraction"));

		return ptr;
	}


	bool HasCancelledDreamSnare();
	float GetTrapDistanceFromControlRotation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
