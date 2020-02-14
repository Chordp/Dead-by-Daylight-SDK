#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_Slasher13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C
// 0x0081 (0x0929 - 0x08A8)
class ABP_Menu_Slasher13_C : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_RedStainComponent_C*                     RedStainComponent;                                        // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF;          // 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF;// 0x08BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF; // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF;   // 0x08C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Show_Sword;                                               // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_2_Size_548F5340441650D05914669F2F45DC7E;         // 0x08D0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E;// 0x08DC(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_548F5340441650D05914669F2F45DC7E;   // 0x08E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709;// 0x08F8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709;// 0x0904(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709;// 0x0910(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709;// 0x0914(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709;// 0x0918(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709;// 0x091C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x091D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Make_Sword_Disappear;                                     // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SwordShouldBeVisible;                                     // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C"));

		return ptr;
	}


	void GetShard(class USkeletalMeshComponent** Shard);
	void GetSword(class USkeletalMeshComponent** Sword);
	void Make_Sword_Disappear__FinishedFunc();
	void Make_Sword_Disappear__UpdateFunc();
	void Show_Sword__FinishedFunc();
	void Show_Sword__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Make_Weapon_Appear();
	void Make_Weapon_Disappear();
	void MakeSwordVisible();
	void MakeSwordInvisible();
	void OnCustomizationUpdated();
	void ReceiveBeginPlay();
	void OnAttack_StopTimeline();
	void ExecuteUbergraph_BP_Menu_Slasher13(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
