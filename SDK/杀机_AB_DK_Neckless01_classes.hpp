#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_DK_Neckless01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_DK_Neckless01.AB_DK_Neckless01_C
// 0x0AD0 (0x0D40 - 0x0270)
class UAB_DK_Neckless01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8F3764E044212198E68D93B03C9115EF;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2C358B1B4484483B1D732F8E2E693F48;// 0x02A0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B285C9DD4A24A1FF51BFF4B89E40212F;// 0x05D0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CDB1931E4B724F3B9AB47EAEE112F768;// 0x05F0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D336ECDF4DD719BC113BDCB23A860006;// 0x0610(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_73BB05C249391767D4838984429C83CD;// 0x06C0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E93E644D4CEFF0B7245A30BCA165E6B5;// 0x06E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A8E137B0402BE062BA30D983B4115CD4;// 0x0A10(0x0330)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_DK_Neckless01.AB_DK_Neckless01_C"));

		return ptr;
	}


	void ExecuteUbergraph_AB_DK_Neckless01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
