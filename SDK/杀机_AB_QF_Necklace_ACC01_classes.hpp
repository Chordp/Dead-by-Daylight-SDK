#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_QF_Necklace_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_QF_Necklace_ACC01.AB_QF_Necklace_ACC01_C
// 0x115A (0x13CA - 0x0270)
class UAB_QF_Necklace_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BCFA1BAD4EECFCE90418A78B05B9799C;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12C15DD649BF86C93EECB4BA880A4A43;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CBE28B740DEAACAAAC3DC826B92D347;// 0x02C0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0DD8BA3B4647981D8C37DDACBEE1EA53;// 0x02F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DAE589AA4F575A84F1C7078FB7F12DA4;// 0x0620(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C31B15A74CC8639AF925A4B90446E690;// 0x0950(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6E6D584D495DC40C70EC20A92ADAFE1A;// 0x0970(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F8B41B5F41CFB756DA362CBE5584F620;// 0x09A0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_470158A14F053D6D66A273B4A8E71294;// 0x09C0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E444CCAD4E108F22A3B74EA70E5AECE8;// 0x09E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A4FA7D2D409384037183A0A983C9F310;// 0x0D10(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3895EDB6485FB2EE0FB9A997CF04607B;// 0x1040(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5D7C39DE48321E426671C8B58BF6EAFA;// 0x1070(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_05B8D0874CD5E8255A3376BACBA3C4E3;// 0x1090(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5291DE5F4C9CC706AAD679ACD85DF1BC;// 0x10B0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CED7EF0A42F11B6164AA0DBA34BC9B4B;// 0x10D0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12A8CF47495FE1F9528C95B287AF2516;// 0x1100(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_530DCECB4A2CB54AEB514C851BBD19CD;// 0x1120(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0D1EFC894C4706643F1B1BA694ED781A;// 0x11D0(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BBE58B9649078C0230421FA88DF186B8;// 0x1308(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x13C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x13C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x13C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_QF_Necklace_ACC01.AB_QF_Necklace_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_QF_Necklace_ACC01_AnimGraphNode_TransitionResult_1CBE28B740DEAACAAAC3DC826B92D347();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_QF_Necklace_ACC01_AnimGraphNode_TransitionResult_12C15DD649BF86C93EECB4BA880A4A43();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AB_QF_Necklace_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
