#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_SK_Armor_ACC00_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SK_Armor_ACC00.BP_SK_Armor_ACC00_C
// 0x0008 (0x03D0 - 0x03C8)
class ABP_SK_Armor_ACC00_C : public AItemBlueprint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SK_Armor_ACC00.BP_SK_Armor_ACC00_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SK_Armor_ACC00(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
