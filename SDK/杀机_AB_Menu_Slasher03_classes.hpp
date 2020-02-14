#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher03.AB_Menu_Slasher03_C
// 0x0392 (0x0602 - 0x0270)
class UAB_Menu_Slasher03_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0E2A15245524EEE1FF8E8BB897F84DE;      // 0x0278(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_672A83584167DE6871408E9D0B1F091D;// 0x0298(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7604F1F24A4545BE8CA4FF94FA5AB714;// 0x0300(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CAFF3C25463CC57BE93826B54D14E96E;// 0x0378(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_05E893B548EDEB5F0B0AB7AB00C6F716;// 0x0418(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67AEB8804BDFBF92FED4E1960C86BE1F;// 0x04B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D34A83FC420A2A90D74C53A3E5954FB0;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF9A2086413A9E5C471078AE12007DEC;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher03.AB_Menu_Slasher03_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher03(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
