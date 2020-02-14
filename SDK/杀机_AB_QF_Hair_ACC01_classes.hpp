#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_QF_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_QF_Hair_ACC01.AB_QF_Hair_ACC01_C
// 0x5CFA (0x5F6A - 0x0270)
class UAB_QF_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5B6E592C4E202DD239A3FCAD7E009557;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F7119A045F2763BAF1732B96380E3DE;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DC0E0384280AF62E072609B1B57AB0A;// 0x02C0(0x0028)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D4D3014645D7386FE3EA829A13FACDF0;// 0x02E8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_BE8C73504231D9803DF237969A76C853;// 0x0418(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_598120E845FC9167E5014EB77277535A;// 0x0548(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_FECA9F874BA541B8675003A85B9E226D;// 0x0678(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D17F7BF24DA7CD354695EE92D10F95AE;// 0x07A8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2B3DC3744BFD35F08DA04FA12F1CEA02;// 0x08D8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_32E71E794BFDA510C9AB84AFEE642252;// 0x0A08(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_F63D6614409AE15519D9FA9FE7F3218C;// 0x0B38(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D2184B474E3382B172A3DBB634F0CB47;// 0x0C68(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_0473324146A461CF5F3F4EADC94A6E0D;// 0x0D98(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_DDADED154BF8EF32BBA61A827A03C4A0;// 0x0EC8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_CACA5CAD43F48D1AF20F3F80859CF5E9;// 0x0FF8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7F28CBF942BAE35967272E8F27C75813;// 0x1128(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_19A9BE83416ACA8EFA7521A110EDF364;// 0x1258(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_441C88CF42673B63C69ABD84FE41746A;// 0x1388(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A1643AE74232E0C6220F5BA676FF95BB;// 0x13B8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x13D8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4A423AF0463FC920A6F55982F54927C1; // 0x13E0(0x0210)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F4708D9446292C6B7FB372A7DB43E334;// 0x15F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7688EEEF4AF0D1E3C8B07F862DFAE6D2;// 0x1920(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5FF61C9642BF0F41AA5C07B9701F424D;// 0x1C50(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E98AB2934CFEB784D75D5CB4851B09CE;// 0x1F80(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CBB52DE1447F248815517B9EC57553CA;// 0x22B0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_912E26904FB460621344D7BCBA40E64C;// 0x25E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2B24B2454F70DB6EBAEF8DB21D0E87FB;// 0x2910(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2FF2241C4BFB222932B2A894172A18D1;// 0x2C40(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B964E0B643DFF2B3E670D997C070387B;// 0x2F70(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C58475CA42A95370E90D7A8E5AE83907;// 0x2F90(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6496CCE3489D7828CAA47F8E87BCB7E6; // 0x2FB0(0x0210)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A1B882704DEAA3CBA7D4C28F49494C3A;// 0x31C0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_BB90220A4353636194B8B6A8C63BEF48;// 0x32F0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8CE1CA6542FBAB9A38CA1FA193F584EA;// 0x3420(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A4843A6949A5B3A1F50553BF4633C1EB;// 0x3550(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7ED4CF494A2161A69B67FBAFF4DC6788;// 0x3680(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9413089840DA0B2AAA3904AABC49FAF7;// 0x37B0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C72C33F24245E0B5E3F64E8F1F5A547C;// 0x38E0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_DE46734945FD91D0B21FEE8E4D48ED3D;// 0x3A10(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B48B7F634684A78ACE2B17BD9A9E905C;// 0x3B40(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5C3A52CC4E6FE4A24B1A368032B20731;// 0x3C70(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_400CDA75485BA69770D5EE9CD552FABC;// 0x3DA0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_16E172514C28354DF0444CBA3782415F;// 0x3ED0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1EFC703F41C954AD4C3F17958147EA03;// 0x4000(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B67571CD4F5B7EA17F6629985B7D70AB;// 0x4130(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D566B09344BD07AFC61675B4B6EA83BE;// 0x4260(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_597944FE48106BB4211F39B330CB0E6D;// 0x4590(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9EC8F047455E715EB4FDB0B9E67E13A7;// 0x48C0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4BD3B95048A1BE7CAD771B8E00B9FAFD;// 0x4BF0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B0464B244882CC76DD9017B76C92B62B;// 0x4F20(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3424D7974CA82ABCE5235DA59F4EFF0B;// 0x5250(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E306B88E48720DBFBEBB24A765F7EA66;// 0x5580(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AB40BA8F406B1F9A6B2FC2A564235A56;// 0x58B0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4EE4932949F876CB66B09596B4E8B36A;// 0x5BE0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F827B6545575C69B2D3008E50A8F5B5;// 0x5C00(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CD9E350843FF6C38AB53548D76D5A3E8;// 0x5C30(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_976EC1AB43B45C6787D42DA6F475BA11;// 0x5C50(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E1E2669A460ABFE75A5B468CF3C49A3D;// 0x5C70(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7FCB85B049A9ED0C4FBCC29137462944;// 0x5CA0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EA4C729D4110743F454037AF9E04E0F2;// 0x5CC0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_1963FE644027C455FA4198A2D4CE9C20;// 0x5D70(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3915771346CE883C1521F2BC23E860B4;// 0x5EA8(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x5F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x5F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x5F69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_QF_Hair_ACC01.AB_QF_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_QF_Hair_ACC01_AnimGraphNode_TransitionResult_4DC0E0384280AF62E072609B1B57AB0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_QF_Hair_ACC01_AnimGraphNode_TransitionResult_1F7119A045F2763BAF1732B96380E3DE();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_QF_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
