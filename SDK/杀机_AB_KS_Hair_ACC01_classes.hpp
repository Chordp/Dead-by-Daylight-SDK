#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_KS_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_KS_Hair_ACC01.AB_KS_Hair_ACC01_C
// 0x3DFA (0x406A - 0x0270)
class UAB_KS_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_674FB65446581B1FCBFA4CAC7B9AF105;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8D541C64805405C15AD06B346415305;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABAD531A47E7A9A197E26A81B86DE32E;// 0x02C0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_675C4C2F42EF88C86BDD1E8115DC5BA8;// 0x02F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_64D6C53B48252E35F1F61180381C968D;// 0x0620(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D899FDD642504C75D979CE87B5534D52;// 0x0950(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D9E288AA4D4AD152B902E79A60338ADE;// 0x0C80(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FC6BBDB448EB55F15DC4B2A67CCBC434;// 0x0FB0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4943E0064170D12406CC10BE8EC1C606;// 0x12E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BB188B1F4D23FBB3E8A28BB782FB93AA;// 0x1610(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5637A44F4CD01E6055A005A2F8865A1E;// 0x1940(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E7B100134535A27E79252DB1BF518301;// 0x1C70(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_116A1EF64554D53D6B04F2AE071A6E85;// 0x1FA0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_913B04D5442BA4E7A298B89C15C6441E;// 0x1FD0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7955CF4A43A3A60E7ACA3CB753E6835C;// 0x1FF0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47C598614934A30E8428F8995412B14A;// 0x2010(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F1E9F9AB463D986251E1C4881CA0F771;// 0x2030(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3C4910F144D866EE07D2DEB04E001988;// 0x2360(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3889EF87400483730B7AF2BCE5013390;// 0x2690(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F51E305340354D6A2B5ACBB60B96B6CB;// 0x29C0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F82FF61049FE3F758CB28F95A116932D;// 0x2CF0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_40D12A4A4BAE13BBBDD72A89ED0CF3BC;// 0x3020(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1F7E7F294ABDFB38B4F3549B6CABECA1;// 0x3350(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1B2D724F4619457C69DB75B31603C6C2;// 0x3680(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD413CEA4D3431608590F69AE8A778AF;// 0x39B0(0x0330)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C26006064DF92BE7CE797595F8CEAE06;// 0x3CE0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_926FA1E14741CA67E2052EA6D7860BAD;// 0x3D10(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2064CD2E459AC9C4623931A94E4721A8;// 0x3D30(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5165F1E844F439AEDDDE7EAA9B61000F;// 0x3D50(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1391C70C4C7996D040C73EB765D3C67B;// 0x3D70(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_05F78BF545BB0B5E58B53391FC9FB288;// 0x3DA0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3248BDDB4C97F8F3A0E9C59CE31D89E8;// 0x3DC0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_DB77BADA489D5DBF973A04993169EAEC;// 0x3E70(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3D89FED5492564BC81C2E4892643C5BE;// 0x3FA8(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x4060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x4068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x4069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_KS_Hair_ACC01.AB_KS_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KS_Hair_ACC01_AnimGraphNode_TransitionResult_ABAD531A47E7A9A197E26A81B86DE32E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KS_Hair_ACC01_AnimGraphNode_TransitionResult_E8D541C64805405C15AD06B346415305();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_KS_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
