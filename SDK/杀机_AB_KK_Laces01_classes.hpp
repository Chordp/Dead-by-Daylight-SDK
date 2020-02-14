#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_KK_Laces01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_KK_Laces01.AB_KK_Laces01_C
// 0x06B0 (0x0920 - 0x0270)
class UAB_KK_Laces01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3CFD86424974D21E51B40B96E68D3A23;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_343ACE6643AC6F98C04B82A3D46D065F;// 0x02A0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5E86A2EF45EA263C168905B70E7FFA57;// 0x05D0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_49DA916F42DA4A542C6C2CA19036D2B3;// 0x05F0(0x0330)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_KK_Laces01.AB_KK_Laces01_C"));

		return ptr;
	}


	void ExecuteUbergraph_AB_KK_Laces01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
