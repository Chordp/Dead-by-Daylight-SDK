#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_MKW01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_MKW01.AB_MKW01_C
// 0x272B (0x299B - 0x0270)
class UAB_MKW01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16F8394B42D29E52454DDE948B4B82BF;// 0x0280(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C53B7D2647FB2506E0282090B08A9780;// 0x05B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_19C0FA21457A245CF455B682023BA2FF;// 0x05D0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851;// 0x05F0(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_206C5AD944778D263371A0AEDD77E4DC;// 0x0690(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C5CDD1F487C7C7438EAD3BF821E4720;// 0x06B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4BFE68D41F052B8B65DD3BFEF587EC9;// 0x06E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B71182E4D0F9F31781151BB0BB759DE;// 0x0708(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5142832F4B1199CCDC6A06B192099812;// 0x0730(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_425977854B1AAAD9CBC8A98F80584DFF;// 0x0758(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_310AF27449707360354237B8ED6CFB3C;// 0x0780(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_151C5CEB4751D748391D17B453B01EA3;// 0x07F8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2B8A1D64771E60E28383A8845E0272B;// 0x0818(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4A8E9A2D4B22C6785FCDBBA002CCFBC7;// 0x0890(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_332FF54A46928B0591C73087BB56E8F0;// 0x08B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4C047EC44C9E4F68BB02C0B6E514383F;// 0x0928(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AEB24B441057B784746E7A165D4395B;// 0x0948(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3E562133426F6D28696CC49B5EF2FCF7;// 0x09C0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D7D6999F43EA741D9799BEB08A836B53;// 0x0A60(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA78CB9C4BFFB1E36D673FAE3FC5623B;// 0x0B00(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A277C905409FC1ECEE8318A20654089F;// 0x0B78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8D74CD9A4AB83F1976F471B6FC872673;// 0x0BF0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F48EFB9F49EE7E2CE3F15694E1685B79;// 0x0C10(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E6D7DEA94D6D947A1223839618A9CEAB;// 0x0CC0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64EDDE2B47BD30839175BD97D7C7A02B;// 0x0D78(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF99EA904B51FAA3C34999B398B2D37A;// 0x0DA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78E2647D430A4A2BCEEB2E96B03595BE;// 0x0DD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DABB7B444696DDACD36AFA8CC396301F;// 0x0DF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F8D90E44AFE8BDC7ACD77AB5FB268A6;// 0x0E20(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30BA4E6C43BC0B75CB347982ACCA0BAE;// 0x0E48(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_07253ED0486723B2C573DDA36A5ACDEF;// 0x0EC0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_696117574B99FF489371D295C47D04F6;// 0x0EE0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CC1C39FD48BD4665C655B297910B55BF;// 0x0F58(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E60EF8F4D9CABF0CF31838ABC3CCBEA;// 0x0F78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7255843A45D25ACE7DFC13A2950416FD;// 0x0FF0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_88382E294F43CBA7C2D453AFBE654F84;// 0x1010(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB;// 0x10C0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5AF2EA1C431E3CEC0DFCD587481A011E;// 0x1160(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2E2D22C44E3C603E46B19B8DC0382DE2;// 0x1190(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root_2A18C6D6495EE13B41DE51BFED4AB44F;      // 0x1230(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D9FADA124480A371C1C199900C524F1B;// 0x1250(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1E43CD004BBC135BCE82ADB4B81E347D;// 0x1270(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FFE722AC4616C525D9774A8ACBA2CB5D;// 0x1290(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6B187B8A4A6477437C18A5A0FD53E7CB;// 0x12C0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F77602E74E41AE2FF49A5F820878D09F;// 0x1360(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D964532D495A81ED9937319201EF4A55;// 0x1390(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_464219C348179FE1430EBD94E7A9AA90;// 0x1448(0x00A0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x14E8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AF461A284568731380D40DA0DF07EC9A;// 0x14F0(0x0330)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20;// 0x1820(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_217D8AD2424AE8F9939738922E57C2D8;// 0x18C0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_58ACBB6A44B4A93AAC6191A1503B4B0A;// 0x18F0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1BE17F884C41E2FE0EAC6587DDAC08D6;// 0x1910(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49760C7A4ADC3522E8DBE89D9BF471A8;// 0x1930(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F45ACD345FBD7B358116D87C6E6C7E3;// 0x1960(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D4F1226D40847B5EC725789BCEE0DAE3;// 0x1C90(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_554B9BE4472E03A70DC7028E6E7FF5B4;// 0x1CC0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2EF24CA141570D6B885745930FB1FBF0;// 0x1FF0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12D49AC344548494E15F8D9A32B84041;// 0x2320(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1D813F74444CB0891F077280F02057D9;// 0x2650(0x0330)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x2980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Initialized;                                              // 0x2988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFirstPerson;                                            // 0x2989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttackSwing;                                            // 0x298A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttackOver;                                             // 0x298B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTurnOffDynamic;                                         // 0x298C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x298D(0x0003) MISSED OFFSET
	float                                              DeltaTimer;                                               // 0x2990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartTime;                                                // 0x2994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMori;                                                   // 0x2995(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x2996(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttackCarry;                                            // 0x2997(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEdgeCase;                                               // 0x2998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsIntroComplete;                                          // 0x2999(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRoleSelection;                                          // 0x299A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_MKW01.AB_MKW01_C"));

		return ptr;
	}


	void IsOwnerInRollSelection();
	bool IsNeedEdgeCase();
	bool IsOwnerAttackCarry();
	void IsOwnerInMenu(class ADBDMenuPlayer** AsDBDMenu_Player);
	void IsOwnerMori(bool* Return);
	bool StartTimer();
	bool IsOwnerTurnOffDynamic();
	void Check_VariablesAtStart();
	void IsOwnerAttackSwing(bool* Return);
	void Updating_Variables();
	void IsOwnerFirstPerson(bool* FPV);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_End();
	void AnimNotify_Start();
	void AnimNotify_FX_MK_Chain_Show();
	void AnimNotify_FX_MK_Chain_Hide();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851();
	void ExecuteUbergraph_AB_MKW01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
