#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher14_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher14.AB_Menu_Slasher14_C
// 0x02C2 (0x0532 - 0x0270)
class UAB_Menu_Slasher14_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_73586C26422116CD955B5B91CC1EEE93;      // 0x0278(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3A9FC2244016557860260AA13E7C4B3C;// 0x0298(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_F713ECAD4FEE2EFCE2E912AF662D247D;// 0x0338(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CB0F977485ECCEA879E939978A9E4E3;// 0x03A0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83C209ED48B795831D2560BDD92F672F;// 0x0440(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_738E1FAA40E8B00F84296D92A8A11854;// 0x04B8(0x0078)
	bool                                               Role_Selected;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher14.AB_Menu_Slasher14_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher14(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
