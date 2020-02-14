#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_SS_Jewelry_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_SS_Jewelry_ACC01.AB_SS_Jewelry_ACC01_C
// 0x0492 (0x0702 - 0x0270)
class UAB_SS_Jewelry_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8A7EFE6F44A69A80C38C8CB4357A2D3E;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_240245BD48C7DCD87FB44F9B8F925479;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E53C712456B5D6B57B78CBFC8D1316E;// 0x02C0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6E7DFCC04C878A7C9A0571BAE81C6ADA;// 0x02E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4935F8DE4B43AF9AB2E7C1A07DAD6162;// 0x0308(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BFE7BFA3483F1C5699B1C094E42E3A5A;// 0x0338(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8712782E4E6F67E786A81291E27AD218;// 0x0358(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_068B47094C731BDB286E91835C2CC2DC;// 0x0378(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B91FD069464A22BD4A73019BCEBE1CBF;// 0x03A8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_91BF024842AF2592C5EE0988173E2E70;// 0x03C8(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E595BF36461F05AD45F065BF99BC9366;// 0x03E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45A064A8480CBCCA807EB283AFC899AC;// 0x0408(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58368A8544D1E6E21746CE9054006F7E;// 0x0438(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BA3FDDB74371F0D89B16F8A85130F8AB;// 0x0458(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_012B36B64884E91D361E619D2CB5745E;// 0x0508(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FE2129214A7F3A3AF372568D09307213;// 0x0640(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_SS_Jewelry_ACC01.AB_SS_Jewelry_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SS_Jewelry_ACC01_AnimGraphNode_TransitionResult_1E53C712456B5D6B57B78CBFC8D1316E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SS_Jewelry_ACC01_AnimGraphNode_TransitionResult_240245BD48C7DCD87FB44F9B8F925479();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_SS_Jewelry_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
