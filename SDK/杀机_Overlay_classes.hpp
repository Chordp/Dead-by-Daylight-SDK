#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Overlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Overlay.Overlays
// 0x0000 (0x0030 - 0x0030)
class UOverlays : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Overlay.Overlays"));

		return ptr;
	}

};


// Class Overlay.BasicOverlays
// 0x0010 (0x0040 - 0x0030)
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Overlay.BasicOverlays"));

		return ptr;
	}

};


// Class Overlay.LocalizedOverlays
// 0x0058 (0x0088 - 0x0030)
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                      // 0x0038(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Overlay.LocalizedOverlays"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
