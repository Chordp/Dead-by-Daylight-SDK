#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_GK_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GK_Hair_ACC01.AB_GK_Hair_ACC01_C
// 0x17C0 (0x1A30 - 0x0270)
class UAB_GK_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9F25B5D944CEB96BF7BE128D63E7EAC6;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76D0860B4DB5FF4032B1A9A0F2FA897A;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A34730D545435944E3D802852B5F1090;// 0x02C0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_33F5D6034C35D7BB917A51BD46D79D6B;// 0x02F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_00F777A24C6F2286926DFD9F1FB7E21E;// 0x0620(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1CD5D4DD476A426ADE67DAB05CCC840D;// 0x0950(0x0330)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E275723849B7763AF7A34BBCAD2A44AC;// 0x0C80(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_654F3F1249C77FDF586B01B852CA3771;// 0x0CA0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E7DA84C84D75683E56922AA26B178F02;// 0x0CC0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A81A3EF24492E53FF474E2A4C2A480F5;// 0x0CF0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FA8899234D658EED4FD863A0FE4281CA;// 0x0D10(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_31DE208B4DD1527520278280D902F5AE;// 0x1040(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_29C8615044B4823A86ED9F94C219BC6D;// 0x1370(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_58CCAAE2412296F058CE9287FBF19540;// 0x16A0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7DB4744D4D49C88DCF8D7FBB9BEE3EF0;// 0x16C0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F99A6B3F4A82155385298B92207FFB65;// 0x16E0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_90CDFCCA4812C8E2257298A9476DA285;// 0x1710(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F1BC434845A31A7AA738D3A59076B418;// 0x1730(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DD7B587E4E02096D303D1997B3ED8288;// 0x1760(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A8C3D5AB40FD8BA230BA968DAA0AE28D;// 0x1780(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0DF34721445AFF57FFB2B68B3AEC3D60;// 0x1830(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_08329A9840A2B21E3BE013970C894A43;// 0x1968(0x00B8)
	bool                                               Initialized;                                              // 0x1A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x1A21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x1A22(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x1A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_GK_Hair_ACC01.AB_GK_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair_ACC01_AnimGraphNode_TransitionResult_A34730D545435944E3D802852B5F1090();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair_ACC01_AnimGraphNode_TransitionResult_76D0860B4DB5FF4032B1A9A0F2FA897A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_GK_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
