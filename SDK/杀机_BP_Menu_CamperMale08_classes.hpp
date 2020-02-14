#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_CamperMale08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_CamperMale08.BP_Menu_CamperMale08_C
// 0x000F (0x0898 - 0x0889)
class ABP_Menu_CamperMale08_C : public ABP_Menu_Base_Camper_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_CamperMale08.BP_Menu_CamperMale08_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Menu_CamperMale08(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
