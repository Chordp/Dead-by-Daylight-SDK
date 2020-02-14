#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AppleVision_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// 0x0050 (0x0080 - 0x0030)
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
	struct FFaceDetectionResult                        FaceDetectionResult;                                      // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy"));

		return ptr;
	}


	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForDetectFaces(class UTexture** SourceImage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
