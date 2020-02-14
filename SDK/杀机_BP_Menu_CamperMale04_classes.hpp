#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_CamperMale04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
// 0x001F (0x08A8 - 0x0889)
class ABP_Menu_CamperMale04_C : public ABP_Menu_Base_Camper_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427;    // 0x0898(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Cigarette__Direction_97E71C104E36EF0B3195F484D090F427;    // 0x089C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Cigarette;                                                // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C"));

		return ptr;
	}


	void Cigarette__FinishedFunc();
	void Cigarette__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BeginDestroySequence_Internal();
	void ExecuteUbergraph_BP_Menu_CamperMale04(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
