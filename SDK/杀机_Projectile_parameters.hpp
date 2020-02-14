#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile.BaseProjectile.SphereTraceSingle
struct ABaseProjectile_SphereTraceSingle_Params
{
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USphereComponent**                           Sphere;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  outHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.SetAcquired
struct ABaseProjectile_SetAcquired_Params
{
	bool*                                              acquired;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile.BaseProjectile.Server_TryDetectPlayer
struct ABaseProjectile_Server_TryDetectPlayer_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.OnSetActive
struct ABaseProjectile_OnSetActive_Params
{
	bool*                                              Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile.BaseProjectile.OnSetAcquired
struct ABaseProjectile_OnSetAcquired_Params
{
	bool*                                              acquired;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile.BaseProjectile.OnLaunch
struct ABaseProjectile_OnLaunch_Params
{
	struct FLaunchInfo*                                LaunchInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.OnDetectPlayer
struct ABaseProjectile_OnDetectPlayer_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.OnDetectCollision
struct ABaseProjectile_OnDetectCollision_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.Multicast_OnLaunch
struct ABaseProjectile_Multicast_OnLaunch_Params
{
	struct FLaunchInfo*                                LaunchInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.Multicast_DetectPlayer
struct ABaseProjectile_Multicast_DetectPlayer_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.Multicast_DetectImpact
struct ABaseProjectile_Multicast_DetectImpact_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.Local_TryDetectCollision
struct ABaseProjectile_Local_TryDetectCollision_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
	bool*                                              force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.Local_OnPlayerDetected
struct ABaseProjectile_Local_OnPlayerDetected_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectile.LineTraceSingle
struct ABaseProjectile_LineTraceSingle_Params
{
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  outHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.IsValidPlayerDetection
struct ABaseProjectile_IsValidPlayerDetection_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.IsValidImpactDetection
struct ABaseProjectile_IsValidImpactDetection_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.IsLocalImpactLegitimate
struct ABaseProjectile_IsLocalImpactLegitimate_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.IsAcquired
struct ABaseProjectile_IsAcquired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectile.GetLauncher
struct ABaseProjectile_GetLauncher_Params
{
	class UBaseProjectileLauncher*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Projectile.BaseProjectile.GetImpactPrimitiveComponent
struct ABaseProjectile_GetImpactPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Projectile.BaseProjectile.Client_LaunchRefusedByServer
struct ABaseProjectile_Client_LaunchRefusedByServer_Params
{
};

// Function Projectile.BaseProjectile.Authority_TryDetectCollision
struct ABaseProjectile_Authority_TryDetectCollision_Params
{
	struct FImpactInfo*                                ImpactInfo;                                               // (Parm)
	bool*                                              force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.SetProjectileVar
struct UBaseProjectileLauncher_SetProjectileVar_Params
{
	struct FName*                                      VarName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.SetProjectilePool
struct UBaseProjectileLauncher_SetProjectilePool_Params
{
	class UAuthoritativeActorPoolComponent**           projectilePool;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.Server_Launch
struct UBaseProjectileLauncher_Server_Launch_Params
{
	struct FLaunchInfo*                                LaunchInfo;                                               // (ConstParm, Parm, ReferenceParm)
	class ABaseProjectile**                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.OnRep_Ammo
struct UBaseProjectileLauncher_OnRep_Ammo_Params
{
};

// Function Projectile.BaseProjectileLauncher.OnLaunch
struct UBaseProjectileLauncher_OnLaunch_Params
{
	struct FLaunchInfo*                                LaunchInfo;                                               // (Parm)
};

// Function Projectile.BaseProjectileLauncher.Local_Launch
struct UBaseProjectileLauncher_Local_Launch_Params
{
};

// Function Projectile.BaseProjectileLauncher.IsLocallyControlled
struct UBaseProjectileLauncher_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.IsAmmoFull
struct UBaseProjectileLauncher_IsAmmoFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.HasProjectile
struct UBaseProjectileLauncher_HasProjectile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.HasAuthority
struct UBaseProjectileLauncher_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch
struct UBaseProjectileLauncher_GetProjectileToLaunch_Params
{
	class ABaseProjectile*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.GetOwningPawn
struct UBaseProjectileLauncher_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchSpeed
struct UBaseProjectileLauncher_GetLaunchSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchPosition
struct UBaseProjectileLauncher_GetLaunchPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchDirection
struct UBaseProjectileLauncher_GetLaunchDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.GetAmmo
struct UBaseProjectileLauncher_GetAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Projectile.BaseProjectileLauncher.Authority_Reload
struct UBaseProjectileLauncher_Authority_Reload_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_Launch
struct UBaseProjectileLauncher_Authority_Launch_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
struct UBaseProjectileLauncher_Authority_AddMaxAmmo_Params
{
	int*                                               ammoToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile.PhysicsBasedProjectileMovementComponent.GetPreviousLocation
struct UPhysicsBasedProjectileMovementComponent_GetPreviousLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
