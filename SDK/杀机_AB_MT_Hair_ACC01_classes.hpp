#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_MT_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_MT_Hair_ACC01.AB_MT_Hair_ACC01_C
// 0x1E1A (0x208A - 0x0270)
class UAB_MT_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_34BF9EB5446A7C5BFF2BEBA2CE8C41FE;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_367C208C4F3C9E557EA2F2846DD22415;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA00D848446BD53C6EE1C99ECBF65A88;// 0x02C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5E0C73D9413FB86E7A4FE0B45393E148;// 0x02E8(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5E2959BE43D40CC8D9B7638C81BB8C51;// 0x0318(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2AC9874C417C13B50EEA579C8C37328E;// 0x0340(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5011E3C846F1D4628C95F6BE6DF82869;// 0x0670(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_26796FDE4D7C588A48943480690927A4;// 0x09A0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D4C91C1E47493AEFD4DB4E85713A28CC;// 0x0CD0(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4A5B06E84B39D439A1BFFE967BA4BDED;// 0x1000(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5CBB3743458439CF6DF644BA71F7AD22;// 0x1030(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_682142B84CBA200F1E2AF1A756DF2CD9;// 0x1050(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8172F3B74F575FC7336C28873691D492;// 0x1070(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0C17640B4F20573DC159CF866A28B544;// 0x1090(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DC7E87434F97C45D2862058BC6A0280E;// 0x13C0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_057AC2B4494DA1D58035D4B03785B5E5;// 0x16F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A944BFFE4DCE5616A20E2499534ED7E5;// 0x1A20(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ACEDE75545D4CE412F5B268F30D7F13E;// 0x1D50(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_286498CC46713BDE1A80B9931FD54BE6;// 0x1D80(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4EB8B6B34951CAF49B4E4BB886A1DA8F;// 0x1DA0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A9D5C5DB47B46D77A2374FA178EF90FF;// 0x1DC0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A3A7A96A47544C2DBFE478933CA94DA8;// 0x1DE0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_DDFB04FA404A07FFB0E5E5A0365D478E;// 0x1E90(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F0A4E2C747B4F6C2A368AABA09B75086;// 0x1FC8(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x2080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x2088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x2089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_MT_Hair_ACC01.AB_MT_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MT_Hair_ACC01_AnimGraphNode_TransitionResult_CA00D848446BD53C6EE1C99ECBF65A88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MT_Hair_ACC01_AnimGraphNode_TransitionResult_367C208C4F3C9E557EA2F2846DD22415();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_MT_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
