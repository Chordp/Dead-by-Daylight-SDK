#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_GK_Flower_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C
// 0x0B01 (0x0D71 - 0x0270)
class UAB_GK_Flower_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DAF6E71F49CE421E76C084BA95651088;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_206A3E52421A9197FF71B2A70140C705;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2E80C46482F408CBAD3C5BD40BEBC80;// 0x02C0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_51A53B9F4FBA861866C343B394421D15;// 0x02E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F5A96FF94B43DDF77672F6BA9B3CC408;// 0x0308(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_206CA2094B1469A8E3946597C75E1451;// 0x0338(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E538DAFE419A6055B071239F19304AB5;// 0x0360(0x0330)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E9AA189C413CD2743FBD6FB4B735CDF1;// 0x0690(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4465E18F45D6139D96F9A497645A0EF3;// 0x06B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_47B816224E6570BFCC6A66B687FEBF9F;// 0x06D0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A761869C4B3B0D7D02EF2EA49BC0AEF7;// 0x06F0(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_856F42354BDAE9BACC5835B8ACE40514;// 0x0A20(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1E2B2020487FA484D3282FBF8ED8868B;// 0x0A50(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_992CF5B44E788FF02E4BD3B899C16738;// 0x0A70(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A0BD2C94484B5B8407FFAFB358B12803;// 0x0AA0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AA2D1C68466B437C62F011A55497FE49;// 0x0AC0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_B956E36C482F6BC935AC1F98C172727A;// 0x0B70(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_511DD21D4296CB22D49F95A87C138189;// 0x0CA8(0x00B8)
	bool                                               Initialized;                                              // 0x0D60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D61(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_C2E80C46482F408CBAD3C5BD40BEBC80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_206A3E52421A9197FF71B2A70140C705();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_GK_Flower_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
