#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_BaseItemVfx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C
// 0x0021 (0x0369 - 0x0348)
class ABP_BaseItemVfx_C : public AItemVfx
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            particleSystems;                                          // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AbsoluteRotation;                                         // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C"));

		return ptr;
	}


	void ClearParticleSystems();
	void SpawnEmitter(class UParticleSystem** EmitterTemplate, class USkeletalMeshComponent** AttachToComponent, struct FName* attachPointName, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale, bool* Absolute_Rotation, class UParticleSystemComponent** Particle_System);
	void ReceiveBeginPlay();
	void OnDestroyed_Event(class AActor** DestroyedActor);
	void SetEmittersVisibility(bool* visible);
	void ExecuteUbergraph_BP_BaseItemVfx(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
