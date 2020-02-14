#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_SK_Armor_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_SK_Armor_ACC01.AB_SK_Armor_ACC01_C
// 0x2929 (0x2B99 - 0x0270)
class UAB_SK_Armor_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3654B7E049F0CDED74B80CAF2B6F47AB;      // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_540C0FF84089BF37B6B26FAF04ADD4FA;// 0x0298(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25ED7A2741830A79967A0A876B05EA65;// 0x03D0(0x00B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3D9EF2AB49D86C6B54CADB9AC6FEC823;// 0x0488(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4465761842571C7BAF8410AC00065A31;// 0x05B8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_ACD238594427755186C09A8BBB65BDD9;// 0x06E8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_0EC5DC2B4951CADFC41C6D9E58A16FFD;// 0x0818(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_523208F64F490D24D3125BAC283C5D37;// 0x0948(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_598E34A44B0BDD856CD4698EBC700379;// 0x0A78(0x0130)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_717AD9B941334FB19BC28EB3F7353843;// 0x0BA8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_942CB90A49EE96B462C9279CC5C980D7;// 0x0CC0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_11ADD5EC41DEEFC135D3F0975E4BBF19;// 0x0DF0(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EEDA4FE4451BD8BA417DBDB2CAEF6271;// 0x0F20(0x0330)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C6D952504631B7DD2CC4BDA6AD1E06B9;// 0x1250(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A292248A4BACD9B9931EF5904ED883AF;// 0x1380(0x0130)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_EDB8EE8543DB8052A66AA994BA413E76;// 0x14B0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_06D20C4F4BCEDDB3FD3B9BBD6CC06BC3;// 0x15C8(0x0130)
	unsigned char                                      UnknownData00[0x8];                                       // 0x16F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C3151D644D6FAB1A241B16B8CAE6BF62;// 0x1700(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_104F23444AEB63957EA423B8C0AEB8BA;// 0x1A30(0x0330)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6B95563A46FE6AFF62F5F4A45F19A15D;// 0x1D60(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42CBD8C449C670A8BE622E811DE8FD66;// 0x1D80(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22A080FF4CA1A4561B0E198CCC8C4CFD;// 0x1DB0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A8F418F34A942F85834960B66DF1B582;// 0x20E0(0x0330)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_43D396B04B543A9A42F84A8D36E6EA0E;// 0x2410(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_BEB4CDB24A0DE81F4410DEAF09345EEC;// 0x2528(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_3339F60C4AC96BFC45CF50A47E0D9ABB;// 0x2640(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_6FB469D34893D1662260A886E01B8828;// 0x2758(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_1DDED10D42945EB55740E6B3BD9545DB;// 0x2870(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_C0885F784F23CEF118325D8776CE8CEF;// 0x2988(0x0118)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_478EDBD44480A169E96399BBD7EADB0D;// 0x2AA0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E2BAA2E049296C6AFA6C5CAB7EC8DCC4;// 0x2AC0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_08E5DF8049B7123CAF3A28B86088F97D;// 0x2AE0(0x00B0)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x2B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Initialized;                                              // 0x2B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_SK_Armor_ACC01.AB_SK_Armor_ACC01_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_SK_Armor_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
