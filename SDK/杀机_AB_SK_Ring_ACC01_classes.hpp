#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_SK_Ring_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C
// 0x0810 (0x0A80 - 0x0270)
class UAB_SK_Ring_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DCC6D14B4C152EA72283C6ACAC0BEF90;      // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_A9C7FC1749588568F9402EBA1A69B74E;// 0x0298(0x0138)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7ECA85554AAE95352D3B0CA54BEFB654;// 0x03D0(0x0330)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_526668224FEA7E5F29581E85853BFE6A;// 0x0700(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8758C8E7499C251A166FEF9023BFD59C;// 0x0720(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AE6F3D6B4EE867AEC84C0EA4AA589051;// 0x0740(0x0330)
	bool                                               Initialized;                                              // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_SK_Ring_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
