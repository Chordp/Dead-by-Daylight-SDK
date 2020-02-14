#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C
// 0x2C8A (0x2EFA - 0x0270)
class UAB_Menu_Slasher13_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8186D5A44DF3AC87FAFB4F807C837CD9;      // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_456229B942600C3298CC5C89B26BF1F7;// 0x0298(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D53D1134ABA3089FD0554B7FDF42B05;// 0x0310(0x0078)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18DD24414D5A1B149337ABAA16CAB1FF;// 0x0390(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D9DC8520445609979ED793B2E60ABB5F;// 0x06C0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ED01054C4CD7BA0B3A2660AC278548D1;// 0x09F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3A415A6C4E2093A0C091049B28F7863E;// 0x0D20(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E3E344364B8F199094854C8C49A46C55;// 0x1050(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E393CA33438B525FBD910591A53474B1;// 0x1380(0x0330)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_0FBDD48743C3B5ECB39ED7AB41D644B7;// 0x16B0(0x0138)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_77441A6F480AEAC8806BCCB1E6BC3F6E;// 0x17E8(0x0138)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8C0A84B046DECB0F3A6C92A74B5CB899;// 0x1920(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6DCEA0A5409FD475C38DD0A77CC8314A;// 0x1C50(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C66AB63D45EE1E8D5C879FA6DAE30C65;// 0x1F80(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8520FC3B4A24C918ECA6E5A4F98500F5;// 0x22B0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_77D4E78C475C3516CBA3FF9B755666D4;// 0x25E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5A559B2D4E5DCAC8988AB5A043AE4F09;// 0x2910(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2112752E400285950625019C23F6E839;// 0x2C40(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0BB65C1B4A4E9F72D9E1AEA9A0D7F3EC;// 0x2C60(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_710DA8AC4E89F34F69D38B9D29827297;// 0x2C80(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_79D8691A4B72FF6C42F300965A5E34FB;// 0x2D20(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B3C2084B4B5F1645D8C3F3ABC1108A89;// 0x2D88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0E7859034C21AC134C6D58B8BF375C8E;// 0x2E28(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9B21D997480BD265EB3D84AFD19723F8;// 0x2E48(0x00B0)
	bool                                               Role_Selected;                                            // 0x2EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x2EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear();
	void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear();
	void AnimNotify_FX_HK_MenuBack_MakeSwordVisible();
	void AnimNotify_FX_HK_Menu_MakeSwordInvisible();
	void ExecuteUbergraph_AB_Menu_Slasher13(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
