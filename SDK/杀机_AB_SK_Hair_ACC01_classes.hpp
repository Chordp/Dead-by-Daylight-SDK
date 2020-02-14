#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_SK_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_SK_Hair_ACC01.AB_SK_Hair_ACC01_C
// 0x6C21 (0x6EA1 - 0x0280)
class UAB_SK_Hair_ACC01_C : public UOniCustomizationItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E76E892448E24139AAE521BDA94AC52E;      // 0x0288(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7D9C1164B0FA5C6B9AAC5B6FD78E586;// 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2CCB17542BE7D93993DBB9E728AA504;// 0x02D0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_14D322114FFB4BC01FE83A862344A610;// 0x02F8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F3C97E624B235ECA20CDFAAE76362C97;// 0x0318(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A74C81334C9A21AEB627D3AFE57AEDDA;// 0x0338(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9C77A9AA42C4437B8951F5B86DE97AFA;// 0x0358(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F0E2B0A94FF47D4E69933EBD7D8B6A3B;// 0x0378(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50FF15E244A3799CCF6A4885256715DB;// 0x0398(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E4076CAC4D0A74C9CDD59DBA2B125D3E;// 0x03C8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8DCEC7AF461ABC88E17ED8970A4E5338;// 0x03E8(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11A2B53244E33240C12DD48F7C80F8BA;// 0x0420(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A05FAB594C9F70A95519A4B3234E18C9;// 0x0750(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_61037C8542568776C67739B1E71F08FA;// 0x0A80(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0CE3589C48486BA00BE9EEB2A70A97F7;// 0x0DB0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1CB586BE4C62D8321B0A7898714C3998;// 0x10E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B4B0CAB2468DCF9C3F0A04A049BE68C6;// 0x1410(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F7F8B0B14C57062C99364C9FCCA76F23;// 0x1740(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6EBDAB5E47F72E15687A36864E91FB2F;// 0x1A70(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_238E276F4699D5B6153FE8B6CD3CF391;// 0x1DA0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9F6C1EAF4D266900C77C3C9EA78CB9D4;// 0x20D0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_637D8B1541BDA1E14347ADB700FD8450;// 0x2400(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_05CD66194A935FDC6350D69EBF8B31CA;// 0x2730(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6653971F40A607F38867488194E98D91;// 0x2A60(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D4E8BC7243D1C763C193A683BDDC8250;// 0x2D90(0x0330)
	struct FAnimNode_MultiWayBlend                     AnimGraphNode_MultiWayBlend_DC19A6754504DECE86E88F9CE33B18ED;// 0x30C0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_70B315404196101CAEA4139A7034C7EE;// 0x3110(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7539824A491E6C0C8C23CF9B7EA4E6AB;// 0x3130(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A2339D2748241F22F9EF9884BEE05746;// 0x31A8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BF4C69554F1A679D46EAB69EEBB67063;// 0x3278(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_01BA7638472E21E4F08637A2168F3379;// 0x32A8(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5CD1FBEC450B356EE9AF88AB17A4ACB4;// 0x3348(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D876DA1A4E872ED83CB810A213C411A7;// 0x3458(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3FAC0D0D4770481397BD6D84EDA6354A;// 0x3568(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_00AB0F90488B8EE3541B7997AA677D1C;// 0x3678(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_042E3045428F2F74AE4B6080BB89D669;// 0x3788(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E1EE7A074CA5B89257235C846A209C4C;// 0x3898(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B8FEE45F4B243A468FB922981BCD3431;// 0x39A8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_775C6ABD448D7E961EEB789FB756ECAA;// 0x3AB8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1751F5944D744BFC65A174AC1C7C851F;// 0x3BC8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_97A171314F5D8EFA9FB958904C34CBB3;// 0x3CD8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D9CD8A9C4A14FA2C0EBD70ABDB077CF7;// 0x3DE8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93995A66441032F5FA4D34A17757BCA0;// 0x3EF8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B442A21F40953597D5A5F5873C82EA65;// 0x4008(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E86A64AF4895AE1AF65A43AD9A23EE9D;// 0x4118(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_145F8D2646270CA2E9673AA6CE144CBE;// 0x4138(0x0110)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FB17DDA44C4826890E98168A087A1FEA;// 0x4248(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5630194047F738854954B8AD9278D1CB;// 0x4278(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15EBA08B4D52EDC9B4C632BA7C047F56;// 0x4298(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_62DCEDD44FFAE964F7A51AA8B4610E1C;// 0x42B8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A1C277B04ADDF07FA8D4EFBCB5570218;// 0x42D8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D0BEB5E840E2CE3FD1D65AB434E7587A;// 0x42F8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85F4FF0C49BDF026FDF51CA10E7C96E3;// 0x4318(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D3CE3DFC4F2B890701FD0780FD4EA8BB;// 0x4348(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0CAC36EE4D15467B4B25EF88B5C0347A;// 0x4368(0x0030)
	unsigned char                                      UnknownData01[0x8];                                       // 0x4398(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DEAE56C7452A4E9CE0EF49837AFF98AA;// 0x43A0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_50B8E4EA43C234F1EE027AB6241A1124;// 0x46D0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3BE6C9F74448FFBDDA4D608E1743839F;// 0x4A00(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1A8F79A44472FBEFF78E15848FB836E4;// 0x4D30(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6F83B7F24163CDD1C40E029944A2E5E9;// 0x5060(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0FCE2FA049C5063B3C75EEACC0A40FDB;// 0x5390(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_92F26F974264D25426CB5EB8767E6141;// 0x56C0(0x0330)
	struct FAnimNode_MultiWayBlend                     AnimGraphNode_MultiWayBlend_9A61A60649B5407FD34F6683F7B212A0;// 0x59F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_696EA04D4261F5DD53AEC3872C72446C;// 0x5A40(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_144328D04B7507EAC7122DB086894E13;// 0x5AB8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74703C4742B7D6611725AAB28E0B95E8;// 0x5B88(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A78ABC3446DD514DB8CD33ABB7A1C759;// 0x5C28(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6255A97C425C46DACBB2F7BE10D83D3F;// 0x5D38(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F0EA16C94DCC08E73EDB09B25F510F97;// 0x5E48(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8F12AD2944279D84AFA118845F9D2FAE;// 0x5F58(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2C56833048C215E99E5ACFB46F65463C;// 0x6068(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2C5F1802470F463F0488A1B682A2214D;// 0x6178(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E52A582C4ED758C7B1239BADC611B1B1;// 0x6288(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17F074AB4DAFC907CCBAC9877C1B473B;// 0x6398(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E12953E14F2C57533DA8029BD8776A98;// 0x64A8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6293561B4A9A09ED3B7C878A2D723492;// 0x65B8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_84AE506E4F93536D86D86E935B372B39;// 0x66C8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F4BC29CA467DC3E23B5A5F85B68748C1;// 0x67D8(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19CCFD0243F38779391D42A7204E525B;// 0x68E8(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AEF2CA9449DE5C1025F371AC2FF28BEF;// 0x69F8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8760033F493DF5D27B1E30AB6FCF219F;// 0x6A18(0x0110)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_191B7DE84F71D5692414789DE252543D;// 0x6B28(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4C280FDF428A76A4C9CE329863FBEE64;// 0x6B58(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C6BA05F94636DB06C55105AD56A97E1F;// 0x6B78(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58DDD5434659786EDBF5EBB6E4EC1DC8;// 0x6BA8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5B6D61BE47FF41154DF014B4D9804655;// 0x6BC8(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_20B31264445CF185BB558FBD1C7C8E24;// 0x6C78(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7B9ED6D94808FEA63E3A91B51BCB6970;// 0x6DB0(0x00B8)
	bool                                               Initialized;                                              // 0x6E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x6E69(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x6E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x6E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x6E79(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x6E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      RotationValue;                                            // 0x6E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RotationValueDemon;                                       // 0x6E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Toggle;                                                   // 0x6EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_SK_Hair_ACC01.AB_SK_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_145F8D2646270CA2E9673AA6CE144CBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_B442A21F40953597D5A5F5873C82EA65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_93995A66441032F5FA4D34A17757BCA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_A78ABC3446DD514DB8CD33ABB7A1C759();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_6255A97C425C46DACBB2F7BE10D83D3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_F0EA16C94DCC08E73EDB09B25F510F97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_8F12AD2944279D84AFA118845F9D2FAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_2C56833048C215E99E5ACFB46F65463C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_2C5F1802470F463F0488A1B682A2214D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_E52A582C4ED758C7B1239BADC611B1B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_17F074AB4DAFC907CCBAC9877C1B473B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_E12953E14F2C57533DA8029BD8776A98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_6293561B4A9A09ED3B7C878A2D723492();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_84AE506E4F93536D86D86E935B372B39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_F4BC29CA467DC3E23B5A5F85B68748C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_19CCFD0243F38779391D42A7204E525B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_8760033F493DF5D27B1E30AB6FCF219F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_D9CD8A9C4A14FA2C0EBD70ABDB077CF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_97A171314F5D8EFA9FB958904C34CBB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_1751F5944D744BFC65A174AC1C7C851F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_775C6ABD448D7E961EEB789FB756ECAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_B8FEE45F4B243A468FB922981BCD3431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_E1EE7A074CA5B89257235C846A209C4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_042E3045428F2F74AE4B6080BB89D669();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_00AB0F90488B8EE3541B7997AA677D1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_3FAC0D0D4770481397BD6D84EDA6354A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_D876DA1A4E872ED83CB810A213C411A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_ModifyBone_5CD1FBEC450B356EE9AF88AB17A4ACB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_TransitionResult_C2CCB17542BE7D93993DBB9E728AA504();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SK_Hair_ACC01_AnimGraphNode_TransitionResult_E7D9C1164B0FA5C6B9AAC5B6FD78E586();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_SK_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
