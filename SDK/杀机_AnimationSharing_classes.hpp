#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AnimationSharing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationSharing.AnimSharingStateInstance
// 0x0020 (0x0290 - 0x0270)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	float                                              PermutationTimeOffset;                                    // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0279(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimSharingStateInstance"));

		return ptr;
	}


	void GetInstancedActors(TArray<class AActor*>* Actors);
};


// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0010 (0x0280 - 0x0270)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlendBool;                                               // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimSharingTransitionInstance"));

		return ptr;
	}

};


// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0010 (0x0280 - 0x0270)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimSharingAdditiveInstance"));

		return ptr;
	}

};


// Class AnimationSharing.AnimSharingInstance
// 0x0110 (0x0140 - 0x0030)
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET
	class UAnimationSharingStateProcessor*             StateProcessor;                                           // 0x00B0(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00B8(0x0038) MISSED OFFSET
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                   // 0x00F0(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	class UEnum*                                       StateEnum;                                                // 0x0110(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class AActor*                                      SharingActor;                                             // 0x0118(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimSharingInstance"));

		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingManager
// 0x0088 (0x00B8 - 0x0030)
class UAnimationSharingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0050(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimationSharingManager"));

		return ptr;
	}


	void RegisterActorWithSkeletonBP(class AActor** InActor, class USkeleton** SharingSkeleton);
	class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject** WorldContextObject);
	bool STATIC_CreateAnimationSharingManager(class UObject** WorldContextObject, class UAnimationSharingSetup** Setup);
	bool STATIC_AnimationSharingEnabled();
};


// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0050 - 0x0030)
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	struct FAnimationSharingScalability                ScalabilitySettings;                                      // 0x0040(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimationSharingSetup"));

		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0030 (0x0060 - 0x0030)
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.AnimationSharingStateProcessor.AnimationStateEnum

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationSharing.AnimationSharingStateProcessor"));

		return ptr;
	}


	void ProcessActorState(class AActor** InActor, unsigned char* CurrentState, unsigned char* OnDemandState, int* OutState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
