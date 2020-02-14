#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_SS_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_SS_Hair_ACC01.AB_SS_Hair_ACC01_C
// 0x6041 (0x62B1 - 0x0270)
class UAB_SS_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E8B4E3D74A088DA167C90A854578588A;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0312CCC24F17284B0E7D79A6EDEAD222;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4016C454F673101088B31A28171E11D;// 0x02C0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_80F7438B44BA215E8CFA228DAA5920A4;// 0x02F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_937D60CB47C6677D0A93D5AAE308D0CE;// 0x0620(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1FBE750D40948600231FCCA0903BCEA6;// 0x0950(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4C6858C247F9E34FC4884CB30FFBDE97;// 0x0C80(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6ED30688462FBEDB3108DAB1C5F2B305;// 0x0FB0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5B55008B42616BC2145486B1ECCDA873;// 0x12E0(0x0330)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D42896C4472BEDCF01838CB297CBE2F0;// 0x1610(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_442F7B2C42541DDE1DB357B266F9753A;// 0x1740(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B3EECA7743A13CF46CC6D99902B141A4;// 0x1870(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1CF44EC14A0AD9C708B18BB98BB25DD1;// 0x19A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_FB3E86DD42DAD704F653769670E2D993;// 0x1AD0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9A10B6E64E4D2B51768486AEE9E9A93B;// 0x1C00(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_E35CC75749237CFB64998D933A230331;// 0x1D30(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_81CEA3A541713D875F4F9E9FEE6610B2;// 0x1E60(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B2156B744AC430911BB4608D4AD85E6A;// 0x1F90(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_FA1D5F064408B8710B0748836A74491C;// 0x20C0(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BAC5D5845D661731F7D29BF58917E69;// 0x21F0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6162D079442D37C7F398B7B66595176F;// 0x2220(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_21153A78478E67DCF9EE59BF2577B9AD; // 0x2240(0x0210)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B400BA2F41BB3AE25D597AAA48252543;// 0x2450(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6F22361A443463C12EA6D286A573E544;// 0x2780(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9861AB0341F1DDE5DD56C5803B99E437;// 0x2AB0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F54A130F48B6253D5C0460888F173EA2;// 0x2DE0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_563ADC194CDB3A1D9139D9BFB14E3B3D;// 0x3110(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8A3DD5BB4920BB306BE8B483274A6276;// 0x3130(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A1CF929540689E9879EC08A9CE935F4F;// 0x3150(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_925C1E354D4EB2068EEFB6BF5275F731;// 0x3480(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D418BAFF40C82B695CB2299CE071AB7B;// 0x37B0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_58A4900E4B06F958F6858B9FB271DAFA;// 0x3AE0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ECCE76B048888CF88BDFBAAE647E1623;// 0x3E10(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_71F612C7470613F3AFBAF2A8ED6E0DA6;// 0x4140(0x0330)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5A0AFB604541F20E2F4320BAF61F73CB;// 0x4470(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_F4E4B4F9475FAEBA8BF3F28035FDA948;// 0x45A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A6B3F6AC4C601B2C04D3C2AE673BB9E5;// 0x46D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_02FAD1994B20B158EB8073886D56A613;// 0x4800(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8F831A934064A12A6E32F09831145EA1;// 0x4930(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_989A12354ADAE90DE94D43A5CF1173DF;// 0x4A60(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4C8914114797053D85A213809B3426B3;// 0x4B90(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_86F16AEE4884BE97468016BD9B50430D;// 0x4CC0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1AF554724F0E62DAA33C598AB4CF5665;// 0x4DF0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D5CE8615498A2600F322CF810D30BDB2;// 0x4F20(0x0130)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B45C54554AB7F3196ED8A98744B36A98; // 0x5050(0x0210)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8090B79941B96413B77505A18E5A781D;// 0x5260(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CAEB948D4752141A641EFAB9F49C91D3;// 0x5590(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4FE253EB4BBBD42337BEFF9F28089852;// 0x58C0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7DD74AD844AC2C9A6A949BA8AC1341BF;// 0x5BF0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_350263BC40E7BBF948377B9D8CA54705;// 0x5F20(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76E0A66A4D4D2244E0341DB82F2D3416;// 0x5F40(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_424821F54257C885168649ACEA8BC683;// 0x5F70(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4D7380EA4F5784823B8B988C68B001E5;// 0x5F90(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4102D73B4C7591CAF21AF088FC5F9C6D;// 0x5FB0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5CBC451646B9673D90886B85D8EBA1B7;// 0x5FE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0C29308E492B1D8F41B79F89499B73B0;// 0x6000(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_79616AC345D16023A3BCBFAB4A8CDEC0;// 0x60B0(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BC380484487298E5746E2F95CE02853C;// 0x61E8(0x00B8)
	bool                                               Initialized;                                              // 0x62A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x62A1(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x62A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x62B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_SS_Hair_ACC01.AB_SS_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SS_Hair_ACC01_AnimGraphNode_TransitionResult_E4016C454F673101088B31A28171E11D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SS_Hair_ACC01_AnimGraphNode_TransitionResult_0312CCC24F17284B0E7D79A6EDEAD222();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_SS_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
