#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_RedStainComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RedStainComponent.BP_RedStainComponent_C
// 0x0000 (0x0410 - 0x0410)
class UBP_RedStainComponent_C : public URedStainComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_RedStainComponent.BP_RedStainComponent_C"));

		return ptr;
	}


	void UpdateRedStain(bool* shouldBeHidden, float* Alpha);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
