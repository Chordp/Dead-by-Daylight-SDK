#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher01.AB_Menu_Slasher01_C
// 0x13CA (0x163A - 0x0270)
class UAB_Menu_Slasher01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A17E6F254E9F1E86AA99DDB0F2593985;      // 0x0278(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D00D5DCC4CE70172CD8E01A9786AAEFE;// 0x0298(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E60C3A2149603632F34E66BAD2C02E1E;// 0x02B8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_552ABBE84CDF351CBCE8BF8241C271FC;// 0x02E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9F5F55CC421E78BC8F41738FC219E2A4;// 0x0610(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BF8761A345FEC2E60A237BA383B4DE5D;// 0x0940(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_84DE88E94BC65408F48795A5EE23588A;// 0x0C70(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CF796560449BD26B04A552AB5231CF6C;// 0x0FA0(0x0330)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B02CB8554D587A49D33D83B294A2FB29;// 0x12D0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_DD5307524BD1577D21899EBD4AE5E71C;// 0x1370(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F72BF6DE4A23053DE7D58EA087F46BCF;// 0x13D8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71A82A2A41008446CF14FE959EAA1974;// 0x1478(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_115B1C404B1A9557A21DE283C7ED3FAD;// 0x14F0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D61F78E74CA4D5E844366583B2CA725E;// 0x1568(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DEF4E5954B051988F16EB2929FC91BF0;// 0x1588(0x00B0)
	bool                                               Role_Selected;                                            // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x1639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher01.AB_Menu_Slasher01_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
