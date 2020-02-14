#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher18_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher18.AB_Menu_Slasher18_C
// 0x02C2 (0x0532 - 0x0270)
class UAB_Menu_Slasher18_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_047BFE9A4DF1E22BF7F8A69EBF9446A3;      // 0x0278(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B9667A1E4C99676C5E8F02BA4FABEBF2;// 0x0298(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_EF8060264B2F7185F2C41CB0625D9B4E;// 0x0338(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7DAE1CFE42CA83D2C57109AD74A625C3;// 0x03A0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7528E1FF46AA349DA89378A4D96A8AF6;// 0x0440(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F92D22BC405ED075D06FC386C30B293D;// 0x04B8(0x0078)
	bool                                               Role_Selected;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher18.AB_Menu_Slasher18_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FX_SK_SwitchClub_DemonMode();
	void AnimNotify_FX_SK_SwitchClub_NormalMode();
	void AnimNotify_FK_SK_ShowKatana();
	void AnimNotify_FX_SK_HideKatana();
	void AnimNotify_FX_SK_ShowDemonCosmetic();
	void AnimNotify_FX_SK_HideDemonCosmetic();
	void AnimNotify_FX_SK_HideKatana_TPV();
	void ExecuteUbergraph_AB_Menu_Slasher18(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
