#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SlasherAnimSlaveFemale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C
// 0x0160 (0x03D0 - 0x0270)
class USlasherAnimSlaveFemale_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_99E18B1A46A2BC6BBC9CDAA021CDE387;      // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B;// 0x0298(0x0138)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B();
	void ExecuteUbergraph_SlasherAnimSlaveFemale(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
