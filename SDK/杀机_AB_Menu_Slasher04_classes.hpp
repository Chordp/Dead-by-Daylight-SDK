#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher04.AB_Menu_Slasher04_C
// 0x0392 (0x0602 - 0x0270)
class UAB_Menu_Slasher04_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6C1911B847E14B74E75764AECC8D14C6;      // 0x0278(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_4D86DC35479E3F7F89A7EEAE489783C7;// 0x0298(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0912499B4259291FD7D739949E411EAD;// 0x0300(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_015FA6F94AB5BD6E819807B2607BC4C3;// 0x0378(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3E5F3E944302F0EED62E03B89D905C3E;// 0x03F0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9CEB04F642540FBE8381969D77B7B103;// 0x0490(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F6AEF70B4F05CBD5D73B58B0581C532F;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6A23691B41F8D8EE5B48AFBF355B4FB4;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher04.AB_Menu_Slasher04_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher04(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
