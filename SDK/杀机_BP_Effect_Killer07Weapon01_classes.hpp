#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Effect_Killer07Weapon01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C
// 0x0013 (0x037C - 0x0369)
class ABP_Effect_Killer07Weapon01_C : public ABP_BaseItemVfx_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalTime;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C"));

		return ptr;
	}


	void AttachToSkeletalMesh(class USkeletalMeshComponent** SkeletonPart);
	void OnAttackBegin();
	void OnAttackEnd();
	void ExecuteUbergraph_BP_Effect_Killer07Weapon01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
