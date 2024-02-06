#pragma once

/**
 * Name: GreedIsGood
 * Version: fodase
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MagicLeapAR.LuminARSessionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARFrameFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults);
		ELuminARTrackingState GetTrackingState();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation);
		class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminAROrigin
	 * Size -> 0x00C0 (FullSize[0x02E8] - InheritedSize[0x0228])
	 */
	class ALuminAROrigin : public AAROriginActor
	{
	public:
		class UMRMeshComponent*                                    MRMeshComponent;                                         // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  PlaneSurfaceMaterial;                                    // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  WireframeMaterial;                                       // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5HO0[0xA8];                                  // 0x0240(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARSessionConfig
	 * Size -> 0x0090 (FullSize[0x01A0] - InheritedSize[0x0110])
	 */
	class ULuminARSessionConfig : public UARSessionConfig
	{
	public:
		struct FMagicLeapPlanesQuery                               PlanesQuery;                                             // 0x0110(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlaneQueryResults;                                    // 0x0170(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinPlaneArea;                                            // 0x0174(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bArbitraryOrientationPlaneDetection;                     // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1FR[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlaneSearchExtents;                                      // 0x017C(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EMagicLeapPlaneQueryFlags>                          PlaneQueryFlags;                                         // 0x0188(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		bool                                                       bDiscardZeroExtentPlanes;                                // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDefaultUseUnreliablePose;                               // 0x0199(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SE58[0x6];                                   // 0x019A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARLightEstimate
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class ULuminARLightEstimate : public UARBasicLightEstimate
	{
	public:
		TArray<float>                                              AmbientIntensityNits;                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		TArray<float> GetAmbientIntensityNits();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapAR.LuminARCandidateImage
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class ULuminARCandidateImage : public UARCandidateImage
	{
	public:
		bool                                                       bUseUnreliablePose;                                      // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bImageIsStationary;                                      // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMagicLeapImageTargetOrientation                           AxisOrientation;                                         // 0x005A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EALF[0x5];                                   // 0x005B(0x0005) MISSED OFFSET (PADDING)

	public:
		bool GetUseUnreliablePose();
		bool GetImageIsStationary();
		EMagicLeapImageTargetOrientation GetAxisOrientation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
