#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_MS_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_MS_Hair_ACC01.AB_MS_Hair_ACC01_C
// 0x1160 (0x13D0 - 0x0270)
class UAB_MS_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8A10346341CAC5CB159551A04759925B;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2ED47C20460296F188C384A37DA0B388;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2684726E4FED1013222B088EE75E4858;// 0x02C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93AB412D4586D55224093181B2C34E73;// 0x02E8(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0DE5A65741A5453B911263B77CA9D7A4;// 0x0318(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A2B85F8A46D1DD17BFAC76A32D2438E9;// 0x0338(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3EEE2F3A473BCCEDEA1AA79D4D4A455E;// 0x0360(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_365CAA9347D33398197C5F909889A2A0;// 0x0690(0x0330)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BB07D8EB428C3614AB5CD59C9A99DD80;// 0x09C0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F54AD5264E95DC7ACC37648273710F53;// 0x09E0(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E4CD402C42B2B5F6F12B2FAB4082F99F;// 0x0A10(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_90AAC7804CE1545F6884308462348DE6;// 0x0D40(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FEBA7C3E45D453F8139D818565747DF5;// 0x0D60(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8E702A944A22F162FB8511A5CC673DF7;// 0x0D80(0x0330)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BECDBDC84B8402F6DCB4DBAE17A8247D;// 0x10B0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D0BE1B3F4834AE033AEB519BFA67DDA7;// 0x10D0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D7878A0E43322D5A7DC6B18454C96480;// 0x1100(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5E731ADB4472362BEF9E658A8383F18E;// 0x1120(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_00E77ED94EF197AFE100BFB5E62CCA38;// 0x11D0(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_47BFE3EB48DC894A478ADAA16C49FFE9;// 0x1308(0x00B8)
	bool                                               InMenu;                                                   // 0x13C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x13C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x13C2(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x13C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_MS_Hair_ACC01.AB_MS_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MS_Hair_ACC01_AnimGraphNode_TransitionResult_2684726E4FED1013222B088EE75E4858();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MS_Hair_ACC01_AnimGraphNode_TransitionResult_2ED47C20460296F188C384A37DA0B388();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_MS_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
