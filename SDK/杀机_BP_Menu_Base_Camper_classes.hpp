#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_Base_Camper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
// 0x0039 (0x0889 - 0x0850)
class ABP_Menu_Base_Camper_C : public ADBDMenuPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCharmSpawnerComponent*                      CharmSpawner;                                             // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCustomizedAudioComponent*                   CustomizedAudio;                                          // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Audio_Menu_Base_Camper;                                // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                   // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1;       // 0x0878(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1;     // 0x087C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Dissolve;                                                 // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Destroying;                                               // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C"));

		return ptr;
	}


	class UCharmSpawnerComponent* GetCharmSpawnerComponent();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory* Category, struct FString* switchState);
	void BeginDestroySequence_Internal();
	void BeginSmokeIn();
	void RestartInSequence_Internal();
	void ExecuteUbergraph_BP_Menu_Base_Camper(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
