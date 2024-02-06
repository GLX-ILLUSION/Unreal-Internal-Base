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
	 * Class OculusHMD.OculusFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetReorientHMDOnControllerRecenter(bool recenterMode);
		void SetPositionScale3D(const struct FVector& PosScale3D);
		void SetGuardianVisibility(bool GuardianVisible);
		void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);
		void SetDisplayFrequency(float RequestedFrequency);
		void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);
		void SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers);
		void SetClientColorDesc(EColorSpace ColorSpace);
		void SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, EOrientPositionSelector Options);
		void SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, EOrientPositionSelector Options);
		bool IsGuardianDisplayed();
		bool IsGuardianConfigured();
		bool IsDeviceTracked(ETrackedDeviceType DeviceType);
		bool HasSystemOverlayPresent();
		bool HasInputFocus();
		bool GetUserProfile(struct FHmdUserProfile* Profile);
		bool GetSystemHmd3DofModeEnabled();
		void GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, ETrackedDeviceType DeviceType);
		void GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale);
		struct FGuardianTestResult GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType);
		struct FTransform GetPlayAreaTransform();
		struct FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
		EColorSpace GetHmdColorDesc();
		TArray<struct FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
		struct FVector GetGuardianDimensions(EBoundaryType BoundaryType);
		void GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization);
		float GetGPUFrameTime();
		EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
		EOculusDeviceType GetDeviceType();
		class FString GetDeviceName();
		float GetCurrentDisplayFrequency();
		void GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
		void GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
		TArray<float> GetAvailableDisplayFrequencies();
		void EnablePositionTracking(bool bPositionTracking);
		void EnableOrientationTracking(bool bOrientationTracking);
		void ClearLoadingSplashScreens();
		void AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusHMDRuntimeSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UOculusHMDRuntimeSettings : public UObject
	{
	public:
		bool                                                       bAutoEnabled;                                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5H9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOculusSplashDesc>                           SplashDescs;                                             // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bEnableSpecificColorGamut;                               // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EColorSpace                                                ColorSpace;                                              // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsDash;                                           // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompositesDepth;                                        // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHQDistortion;                                           // 0x0044(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBY9[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PixelDensityMin;                                         // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelDensityMax;                                         // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CPULevel;                                                // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPULevel;                                                // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFixedFoveatedRenderingLevel                               FFRLevel;                                                // 0x0058(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FFRDynamic;                                              // 0x0059(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChromaCorrection;                                       // 0x005A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecenterHMDWithController;                              // 0x005B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFocusAware;                                             // 0x005C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLateLatching;                                           // 0x005D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresSystemKeyboard;                                 // 0x005E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHandTrackingSupport                                       HandTrackingSupport;                                     // 0x005F(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPhaseSync;                                              // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJII[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusResourceHolder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOculusResourceHolder : public UObject
	{
	public:
		class UMaterial*                                           PokeAHoleMaterial;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusSceneCaptureCubemap
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusSceneCaptureCubemap : public UObject
	{
	public:
		unsigned char                                              UnknownData_ODBZ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneCaptureComponent2D*>                    CaptureComponents;                                       // 0x0038(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8M7G[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
