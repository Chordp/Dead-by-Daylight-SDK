#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_KK_W01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_KK_W01.AB_KK_W01_C
// 0x0239 (0x04A9 - 0x0270)
class UAB_KK_W01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F1F19A614BC19C6E2F67E58A96CD5A2D;      // 0x0278(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_250D20C54074728E50D0099949B5FEA5;// 0x0298(0x0010)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_869DF88E46093A902130C28762797A03;// 0x02A8(0x0110)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D4E51038459316978E244387C7C66E27;// 0x03B8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A3D80C434A7F8260E32F95A304E49213;// 0x0458(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8FAAFEFF446D1B78B05E4AA8A1E13288;// 0x0478(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_78A01B2545260FB890D96BA8D69318E9;// 0x0488(0x0020)
	bool                                               IsAttack;                                                 // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_KK_W01.AB_KK_W01_C"));

		return ptr;
	}


	bool GetLegionAttack();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_KK_W01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
