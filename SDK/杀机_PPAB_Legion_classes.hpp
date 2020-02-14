#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PPAB_Legion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PPAB_Legion.PPAB_Legion_C
// 0x0820 (0x0A90 - 0x0270)
class UPPAB_Legion_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4A233B9C4B91A60701C2009E780B69B5;      // 0x0278(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_C4958477411E080E6D44ACA13C30D539;  // 0x0298(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2815980D48DD77BEE86D42A70BFE66A1;// 0x02E0(0x0330)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14B6BEC143A1B23BCE585DAE039FFEE4;// 0x0610(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8AEA1D46403F98A939FA10B1F29F57B0;// 0x0940(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_30225A784B77E6BACAF1BBB1DF0E7E6E;// 0x0960(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4D51EDB84BBBEB2906119BAB39BD71A3;// 0x0980(0x0110)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass PPAB_Legion.PPAB_Legion_C"));

		return ptr;
	}


	void ExecuteUbergraph_PPAB_Legion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
