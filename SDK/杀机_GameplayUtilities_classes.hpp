#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GameplayUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayUtilities.AuthoritativeActorPoolComponent
// 0x0020 (0x0120 - 0x0100)
class UAuthoritativeActorPoolComponent : public UActorComponent
{
public:
	class UClass*                                      _actorClass;                                              // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                _size;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              _pool;                                                    // 0x0110(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.AuthoritativeActorPoolComponent"));

		return ptr;
	}


	void Authority_OnActorDestroyed(class AActor** DestroyedActor);
};


// Class GameplayUtilities.BasePoolableActorComponent
// 0x0018 (0x0118 - 0x0100)
class UBasePoolableActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAcquiredChanged;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.BasePoolableActorComponent"));

		return ptr;
	}

};


// Class GameplayUtilities.AuthoritativePoolableActorComponent
// 0x0008 (0x0120 - 0x0118)
class UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent
{
public:
	bool                                               _acquired;                                                // 0x0118(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.AuthoritativePoolableActorComponent"));

		return ptr;
	}


	void OnRep_Acquired();
};


// Class GameplayUtilities.BoxOcclusionQueryComponent
// 0x0020 (0x05E0 - 0x05C0)
class UBoxOcclusionQueryComponent : public UBoxComponent
{
public:
	float                                              TimeUntilOccluded;                                        // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x05C4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.BoxOcclusionQueryComponent"));

		return ptr;
	}


	float GetVisiblePercentOfScreen();
	float GetNumberOfVisiblePixels();
	float GetEstimatedRenderedPixelCount();
};


// Class GameplayUtilities.CameraUtilities
// 0x0000 (0x0030 - 0x0030)
class UCameraUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.CameraUtilities"));

		return ptr;
	}

};


// Class GameplayUtilities.CharacterSightableComponent
// 0x00D8 (0x01D8 - 0x0100)
class UCharacterSightableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET
	TMap<TWeakObjectPtr<class ACharacter>, struct FDelegateHandleWrapper> _sightDelegateHandles;                                    // 0x0130(0x0050) (ZeroConstructor, Transient)
	TMap<TWeakObjectPtr<class ACharacter>, ESightStatus> _sightersStatus;                                          // 0x0180(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.CharacterSightableComponent"));

		return ptr;
	}

};


// Class GameplayUtilities.CharacterSightComponent
// 0x00B8 (0x01B8 - 0x0100)
class UCharacterSightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET
	float                                              _minimumCharacterScreenPercent;                           // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _minimumCharacterVisiblePixelsPercent;                    // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _maximumSightDistance;                                    // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _screenVisibilityZoneRadiusPercent;                       // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _sightingDelay;                                           // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _discerningDelay;                                         // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _undiscerningDelay;                                       // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UClass*                                      _sightableCharacterClass;                                 // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAuthorityDiscernedCharacter>        _discernedCharacters;                                     // 0x0160(0x0010) (Net, ZeroConstructor, Transient)
	TArray<struct FDiscernibleCharacter>               _localDiscernibleCharacters;                              // 0x0170(0x0010) (ZeroConstructor, Transient)
	bool                                               _debugMode;                                               // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _canSee;                                                  // 0x0181(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	struct FActivationDefinition                       _activationDefinition;                                    // 0x0188(0x0028) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.CharacterSightComponent"));

		return ptr;
	}


	void SetScreenVisibilityZoneRadiusPercent(float* value);
	void SetMinimumCharacterVisiblePixelsPercent(float* value);
	void SetMinimumCharacterScreenPercent(float* value);
	void Server_UpdateDiscernedCharacters(TArray<class ACharacter*>* Characters);
	void OnRep_DiscernibleCharacters();
	void OnRep_CanSee();
};


// Class GameplayUtilities.PoolableActor
// 0x0000 (0x0030 - 0x0030)
class UPoolableActor : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.PoolableActor"));

		return ptr;
	}

};


// Class GameplayUtilities.MockAuthoritativeActorPoolComponent
// 0x0000 (0x0120 - 0x0120)
class UMockAuthoritativeActorPoolComponent : public UAuthoritativeActorPoolComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.MockAuthoritativeActorPoolComponent"));

		return ptr;
	}


	void Authority_OnActorDestroyed(class AActor** DestroyedActor);
};


// Class GameplayUtilities.MockPoolableActor
// 0x0008 (0x0348 - 0x0340)
class AMockPoolableActor : public AActor
{
public:
	class UPoolableActorComponent*                     _poolable;                                                // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.MockPoolableActor"));

		return ptr;
	}

};


// Class GameplayUtilities.PawnUtilities
// 0x0000 (0x0030 - 0x0030)
class UPawnUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.PawnUtilities"));

		return ptr;
	}

};


// Class GameplayUtilities.PoolableActorComponent
// 0x0008 (0x0120 - 0x0118)
class UPoolableActorComponent : public UBasePoolableActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.PoolableActorComponent"));

		return ptr;
	}

};


// Class GameplayUtilities.SceneComponentExt
// 0x0000 (0x0030 - 0x0030)
class USceneComponentExt : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GameplayUtilities.SceneComponentExt"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
