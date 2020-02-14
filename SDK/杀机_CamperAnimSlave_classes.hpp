#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_CamperAnimSlave_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CamperAnimSlave.CamperAnimSlave_C
// 0x0160 (0x03D0 - 0x0270)
class UCamperAnimSlave_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_055C51684CFA213F32DA5CB5EE2E366A;      // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF;// 0x0298(0x0138)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass CamperAnimSlave.CamperAnimSlave_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CamperAnimSlave_AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF();
	void ExecuteUbergraph_CamperAnimSlave(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
