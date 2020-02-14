// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_NavigationSystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.Actor.WasRecentlyRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0D00              		 offset:2ec0d00                       

bool ANavigationGraphNode::WasRecentlyRendered(float* Tolerance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.WasRecentlyRendered"));

	ANavigationGraphNode_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.UserConstructionScript"));

	ANavigationGraphNode_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D840              		 offset:154d840                       

void ANavigationGraphNode::TearOff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.TearOff"));

	ANavigationGraphNode_TearOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0C20              		 offset:2ec0c20                       

void ANavigationGraphNode::SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SnapRootComponentTo"));

	ANavigationGraphNode_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0B10              		 offset:2ec0b10                       

void ANavigationGraphNode::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickGroup"));

	ANavigationGraphNode_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0B90              		 offset:2ec0b90                       

void ANavigationGraphNode::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickableWhenPaused"));

	ANavigationGraphNode_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0A80              		 offset:2ec0a80                       

void ANavigationGraphNode::SetReplicates(bool* bInReplicates)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicates"));

	ANavigationGraphNode_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD09F0              		 offset:2ec09f0                       

void ANavigationGraphNode::SetReplicateMovement(bool* bInReplicateMovement)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicateMovement"));

	ANavigationGraphNode_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0960              		 offset:2ec0960                       

void ANavigationGraphNode::SetOwner(class AActor** NewOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetOwner"));

	ANavigationGraphNode_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetNetDormancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ENetDormancy>*     NewDormancy                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD08E0              		 offset:2ec08e0                       

void ANavigationGraphNode::SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetNetDormancy"));

	ANavigationGraphNode_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0860              		 offset:2ec0860                       

void ANavigationGraphNode::SetLifeSpan(float* InLifespan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetLifeSpan"));

	ANavigationGraphNode_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD07E0              		 offset:2ec07e0                       

void ANavigationGraphNode::SetActorTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickInterval"));

	ANavigationGraphNode_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0750              		 offset:2ec0750                       

void ANavigationGraphNode::SetActorTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickEnabled"));

	ANavigationGraphNode_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD06C0              		 offset:2ec06c0                       

void ANavigationGraphNode::SetActorScale3D(struct FVector* NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorScale3D"));

	ANavigationGraphNode_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewRelativeScale               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0630              		 offset:2ec0630                       

void ANavigationGraphNode::SetActorRelativeScale3D(struct FVector* NewRelativeScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorRelativeScale3D"));

	ANavigationGraphNode_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD05A0              		 offset:2ec05a0                       

void ANavigationGraphNode::SetActorHiddenInGame(bool* bNewHidden)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorHiddenInGame"));

	ANavigationGraphNode_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0510              		 offset:2ec0510                       

void ANavigationGraphNode::SetActorEnableCollision(bool* bNewActorEnableCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorEnableCollision"));

	ANavigationGraphNode_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0480              		 offset:2ec0480                       

void ANavigationGraphNode::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteComponent"));

	ANavigationGraphNode_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD03F0              		 offset:2ec03f0                       

void ANavigationGraphNode::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteActor"));

	ANavigationGraphNode_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveTick"));

	ANavigationGraphNode_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveRadialDamage"));

	ANavigationGraphNode_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceivePointDamage"));

	ANavigationGraphNode_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveHit"));

	ANavigationGraphNode_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveEndPlay"));

	ANavigationGraphNode_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveDestroyed"));

	ANavigationGraphNode_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveBeginPlay"));

	ANavigationGraphNode_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveAnyDamage"));

	ANavigationGraphNode_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey*                   ButtonReleased                 (Parm)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorOnReleased(struct FKey* ButtonReleased)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnReleased"));

	ANavigationGraphNode_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchLeave"));

	ANavigationGraphNode_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnter"));

	ANavigationGraphNode_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnd"));

	ANavigationGraphNode_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchBegin"));

	ANavigationGraphNode_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey*                   ButtonPressed                  (Parm)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorOnClicked(struct FKey* ButtonPressed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnClicked"));

	ANavigationGraphNode_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndOverlap"));

	ANavigationGraphNode_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorEndCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndCursorOver"));

	ANavigationGraphNode_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginOverlap"));

	ANavigationGraphNode_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::ReceiveActorBeginCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginCursorOver"));

	ANavigationGraphNode_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PrestreamTextures
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD02E0              		 offset:2ec02e0                       

void ANavigationGraphNode::PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.PrestreamTextures"));

	ANavigationGraphNode_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void ANavigationGraphNode::OnRep_ReplicateMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicateMovement"));

	ANavigationGraphNode_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (Native, Public)
// FunctionAddress:0x00007FF680769A50              		 offset:1659a50                       

void ANavigationGraphNode::OnRep_ReplicatedMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicatedMovement"));

	ANavigationGraphNode_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (Native, Protected)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void ANavigationGraphNode::OnRep_Owner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Owner"));

	ANavigationGraphNode_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (Native, Public)
// FunctionAddress:0x00007FF680764D90              		 offset:1654d90                       

void ANavigationGraphNode::OnRep_Instigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Instigator"));

	ANavigationGraphNode_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (Native, Public)
// FunctionAddress:0x00007FF6818E3DA0              		 offset:27d3da0                       

void ANavigationGraphNode::OnRep_AttachmentReplication()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_AttachmentReplication"));

	ANavigationGraphNode_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float*                         Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0140              		 offset:2ec0140                       

void ANavigationGraphNode::MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeNoise"));

	ANavigationGraphNode_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD00B0              		 offset:2ec00b0                       

class UMaterialInstanceDynamic* ANavigationGraphNode::MakeMIDForMaterial(class UMaterialInterface** Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeMIDForMaterial"));

	ANavigationGraphNode_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                DestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DestRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCFFC0              		 offset:2ebffc0                       

bool ANavigationGraphNode::K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_TeleportTo"));

	ANavigationGraphNode_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCFDD0              		 offset:2ebfdd0                       

bool ANavigationGraphNode::K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorTransform"));

	ANavigationGraphNode_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCFCF0              		 offset:2ebfcf0                       

bool ANavigationGraphNode::K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRotation"));

	ANavigationGraphNode_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCFB00              		 offset:2ebfb00                       

void ANavigationGraphNode::K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeTransform"));

	ANavigationGraphNode_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               NewRelativeRotation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF950              		 offset:2ebf950                       

void ANavigationGraphNode::K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeRotation"));

	ANavigationGraphNode_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewRelativeLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF7A0              		 offset:2ebf7a0                       

void ANavigationGraphNode::K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeLocation"));

	ANavigationGraphNode_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF5B0              		 offset:2ebf5b0                       

bool ANavigationGraphNode::K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocationAndRotation"));

	ANavigationGraphNode_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF400              		 offset:2ebf400                       

bool ANavigationGraphNode::K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocation"));

	ANavigationGraphNode_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::K2_OnReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnReset"));

	ANavigationGraphNode_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::K2_OnEndViewTarget(class APlayerController** PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnEndViewTarget"));

	ANavigationGraphNode_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ANavigationGraphNode::K2_OnBecomeViewTarget(class APlayerController** PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnBecomeViewTarget"));

	ANavigationGraphNode_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF3E0              		 offset:2ebf3e0                       

class USceneComponent* ANavigationGraphNode::K2_GetRootComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetRootComponent"));

	ANavigationGraphNode_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF320              		 offset:2ebf320                       

struct FRotator ANavigationGraphNode::K2_GetActorRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorRotation"));

	ANavigationGraphNode_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF2A0              		 offset:2ebf2a0                       

struct FVector ANavigationGraphNode::K2_GetActorLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorLocation"));

	ANavigationGraphNode_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDetachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF1A0              		 offset:2ebf1a0                       

void ANavigationGraphNode::K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DetachFromActor"));

	ANavigationGraphNode_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCF120              		 offset:2ebf120                       

void ANavigationGraphNode::K2_DestroyComponent(class UActorComponent** Component)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyComponent"));

	ANavigationGraphNode_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF681FCF100              		 offset:2ebf100                       

void ANavigationGraphNode::K2_DestroyActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyActor"));

	ANavigationGraphNode_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent**        Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCEF30              		 offset:2ebef30                       

void ANavigationGraphNode::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToComponent"));

	ANavigationGraphNode_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCED60              		 offset:2ebed60                       

void ANavigationGraphNode::K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToActor"));

	ANavigationGraphNode_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCEBF0              		 offset:2ebebf0                       

void ANavigationGraphNode::K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentToActor"));

	ANavigationGraphNode_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCEA80              		 offset:2ebea80                       

void ANavigationGraphNode::K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentTo"));

	ANavigationGraphNode_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCE890              		 offset:2ebe890                       

void ANavigationGraphNode::K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldTransform"));

	ANavigationGraphNode_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCE6E0              		 offset:2ebe6e0                       

void ANavigationGraphNode::K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldRotation"));

	ANavigationGraphNode_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCE530              		 offset:2ebe530                       

void ANavigationGraphNode::K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldOffset"));

	ANavigationGraphNode_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCE340              		 offset:2ebe340                       

void ANavigationGraphNode::K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalTransform"));

	ANavigationGraphNode_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCE190              		 offset:2ebe190                       

void ANavigationGraphNode::K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalRotation"));

	ANavigationGraphNode_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDFE0              		 offset:2ebdfe0                       

void ANavigationGraphNode::K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalOffset"));

	ANavigationGraphNode_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDF50              		 offset:2ebdf50                       

bool ANavigationGraphNode::IsOverlappingActor(class AActor** Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsOverlappingActor"));

	ANavigationGraphNode_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDF20              		 offset:2ebdf20                       

bool ANavigationGraphNode::IsChildActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsChildActor"));

	ANavigationGraphNode_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDEF0              		 offset:2ebdef0                       

bool ANavigationGraphNode::IsActorTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorTickEnabled"));

	ANavigationGraphNode_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDEC0              		 offset:2ebdec0                       

bool ANavigationGraphNode::IsActorBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorBeingDestroyed"));

	ANavigationGraphNode_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDE90              		 offset:2ebde90                       

bool ANavigationGraphNode::HasAuthority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.HasAuthority"));

	ANavigationGraphNode_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDDF0              		 offset:2ebddf0                       

float ANavigationGraphNode::GetVerticalDistanceTo(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVerticalDistanceTo"));

	ANavigationGraphNode_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDDB0              		 offset:2ebddb0                       

struct FVector ANavigationGraphNode::GetVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVelocity"));

	ANavigationGraphNode_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDD60              		 offset:2ebdd60                       

struct FTransform ANavigationGraphNode::GetTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTransform"));

	ANavigationGraphNode_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDD30              		 offset:2ebdd30                       

bool ANavigationGraphNode::GetTickableWhenPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTickableWhenPaused"));

	ANavigationGraphNode_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDC90              		 offset:2ebdc90                       

float ANavigationGraphNode::GetSquaredDistanceTo(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetSquaredDistanceTo"));

	ANavigationGraphNode_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDC70              		 offset:2ebdc70                       

TEnumAsByte<ENetRole> ANavigationGraphNode::GetRemoteRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetRemoteRole"));

	ANavigationGraphNode_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDC40              		 offset:2ebdc40                       

class UChildActorComponent* ANavigationGraphNode::GetParentComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentComponent"));

	ANavigationGraphNode_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDC10              		 offset:2ebdc10                       

class AActor* ANavigationGraphNode::GetParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentActor"));

	ANavigationGraphNode_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDBF0              		 offset:2ebdbf0                       

class AActor* ANavigationGraphNode::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOwner"));

	ANavigationGraphNode_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF681FCDB40              		 offset:2ebdb40                       

void ANavigationGraphNode::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingComponents"));

	ANavigationGraphNode_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDA50              		 offset:2ebda50                       

void ANavigationGraphNode::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingActors"));

	ANavigationGraphNode_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLocalRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDA30              		 offset:2ebda30                       

TEnumAsByte<ENetRole> ANavigationGraphNode::GetLocalRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetLocalRole"));

	ANavigationGraphNode_GetLocalRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetLifeSpan
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD9F0              		 offset:2ebd9f0                       

float ANavigationGraphNode::GetLifeSpan()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetLifeSpan"));

	ANavigationGraphNode_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD9C0              		 offset:2ebd9c0                       

class AController* ANavigationGraphNode::GetInstigatorController()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigatorController"));

	ANavigationGraphNode_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD990              		 offset:2ebd990                       

class APawn* ANavigationGraphNode::GetInstigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigator"));

	ANavigationGraphNode_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD880              		 offset:2ebd880                       

struct FVector ANavigationGraphNode::GetInputVectorAxisValue(struct FKey* InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputVectorAxisValue"));

	ANavigationGraphNode_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD7D0              		 offset:2ebd7d0                       

float ANavigationGraphNode::GetInputAxisValue(struct FName* InputAxisName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisValue"));

	ANavigationGraphNode_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD6D0              		 offset:2ebd6d0                       

float ANavigationGraphNode::GetInputAxisKeyValue(struct FKey* InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisKeyValue"));

	ANavigationGraphNode_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD630              		 offset:2ebd630                       

float ANavigationGraphNode::GetHorizontalDotProductTo(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDotProductTo"));

	ANavigationGraphNode_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD590              		 offset:2ebd590                       

float ANavigationGraphNode::GetHorizontalDistanceTo(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDistanceTo"));

	ANavigationGraphNode_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD560              		 offset:2ebd560                       

float ANavigationGraphNode::GetGameTimeSinceCreation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetGameTimeSinceCreation"));

	ANavigationGraphNode_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD4C0              		 offset:2ebd4c0                       

float ANavigationGraphNode::GetDotProductTo(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDotProductTo"));

	ANavigationGraphNode_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD420              		 offset:2ebd420                       

float ANavigationGraphNode::GetDistanceTo(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDistanceTo"));

	ANavigationGraphNode_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF681FCD2F0              		 offset:2ebd2f0                       

TArray<class UActorComponent*> ANavigationGraphNode::GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByTag"));

	ANavigationGraphNode_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF681FCD210              		 offset:2ebd210                       

TArray<class UActorComponent*> ANavigationGraphNode::GetComponentsByClass(class UClass** ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByClass"));

	ANavigationGraphNode_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD180              		 offset:2ebd180                       

class UActorComponent* ANavigationGraphNode::GetComponentByClass(class UClass** ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentByClass"));

	ANavigationGraphNode_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD090              		 offset:2ebd090                       

struct FName ANavigationGraphNode::GetAttachParentSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentSocketName"));

	ANavigationGraphNode_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCD060              		 offset:2ebd060                       

class AActor* ANavigationGraphNode::GetAttachParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentActor"));

	ANavigationGraphNode_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF681FCD0D0              		 offset:2ebd0d0                       

void ANavigationGraphNode::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachedActors"));

	ANavigationGraphNode_GetAttachedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool*                          bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCF60              		 offset:2ebcf60                       

void ANavigationGraphNode::GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAllChildActors"));

	ANavigationGraphNode_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCEF0              		 offset:2ebcef0                       

struct FVector ANavigationGraphNode::GetActorUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorUpVector"));

	ANavigationGraphNode_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCEC0              		 offset:2ebcec0                       

float ANavigationGraphNode::GetActorTimeDilation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTimeDilation"));

	ANavigationGraphNode_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCE90              		 offset:2ebce90                       

float ANavigationGraphNode::GetActorTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTickInterval"));

	ANavigationGraphNode_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCE50              		 offset:2ebce50                       

struct FVector ANavigationGraphNode::GetActorScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorScale3D"));

	ANavigationGraphNode_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCDE0              		 offset:2ebcde0                       

struct FVector ANavigationGraphNode::GetActorRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRightVector"));

	ANavigationGraphNode_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCDA0              		 offset:2ebcda0                       

struct FVector ANavigationGraphNode::GetActorRelativeScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRelativeScale3D"));

	ANavigationGraphNode_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCD30              		 offset:2ebcd30                       

struct FVector ANavigationGraphNode::GetActorForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorForwardVector"));

	ANavigationGraphNode_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCC40              		 offset:2ebcc40                       

void ANavigationGraphNode::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEyesViewPoint"));

	ANavigationGraphNode_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCC10              		 offset:2ebcc10                       

bool ANavigationGraphNode::GetActorEnableCollision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEnableCollision"));

	ANavigationGraphNode_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCAE0              		 offset:2ebcae0                       

void ANavigationGraphNode::GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorBounds"));

	ANavigationGraphNode_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF681FCCAC0              		 offset:2ebcac0                       

void ANavigationGraphNode::ForceNetUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ForceNetUpdate"));

	ANavigationGraphNode_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF681FCCAA0              		 offset:2ebcaa0                       

void ANavigationGraphNode::FlushNetDormancy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.FlushNetDormancy"));

	ANavigationGraphNode_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6817E3D30              		 offset:26d3d30                       

void ANavigationGraphNode::EnableInput(class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.EnableInput"));

	ANavigationGraphNode_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCCA10              		 offset:2ebca10                       

void ANavigationGraphNode::DisableInput(class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DisableInput"));

	ANavigationGraphNode_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCC980              		 offset:2ebc980                       

void ANavigationGraphNode::DetachRootComponentFromParent(bool* bMaintainWorldPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DetachRootComponentFromParent"));

	ANavigationGraphNode_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCC8F0              		 offset:2ebc8f0                       

void ANavigationGraphNode::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteComponent"));

	ANavigationGraphNode_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FCC860              		 offset:2ebc860                       

void ANavigationGraphNode::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteActor"));

	ANavigationGraphNode_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject**                ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCC6B0              		 offset:2ebc6b0                       

class UActorComponent* ANavigationGraphNode::AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddComponent"));

	ANavigationGraphNode_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FCC600              		 offset:2ebc600                       

bool ANavigationGraphNode::ActorHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ActorHasTag"));

	ANavigationGraphNode_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822297A0              		 offset:31197a0                       

bool UNavigationPath::IsValid()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.IsValid"));

	UNavigationPath_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806D1B40              		 offset:15c1b40                       

bool UNavigationPath::IsStringPulled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.IsStringPulled"));

	UNavigationPath_IsStringPulled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682229770              		 offset:3119770                       

bool UNavigationPath::IsPartial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.IsPartial"));

	UNavigationPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682229080              		 offset:3119080                       

float UNavigationPath::GetPathLength()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.GetPathLength"));

	UNavigationPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682228E30              		 offset:3118e30                       

float UNavigationPath::GetPathCost()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.GetPathCost"));

	UNavigationPath_GetPathCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF682228D30              		 offset:3118d30                       

struct FString UNavigationPath::GetDebugString()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.GetDebugString"));

	UNavigationPath_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ENavigationOptionFlag>* DoRecalculation                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682228910              		 offset:3118910                       

void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag>* DoRecalculation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation"));

	UNavigationPath_EnableRecalculationOnInvalidation_Params params;
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          bShouldDrawDebugData           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           PathColor                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682228830              		 offset:3118830                       

void UNavigationPath::EnableDebugDrawing(bool* bShouldDrawDebugData, struct FLinearColor* PathColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationPath.EnableDebugDrawing"));

	UNavigationPath_EnableDebugDrawing_Params params;
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Invoker                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A730              		 offset:311a730                       

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor** Invoker)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker"));

	UNavigationSystemV1_UnregisterNavigationInvoker_Params params;
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF68222A670              		 offset:311a670                       

void UNavigationSystemV1::STATIC_SimpleMoveToLocation(class AController** Controller, struct FVector* Goal)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation"));

	UNavigationSystemV1_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A5C0              		 offset:311a5c0                       

void UNavigationSystemV1::STATIC_SimpleMoveToActor(class AController** Controller, class AActor** Goal)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor"));

	UNavigationSystemV1_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           MaxNumberOfJobs                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A4B0              		 offset:311a4b0                       

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int* MaxNumberOfJobs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount"));

	UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params;
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ENavDataGatheringModeConfig*   NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A430              		 offset:311a430                       

void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig* NewMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode"));

	UNavigationSystemV1_SetGeometryGatheringMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68222A310              		 offset:311a310                       

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount"));

	UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Invoker                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TileGenerationRadius           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TileRemovalRadius              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A210              		 offset:311a210                       

void UNavigationSystemV1::RegisterNavigationInvoker(class AActor** Invoker, float* TileGenerationRadius, float* TileRemovalRadius)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker"));

	UNavigationSystemV1_RegisterNavigationInvoker_Params params;
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68222A040              		 offset:311a040                       

struct FVector UNavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation"));

	UNavigationSystemV1_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ANavMeshBoundsVolume**   NavVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF682229FC0              		 offset:3119fc0                       

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume** NavVolume)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated"));

	UNavigationSystemV1_OnNavigationBoundsUpdated_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                RayStart                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                RayEnd                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682229DB0              		 offset:3119db0                       

bool UNavigationSystemV1::STATIC_NavigationRaycast(class UObject** WorldContextObject, struct FVector* RayStart, struct FVector* RayEnd, class UClass** FilterClass, class AController** Querier, struct FVector* HitLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.NavigationRaycast"));

	UNavigationSystemV1_NavigationRaycast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ProjectedLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682229BD0              		 offset:3119bd0                       

bool UNavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent, struct FVector* ProjectedLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation"));

	UNavigationSystemV1_K2_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822299D0              		 offset:31199d0                       

bool UNavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius"));

	UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822297D0              		 offset:31197d0                       

bool UNavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius"));

	UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822296F0              		 offset:31196f0                       

bool UNavigationSystemV1::STATIC_IsNavigationBeingBuiltOrLocked(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked"));

	UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682229670              		 offset:3119670                       

bool UNavigationSystemV1::STATIC_IsNavigationBeingBuilt(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt"));

	UNavigationSystemV1_IsNavigationBeingBuilt_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822294A0              		 offset:31194a0                       

struct FVector UNavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius"));

	UNavigationSystemV1_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822292D0              		 offset:31192d0                       

struct FVector UNavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius"));

	UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PathLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822290B0              		 offset:31190b0                       

TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathLength(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathLength)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetPathLength"));

	UNavigationSystemV1_GetPathLength_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PathCost                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682228E60              		 offset:3118e60                       

TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathCost(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathCost)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetPathCost"));

	UNavigationSystemV1_GetPathCost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationSystemV1*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682228DB0              		 offset:3118db0                       

class UNavigationSystemV1* UNavigationSystemV1::STATIC_GetNavigationSystem(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem"));

	UNavigationSystemV1_GetNavigationSystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682228B80              		 offset:3118b80                       

class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToLocationSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class AActor** PathfindingContext, class UClass** FilterClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously"));

	UNavigationSystemV1_FindPathToLocationSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 GoalActor                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TetherDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF682228990              		 offset:3118990                       

class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToActorSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, class AActor** GoalActor, float* TetherDistance, class AActor** PathfindingContext, class UClass** FilterClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously"));

	UNavigationSystemV1_FindPathToActorSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bRelevant                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A530              		 offset:311a530                       

void UNavRelevantComponent::SetNavigationRelevancy(bool* bRelevant)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy"));

	UNavRelevantComponent_SetNavigationRelevancy_Params params;
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5540              		 offset:2fd5540                       

void UNavLinkRenderingComponent::WakeRigidBody(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeRigidBody"));

	UNavLinkRenderingComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682003160              		 offset:2ef3160                       

void UNavLinkRenderingComponent::WakeAllRigidBodies()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeAllRigidBodies"));

	UNavLinkRenderingComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5490              		 offset:2fd5490                       

void UNavLinkRenderingComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride"));

	UNavLinkRenderingComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E53A0              		 offset:2fd53a0                       

void UNavLinkRenderingComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetUseCCD"));

	UNavLinkRenderingComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5320              		 offset:2fd5320                       

void UNavLinkRenderingComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetTranslucentSortPriority"));

	UNavLinkRenderingComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5110              		 offset:2fd5110                       

void UNavLinkRenderingComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights"));

	UNavLinkRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5080              		 offset:2fd5080                       

void UNavLinkRenderingComponent::SetSimulatePhysics(bool* bSimulate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSimulatePhysics"));

	UNavLinkRenderingComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4FF0              		 offset:2fd4ff0                       

void UNavLinkRenderingComponent::SetRenderInMainPass(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderInMainPass"));

	UNavLinkRenderingComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4F60              		 offset:2fd4f60                       

void UNavLinkRenderingComponent::SetRenderCustomDepth(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomDepth"));

	UNavLinkRenderingComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4ED0              		 offset:2fd4ed0                       

void UNavLinkRenderingComponent::SetRenderCustomColourNoDepth(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth"));

	UNavLinkRenderingComponent_SetRenderCustomColourNoDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4E40              		 offset:2fd4e40                       

void UNavLinkRenderingComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetReceivesDecals"));

	UNavLinkRenderingComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4710              		 offset:2fd4710                       

void UNavLinkRenderingComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysMaterialOverride"));

	UNavLinkRenderingComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4CA0              		 offset:2fd4ca0                       

void UNavLinkRenderingComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians"));

	UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4B70              		 offset:2fd4b70                       

void UNavLinkRenderingComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees"));

	UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4B70              		 offset:2fd4b70                       

void UNavLinkRenderingComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity"));

	UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4A30              		 offset:2fd4a30                       

void UNavLinkRenderingComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity"));

	UNavLinkRenderingComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E48F0              		 offset:2fd48f0                       

void UNavLinkRenderingComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians"));

	UNavLinkRenderingComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E47A0              		 offset:2fd47a0                       

void UNavLinkRenderingComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees"));

	UNavLinkRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E47A0              		 offset:2fd47a0                       

void UNavLinkRenderingComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity"));

	UNavLinkRenderingComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4680              		 offset:2fd4680                       

void UNavLinkRenderingComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOwnerNoSee"));

	UNavLinkRenderingComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E45F0              		 offset:2fd45f0                       

void UNavLinkRenderingComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOnlyOwnerSee"));

	UNavLinkRenderingComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4560              		 offset:2fd4560                       

void UNavLinkRenderingComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision"));

	UNavLinkRenderingComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4400              		 offset:2fd4400                       

void UNavLinkRenderingComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterialByName"));

	UNavLinkRenderingComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4330              		 offset:2fd4330                       

void UNavLinkRenderingComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterial"));

	UNavLinkRenderingComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4250              		 offset:2fd4250                       

void UNavLinkRenderingComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassScale"));

	UNavLinkRenderingComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4120              		 offset:2fd4120                       

void UNavLinkRenderingComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassOverrideInKg"));

	UNavLinkRenderingComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E40A0              		 offset:2fd40a0                       

void UNavLinkRenderingComponent::SetLinearDamping(float* InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetLinearDamping"));

	UNavLinkRenderingComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3F10              		 offset:2fd3f10                       

void UNavLinkRenderingComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents"));

	UNavLinkRenderingComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820CF4E0              		 offset:2fbf4e0                       

void UNavLinkRenderingComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetEnableGravity"));

	UNavLinkRenderingComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3E90              		 offset:2fd3e90                       

void UNavLinkRenderingComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask"));

	UNavLinkRenderingComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3E10              		 offset:2fd3e10                       

void UNavLinkRenderingComponent::SetCustomDepthStencilValue(int* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue"));

	UNavLinkRenderingComponent_SetCustomDepthStencilValue_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomColourWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomColourWriteMask*        WriteMask                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3D90              		 offset:2fd3d90                       

void UNavLinkRenderingComponent::SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomColourWriteMask"));

	UNavLinkRenderingComponent_SetCustomColourWriteMask_Params params;
	params.WriteMask = WriteMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3D10              		 offset:2fd3d10                       

void UNavLinkRenderingComponent::SetCullDistance(float* NewCullDistance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCullDistance"));

	UNavLinkRenderingComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3C90              		 offset:2fd3c90                       

void UNavLinkRenderingComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetConstraintMode"));

	UNavLinkRenderingComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3BD0              		 offset:2fd3bd0                       

void UNavLinkRenderingComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel"));

	UNavLinkRenderingComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3B50              		 offset:2fd3b50                       

void UNavLinkRenderingComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels"));

	UNavLinkRenderingComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68203BAA0              		 offset:2f2baa0                       

void UNavLinkRenderingComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionProfileName"));

	UNavLinkRenderingComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3AD0              		 offset:2fd3ad0                       

void UNavLinkRenderingComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionObjectType"));

	UNavLinkRenderingComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3A50              		 offset:2fd3a50                       

void UNavLinkRenderingComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionEnabled"));

	UNavLinkRenderingComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3960              		 offset:2fd3960                       

void UNavLinkRenderingComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCenterOfMass"));

	UNavLinkRenderingComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E38D0              		 offset:2fd38d0                       

void UNavLinkRenderingComponent::SetCastShadow(bool* NewCastShadow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCastShadow"));

	UNavLinkRenderingComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3850              		 offset:2fd3850                       

void UNavLinkRenderingComponent::SetBoundsScale(float* NewBoundsScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetBoundsScale"));

	UNavLinkRenderingComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E32C0              		 offset:2fd32c0                       

void UNavLinkRenderingComponent::SetAngularDamping(float* InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAngularDamping"));

	UNavLinkRenderingComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3230              		 offset:2fd3230                       

void UNavLinkRenderingComponent::SetAllUseCCD(bool* InUseCCD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllUseCCD"));

	UNavLinkRenderingComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3150              		 offset:2fd3150                       

void UNavLinkRenderingComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity"));

	UNavLinkRenderingComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3070              		 offset:2fd3070                       

void UNavLinkRenderingComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians"));

	UNavLinkRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2F50              		 offset:2fd2f50                       

void UNavLinkRenderingComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees"));

	UNavLinkRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2ED0              		 offset:2fd2ed0                       

void UNavLinkRenderingComponent::SetAllMassScale(float* InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllMassScale"));

	UNavLinkRenderingComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2DC0              		 offset:2fd2dc0                       

struct FVector UNavLinkRenderingComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia"));

	UNavLinkRenderingComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2C80              		 offset:2fd2c80                       

void UNavLinkRenderingComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.PutRigidBodyToSleep"));

	UNavLinkRenderingComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2910              		 offset:2fd2910                       

bool UNavLinkRenderingComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_SphereTraceComponent"));

	UNavLinkRenderingComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E25E0              		 offset:2fd25e0                       

bool UNavLinkRenderingComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent"));

	UNavLinkRenderingComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E22B0              		 offset:2fd22b0                       

bool UNavLinkRenderingComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_LineTraceComponent"));

	UNavLinkRenderingComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2270              		 offset:2fd2270                       

bool UNavLinkRenderingComponent::K2_IsQueryCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled"));

	UNavLinkRenderingComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2230              		 offset:2fd2230                       

bool UNavLinkRenderingComponent::K2_IsPhysicsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled"));

	UNavLinkRenderingComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E21F0              		 offset:2fd21f0                       

bool UNavLinkRenderingComponent::K2_IsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled"));

	UNavLinkRenderingComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1EB0              		 offset:2fd1eb0                       

bool UNavLinkRenderingComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent"));

	UNavLinkRenderingComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1E20              		 offset:2fd1e20                       

bool UNavLinkRenderingComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingComponent"));

	UNavLinkRenderingComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1D90              		 offset:2fd1d90                       

bool UNavLinkRenderingComponent::IsOverlappingActor(class AActor** Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingActor"));

	UNavLinkRenderingComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1D60              		 offset:2fd1d60                       

bool UNavLinkRenderingComponent::IsGravityEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsGravityEnabled"));

	UNavLinkRenderingComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68202CD60              		 offset:2f1cd60                       

bool UNavLinkRenderingComponent::IsAnyRigidBodyAwake()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake"));

	UNavLinkRenderingComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1B00              		 offset:2fd1b00                       

void UNavLinkRenderingComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving"));

	UNavLinkRenderingComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1A30              		 offset:2fd1a30                       

void UNavLinkRenderingComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving"));

	UNavLinkRenderingComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1A00              		 offset:2fd1a00                       

struct FWalkableSlopeOverride UNavLinkRenderingComponent::GetWalkableSlopeOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride"));

	UNavLinkRenderingComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1870              		 offset:2fd1870                       

struct FVector UNavLinkRenderingComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint"));

	UNavLinkRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E17B0              		 offset:2fd17b0                       

struct FVector UNavLinkRenderingComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity"));

	UNavLinkRenderingComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E16F0              		 offset:2fd16f0                       

struct FVector UNavLinkRenderingComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians"));

	UNavLinkRenderingComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1600              		 offset:2fd1600                       

struct FVector UNavLinkRenderingComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees"));

	UNavLinkRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1600              		 offset:2fd1600                       

struct FVector UNavLinkRenderingComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity"));

	UNavLinkRenderingComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6820E1550              		 offset:2fd1550                       

void UNavLinkRenderingComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingComponents"));

	UNavLinkRenderingComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1460              		 offset:2fd1460                       

void UNavLinkRenderingComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingActors"));

	UNavLinkRenderingComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1430              		 offset:2fd1430                       

int UNavLinkRenderingComponent::GetNumMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetNumMaterials"));

	UNavLinkRenderingComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1350              		 offset:2fd1350                       

class UMaterialInterface* UNavLinkRenderingComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex"));

	UNavLinkRenderingComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E12B0              		 offset:2fd12b0                       

class UMaterialInterface* UNavLinkRenderingComponent::GetMaterial(int* ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterial"));

	UNavLinkRenderingComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1200              		 offset:2fd1200                       

float UNavLinkRenderingComponent::GetMassScale(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMassScale"));

	UNavLinkRenderingComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E11C0              		 offset:2fd11c0                       

float UNavLinkRenderingComponent::GetMass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMass"));

	UNavLinkRenderingComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1180              		 offset:2fd1180                       

float UNavLinkRenderingComponent::GetLinearDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetLinearDamping"));

	UNavLinkRenderingComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E10C0              		 offset:2fd10c0                       

struct FVector UNavLinkRenderingComponent::GetInertiaTensor(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetInertiaTensor"));

	UNavLinkRenderingComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1090              		 offset:2fd1090                       

bool UNavLinkRenderingComponent::GetGenerateOverlapEvents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents"));

	UNavLinkRenderingComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1000              		 offset:2fd1000                       

TEnumAsByte<ECollisionResponse> UNavLinkRenderingComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel"));

	UNavLinkRenderingComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0FC0              		 offset:2fd0fc0                       

struct FName UNavLinkRenderingComponent::GetCollisionProfileName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionProfileName"));

	UNavLinkRenderingComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0F90              		 offset:2fd0f90                       

TEnumAsByte<ECollisionChannel> UNavLinkRenderingComponent::GetCollisionObjectType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionObjectType"));

	UNavLinkRenderingComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0F60              		 offset:2fd0f60                       

TEnumAsByte<ECollisionEnabled> UNavLinkRenderingComponent::GetCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionEnabled"));

	UNavLinkRenderingComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0E10              		 offset:2fd0e10                       

float UNavLinkRenderingComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetClosestPointOnCollision"));

	UNavLinkRenderingComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0D50              		 offset:2fd0d50                       

struct FVector UNavLinkRenderingComponent::GetCenterOfMass(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCenterOfMass"));

	UNavLinkRenderingComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E08F0              		 offset:2fd08f0                       

float UNavLinkRenderingComponent::GetAngularDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetAngularDamping"));

	UNavLinkRenderingComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E07D0              		 offset:2fd07d0                       

class UMaterialInstanceDynamic* UNavLinkRenderingComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance"));

	UNavLinkRenderingComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0700              		 offset:2fd0700                       

class UMaterialInstanceDynamic* UNavLinkRenderingComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial"));

	UNavLinkRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0660              		 offset:2fd0660                       

class UMaterialInstanceDynamic* UNavLinkRenderingComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic"));

	UNavLinkRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820E0560              		 offset:2fd0560                       

TArray<class UPrimitiveComponent*> UNavLinkRenderingComponent::CopyArrayOfMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents"));

	UNavLinkRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820E04E0              		 offset:2fd04e0                       

TArray<class AActor*> UNavLinkRenderingComponent::CopyArrayOfMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors"));

	UNavLinkRenderingComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820E0490              		 offset:2fd0490                       

void UNavLinkRenderingComponent::ClearMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents"));

	UNavLinkRenderingComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820E0470              		 offset:2fd0470                       

void UNavLinkRenderingComponent::ClearMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors"));

	UNavLinkRenderingComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E03D0              		 offset:2fd03d0                       

bool UNavLinkRenderingComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CanCharacterStepUp"));

	UNavLinkRenderingComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0150              		 offset:2fd0150                       

void UNavLinkRenderingComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorqueInRadians"));

	UNavLinkRenderingComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0280              		 offset:2fd0280                       

void UNavLinkRenderingComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorqueInDegrees"));

	UNavLinkRenderingComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0150              		 offset:2fd0150                       

void UNavLinkRenderingComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorque"));

	UNavLinkRenderingComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFF90              		 offset:2fcff90                       

void UNavLinkRenderingComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialImpulse"));

	UNavLinkRenderingComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFDD0              		 offset:2fcfdd0                       

void UNavLinkRenderingComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialForce"));

	UNavLinkRenderingComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFAB0              		 offset:2fcfab0                       

void UNavLinkRenderingComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulseAtLocation"));

	UNavLinkRenderingComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF980              		 offset:2fcf980                       

void UNavLinkRenderingComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulse"));

	UNavLinkRenderingComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF840              		 offset:2fcf840                       

void UNavLinkRenderingComponent::AddForceAtLocationLocal(struct FVector* force, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocationLocal"));

	UNavLinkRenderingComponent_AddForceAtLocationLocal_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF700              		 offset:2fcf700                       

void UNavLinkRenderingComponent::AddForceAtLocation(struct FVector* force, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocation"));

	UNavLinkRenderingComponent_AddForceAtLocation_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF5D0              		 offset:2fcf5d0                       

void UNavLinkRenderingComponent::AddForce(struct FVector* force, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForce"));

	UNavLinkRenderingComponent_AddForce_Params params;
	params.force = force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF4A0              		 offset:2fcf4a0                       

void UNavLinkRenderingComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians"));

	UNavLinkRenderingComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF350              		 offset:2fcf350                       

void UNavLinkRenderingComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees"));

	UNavLinkRenderingComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF220              		 offset:2fcf220                       

void UNavLinkRenderingComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulse"));

	UNavLinkRenderingComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5540              		 offset:2fd5540                       

void UNavMeshRenderingComponent::WakeRigidBody(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeRigidBody"));

	UNavMeshRenderingComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682003160              		 offset:2ef3160                       

void UNavMeshRenderingComponent::WakeAllRigidBodies()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeAllRigidBodies"));

	UNavMeshRenderingComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5490              		 offset:2fd5490                       

void UNavMeshRenderingComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride"));

	UNavMeshRenderingComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E53A0              		 offset:2fd53a0                       

void UNavMeshRenderingComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetUseCCD"));

	UNavMeshRenderingComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5320              		 offset:2fd5320                       

void UNavMeshRenderingComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetTranslucentSortPriority"));

	UNavMeshRenderingComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5110              		 offset:2fd5110                       

void UNavMeshRenderingComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights"));

	UNavMeshRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5080              		 offset:2fd5080                       

void UNavMeshRenderingComponent::SetSimulatePhysics(bool* bSimulate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSimulatePhysics"));

	UNavMeshRenderingComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4FF0              		 offset:2fd4ff0                       

void UNavMeshRenderingComponent::SetRenderInMainPass(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderInMainPass"));

	UNavMeshRenderingComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4F60              		 offset:2fd4f60                       

void UNavMeshRenderingComponent::SetRenderCustomDepth(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomDepth"));

	UNavMeshRenderingComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4ED0              		 offset:2fd4ed0                       

void UNavMeshRenderingComponent::SetRenderCustomColourNoDepth(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth"));

	UNavMeshRenderingComponent_SetRenderCustomColourNoDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4E40              		 offset:2fd4e40                       

void UNavMeshRenderingComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetReceivesDecals"));

	UNavMeshRenderingComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4710              		 offset:2fd4710                       

void UNavMeshRenderingComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysMaterialOverride"));

	UNavMeshRenderingComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4CA0              		 offset:2fd4ca0                       

void UNavMeshRenderingComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians"));

	UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4B70              		 offset:2fd4b70                       

void UNavMeshRenderingComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees"));

	UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4B70              		 offset:2fd4b70                       

void UNavMeshRenderingComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity"));

	UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4A30              		 offset:2fd4a30                       

void UNavMeshRenderingComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity"));

	UNavMeshRenderingComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E48F0              		 offset:2fd48f0                       

void UNavMeshRenderingComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians"));

	UNavMeshRenderingComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E47A0              		 offset:2fd47a0                       

void UNavMeshRenderingComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees"));

	UNavMeshRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E47A0              		 offset:2fd47a0                       

void UNavMeshRenderingComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity"));

	UNavMeshRenderingComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4680              		 offset:2fd4680                       

void UNavMeshRenderingComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOwnerNoSee"));

	UNavMeshRenderingComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E45F0              		 offset:2fd45f0                       

void UNavMeshRenderingComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOnlyOwnerSee"));

	UNavMeshRenderingComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4560              		 offset:2fd4560                       

void UNavMeshRenderingComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision"));

	UNavMeshRenderingComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4400              		 offset:2fd4400                       

void UNavMeshRenderingComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterialByName"));

	UNavMeshRenderingComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4330              		 offset:2fd4330                       

void UNavMeshRenderingComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterial"));

	UNavMeshRenderingComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4250              		 offset:2fd4250                       

void UNavMeshRenderingComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassScale"));

	UNavMeshRenderingComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4120              		 offset:2fd4120                       

void UNavMeshRenderingComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassOverrideInKg"));

	UNavMeshRenderingComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E40A0              		 offset:2fd40a0                       

void UNavMeshRenderingComponent::SetLinearDamping(float* InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetLinearDamping"));

	UNavMeshRenderingComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3F10              		 offset:2fd3f10                       

void UNavMeshRenderingComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents"));

	UNavMeshRenderingComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820CF4E0              		 offset:2fbf4e0                       

void UNavMeshRenderingComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetEnableGravity"));

	UNavMeshRenderingComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3E90              		 offset:2fd3e90                       

void UNavMeshRenderingComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask"));

	UNavMeshRenderingComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3E10              		 offset:2fd3e10                       

void UNavMeshRenderingComponent::SetCustomDepthStencilValue(int* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue"));

	UNavMeshRenderingComponent_SetCustomDepthStencilValue_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomColourWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomColourWriteMask*        WriteMask                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3D90              		 offset:2fd3d90                       

void UNavMeshRenderingComponent::SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomColourWriteMask"));

	UNavMeshRenderingComponent_SetCustomColourWriteMask_Params params;
	params.WriteMask = WriteMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3D10              		 offset:2fd3d10                       

void UNavMeshRenderingComponent::SetCullDistance(float* NewCullDistance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCullDistance"));

	UNavMeshRenderingComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3C90              		 offset:2fd3c90                       

void UNavMeshRenderingComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetConstraintMode"));

	UNavMeshRenderingComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3BD0              		 offset:2fd3bd0                       

void UNavMeshRenderingComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel"));

	UNavMeshRenderingComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3B50              		 offset:2fd3b50                       

void UNavMeshRenderingComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels"));

	UNavMeshRenderingComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68203BAA0              		 offset:2f2baa0                       

void UNavMeshRenderingComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionProfileName"));

	UNavMeshRenderingComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3AD0              		 offset:2fd3ad0                       

void UNavMeshRenderingComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionObjectType"));

	UNavMeshRenderingComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3A50              		 offset:2fd3a50                       

void UNavMeshRenderingComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionEnabled"));

	UNavMeshRenderingComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3960              		 offset:2fd3960                       

void UNavMeshRenderingComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCenterOfMass"));

	UNavMeshRenderingComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E38D0              		 offset:2fd38d0                       

void UNavMeshRenderingComponent::SetCastShadow(bool* NewCastShadow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCastShadow"));

	UNavMeshRenderingComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3850              		 offset:2fd3850                       

void UNavMeshRenderingComponent::SetBoundsScale(float* NewBoundsScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetBoundsScale"));

	UNavMeshRenderingComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E32C0              		 offset:2fd32c0                       

void UNavMeshRenderingComponent::SetAngularDamping(float* InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAngularDamping"));

	UNavMeshRenderingComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3230              		 offset:2fd3230                       

void UNavMeshRenderingComponent::SetAllUseCCD(bool* InUseCCD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllUseCCD"));

	UNavMeshRenderingComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3150              		 offset:2fd3150                       

void UNavMeshRenderingComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity"));

	UNavMeshRenderingComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3070              		 offset:2fd3070                       

void UNavMeshRenderingComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians"));

	UNavMeshRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2F50              		 offset:2fd2f50                       

void UNavMeshRenderingComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees"));

	UNavMeshRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2ED0              		 offset:2fd2ed0                       

void UNavMeshRenderingComponent::SetAllMassScale(float* InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllMassScale"));

	UNavMeshRenderingComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2DC0              		 offset:2fd2dc0                       

struct FVector UNavMeshRenderingComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia"));

	UNavMeshRenderingComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2C80              		 offset:2fd2c80                       

void UNavMeshRenderingComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.PutRigidBodyToSleep"));

	UNavMeshRenderingComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2910              		 offset:2fd2910                       

bool UNavMeshRenderingComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_SphereTraceComponent"));

	UNavMeshRenderingComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E25E0              		 offset:2fd25e0                       

bool UNavMeshRenderingComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent"));

	UNavMeshRenderingComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E22B0              		 offset:2fd22b0                       

bool UNavMeshRenderingComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_LineTraceComponent"));

	UNavMeshRenderingComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2270              		 offset:2fd2270                       

bool UNavMeshRenderingComponent::K2_IsQueryCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled"));

	UNavMeshRenderingComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2230              		 offset:2fd2230                       

bool UNavMeshRenderingComponent::K2_IsPhysicsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled"));

	UNavMeshRenderingComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E21F0              		 offset:2fd21f0                       

bool UNavMeshRenderingComponent::K2_IsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled"));

	UNavMeshRenderingComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1EB0              		 offset:2fd1eb0                       

bool UNavMeshRenderingComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent"));

	UNavMeshRenderingComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1E20              		 offset:2fd1e20                       

bool UNavMeshRenderingComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingComponent"));

	UNavMeshRenderingComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1D90              		 offset:2fd1d90                       

bool UNavMeshRenderingComponent::IsOverlappingActor(class AActor** Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingActor"));

	UNavMeshRenderingComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1D60              		 offset:2fd1d60                       

bool UNavMeshRenderingComponent::IsGravityEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsGravityEnabled"));

	UNavMeshRenderingComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68202CD60              		 offset:2f1cd60                       

bool UNavMeshRenderingComponent::IsAnyRigidBodyAwake()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake"));

	UNavMeshRenderingComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1B00              		 offset:2fd1b00                       

void UNavMeshRenderingComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving"));

	UNavMeshRenderingComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1A30              		 offset:2fd1a30                       

void UNavMeshRenderingComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving"));

	UNavMeshRenderingComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1A00              		 offset:2fd1a00                       

struct FWalkableSlopeOverride UNavMeshRenderingComponent::GetWalkableSlopeOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride"));

	UNavMeshRenderingComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1870              		 offset:2fd1870                       

struct FVector UNavMeshRenderingComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint"));

	UNavMeshRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E17B0              		 offset:2fd17b0                       

struct FVector UNavMeshRenderingComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity"));

	UNavMeshRenderingComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E16F0              		 offset:2fd16f0                       

struct FVector UNavMeshRenderingComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians"));

	UNavMeshRenderingComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1600              		 offset:2fd1600                       

struct FVector UNavMeshRenderingComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees"));

	UNavMeshRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1600              		 offset:2fd1600                       

struct FVector UNavMeshRenderingComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity"));

	UNavMeshRenderingComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6820E1550              		 offset:2fd1550                       

void UNavMeshRenderingComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingComponents"));

	UNavMeshRenderingComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1460              		 offset:2fd1460                       

void UNavMeshRenderingComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingActors"));

	UNavMeshRenderingComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1430              		 offset:2fd1430                       

int UNavMeshRenderingComponent::GetNumMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetNumMaterials"));

	UNavMeshRenderingComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1350              		 offset:2fd1350                       

class UMaterialInterface* UNavMeshRenderingComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex"));

	UNavMeshRenderingComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E12B0              		 offset:2fd12b0                       

class UMaterialInterface* UNavMeshRenderingComponent::GetMaterial(int* ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterial"));

	UNavMeshRenderingComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1200              		 offset:2fd1200                       

float UNavMeshRenderingComponent::GetMassScale(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMassScale"));

	UNavMeshRenderingComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E11C0              		 offset:2fd11c0                       

float UNavMeshRenderingComponent::GetMass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMass"));

	UNavMeshRenderingComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1180              		 offset:2fd1180                       

float UNavMeshRenderingComponent::GetLinearDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetLinearDamping"));

	UNavMeshRenderingComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E10C0              		 offset:2fd10c0                       

struct FVector UNavMeshRenderingComponent::GetInertiaTensor(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetInertiaTensor"));

	UNavMeshRenderingComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1090              		 offset:2fd1090                       

bool UNavMeshRenderingComponent::GetGenerateOverlapEvents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents"));

	UNavMeshRenderingComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1000              		 offset:2fd1000                       

TEnumAsByte<ECollisionResponse> UNavMeshRenderingComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel"));

	UNavMeshRenderingComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0FC0              		 offset:2fd0fc0                       

struct FName UNavMeshRenderingComponent::GetCollisionProfileName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionProfileName"));

	UNavMeshRenderingComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0F90              		 offset:2fd0f90                       

TEnumAsByte<ECollisionChannel> UNavMeshRenderingComponent::GetCollisionObjectType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionObjectType"));

	UNavMeshRenderingComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0F60              		 offset:2fd0f60                       

TEnumAsByte<ECollisionEnabled> UNavMeshRenderingComponent::GetCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionEnabled"));

	UNavMeshRenderingComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0E10              		 offset:2fd0e10                       

float UNavMeshRenderingComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetClosestPointOnCollision"));

	UNavMeshRenderingComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0D50              		 offset:2fd0d50                       

struct FVector UNavMeshRenderingComponent::GetCenterOfMass(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCenterOfMass"));

	UNavMeshRenderingComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E08F0              		 offset:2fd08f0                       

float UNavMeshRenderingComponent::GetAngularDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetAngularDamping"));

	UNavMeshRenderingComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E07D0              		 offset:2fd07d0                       

class UMaterialInstanceDynamic* UNavMeshRenderingComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance"));

	UNavMeshRenderingComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0700              		 offset:2fd0700                       

class UMaterialInstanceDynamic* UNavMeshRenderingComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial"));

	UNavMeshRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0660              		 offset:2fd0660                       

class UMaterialInstanceDynamic* UNavMeshRenderingComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic"));

	UNavMeshRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820E0560              		 offset:2fd0560                       

TArray<class UPrimitiveComponent*> UNavMeshRenderingComponent::CopyArrayOfMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents"));

	UNavMeshRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820E04E0              		 offset:2fd04e0                       

TArray<class AActor*> UNavMeshRenderingComponent::CopyArrayOfMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors"));

	UNavMeshRenderingComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820E0490              		 offset:2fd0490                       

void UNavMeshRenderingComponent::ClearMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents"));

	UNavMeshRenderingComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820E0470              		 offset:2fd0470                       

void UNavMeshRenderingComponent::ClearMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors"));

	UNavMeshRenderingComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E03D0              		 offset:2fd03d0                       

bool UNavMeshRenderingComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CanCharacterStepUp"));

	UNavMeshRenderingComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0150              		 offset:2fd0150                       

void UNavMeshRenderingComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorqueInRadians"));

	UNavMeshRenderingComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0280              		 offset:2fd0280                       

void UNavMeshRenderingComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorqueInDegrees"));

	UNavMeshRenderingComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0150              		 offset:2fd0150                       

void UNavMeshRenderingComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorque"));

	UNavMeshRenderingComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFF90              		 offset:2fcff90                       

void UNavMeshRenderingComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialImpulse"));

	UNavMeshRenderingComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFDD0              		 offset:2fcfdd0                       

void UNavMeshRenderingComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialForce"));

	UNavMeshRenderingComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFAB0              		 offset:2fcfab0                       

void UNavMeshRenderingComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulseAtLocation"));

	UNavMeshRenderingComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF980              		 offset:2fcf980                       

void UNavMeshRenderingComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulse"));

	UNavMeshRenderingComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF840              		 offset:2fcf840                       

void UNavMeshRenderingComponent::AddForceAtLocationLocal(struct FVector* force, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocationLocal"));

	UNavMeshRenderingComponent_AddForceAtLocationLocal_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF700              		 offset:2fcf700                       

void UNavMeshRenderingComponent::AddForceAtLocation(struct FVector* force, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocation"));

	UNavMeshRenderingComponent_AddForceAtLocation_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF5D0              		 offset:2fcf5d0                       

void UNavMeshRenderingComponent::AddForce(struct FVector* force, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForce"));

	UNavMeshRenderingComponent_AddForce_Params params;
	params.force = force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF4A0              		 offset:2fcf4a0                       

void UNavMeshRenderingComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians"));

	UNavMeshRenderingComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF350              		 offset:2fcf350                       

void UNavMeshRenderingComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees"));

	UNavMeshRenderingComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF220              		 offset:2fcf220                       

void UNavMeshRenderingComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulse"));

	UNavMeshRenderingComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A3B0              		 offset:311a3b0                       

void UNavModifierComponent::SetAreaClass(class UClass** NewAreaClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavModifierComponent.SetAreaClass"));

	UNavModifierComponent_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavModifierVolume.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68222A330              		 offset:311a330                       

void ANavModifierVolume::SetAreaClass(class UClass** NewAreaClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function NavigationSystem.NavModifierVolume.SetAreaClass"));

	ANavModifierVolume_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5540              		 offset:2fd5540                       

void UNavTestRenderingComponent::WakeRigidBody(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeRigidBody"));

	UNavTestRenderingComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF682003160              		 offset:2ef3160                       

void UNavTestRenderingComponent::WakeAllRigidBodies()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeAllRigidBodies"));

	UNavTestRenderingComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5490              		 offset:2fd5490                       

void UNavTestRenderingComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride"));

	UNavTestRenderingComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E53A0              		 offset:2fd53a0                       

void UNavTestRenderingComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetUseCCD"));

	UNavTestRenderingComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5320              		 offset:2fd5320                       

void UNavTestRenderingComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetTranslucentSortPriority"));

	UNavTestRenderingComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5110              		 offset:2fd5110                       

void UNavTestRenderingComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights"));

	UNavTestRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E5080              		 offset:2fd5080                       

void UNavTestRenderingComponent::SetSimulatePhysics(bool* bSimulate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSimulatePhysics"));

	UNavTestRenderingComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4FF0              		 offset:2fd4ff0                       

void UNavTestRenderingComponent::SetRenderInMainPass(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderInMainPass"));

	UNavTestRenderingComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4F60              		 offset:2fd4f60                       

void UNavTestRenderingComponent::SetRenderCustomDepth(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomDepth"));

	UNavTestRenderingComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4ED0              		 offset:2fd4ed0                       

void UNavTestRenderingComponent::SetRenderCustomColourNoDepth(bool* bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth"));

	UNavTestRenderingComponent_SetRenderCustomColourNoDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4E40              		 offset:2fd4e40                       

void UNavTestRenderingComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetReceivesDecals"));

	UNavTestRenderingComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4710              		 offset:2fd4710                       

void UNavTestRenderingComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysMaterialOverride"));

	UNavTestRenderingComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4CA0              		 offset:2fd4ca0                       

void UNavTestRenderingComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians"));

	UNavTestRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4B70              		 offset:2fd4b70                       

void UNavTestRenderingComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees"));

	UNavTestRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4B70              		 offset:2fd4b70                       

void UNavTestRenderingComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity"));

	UNavTestRenderingComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4A30              		 offset:2fd4a30                       

void UNavTestRenderingComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity"));

	UNavTestRenderingComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E48F0              		 offset:2fd48f0                       

void UNavTestRenderingComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians"));

	UNavTestRenderingComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E47A0              		 offset:2fd47a0                       

void UNavTestRenderingComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees"));

	UNavTestRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E47A0              		 offset:2fd47a0                       

void UNavTestRenderingComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity"));

	UNavTestRenderingComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4680              		 offset:2fd4680                       

void UNavTestRenderingComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOwnerNoSee"));

	UNavTestRenderingComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E45F0              		 offset:2fd45f0                       

void UNavTestRenderingComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOnlyOwnerSee"));

	UNavTestRenderingComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4560              		 offset:2fd4560                       

void UNavTestRenderingComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision"));

	UNavTestRenderingComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4400              		 offset:2fd4400                       

void UNavTestRenderingComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterialByName"));

	UNavTestRenderingComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4330              		 offset:2fd4330                       

void UNavTestRenderingComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterial"));

	UNavTestRenderingComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4250              		 offset:2fd4250                       

void UNavTestRenderingComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassScale"));

	UNavTestRenderingComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E4120              		 offset:2fd4120                       

void UNavTestRenderingComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassOverrideInKg"));

	UNavTestRenderingComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E40A0              		 offset:2fd40a0                       

void UNavTestRenderingComponent::SetLinearDamping(float* InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetLinearDamping"));

	UNavTestRenderingComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3F10              		 offset:2fd3f10                       

void UNavTestRenderingComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents"));

	UNavTestRenderingComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820CF4E0              		 offset:2fbf4e0                       

void UNavTestRenderingComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetEnableGravity"));

	UNavTestRenderingComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3E90              		 offset:2fd3e90                       

void UNavTestRenderingComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask"));

	UNavTestRenderingComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3E10              		 offset:2fd3e10                       

void UNavTestRenderingComponent::SetCustomDepthStencilValue(int* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue"));

	UNavTestRenderingComponent_SetCustomDepthStencilValue_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomColourWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomColourWriteMask*        WriteMask                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3D90              		 offset:2fd3d90                       

void UNavTestRenderingComponent::SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomColourWriteMask"));

	UNavTestRenderingComponent_SetCustomColourWriteMask_Params params;
	params.WriteMask = WriteMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3D10              		 offset:2fd3d10                       

void UNavTestRenderingComponent::SetCullDistance(float* NewCullDistance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCullDistance"));

	UNavTestRenderingComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3C90              		 offset:2fd3c90                       

void UNavTestRenderingComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetConstraintMode"));

	UNavTestRenderingComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3BD0              		 offset:2fd3bd0                       

void UNavTestRenderingComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel"));

	UNavTestRenderingComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3B50              		 offset:2fd3b50                       

void UNavTestRenderingComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels"));

	UNavTestRenderingComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68203BAA0              		 offset:2f2baa0                       

void UNavTestRenderingComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionProfileName"));

	UNavTestRenderingComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3AD0              		 offset:2fd3ad0                       

void UNavTestRenderingComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionObjectType"));

	UNavTestRenderingComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3A50              		 offset:2fd3a50                       

void UNavTestRenderingComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionEnabled"));

	UNavTestRenderingComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3960              		 offset:2fd3960                       

void UNavTestRenderingComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCenterOfMass"));

	UNavTestRenderingComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E38D0              		 offset:2fd38d0                       

void UNavTestRenderingComponent::SetCastShadow(bool* NewCastShadow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCastShadow"));

	UNavTestRenderingComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3850              		 offset:2fd3850                       

void UNavTestRenderingComponent::SetBoundsScale(float* NewBoundsScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetBoundsScale"));

	UNavTestRenderingComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E32C0              		 offset:2fd32c0                       

void UNavTestRenderingComponent::SetAngularDamping(float* InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAngularDamping"));

	UNavTestRenderingComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3230              		 offset:2fd3230                       

void UNavTestRenderingComponent::SetAllUseCCD(bool* InUseCCD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllUseCCD"));

	UNavTestRenderingComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3150              		 offset:2fd3150                       

void UNavTestRenderingComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity"));

	UNavTestRenderingComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E3070              		 offset:2fd3070                       

void UNavTestRenderingComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians"));

	UNavTestRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2F50              		 offset:2fd2f50                       

void UNavTestRenderingComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees"));

	UNavTestRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2ED0              		 offset:2fd2ed0                       

void UNavTestRenderingComponent::SetAllMassScale(float* InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllMassScale"));

	UNavTestRenderingComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2DC0              		 offset:2fd2dc0                       

struct FVector UNavTestRenderingComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia"));

	UNavTestRenderingComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2C80              		 offset:2fd2c80                       

void UNavTestRenderingComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.PutRigidBodyToSleep"));

	UNavTestRenderingComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2910              		 offset:2fd2910                       

bool UNavTestRenderingComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_SphereTraceComponent"));

	UNavTestRenderingComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E25E0              		 offset:2fd25e0                       

bool UNavTestRenderingComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent"));

	UNavTestRenderingComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E22B0              		 offset:2fd22b0                       

bool UNavTestRenderingComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_LineTraceComponent"));

	UNavTestRenderingComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2270              		 offset:2fd2270                       

bool UNavTestRenderingComponent::K2_IsQueryCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled"));

	UNavTestRenderingComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E2230              		 offset:2fd2230                       

bool UNavTestRenderingComponent::K2_IsPhysicsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled"));

	UNavTestRenderingComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E21F0              		 offset:2fd21f0                       

bool UNavTestRenderingComponent::K2_IsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled"));

	UNavTestRenderingComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1EB0              		 offset:2fd1eb0                       

bool UNavTestRenderingComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent"));

	UNavTestRenderingComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1E20              		 offset:2fd1e20                       

bool UNavTestRenderingComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingComponent"));

	UNavTestRenderingComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1D90              		 offset:2fd1d90                       

bool UNavTestRenderingComponent::IsOverlappingActor(class AActor** Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingActor"));

	UNavTestRenderingComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1D60              		 offset:2fd1d60                       

bool UNavTestRenderingComponent::IsGravityEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsGravityEnabled"));

	UNavTestRenderingComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68202CD60              		 offset:2f1cd60                       

bool UNavTestRenderingComponent::IsAnyRigidBodyAwake()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake"));

	UNavTestRenderingComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1B00              		 offset:2fd1b00                       

void UNavTestRenderingComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving"));

	UNavTestRenderingComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1A30              		 offset:2fd1a30                       

void UNavTestRenderingComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving"));

	UNavTestRenderingComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1A00              		 offset:2fd1a00                       

struct FWalkableSlopeOverride UNavTestRenderingComponent::GetWalkableSlopeOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride"));

	UNavTestRenderingComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1870              		 offset:2fd1870                       

struct FVector UNavTestRenderingComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint"));

	UNavTestRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E17B0              		 offset:2fd17b0                       

struct FVector UNavTestRenderingComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity"));

	UNavTestRenderingComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E16F0              		 offset:2fd16f0                       

struct FVector UNavTestRenderingComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians"));

	UNavTestRenderingComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1600              		 offset:2fd1600                       

struct FVector UNavTestRenderingComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees"));

	UNavTestRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1600              		 offset:2fd1600                       

struct FVector UNavTestRenderingComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity"));

	UNavTestRenderingComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6820E1550              		 offset:2fd1550                       

void UNavTestRenderingComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingComponents"));

	UNavTestRenderingComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1460              		 offset:2fd1460                       

void UNavTestRenderingComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingActors"));

	UNavTestRenderingComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1430              		 offset:2fd1430                       

int UNavTestRenderingComponent::GetNumMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetNumMaterials"));

	UNavTestRenderingComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1350              		 offset:2fd1350                       

class UMaterialInterface* UNavTestRenderingComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex"));

	UNavTestRenderingComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E12B0              		 offset:2fd12b0                       

class UMaterialInterface* UNavTestRenderingComponent::GetMaterial(int* ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterial"));

	UNavTestRenderingComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1200              		 offset:2fd1200                       

float UNavTestRenderingComponent::GetMassScale(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMassScale"));

	UNavTestRenderingComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E11C0              		 offset:2fd11c0                       

float UNavTestRenderingComponent::GetMass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMass"));

	UNavTestRenderingComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1180              		 offset:2fd1180                       

float UNavTestRenderingComponent::GetLinearDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetLinearDamping"));

	UNavTestRenderingComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E10C0              		 offset:2fd10c0                       

struct FVector UNavTestRenderingComponent::GetInertiaTensor(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetInertiaTensor"));

	UNavTestRenderingComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1090              		 offset:2fd1090                       

bool UNavTestRenderingComponent::GetGenerateOverlapEvents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents"));

	UNavTestRenderingComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E1000              		 offset:2fd1000                       

TEnumAsByte<ECollisionResponse> UNavTestRenderingComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel"));

	UNavTestRenderingComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0FC0              		 offset:2fd0fc0                       

struct FName UNavTestRenderingComponent::GetCollisionProfileName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionProfileName"));

	UNavTestRenderingComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0F90              		 offset:2fd0f90                       

TEnumAsByte<ECollisionChannel> UNavTestRenderingComponent::GetCollisionObjectType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionObjectType"));

	UNavTestRenderingComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0F60              		 offset:2fd0f60                       

TEnumAsByte<ECollisionEnabled> UNavTestRenderingComponent::GetCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionEnabled"));

	UNavTestRenderingComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0E10              		 offset:2fd0e10                       

float UNavTestRenderingComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetClosestPointOnCollision"));

	UNavTestRenderingComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0D50              		 offset:2fd0d50                       

struct FVector UNavTestRenderingComponent::GetCenterOfMass(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCenterOfMass"));

	UNavTestRenderingComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E08F0              		 offset:2fd08f0                       

float UNavTestRenderingComponent::GetAngularDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetAngularDamping"));

	UNavTestRenderingComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E07D0              		 offset:2fd07d0                       

class UMaterialInstanceDynamic* UNavTestRenderingComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance"));

	UNavTestRenderingComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0700              		 offset:2fd0700                       

class UMaterialInstanceDynamic* UNavTestRenderingComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial"));

	UNavTestRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0660              		 offset:2fd0660                       

class UMaterialInstanceDynamic* UNavTestRenderingComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic"));

	UNavTestRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820E0560              		 offset:2fd0560                       

TArray<class UPrimitiveComponent*> UNavTestRenderingComponent::CopyArrayOfMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents"));

	UNavTestRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820E04E0              		 offset:2fd04e0                       

TArray<class AActor*> UNavTestRenderingComponent::CopyArrayOfMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors"));

	UNavTestRenderingComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820E0490              		 offset:2fd0490                       

void UNavTestRenderingComponent::ClearMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents"));

	UNavTestRenderingComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820E0470              		 offset:2fd0470                       

void UNavTestRenderingComponent::ClearMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors"));

	UNavTestRenderingComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820E03D0              		 offset:2fd03d0                       

bool UNavTestRenderingComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CanCharacterStepUp"));

	UNavTestRenderingComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0150              		 offset:2fd0150                       

void UNavTestRenderingComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorqueInRadians"));

	UNavTestRenderingComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0280              		 offset:2fd0280                       

void UNavTestRenderingComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorqueInDegrees"));

	UNavTestRenderingComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820E0150              		 offset:2fd0150                       

void UNavTestRenderingComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorque"));

	UNavTestRenderingComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFF90              		 offset:2fcff90                       

void UNavTestRenderingComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialImpulse"));

	UNavTestRenderingComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFDD0              		 offset:2fcfdd0                       

void UNavTestRenderingComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialForce"));

	UNavTestRenderingComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DFAB0              		 offset:2fcfab0                       

void UNavTestRenderingComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulseAtLocation"));

	UNavTestRenderingComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF980              		 offset:2fcf980                       

void UNavTestRenderingComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulse"));

	UNavTestRenderingComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF840              		 offset:2fcf840                       

void UNavTestRenderingComponent::AddForceAtLocationLocal(struct FVector* force, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocationLocal"));

	UNavTestRenderingComponent_AddForceAtLocationLocal_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF700              		 offset:2fcf700                       

void UNavTestRenderingComponent::AddForceAtLocation(struct FVector* force, struct FVector* Location, struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocation"));

	UNavTestRenderingComponent_AddForceAtLocation_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF5D0              		 offset:2fcf5d0                       

void UNavTestRenderingComponent::AddForce(struct FVector* force, struct FName* BoneName, bool* bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForce"));

	UNavTestRenderingComponent_AddForce_Params params;
	params.force = force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF4A0              		 offset:2fcf4a0                       

void UNavTestRenderingComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians"));

	UNavTestRenderingComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF350              		 offset:2fcf350                       

void UNavTestRenderingComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees"));

	UNavTestRenderingComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820DF220              		 offset:2fcf220                       

void UNavTestRenderingComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulse"));

	UNavTestRenderingComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
