#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_GS_Necklace_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GS_Necklace_ACC01.AB_GS_Necklace_ACC01_C
// 0x0470 (0x06E0 - 0x0270)
class UAB_GS_Necklace_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_25EB933F4E541EFC544BF599EABFAAC3;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_368E043F49A79AEDD2557492B7E3D286;// 0x02A0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0732975B49F98D26737323A23A1B9E48;// 0x05D0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_82F9076E4A8DF86046B67692DB226696;// 0x05F0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_953C356247B743A266B44C8BBCC58500;// 0x0610(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4A5137174A8A1647EF739790B50F18B9;// 0x06C0(0x0020)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_GS_Necklace_ACC01.AB_GS_Necklace_ACC01_C"));

		return ptr;
	}


	void ExecuteUbergraph_AB_GS_Necklace_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
