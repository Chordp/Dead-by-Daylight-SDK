#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_BloodwebManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BloodwebManager.BP_BloodwebManager_C
// 0x0000 (0x00D0 - 0x00D0)
class UBP_BloodwebManager_C : public UBloodwebManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BloodwebManager.BP_BloodwebManager_C"));

		return ptr;
	}


	void Init(class UDBDGameInstance** GameInstance, class UDBDDesignTunables** Tunables);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
