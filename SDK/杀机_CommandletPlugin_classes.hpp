#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_CommandletPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommandletPlugin.CustomizationValidationCommandlet
// 0x0000 (0x0088 - 0x0088)
class UCustomizationValidationCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CommandletPlugin.CustomizationValidationCommandlet"));

		return ptr;
	}

};


// Class CommandletPlugin.DataTableToCsvCommandlet
// 0x0000 (0x0088 - 0x0088)
class UDataTableToCsvCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CommandletPlugin.DataTableToCsvCommandlet"));

		return ptr;
	}

};


// Class CommandletPlugin.JournalsValidationCommandlet
// 0x0000 (0x0088 - 0x0088)
class UJournalsValidationCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CommandletPlugin.JournalsValidationCommandlet"));

		return ptr;
	}

};


// Class CommandletPlugin.StoryDescriptionValidationCommandlet
// 0x0000 (0x0088 - 0x0088)
class UStoryDescriptionValidationCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CommandletPlugin.StoryDescriptionValidationCommandlet"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
