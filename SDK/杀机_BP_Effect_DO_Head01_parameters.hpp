#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Effect_DO_Head01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.AttachToSkeletalMesh
struct ABP_Effect_DO_Head01_C_AttachToSkeletalMesh_Params
{
	class USkeletalMeshComponent**                     SkeletonPart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.ExecuteUbergraph_BP_Effect_DO_Head01
struct ABP_Effect_DO_Head01_C_ExecuteUbergraph_BP_Effect_DO_Head01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
