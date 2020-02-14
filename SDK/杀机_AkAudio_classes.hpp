#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAcousticPortal
// 0x0090 (0x0408 - 0x0378)
class AAkAcousticPortal : public AVolume
{
public:
	EAkAcousticPortalState                             InitialState;                                             // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              ObstructionRefreshInterval;                               // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                              // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x87];                                      // 0x0381(0x0087) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAcousticPortal"));

		return ptr;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkPortalComponent
// 0x0000 (0x0270 - 0x0270)
class UAkPortalComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkPortalComponent"));

		return ptr;
	}


	void ToggleVisibility(bool* bPropagateToChildren);
	bool SnapTo(class USceneComponent** InParent, struct FName* InSocketName);
	void SetWorldScale3D(struct FVector* NewScale);
	void SetVisibility(bool* bNewVisibility, bool* bPropagateToChildren);
	void SetSkipComponentAndChildrenTransformUpdate(bool* value);
	void SetShouldUpdatePhysicsVolume(bool* bInShouldUpdatePhysicsVolume);
	void SetRelativeScale3D(struct FVector* NewScale3D);
	void SetMobility(TEnumAsByte<EComponentMobility>* NewMobility);
	void SetHiddenInGame(bool* NewHidden, bool* bPropagateToChildren);
	void SetAbsolute(bool* bNewAbsoluteLocation, bool* bNewAbsoluteRotation, bool* bNewAbsoluteScale);
	void ResetRelativeTransform();
	void OnRep_Visibility(bool* oldValue);
	void OnRep_Transform();
	void OnRep_RelativeRotation();
	void OnRep_RelativeLocation();
	void OnRep_AttachSocketName();
	void OnRep_AttachParent();
	void OnRep_AttachChildren();
	void K2_SetWorldTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldRotation(struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetWorldLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeRotation(struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetRelativeLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	struct FTransform K2_GetComponentToWorld();
	struct FVector K2_GetComponentScale();
	struct FRotator K2_GetComponentRotation();
	struct FVector K2_GetComponentLocation();
	void K2_DetachFromComponent(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule, bool* bCallModify);
	bool K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	bool K2_AttachTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachType, bool* bWeldSimulatedBodies);
	void K2_AddWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddRelativeLocation(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool IsVisible();
	bool IsSimulatingPhysics(struct FName* BoneName);
	bool IsAnySimulatingPhysics();
	struct FVector GetUpVector();
	struct FTransform GetSocketTransform(struct FName* InSocketName, TEnumAsByte<ERelativeTransformSpace>* TransformSpace);
	struct FRotator GetSocketRotation(struct FName* InSocketName);
	struct FQuat GetSocketQuaternion(struct FName* InSocketName);
	struct FVector GetSocketLocation(struct FName* InSocketName);
	bool GetSkipComponentAndChildrenTransformUpdate();
	bool GetShouldUpdatePhysicsVolume();
	struct FVector GetRightVector();
	struct FTransform GetRelativeTransform();
	class APhysicsVolume* GetPhysicsVolume();
	void GetParentComponents(TArray<class USceneComponent*>* Parents);
	int GetNumChildrenComponents();
	struct FVector GetForwardVector();
	struct FVector GetComponentVelocity();
	void GetChildrenComponents(bool* bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	class USceneComponent* GetChildComponent(int* ChildIndex);
	struct FName GetAttachSocketName();
	class USceneComponent* GetAttachParent();
	TArray<struct FName> GetAllSocketNames();
	bool DoesSocketExist(struct FName* InSocketName);
	void DetachFromParent(bool* bMaintainWorldPosition, bool* bCallModify);
};


// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0090 - 0x0090)
class UAkAcousticTexture : public UPhysicalMaterial
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAcousticTexture"));

		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0040 (0x0380 - 0x0340)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0340(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x0352(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAmbientSound"));

		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAndroidInitializationSettings
// 0x00D0 (0x0100 - 0x0030)
class UAkAndroidInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkAndroidAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00C8(0x0038) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAndroidInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0038 - 0x0030)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioBank"));

		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0048 - 0x0030)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x01F0 (0x0460 - 0x0270)
class UAkComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0295(0x0007) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x029C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	float                                              roomReverbAuxBusGain;                                     // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                diffractionMaxEdges;                                      // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                diffractionMaxPaths;                                      // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              diffractionMaxPathLength;                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x02B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x02B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x02B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawDiffraction : 1;                                      // 0x02B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x02B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseReverbVolumes;                                        // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTransmitRelativeAngle;                              // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02C2(0x0002) MISSED OFFSET
	float                                              OcclusionAffect;                                          // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData06[0x178];                                     // 0x02E8(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkComponent"));

		return ptr;
	}


	void UseReverbVolumes(bool* inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, struct FString* AuxBusName);
	void Stop();
	void SetUseSpatialAudio(bool* bNewValue);
	void SetSwitch(struct FString* SwitchGroup, struct FString* switchState);
	void SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed);
	void SetRTPCValue(struct FString* RTPC, float* value, int* InterpolationTimeMs);
	void SetOutputBusVolume(float* BusVolume);
	void SetListeners(TArray<class UAkComponent*>* Listeners);
	void SetAttenuationScalingFactor(float* value);
	void PostTrigger(struct FString* Trigger);
	int PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo* LatentInfo);
	int PostAssociatedAkEvent(int* CallbackMask, struct FScriptDelegate* PostEventCallback);
	int PostAkEventByName(struct FString* in_EventName);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent** AkEvent, struct FString* in_EventName, struct FLatentActionInfo* LatentInfo);
	int PostAkEvent(class UAkAudioEvent** AkEvent, int* CallbackMask, struct FScriptDelegate* PostEventCallback, struct FString* in_EventName);
	void GetRTPCValue(struct FString* RTPC, int* PlayingID, ERTPCValueType* InputValueType, float* value, ERTPCValueType* OutputValueType);
	float GetAttenuationRadius();
};


