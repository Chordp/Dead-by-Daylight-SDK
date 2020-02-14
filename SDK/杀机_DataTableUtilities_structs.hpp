#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DataTableUtilities.DBDTableRowBase
// 0x0000 (0x0008 - 0x0008)
struct FDBDTableRowBase : public FTableRowBase
{

};

// ScriptStruct DataTableUtilities.DBDTableRowBaseWithId
// 0x0010 (0x0018 - 0x0008)
struct FDBDTableRowBaseWithId : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
