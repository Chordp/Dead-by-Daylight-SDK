#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_SK_Mask_T_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SK_Mask_T_ACC01.BP_SK_Mask_T_ACC01_C
// 0x0018 (0x03F0 - 0x03D8)
class ABP_SK_Mask_T_ACC01_C : public ABP_SK_Mask_T_ACC000_C
{
public:
	class UParticleSystemComponent*                    P_SK_Mask_Acc_Horn_001_LT;                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SK_Mask_Acc_Eyes_001;                                   // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SK_Mask_Acc_Horn_001_RT;                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SK_Mask_T_ACC01.BP_SK_Mask_T_ACC01_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
