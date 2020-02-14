#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher12_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher12.AB_Menu_Slasher12_C
// 0x050A (0x077A - 0x0270)
class UAB_Menu_Slasher12_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5578731E4DABC3361FF1538321E18979;      // 0x0278(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1F3772B949994EB86EF4B2B243841CD4;// 0x0298(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_706098EC475196A8F73FD893379012C0;// 0x02B8(0x0020)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_370FFFE64B7744C188D698B9075176DB;// 0x02D8(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C00EB8048197A0E48EA54A694D56F95;// 0x0410(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5BC3C03844179BD9B0A34786A44A2170;// 0x0488(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_D7C35BCB4CB68E18483F018EE9361047;// 0x0528(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15367B06443B7A2F23F84CB44F9541AA;// 0x0590(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02ECF28A4CF77FA36F92659CCA923BBB;// 0x0630(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5BDA39984B8C72F0C5F18AAE3798CC35;// 0x06A8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BAE7C81540EB0CC6C4EFF8BDD75F924E;// 0x06C8(0x00B0)
	bool                                               Role_Selected;                                            // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher12.AB_Menu_Slasher12_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher12(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
