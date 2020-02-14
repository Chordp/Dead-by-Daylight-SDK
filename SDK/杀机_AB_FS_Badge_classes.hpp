#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_FS_Badge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_FS_Badge.AB_FS_Badge_C
// 0x0811 (0x0A81 - 0x0270)
class UAB_FS_Badge_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BC9180D7492F4871578DBE88B50D6460;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_468222C34DF9F5429327FE93365B6A21;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFC9C3E244331F61A155B68CC4F95572;// 0x02C0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2A77A414428CBF27FEFC84BB81893AB4;// 0x02E8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0E5D5B7A412AC70C045A32B1400F21A5;// 0x0310(0x0330)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_279D24144916481E9298E2A689741C08;// 0x0640(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CBA335304F7B4B1D7CAB5FB82272DC4D;// 0x0660(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8FF85DD94A255D696B74C3BA289743B9;// 0x0680(0x0330)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6B3456414F42CE182CFF9EAD617E566F;// 0x09B0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4548477943AB205423C2B0AE1F81D765;// 0x09D0(0x00B0)
	bool                                               IsMenu;                                                   // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_FS_Badge.AB_FS_Badge_C"));

		return ptr;
	}


	void IsOwnerMenu(bool* OwnerIsMenuCharacter);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_FS_Badge(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
