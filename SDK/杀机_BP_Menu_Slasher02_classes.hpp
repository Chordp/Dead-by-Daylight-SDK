#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_Slasher02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Slasher02.BP_Menu_Slasher02_C
// 0x0008 (0x08B0 - 0x08A8)
class ABP_Menu_Slasher02_C : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_Slasher02.BP_Menu_Slasher02_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher02(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
