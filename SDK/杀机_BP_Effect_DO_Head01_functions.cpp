// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Effect_DO_Head01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.AttachToSkeletalMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** SkeletonPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Effect_DO_Head01_C::AttachToSkeletalMesh(class USkeletalMeshComponent** SkeletonPart)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.AttachToSkeletalMesh"));

	ABP_Effect_DO_Head01_C_AttachToSkeletalMesh_Params params;
	params.SkeletonPart = SkeletonPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.ExecuteUbergraph_BP_Effect_DO_Head01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Effect_DO_Head01_C::ExecuteUbergraph_BP_Effect_DO_Head01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.ExecuteUbergraph_BP_Effect_DO_Head01"));

	ABP_Effect_DO_Head01_C_ExecuteUbergraph_BP_Effect_DO_Head01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
