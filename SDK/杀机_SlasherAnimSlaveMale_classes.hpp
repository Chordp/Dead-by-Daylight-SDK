#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SlasherAnimSlaveMale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SlasherAnimSlaveMale.SlasherAnimSlaveMale_C
// 0x0168 (0x03D8 - 0x0270)
class USlasherAnimSlaveMale_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3AB31CB8402D88EF1E21D0A4175F3931;      // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09;// 0x0298(0x0138)
	class USkeletalMeshComponent*                      masterMesh;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass SlasherAnimSlaveMale.SlasherAnimSlaveMale_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SlasherAnimSlaveMale(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
