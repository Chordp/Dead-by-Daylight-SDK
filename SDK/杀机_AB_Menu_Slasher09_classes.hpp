#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher09_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher09.AB_Menu_Slasher09_C
// 0x0392 (0x0602 - 0x0270)
class UAB_Menu_Slasher09_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DBB2BBEE49286F681B2C99905D7988F0;      // 0x0278(0x0020)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_FCCE00DD47481064B782AC95A5CDBE0C;// 0x0298(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DB699874F41C28F83095F9A07840999;// 0x0300(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_87548AE84501490B5E689C959F2A9AAD;// 0x0378(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A209C036469658430A2B18AAA554F1AC;// 0x0418(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_482A97D94D034035C31CF89B8DF16F85;// 0x04B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7540BE544AEBC406897B03BCC045330F;// 0x0530(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_82D537B84AC1C90FBC78BA83DFCAF7D5;// 0x0550(0x00B0)
	bool                                               Role_Selected;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Slasher09.AB_Menu_Slasher09_C"));

		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher09(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
