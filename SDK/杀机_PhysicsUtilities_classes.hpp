#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PhysicsUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhysicsUtilities.DynamicCapsuleResizerComponent
// 0x0030 (0x0130 - 0x0100)
class UDynamicCapsuleResizerComponent : public UActorComponent
{
public:
	class UCapsuleComponent*                           _capsule;                                                 // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0108(0x0014) MISSED OFFSET
	float                                              _shrinkPercent;                                           // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _shrinkDuration;                                          // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _expandDuration;                                          // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _stayShrunkenDuration;                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _isShrinkingEnabled;                                      // 0x012C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x012D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysicsUtilities.DynamicCapsuleResizerComponent"));

		return ptr;
	}


	void SetShrinkingEnabled(bool* Enabled);
	void OnHit(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
};


// Class PhysicsUtilities.PrimitiveCollection
// 0x0050 (0x0080 - 0x0030)
class UPrimitiveCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty PhysicsUtilities.PrimitiveCollection._primitives

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysicsUtilities.PrimitiveCollection"));

		return ptr;
	}


	void Remove(class UPrimitiveComponent** Primitive);
	void Add(class UPrimitiveComponent** Primitive);
};


// Class PhysicsUtilities.PrimitivesRegistererComponent
// 0x0018 (0x0118 - 0x0100)
class UPrimitivesRegistererComponent : public UActorComponent
{
public:
	TArray<class UPrimitiveComponent*>                 _primitives;                                              // 0x0100(0x0010) (ExportObject, ZeroConstructor)
	TWeakObjectPtr<class UPrimitiveCollection>         _primitiveCollection;                                     // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysicsUtilities.PrimitivesRegistererComponent"));

		return ptr;
	}


	void SetPrimitives(TArray<class UPrimitiveComponent*>* primitives);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
