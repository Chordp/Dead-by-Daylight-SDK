#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_GS_Hair_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GS_Hair_ACC01.AB_GS_Hair_ACC01_C
// 0x669A (0x690A - 0x0270)
class UAB_GS_Hair_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5BE99FF649326CDC444A0CBEF00C633B;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7DF4C2A148739219AAAAADA500F5C378;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_248D32724469BD9F840377A8CAB8D0CB;// 0x02C0(0x0028)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_524644EE433D3D6C8EC6FAB923349C8B;// 0x02E8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_385DBA4146725BB863077B9816FBB918;// 0x0418(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_EC5E38714E9D93D103AE12B76DE29C6F;// 0x0548(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_70F46B064FD0FF92E0B6389C1238FA6C;// 0x0678(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_AE15B06F4A3DABBF93668EA8569FF762;// 0x07A8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A26FB892416A8B3230DC8EA1C560906D;// 0x08D8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4C0DC55E404C0D0EA9C742B0738374F3;// 0x0A08(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2B1106D042DD5DAD7FD928971B17EE16;// 0x0B38(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9E11DED145F3E3281BA0D7943D4C3E93;// 0x0C68(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4126A52D417634834D6A67AC37CC8BA9;// 0x0D98(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E14129E4ADC2A811647C49A3ED12686;// 0x0EC8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6C32324A4676EE77314336BAEFB43092;// 0x0EF8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F18(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4ADD537648D8708A5173BD897D0C7018; // 0x0F20(0x0210)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A55E942F4C6CEC283E9FADB2ED1D09E3;// 0x1130(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9312634C4F2491FD397CD298A7CCDA8C;// 0x1460(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6006C3C04BE7D9E516E0A1B0C2FFD412;// 0x1790(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_64E27A3E4850356F3C276FB0811E5051;// 0x1AC0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EACFD7ED440EF89EE716AF9CCC199F8C;// 0x1DF0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4B0403FC4C7A7AF5A745EE8C9DE29949;// 0x2120(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7DA537E4470BC57F1CAC319B9DA4184C;// 0x2450(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_67D36D4E428F52FE7CFC75877C08B02F;// 0x2780(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D959E18B436107436E0FFA8A1E48AB2A;// 0x2AB0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BF8D87124F9071855EEC55B52E6865FA;// 0x2DE0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3D3A6575491CE0E0B6373695C599AFE2;// 0x3110(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_49E2A4ED4CB17A755DD9A28DF460D04C;// 0x3440(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_88ED75144F8ECF4CFA8AD2A2968AE398;// 0x3460(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_9BB6698F4E2DFE61BC7D6FBD0AA06C92; // 0x3480(0x0210)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8B91245145A434A1DC2C7C861219B006;// 0x3690(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D454081746DAE3E4CCF6DDA02936B6EB;// 0x37C0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_43CD9D6A40A44EDFF39483865CDBF1FD;// 0x38F0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5CF573C84AD33A1250A2289122FD431C;// 0x3A20(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1ECB421840E7AAAE7AE075BD79133864;// 0x3B50(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_24B4B10841FC4E0DA1B4268741FF1DD0;// 0x3C80(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A24B7E2D42B9D32FE0B71E8FA1D3CC90;// 0x3DB0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_EE056FE742F11B02ECE7798D0C2D6010;// 0x3EE0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1217442D40C66929546543A8277FDE74;// 0x4010(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4F201E304373D8F9C98619BB0081F37E;// 0x4140(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3441E1834412E7A4FFA0BC8F8747A88B;// 0x4270(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_854C5EF645BB9B1C74E9A1B587F2A8C2;// 0x42A0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C2433FD64AD02A872D4325B3666EDE72;// 0x42C0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_27B4843F4960DFEB5DBA619752AD1604;// 0x45F0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_57CBC35349FBC4E944DFBF85A2643C04;// 0x4920(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A42914B74AACE334A4083EBE8DB3D753;// 0x4C50(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_383DFC1D4E7DF030864EB9B099151B16;// 0x4F80(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_940DDA2648D845BD4C86EEB5BAC88343;// 0x52B0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EC9E26EA48F8584BA467C183E83A1550;// 0x55E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D060B7764117728FC14336AFDAB72E91;// 0x5910(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F6266AB94CD7DE67F9C3E790D77BBDE5;// 0x5C40(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_655B6CB5423C77C1805005A713E3EF46;// 0x5F70(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F044E38840189E4ECBBCFC9762DF3A56;// 0x62A0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F27CB11E4D7E747EEBD09BAB84EE36C2;// 0x65D0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E8A16BB346765AE8E3D0329AB11352D2;// 0x65F0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_436A2AB84137FCBE26C999A596C0B5AF;// 0x6610(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_964929784865CA066BA4BFBBB3527217;// 0x6640(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7B1893D048C4A61617C64FBF29299894;// 0x6660(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_4D4240E049D869BEFC1F778686771373;// 0x6710(0x0138)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4542B46C47A647CD163131B2E7E38746;// 0x6848(0x00B8)
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                              // 0x6900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InMenu;                                                   // 0x6908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x6909(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_GS_Hair_ACC01.AB_GS_Hair_ACC01_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GS_Hair_ACC01_AnimGraphNode_TransitionResult_248D32724469BD9F840377A8CAB8D0CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GS_Hair_ACC01_AnimGraphNode_TransitionResult_7DF4C2A148739219AAAAADA500F5C378();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_GS_Hair_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
