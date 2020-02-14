#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_VFXUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VFXUtilities.BaseVFX
// 0x0008 (0x0348 - 0x0340)
class ABaseVFX : public AActor
{
public:
	bool                                               _shouldLoadOnServer;                                      // 0x0340(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.BaseVFX"));

		return ptr;
	}

};


// Class VFXUtilities.DBDDecalComponent
// 0x0000 (0x02B0 - 0x02B0)
class UDBDDecalComponent : public UDecalComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.DBDDecalComponent"));

		return ptr;
	}


	void SetSortOrder(int* value);
	void SetFadeScreenSize(float* NewFadeScreenSize);
	void SetFadeOut(float* StartDelay, float* Duration, bool* DestroyOwnerAfterFade);
	void SetFadeIn(float* StartDelay, float* Duaration);
	void SetDecalMaterial(class UMaterialInterface** NewDecalMaterial);
	float GetFadeStartDelay();
	float GetFadeInStartDelay();
	float GetFadeInDuration();
	float GetFadeDuration();
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class VFXUtilities.DecalCollection
// 0x0018 (0x0048 - 0x0030)
class UDecalCollection : public UObject
{
public:
	TArray<class UDecalComponent*>                     _decalComponents;                                         // 0x0030(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.DecalCollection"));

		return ptr;
	}

};


// Class VFXUtilities.DecalSpawner
// 0x0018 (0x0048 - 0x0030)
class UDecalSpawner : public UObject
{
public:
	class UDecalCollection*                            _decalCollection;                                         // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USpawnerStrategy*                            _spawnerStrategy;                                         // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.DecalSpawner"));

		return ptr;
	}

};


// Class VFXUtilities.DecalSpawnerCollection
// 0x0050 (0x0080 - 0x0030)
class UDecalSpawnerCollection : public UObject
{
public:
	TMap<struct FName, class UDecalSpawner*>           _decalSpawners;                                           // 0x0030(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.DecalSpawnerCollection"));

		return ptr;
	}


	class UDecalComponent* SpawnDecalAtLocation(struct FName* decalSpawnerName, struct FVector* DecalSize, struct FVector* Location, struct FRotator* Rotation, float* LifeSpan);
	void ReleaseDecalSpawner(struct FName* decalSpawnerName);
	void CreateDecalSpawner(class UObject** WorldContextObject, struct FName* decalSpawnerName, class UMaterialInterface** DecalMaterial, int* PoolSize, ESpawnerStrategyType* spawnerStrateryType);
};


// Class VFXUtilities.SpawnerStrategy
// 0x0000 (0x0030 - 0x0030)
class USpawnerStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.SpawnerStrategy"));

		return ptr;
	}

};


// Class VFXUtilities.NoAccumulationSpawnerStrategy
// 0x0000 (0x0030 - 0x0030)
class UNoAccumulationSpawnerStrategy : public USpawnerStrategy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.NoAccumulationSpawnerStrategy"));

		return ptr;
	}

};


// Class VFXUtilities.VFXUtilities
// 0x0000 (0x0030 - 0x0030)
class UVFXUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VFXUtilities.VFXUtilities"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
