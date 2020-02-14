#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Camper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C
// 0x14CC (0x173C - 0x0270)
class UAB_Menu_Camper_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D6A54FD4412BE2837897E4ABA2477A6D;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F20052CC4C86B6087AA15294BD498F45;// 0x02E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_396833F9473744F8961F8B8450747E20;// 0x0310(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7A53D6AE479F6B96F5599786D3166E3F;// 0x0340(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B44E52AC47F4E6FFE586F09B15B64231;// 0x0360(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382;// 0x03D8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CA18E77B4B0B497DBB35D49C7ED38E17;// 0x0478(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D0B614D94AE1CAD7310E278CD3814D58;// 0x04F0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74854C744EEFA804445649943609ABC7;// 0x0510(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66A3D0774534001ED9733491AEB4D90F;// 0x0588(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C4545BC049DFD562DBE9C0BEDFB2FA1D;// 0x0600(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CED04911460E9A60626E128CAD03E745;// 0x06A0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F7A53F68489922301A4B719A79234F02;// 0x06C0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2C83DBE640DBC980B0BA558E2D0836E3;// 0x0770(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C524B5794BA138DEF5B9088AE8B497C8;// 0x0828(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64E7D07A47DE742E475D658C3FFF8D60;// 0x08E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E15D967F4ECBE49C5FDA81AC4F871271;// 0x0958(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DF89ABC24A787CC41FF5718160EDB13A;// 0x0978(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1FEC3DEC413D74173AA0479E83A096F6;// 0x0A28(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F0DFF09412847D085EFEDA4D8DBF464;// 0x0AC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2281591C47946C3E7F883183A6847B89;// 0x0B40(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5EB4AD52451079E09BBD61A047B60255;// 0x0BB8(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD4D9B7F4AD7D06C9D0B229B1DC96A6A;// 0x0C70(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_612DCE9C44EB7890D120098F6019F197;// 0x0CE8(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_388E38E34F4D68B4CCA42BB66318D90F;// 0x0DA0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7ADDA0C84109AFF53D3C99A99CC4806D;// 0x0E18(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D005421C48E06AB7EC61CCAFEF5F7E3B;// 0x0ED0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D2D90224EFFD7819A022091BAD54E10;// 0x0EF8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24145D0D41F015D14140FBA7489DD7D6;// 0x0F20(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F463F0394C045A1806F52184DC77C35D;// 0x0F50(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_92E862484D0F909133BA09B055F75930;// 0x0F70(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_219052CD4834FDD7CCA0FFABC09ACD9A;// 0x0F90(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_97FAE12C4CEA5C58078041B3D59C7363;// 0x0FC0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_243C05EE4745D1C47BFC46956C963BBF;// 0x0FE0(0x0330)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_46DE42EE41E2E75A1085CAB0CA01DB13;// 0x1310(0x0138)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8C8E3D4840DCBF7D104B30B101EBF7F1;// 0x1448(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F6570EDA4CF07BE7EBBA5ABAE3FF325F;// 0x1468(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9E135EFB425F0D0BA677058AAAE6E3A6;// 0x1498(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3D03DA114789975411854BAF0103A2D7;// 0x14B8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_162DB309495D1BA1919C428662D31B76;// 0x1568(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1ABA9DE249253D6BD7485AA83267DF09;// 0x1608(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3FEBCA27483DF5BAD48A0F80BED068BA;// 0x1638(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F9F617DF4F5E646CA88D8282926E8D29;// 0x16F0(0x0030)
	EItemHandPosition                                  Hand_Position;                                            // 0x1720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1721(0x0003) MISSED OFFSET
	int                                                SelectedIdleIndex;                                        // 0x1724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       Menu_Idles;                                               // 0x1728(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Role_Selected;                                            // 0x1738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dynamic_Override;                                         // 0x1739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_nea;                                             // 0x173A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_Jane;                                            // 0x173B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C"));

		return ptr;
	}


	void GetRandomMenuIdleOverride(int* Return);
	void HasMenuIdleOverrides(bool* Has_Overrides);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_2C83DBE640DBC980B0BA558E2D0836E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_C524B5794BA138DEF5B9088AE8B497C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_5EB4AD52451079E09BBD61A047B60255();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_612DCE9C44EB7890D120098F6019F197();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_C4545BC049DFD562DBE9C0BEDFB2FA1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_SelectNewIdle();
	void ExecuteUbergraph_AB_Menu_Camper(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
