#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher17_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher17.AB_Menu_Slasher17_C
// 0x02C2 (0x0532 - 0x0270)
class UAB_Menu_Slasher17_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7BE2BCF44E0511263FEDE49E2AF1C5F7;      // 0x0278(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FC19DA754678F925F6ACAF9B3C2AE703;// 0x0298(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_413395F445E5B903FBCD0D87CC7191EF;// 0x0338(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F0BEB3274EEE1C764E87849C74A7E04F;// 0x03A0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F100B26A42ABD7759997A1A858954379;// 0x0440(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA5818A5427D259719B174A4BF5FADF9;// 0x04B8(0x0078)
	bool                                               Role_Selected;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher17.AB_Menu_Slasher17_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher17(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