// Class AkAudio.AkAudioInputComponent
// 0x0010 (0x0470 - 0x0460)
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAudioInputComponent"));

		return ptr;
	}


	void UseReverbVolumes(bool* inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, struct FString* AuxBusName);
	void Stop();
	void SetUseSpatialAudio(bool* bNewValue);
	void SetSwitch(struct FString* SwitchGroup, struct FString* switchState);
	void SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed);
	void SetRTPCValue(struct FString* RTPC, float* value, int* InterpolationTimeMs);
	void SetOutputBusVolume(float* BusVolume);
	void SetListeners(TArray<class UAkComponent*>* Listeners);
	void SetAttenuationScalingFactor(float* value);
	void PostTrigger(struct FString* Trigger);
	int PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo* LatentInfo);
	int PostAssociatedAkEvent(int* CallbackMask, struct FScriptDelegate* PostEventCallback);
	int PostAkEventByName(struct FString* in_EventName);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent** AkEvent, struct FString* in_EventName, struct FLatentActionInfo* LatentInfo);
	int PostAkEvent(class UAkAudioEvent** AkEvent, int* CallbackMask, struct FScriptDelegate* PostEventCallback, struct FString* in_EventName);
	void GetRTPCValue(struct FString* RTPC, int* PlayingID, ERTPCValueType* InputValueType, float* value, ERTPCValueType* OutputValueType);
	float GetAttenuationRadius();
};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0040 - 0x0030)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkAuxBus"));

		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x0970 (0x0AB0 - 0x0140)
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0140(0x02A0) MISSED OFFSET
	ECheckBoxState                                     CheckedState;                                             // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x03E4(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E1(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x03F8(0x05E0) (Edit, BlueprintVisible)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x09D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x09D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x09DA(0x0006) MISSED OFFSET
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                     // 0x09E0(0x0010) (Edit)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x09F0(0x0040) (Edit, Config, EditConst)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                    // 0x0A30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x0A40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x0A50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0A60(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkCheckBox"));

		return ptr;
	}


	void SetIsChecked(bool* InIsChecked);
	void SetCheckedState(ECheckBoxState* InCheckedState);
	void SetAkItemId(struct FGuid* ItemId);
	void SetAkBoolProperty(struct FString* ItemProperty);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0030 - 0x0030)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkGameplayStatics"));

		return ptr;
	}

};


