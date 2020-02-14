#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LuckProficiency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LuckProficiency.LuckProficiency_C
// 0x0000 (0x0048 - 0x0048)
class ULuckProficiency_C : public UInteractionProficiency
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LuckProficiency.LuckProficiency_C"));

		return ptr;
	}


	float GetValue(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player);
	EStatusEffectType GetType(float* value);
	int GetLevel(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player);
	bool GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
