#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_KS_Beeropener_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C
// 0x0771 (0x09E1 - 0x0270)
class UAB_KS_Beeropener_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_93907A9A4A01B08252AFD9BFBF5A37C6;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BB9CCE324756EF107C49CA91D42438BA;// 0x02A0(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2D57B06149D1E29C155E21B36129A950;// 0x05D0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F86235CA4A15F2903B8C10B0A20769BF;// 0x05F0(0x00A0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D4E97B4B41BCA88035CC698E8D7AF103;// 0x0690(0x0330)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_40E49250424583CBE08CD8BAE4C4C13A;// 0x09C0(0x0020)
	bool                                               IsInMenu;                                                 // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C"));

		return ptr;
	}


	void IsOwnerInMenu(bool* Return);
	void Update_Variables();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_KS_Beeropener_ACC01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
