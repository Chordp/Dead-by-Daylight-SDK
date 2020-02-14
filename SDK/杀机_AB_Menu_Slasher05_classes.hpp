#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher05.AB_Menu_Slasher05_C
// 0x0392 (0x0602 - 0x0270)
class UAB_Menu_Slasher05_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B119D5C74343A385576EF4B376BB7E98;      // 0x0278(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_5E6E0F5E4079A63B5FB12484E5DAE88A;// 0x0298(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29E89D5A43F0674F281055849B5EDBAC;// 0x0300(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0460334948419DC918C2C08BDAEB449C;// 0x0378(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_318D3281405C8C1CC72634BCE5454242;// 0x03F0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0D70D27F41EC29B1E4C7C8BAC69820C5;// 0x0490(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E840888E483B9C4A9D800B97FE5A7AF9;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E71C995E484E9E936201C5BB09B2A4D1;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher05.AB_Menu_Slasher05_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher05(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
