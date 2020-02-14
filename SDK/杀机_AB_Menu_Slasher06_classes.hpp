#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher06_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher06.AB_Menu_Slasher06_C
// 0x0392 (0x0602 - 0x0270)
class UAB_Menu_Slasher06_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B2923FF5461A32F8333977B77732A593;      // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E9E5F36044EE15036B6EC3BD10A98023;// 0x0298(0x0078)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_F47B71A34CE54A4894D0F1BA841CAE15;// 0x0310(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D5E5ACDE4C83369F21317496127058C5;// 0x0378(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EA564C9F4A14A1192EC25BA0F65D1161;// 0x0418(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68C6A122400C00EB675D36BE6637AFD3;// 0x04B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EEDEBA634F169600D3C8B5A3908C8075;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6C47E89B4EB3187A853CBE891DBD3EA9;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher06.AB_Menu_Slasher06_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher06(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
