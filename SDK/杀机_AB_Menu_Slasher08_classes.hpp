#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C
// 0x03A0 (0x0610 - 0x0270)
class UAB_Menu_Slasher08_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_894CB67B4CD5DDBD2FD170B776753D83;      // 0x0278(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_822F70494DF7153047BC35A360A5EB52;// 0x0298(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDCE2A114F7862833B974FB3D370DC9C;// 0x0300(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699;// 0x0378(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F;// 0x0418(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCAB80CF41470F8276256E9148434A4E;// 0x04B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0CF8FC0B401C36A360CDFBA08D374396;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_35B921D04392157E56CE07BBE1D9B4BB;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0602(0x0006) MISSED OFFSET
	class UStaticMesh*                                 Hatchet;                                                  // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C"));

		return ptr;
	}


	void GetKiller(class ABP_Menu_Slasher08_C** Menu_Slasher_08);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FX_MakeHatchetAppear();
	void AnimNotify_FX_MakeHatchetDisappear();
	void ExecuteUbergraph_AB_Menu_Slasher08(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
