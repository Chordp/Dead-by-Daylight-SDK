// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile.BaseProjectile.SphereTraceSingle
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// class USphereComponent**       Sphere                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              outHitResult                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230ED90              		 offset:31fed90                       

bool ABaseProjectile::SphereTraceSingle(struct FVector* Start, struct FVector* End, class USphereComponent** Sphere, struct FHitResult* outHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.SphereTraceSingle"));

	ABaseProjectile_SphereTraceSingle_Params params;
	params.Start = Start;
	params.End = End;
	params.Sphere = Sphere;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outHitResult != nullptr)
		*outHitResult = params.outHitResult;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.SetAcquired
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          acquired                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68230ED00              		 offset:31fed00                       

void ABaseProjectile::SetAcquired(bool* acquired)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.SetAcquired"));

	ABaseProjectile_SetAcquired_Params params;
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.Server_TryDetectPlayer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// FunctionAddress:0x00007FF68230EBB0              		 offset:31febb0                       

void ABaseProjectile::Server_TryDetectPlayer(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Server_TryDetectPlayer"));

	ABaseProjectile_Server_TryDetectPlayer_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABaseProjectile::OnSetActive(bool* Active)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.OnSetActive"));

	ABaseProjectile_OnSetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.OnSetAcquired
// (Final, Native, Private)
// Parameters:
// bool*                          acquired                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68230EB20              		 offset:31feb20                       

void ABaseProjectile::OnSetAcquired(bool* acquired)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.OnSetAcquired"));

	ABaseProjectile_OnSetAcquired_Params params;
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.OnLaunch
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FLaunchInfo*            LaunchInfo                     (Parm)
// FunctionAddress:0x00007FF68230EA80              		 offset:31fea80                       

void ABaseProjectile::OnLaunch(struct FLaunchInfo* LaunchInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.OnLaunch"));

	ABaseProjectile_OnLaunch_Params params;
	params.LaunchInfo = LaunchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.OnDetectPlayer
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// FunctionAddress:0x00007FF68230E960              		 offset:31fe960                       

void ABaseProjectile::OnDetectPlayer(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.OnDetectPlayer"));

	ABaseProjectile_OnDetectPlayer_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.OnDetectCollision
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// FunctionAddress:0x00007FF68230E840              		 offset:31fe840                       

void ABaseProjectile::OnDetectCollision(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.OnDetectCollision"));

	ABaseProjectile_OnDetectCollision_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.Multicast_OnLaunch
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FLaunchInfo*            LaunchInfo                     (Parm)
// FunctionAddress:0x00007FF68230E7A0              		 offset:31fe7a0                       

void ABaseProjectile::Multicast_OnLaunch(struct FLaunchInfo* LaunchInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Multicast_OnLaunch"));

	ABaseProjectile_Multicast_OnLaunch_Params params;
	params.LaunchInfo = LaunchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.Multicast_DetectPlayer
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// FunctionAddress:0x00007FF68230E650              		 offset:31fe650                       

void ABaseProjectile::Multicast_DetectPlayer(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Multicast_DetectPlayer"));

	ABaseProjectile_Multicast_DetectPlayer_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.Multicast_DetectImpact
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// FunctionAddress:0x00007FF68230E500              		 offset:31fe500                       

void ABaseProjectile::Multicast_DetectImpact(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Multicast_DetectImpact"));

	ABaseProjectile_Multicast_DetectImpact_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.Local_TryDetectCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// bool*                          force                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230E3A0              		 offset:31fe3a0                       

bool ABaseProjectile::Local_TryDetectCollision(struct FImpactInfo* ImpactInfo, bool* force)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Local_TryDetectCollision"));

	ABaseProjectile_Local_TryDetectCollision_Params params;
	params.ImpactInfo = ImpactInfo;
	params.force = force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.Local_OnPlayerDetected
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// FunctionAddress:0x00007FF68230E280              		 offset:31fe280                       

void ABaseProjectile::Local_OnPlayerDetected(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Local_OnPlayerDetected"));

	ABaseProjectile_Local_OnPlayerDetected_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.LineTraceSingle
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              outHitResult                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230E120              		 offset:31fe120                       

bool ABaseProjectile::LineTraceSingle(struct FVector* Start, struct FVector* End, struct FHitResult* outHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.LineTraceSingle"));

	ABaseProjectile_LineTraceSingle_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outHitResult != nullptr)
		*outHitResult = params.outHitResult;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsValidPlayerDetection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230DFF0              		 offset:31fdff0                       

bool ABaseProjectile::IsValidPlayerDetection(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.IsValidPlayerDetection"));

	ABaseProjectile_IsValidPlayerDetection_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsValidImpactDetection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230DEC0              		 offset:31fdec0                       

bool ABaseProjectile::IsValidImpactDetection(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.IsValidImpactDetection"));

	ABaseProjectile_IsValidImpactDetection_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsLocalImpactLegitimate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230DD90              		 offset:31fdd90                       

bool ABaseProjectile::IsLocalImpactLegitimate(struct FImpactInfo* ImpactInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.IsLocalImpactLegitimate"));

	ABaseProjectile_IsLocalImpactLegitimate_Params params;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsAcquired
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230DD60              		 offset:31fdd60                       

bool ABaseProjectile::IsAcquired()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.IsAcquired"));

	ABaseProjectile_IsAcquired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.GetLauncher
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBaseProjectileLauncher* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68230DD30              		 offset:31fdd30                       

class UBaseProjectileLauncher* ABaseProjectile::GetLauncher()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.GetLauncher"));

	ABaseProjectile_GetLauncher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.GetImpactPrimitiveComponent
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68072C590              		 offset:161c590                       

class UPrimitiveComponent* ABaseProjectile::GetImpactPrimitiveComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.GetImpactPrimitiveComponent"));

	ABaseProjectile_GetImpactPrimitiveComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.Client_LaunchRefusedByServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820354D0              		 offset:2f254d0                       

void ABaseProjectile::Client_LaunchRefusedByServer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Client_LaunchRefusedByServer"));

	ABaseProjectile_Client_LaunchRefusedByServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectile.Authority_TryDetectCollision
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FImpactInfo*            ImpactInfo                     (Parm)
// bool*                          force                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230DBD0              		 offset:31fdbd0                       

bool ABaseProjectile::Authority_TryDetectCollision(struct FImpactInfo* ImpactInfo, bool* force)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectile.Authority_TryDetectCollision"));

	ABaseProjectile_Authority_TryDetectCollision_Params params;
	params.ImpactInfo = ImpactInfo;
	params.force = force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.SetProjectileVar
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  VarName                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseProjectileLauncher::SetProjectileVar(struct FName* VarName, float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.SetProjectileVar"));

	UBaseProjectileLauncher_SetProjectileVar_Params params;
	params.VarName = VarName;
	params.value = value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.SetProjectilePool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAuthoritativeActorPoolComponent** projectilePool                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68230FC30              		 offset:31ffc30                       

void UBaseProjectileLauncher::SetProjectilePool(class UAuthoritativeActorPoolComponent** projectilePool)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.SetProjectilePool"));

	UBaseProjectileLauncher_SetProjectilePool_Params params;
	params.projectilePool = projectilePool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.Server_Launch
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FLaunchInfo*            LaunchInfo                     (ConstParm, Parm, ReferenceParm)
// class ABaseProjectile**        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68230FB30              		 offset:31ffb30                       

void UBaseProjectileLauncher::Server_Launch(struct FLaunchInfo* LaunchInfo, class ABaseProjectile** Projectile)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.Server_Launch"));

	UBaseProjectileLauncher_Server_Launch_Params params;
	params.LaunchInfo = LaunchInfo;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.OnRep_Ammo
// (Final, Native, Private)
// FunctionAddress:0x00007FF68230FB10              		 offset:31ffb10                       

void UBaseProjectileLauncher::OnRep_Ammo()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.OnRep_Ammo"));

	UBaseProjectileLauncher_OnRep_Ammo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.OnLaunch
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FLaunchInfo*            LaunchInfo                     (Parm)
// FunctionAddress:0x00007FF68230FA70              		 offset:31ffa70                       

void UBaseProjectileLauncher::OnLaunch(struct FLaunchInfo* LaunchInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.OnLaunch"));

	UBaseProjectileLauncher_OnLaunch_Params params;
	params.LaunchInfo = LaunchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.Local_Launch
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68230FA50              		 offset:31ffa50                       

void UBaseProjectileLauncher::Local_Launch()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.Local_Launch"));

	UBaseProjectileLauncher_Local_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230FA20              		 offset:31ffa20                       

bool UBaseProjectileLauncher::IsLocallyControlled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.IsLocallyControlled"));

	UBaseProjectileLauncher_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.IsAmmoFull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F9F0              		 offset:31ff9f0                       

bool UBaseProjectileLauncher::IsAmmoFull()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.IsAmmoFull"));

	UBaseProjectileLauncher_IsAmmoFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.HasProjectile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F9C0              		 offset:31ff9c0                       

bool UBaseProjectileLauncher::HasProjectile()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.HasProjectile"));

	UBaseProjectileLauncher_HasProjectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.HasAuthority
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F990              		 offset:31ff990                       

bool UBaseProjectileLauncher::HasAuthority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.HasAuthority"));

	UBaseProjectileLauncher_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ABaseProjectile*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F960              		 offset:31ff960                       

class ABaseProjectile* UBaseProjectileLauncher::GetProjectileToLaunch()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch"));

	UBaseProjectileLauncher_GetProjectileToLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetOwningPawn
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F930              		 offset:31ff930                       

class APawn* UBaseProjectileLauncher::GetOwningPawn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.GetOwningPawn"));

	UBaseProjectileLauncher_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchSpeed
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F8F0              		 offset:31ff8f0                       

float UBaseProjectileLauncher::GetLaunchSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.GetLaunchSpeed"));

	UBaseProjectileLauncher_GetLaunchSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchPosition
// (Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F8B0              		 offset:31ff8b0                       

struct FVector UBaseProjectileLauncher::GetLaunchPosition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.GetLaunchPosition"));

	UBaseProjectileLauncher_GetLaunchPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchDirection
// (Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F870              		 offset:31ff870                       

struct FVector UBaseProjectileLauncher::GetLaunchDirection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.GetLaunchDirection"));

	UBaseProjectileLauncher_GetLaunchDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68230F840              		 offset:31ff840                       

int UBaseProjectileLauncher::GetAmmo()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.GetAmmo"));

	UBaseProjectileLauncher_GetAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.Authority_Reload
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68230F820              		 offset:31ff820                       

void UBaseProjectileLauncher::Authority_Reload()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.Authority_Reload"));

	UBaseProjectileLauncher_Authority_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.Authority_Launch
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68230F800              		 offset:31ff800                       

void UBaseProjectileLauncher::Authority_Launch()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.Authority_Launch"));

	UBaseProjectileLauncher_Authority_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ammoToAdd                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68230F780              		 offset:31ff780                       

void UBaseProjectileLauncher::Authority_AddMaxAmmo(int* ammoToAdd)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo"));

	UBaseProjectileLauncher_Authority_AddMaxAmmo_Params params;
	params.ammoToAdd = ammoToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile.PhysicsBasedProjectileMovementComponent.GetPreviousLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF682310030              		 offset:3200030                       

struct FVector UPhysicsBasedProjectileMovementComponent::GetPreviousLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Projectile.PhysicsBasedProjectileMovementComponent.GetPreviousLocation"));

	UPhysicsBasedProjectileMovementComponent_GetPreviousLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
