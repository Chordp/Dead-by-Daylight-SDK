#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher15_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher15.AB_Menu_Slasher15_C
// 0x13CA (0x163A - 0x0270)
class UAB_Menu_Slasher15_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_462DFC7F49A3C22F6045C5833288AB92;      // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95B70C424E15A642E4CD25BD8BE5B649;// 0x0298(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A1F11584AC13EE6FCF939AFA1853C49;// 0x0310(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_88C27EB2496E60F07D9DA481DCF0A257;// 0x0388(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_95BA62C648BB8D0EEB650EAD077EC9D2;// 0x03A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EE03062140D5F1F9C12AC6AD7E5E695E;// 0x03D0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E5F8949B44CEDC5B631019820748A76F;// 0x0700(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EF40D6A042011C57169AB6B1EC7AEDAC;// 0x0A30(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_98483D2C41311A0725C87494F13DA629;// 0x0D60(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_157230004047528D18B19F8A130D6AD7;// 0x1090(0x0330)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30AD7CC747BC6A70D4B0BEA5BD7B13F6;// 0x13C0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_0E3DD36A4D2852BAA50EA58CC347E33F;// 0x1460(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45DC077F4764BED084E7ABA6539BF25E;// 0x14C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_87AA0B514883B77C6E1A418026C7EA52;// 0x1568(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D955F122424CA4E829327C898181F3BC;// 0x1588(0x00B0)
	bool                                               Role_Selected;                                            // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x1639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher15.AB_Menu_Slasher15_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher15(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