// Class AkAudio.AkCallbackInfo
// 0x0008 (0x0038 - 0x0030)
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkCallbackInfo"));

		return ptr;
	}

};


// Class AkAudio.AkEventCallbackInfo
// 0x0008 (0x0040 - 0x0038)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventId;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkEventCallbackInfo"));

		return ptr;
	}

};


// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (0x0048 - 0x0040)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkMIDIEventCallbackInfo"));

		return ptr;
	}

};


// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (0x0058 - 0x0040)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Position;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkMarkerCallbackInfo"));

		return ptr;
	}

};


// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (0x0058 - 0x0040)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedDuration;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AudioNodeID;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MediaID;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStreaming;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkDurationCallbackInfo"));

		return ptr;
	}

};


// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (0x0078 - 0x0038)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAkSegmentInfo                              SegmentInfo;                                              // 0x003C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	EAkCallbackType                                    MusicSyncType;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     UserCueName;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkMusicSyncCallbackInfo"));

		return ptr;
	}

};


// Class AkAudio.AkIOSInitializationSettings
// 0x00D8 (0x0108 - 0x0030)
class UAkIOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkAudioSession                             AudioSession;                                             // 0x00A0(0x000C) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00B0(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                         // 0x00D8(0x0030) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkIOSInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0030 - 0x0030)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemBoolPropertiesConv"));

		return ptr;
	}

};


// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0168 - 0x0128)
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0148(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemBoolProperties"));

		return ptr;
	}


	void SetSearchText(struct FString* newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0030 - 0x0030)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemPropertiesConv"));

		return ptr;
	}

};


// Class AkAudio.AkItemProperties
// 0x0040 (0x0168 - 0x0128)
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0148(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkItemProperties"));

		return ptr;
	}


	void SetSearchText(struct FString* newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkLateReverbComponent
// 0x0040 (0x02B0 - 0x0270)
class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                               // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkLateReverbComponent"));

		return ptr;
	}

};


// Class AkAudio.AkLinuxInitializationSettings
// 0x00D0 (0x0100 - 0x0030)
class UAkLinuxInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00C8(0x0034) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkLinuxInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkLuminInitializationSettings
// 0x00D0 (0x0100 - 0x0030)
class UAkLuminInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00C8(0x0034) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkLuminInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkMacInitializationSettings
// 0x00D0 (0x0100 - 0x0030)
class UAkMacInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00C8(0x0034) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkMacInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkPS4InitializationSettings
// 0x00D0 (0x0100 - 0x0030)
class UAkPS4InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                           // 0x0030(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0098(0x0028) (Edit, Config)
	struct FAkPS4AdvancedInitializationSettings        AdvancedSettings;                                         // 0x00C0(0x003C) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkPS4InitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x03B0 - 0x0378)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0378(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0388(0x0010) (ZeroConstructor, Deprecated)
	float                                              SendLevel;                                                // 0x0398(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x039C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Priority;                                                 // 0x03A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkReverbVolume"));

		return ptr;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0020 (0x0290 - 0x0270)
class UAkRoomComponent : public USceneComponent
{
public:
	class UAkRoomComponent*                            NextLowerPriorityComponent;                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Priority;                                                 // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallOcclusion;                                            // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkRoomComponent"));

		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0090 (0x00C0 - 0x0030)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0038(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseSoundBankFolder;                                     // 0x0048(0x0010) (Edit, Config)
	bool                                               bAutoConnectToWAAPI;                                      // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                         // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableMultiCoreRendering;                                // 0x005A(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	bool                                               MigratedEnableMultiCoreRendering;                         // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0060(0x0010) (Config, Deprecated)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0070(0x0010) (Config, Deprecated)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettings"));

		return ptr;
	}

};


