#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_GK_KeyRing_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C
// 0x0AFA (0x0D6A - 0x0270)
class UAB_GK_KeyRing_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A3E903624EA3BE2F7FF91FACC6092CFC;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E;// 0x02C0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1D3D93854604E4282E0B8CAF430B0722;// 0x02F0(0x0330)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_003BB65C43952B40C0363B93165BB8E3;// 0x0620(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2AFD86784DE9282FCC0F81839C93AC28;// 0x0640(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0894B9454AD91E2B5C3717B6E615AB68;// 0x0670(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7543B372430E71994AB8948AE7D91329;// 0x0690(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AD28366F4EBBA3CD5FF858B527BE18DD;// 0x06B0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0CE661804DF9D1858A1D93B605A48A45;// 0x09E0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9CC0664D45FE2ABF7BC9D58BB6DC1450;// 0x0A00(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74A1EF1F41C31A511A8E0DB977D9F9EB;// 0x0A20(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13BEDB104E40724FDCF9C688E11CE1BC;// 0x0A50(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FF5C4A944A0A654422D8C1A158091762;// 0x0A70(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_401DB89D4805A6D064CF4799BF1F263E;// 0x0AA0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9A6DC53F4AA421709B53DB8B5ACF08D9;// 0x0AC0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_70D1CB2543D1053201C82FBFACA969BF;// 0x0B70(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_052CB3A640142EB8BB0F4CA401013EAD;// 0x0CA8(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0D68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x0D69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_GK_KeyRing_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
