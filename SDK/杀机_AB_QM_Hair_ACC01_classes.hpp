#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_QM_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_QM_Hair_ACC01.AB_QM_Hair_ACC01_C
// 0x1E1A (0x208A - 0x0270)
class UAB_QM_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4999437F4D57002D8DD67FA5792B4453;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54FAC59F40D3BC3082A2F58D539D560E;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8627CC44BC3F797FC16109F6ACBDE22;// 0x02C0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2621FE1F4E6EC5E216652BA4CA678800;// 0x02E8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6606B32842A31CFC2F9EBBA9B6964CA0;// 0x0310(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_572166C3496C23CC74FFE2A16D743A87;// 0x0640(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_692AFFFA4B93068706C8E49186611CB1;// 0x0970(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CF7A3EAF42B500F36E7474B604487152;// 0x0CA0(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C0F9C3314CB070CE362C098E058BC738;// 0x0FD0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B10B7B824085D4EBD5CD2DA007E581CC;// 0x1000(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8150054149070B02A6F3ECA2A9AF094E;// 0x1020(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F524DDF54309E2E5AD8BC383403CD2A1;// 0x1040(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2101EE964FA08BE75A93B8AD7F4C6F4A;// 0x1370(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0D54F4D6456D88FA491BF6A54E83851A;// 0x16A0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0A6972104DA3FD8C8BF95F8C5658D70E;// 0x19D0(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_697A92914D8979E53DF41E81A6B87B42;// 0x1D00(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5675918F486181DF55EA17AEF483EAF3;// 0x1D30(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F4B2BA2D4C80741BE54BF0874D59F39E;// 0x1D50(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A53281EA4ACEE2DB394B12A02AEBAD5C;// 0x1D70(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B29E24D431EB3193C209F8937FD02C5;// 0x1D90(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A3350FA54C6A8724A3DCEEA0D5720D0C;// 0x1DC0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_062FF10B46A7E0D6B19615A12E94B10F;// 0x1DE0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_AD0694834A9E3A514E32EC84CDA3C7FA;// 0x1E90(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DBB79EC241FA650A27A3F395F0D64F00;// 0x1FC8(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x2080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x2088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x2089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_QM_Hair_ACC01.AB_QM_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_QM_Hair_ACC01_AnimGraphNode_TransitionResult_D8627CC44BC3F797FC16109F6ACBDE22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_QM_Hair_ACC01_AnimGraphNode_TransitionResult_54FAC59F40D3BC3082A2F58D539D560E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_QM_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