// Class AkAudio.AkSettingsPerUser
// 0x0028 (0x0058 - 0x0030)
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0030(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0040(0x0010) (Edit, Config)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSettingsPerUser"));

		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x0458 (0x0580 - 0x0128)
class UAkSlider : public UWidget
{
public:
	float                                              value;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x012C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSliderStyle                                WidgetStyle;                                              // 0x0140(0x0370) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x04B4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x04C4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               locked;                                                   // 0x04D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04D6(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x04DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	struct FAkPropertyToControl                        ThePropertyToControl;                                     // 0x04E0(0x0010) (Edit, EditConst)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x04F0(0x0040) (Edit, Config, EditConst)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0560(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSlider"));

		return ptr;
	}


	void SetValue(float* InValue);
	void SetStepSize(float* InValue);
	void SetSliderHandleColor(struct FLinearColor* InValue);
	void SetSliderBarColor(struct FLinearColor* InValue);
	void SetLocked(bool* InValue);
	void SetIndentHandle(bool* InValue);
	void SetAkSliderItemProperty(struct FString* ItemProperty);
	void SetAkSliderItemId(struct FGuid* ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};


// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0390 - 0x0378)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkRoomComponent*                            Room;                                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSpatialAudioVolume"));

		return ptr;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0030 (0x0370 - 0x0340)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScalingFactor;                                    // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSpotReflector"));

		return ptr;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0030 (0x02A0 - 0x0270)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class AActor*                                      AssociatedRoom;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSurfaceReflectorSetComponent"));

		return ptr;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AkSwitchInitializationSettings
// 0x00C8 (0x00F8 - 0x0030)
class UAkSwitchInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkCommunicationSettings                    CommunicationSettings;                                    // 0x00A0(0x0020) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00C0(0x0034) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkSwitchInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0030 - 0x0030)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkWaapiCalls"));

		return ptr;
	}

};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0030 - 0x0030)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.SAkWaapiFieldNamesConv"));

		return ptr;
	}

};


// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0030 - 0x0030)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkWaapiJsonManager"));

		return ptr;
	}

};


// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0030 - 0x0030)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkWaapiUriConv"));

		return ptr;
	}

};


// Class AkAudio.AkWindowsInitializationSettings
// 0x00D8 (0x0108 - 0x0030)
class UAkWindowsInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0030(0x0070) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkWindowsAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00C8(0x003C) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkWindowsInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.AkWwiseTree
// 0x0040 (0x0168 - 0x0128)
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0148(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkWwiseTree"));

		return ptr;
	}


	void SetSearchText(struct FString* newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0188 - 0x0128)
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0148(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkWwiseTreeSelector"));

		return ptr;
	}

};


// Class AkAudio.AkXBoxOneInitializationSettings
// 0x00D8 (0x0108 - 0x0030)
class UAkXBoxOneInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                           // 0x0030(0x0068) (Edit, Config)
	struct FAkXBoxOneApuHeapInitializationSettings     ApuHeapSettings;                                          // 0x0098(0x0008) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkXBoxOneAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00C8(0x003C) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.AkXBoxOneInitializationSettings"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioEvent"));

		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.InterpTrackInstAkAudioRTPC"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E8(0x0040) MISSED OFFSET
	class UAkAudioEvent*                               Event;                                                    // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RetriggerEvent;                                           // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                ScrubTailLengthMs;                                        // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopAtSectionEnd;                                         // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0140(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0150(0x0020) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x0170(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FString                                     MaxDurationSourceID;                                      // 0x0178(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0188(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventSection"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x0078 - 0x0060)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0060(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkTrack"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioEventTrack"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0160 (0x0248 - 0x00E8)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	struct FString                                     Name;                                                     // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00F8(0x0080)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                          // 0x0178(0x0030)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x01A8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCSection"));

		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AkAudio.MovieSceneAkAudioRTPCTrack"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
