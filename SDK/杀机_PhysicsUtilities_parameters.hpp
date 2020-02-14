#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PhysicsUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
struct UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
struct UDynamicCapsuleResizerComponent_OnHit_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhysicsUtilities.PrimitiveCollection.Remove
struct UPrimitiveCollection_Remove_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PhysicsUtilities.PrimitiveCollection.Add
struct UPrimitiveCollection_Add_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
struct UPrimitivesRegistererComponent_SetPrimitives_Params
{
	TArray<class UPrimitiveComponent*>*                primitives;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
