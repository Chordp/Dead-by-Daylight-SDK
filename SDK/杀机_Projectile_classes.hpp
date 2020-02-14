#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Projectile.BaseProjectile
// 0x0008 (0x0348 - 0x0340)
class ABaseProjectile : public AActor
{
public:
	bool                                               _multicastLaunch;                                         // 0x0340(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _allowMultipleHits;                                       // 0x0341(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Projectile.BaseProjectile"));

		return ptr;
	}


	bool SphereTraceSingle(struct FVector* Start, struct FVector* End, class USphereComponent** Sphere, struct FHitResult* outHitResult);
	void SetAcquired(bool* acquired);
	void Server_TryDetectPlayer(struct FImpactInfo* ImpactInfo);
	void OnSetActive(bool* Active);
	void OnSetAcquired(bool* acquired);
	void OnLaunch(struct FLaunchInfo* LaunchInfo);
	void OnDetectPlayer(struct FImpactInfo* ImpactInfo);
	void OnDetectCollision(struct FImpactInfo* ImpactInfo);
	void Multicast_OnLaunch(struct FLaunchInfo* LaunchInfo);
	void Multicast_DetectPlayer(struct FImpactInfo* ImpactInfo);
	void Multicast_DetectImpact(struct FImpactInfo* ImpactInfo);
	bool Local_TryDetectCollision(struct FImpactInfo* ImpactInfo, bool* force);
	void Local_OnPlayerDetected(struct FImpactInfo* ImpactInfo);
	bool LineTraceSingle(struct FVector* Start, struct FVector* End, struct FHitResult* outHitResult);
	bool IsValidPlayerDetection(struct FImpactInfo* ImpactInfo);
	bool IsValidImpactDetection(struct FImpactInfo* ImpactInfo);
	bool IsLocalImpactLegitimate(struct FImpactInfo* ImpactInfo);
	bool IsAcquired();
	class UBaseProjectileLauncher* GetLauncher();
	class UPrimitiveComponent* GetImpactPrimitiveComponent();
	void Client_LaunchRefusedByServer();
	bool Authority_TryDetectCollision(struct FImpactInfo* ImpactInfo, bool* force);
};


// Class Projectile.PhysicsBasedProjectile
// 0x0008 (0x0350 - 0x0348)
class APhysicsBasedProjectile : public ABaseProjectile
{
public:
	class UPhysicsBasedProjectileMovementComponent*    Movement;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Projectile.PhysicsBasedProjectile"));

		return ptr;
	}

};


// Class Projectile.BaseProjectileLauncher
// 0x0078 (0x0178 - 0x0100)
class UBaseProjectileLauncher : public UActorComponent
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                _ammo;                                                    // 0x0108(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	int                                                _maxAmmo;                                                 // 0x010C(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0110(0x0028) MISSED OFFSET
	class ABaseProjectile*                             _debugProjectile;                                         // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0140(0x0030) MISSED OFFSET
	class UAuthoritativeActorPoolComponent*            _projectilePool;                                          // 0x0170(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Projectile.BaseProjectileLauncher"));

		return ptr;
	}


	void SetProjectileVar(struct FName* VarName, float* value);
	void SetProjectilePool(class UAuthoritativeActorPoolComponent** projectilePool);
	void Server_Launch(struct FLaunchInfo* LaunchInfo, class ABaseProjectile** Projectile);
	void OnRep_Ammo();
	void OnLaunch(struct FLaunchInfo* LaunchInfo);
	void Local_Launch();
	bool IsLocallyControlled();
	bool IsAmmoFull();
	bool HasProjectile();
	bool HasAuthority();
	class ABaseProjectile* GetProjectileToLaunch();
	class APawn* GetOwningPawn();
	float GetLaunchSpeed();
	struct FVector GetLaunchPosition();
	struct FVector GetLaunchDirection();
	int GetAmmo();
	void Authority_Reload();
	void Authority_Launch();
	void Authority_AddMaxAmmo(int* ammoToAdd);
};


// Class Projectile.PhysicsBasedProjectileMovementComponent
// 0x0020 (0x0220 - 0x0200)
class UPhysicsBasedProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
	class USceneComponent*                             _cachedUpdatedComponent;                                  // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Projectile.PhysicsBasedProjectileMovementComponent"));

		return ptr;
	}


	struct FVector GetPreviousLocation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
