#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_BaseSlasher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C
// 0x0058 (0x08A8 - 0x0850)
class ABP_Menu_BaseSlasher_C : public ADBDMenuPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCustomizedAudioComponent*                   CustomizedAudio;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                   // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Audio_Menu_Base_Slasher;                               // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Dissolve_6A8353EF46DC9749463CE0935534B1A4;     // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6A8353EF46DC9749463CE0935534B1A4;   // 0x0874(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsInMenu;                                                 // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0881(0x0010) UNKNOWN PROPERTY: ArrayProperty BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RequiredSoundBanks
	TArray<class UObject*>                             AssignedSoundBanks;                                       // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C"));

		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginDestroySequence_Internal();
	void BeginSmokeIn();
	void RestartInSequence_Internal();
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory* Category, struct FString* switchState);
	void ExecuteUbergraph_BP_Menu_BaseSlasher(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
