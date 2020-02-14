#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher16_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher16.AB_Menu_Slasher16_C
// 0x02C2 (0x0532 - 0x0270)
class UAB_Menu_Slasher16_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EAAAEB0E4896D75706899E9DF122BB1A;      // 0x0278(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BBB001D8485B072632332EA281ED0AE9;// 0x0298(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_37F8DDF8472B72A1D0904981BE59D9CA;// 0x0338(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DCD34E64405B18399FC1FC994FCC939B;// 0x03A0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6B811E243B751D9663DF985DCAA09B9;// 0x0440(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2893D57D4D88E30CD81A5E95E195DBBD;// 0x04B8(0x0078)
	bool                                               Role_Selected;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher16.AB_Menu_Slasher16_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher16(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
