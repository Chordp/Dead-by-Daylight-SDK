// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_MT_Hair01_Acc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
// (Native, Public)
// FunctionAddress:0x00007FF682017AF0              		 offset:2f07af0                       

void ABP_MT_Hair01_Acc_C::OnRep_ReplicatedPhysAsset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset"));

	ABP_MT_Hair01_Acc_C_OnRep_ReplicatedPhysAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
// (Native, Public)
// FunctionAddress:0x00007FF68068D990              		 offset:157d990                       

void ABP_MT_Hair01_Acc_C::OnRep_ReplicatedMesh()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh"));

	ABP_MT_Hair01_Acc_C_OnRep_ReplicatedMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
// (Native, Public)
// FunctionAddress:0x00007FF6820B0D50              		 offset:2fa0d50                       

void ABP_MT_Hair01_Acc_C::OnRep_ReplicatedMaterial1()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1"));

	ABP_MT_Hair01_Acc_C_OnRep_ReplicatedMaterial1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
// (Native, Public)
// FunctionAddress:0x00007FF6820B10D0              		 offset:2fa10d0                       

void ABP_MT_Hair01_Acc_C::OnRep_ReplicatedMaterial0()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0"));

	ABP_MT_Hair01_Acc_C_OnRep_ReplicatedMaterial0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
