#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher07_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher07.AB_Menu_Slasher07_C
// 0x0392 (0x0602 - 0x0270)
class UAB_Menu_Slasher07_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2A146C6343EDC69A3D43138C6D0A386F;      // 0x0278(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_ECE706C043E4582D391538A643800316;// 0x0298(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CB492C74ABB145DA503CBA9034EBCD6;// 0x0300(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E055F6E84A5F2F6806C0F2AD53F9ECA5;// 0x0378(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_569BC25E40E82E610ACC5B9E99E89747;// 0x0418(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D81FCEF42C19C7BF5ED3998C9A3E2B1;// 0x04B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_294A1192449E12213EA78F9263DBD774;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF56DAF64983584D556D29A78D5128B5;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher07.AB_Menu_Slasher07_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher07(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
