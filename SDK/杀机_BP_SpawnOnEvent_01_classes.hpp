#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_SpawnOnEvent_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C
// 0x0020 (0x0370 - 0x0350)
class ABP_SpawnOnEvent_01_C : public AGeneratorDrivenActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      spawnedObject;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UActorSpawner*                               spawner;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C"));

		return ptr;
	}


	void SetSpawner(class UActorSpawner** spawner);
	void OnInitGeneratorDrivenActor(class AGenerator** Generator);
	void OnAsyncActorSpawned_Event(class AActor** actorSpawned);
	void OnActivateGeneratorDrivenActor();
	void ExecuteUbergraph_BP_SpawnOnEvent_01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
