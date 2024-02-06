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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
	 */
	struct UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params
	{
	public:
		bool                                                       recenterMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
	 */
	struct UOculusFunctionLibrary_SetPositionScale3D_Params
	{
	public:
		struct FVector                                             PosScale3D;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
	 */
	struct UOculusFunctionLibrary_SetGuardianVisibility_Params
	{
	public:
		bool                                                       GuardianVisible;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
	 */
	struct UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Params
	{
	public:
		EFixedFoveatedRenderingLevel                               Level;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isDynamic;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
	 */
	struct UOculusFunctionLibrary_SetDisplayFrequency_Params
	{
	public:
		float                                                      RequestedFrequency;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
	 */
	struct UOculusFunctionLibrary_SetCPUAndGPULevels_Params
	{
	public:
		int32_t                                                    CPULevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GPULevel;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
	 */
	struct UOculusFunctionLibrary_SetColorScaleAndOffset_Params
	{
	public:
		struct FLinearColor                                        ColorScale;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ColorOffset;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bApplyToAllLayers;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc
	 */
	struct UOculusFunctionLibrary_SetClientColorDesc_Params
	{
	public:
		EColorSpace                                                ColorSpace;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
	 */
	struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
	{
	public:
		struct FRotator                                            BaseRot;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             PosOffset;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrientPositionSelector                                    Options;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
	 */
	struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             BaseOffsetInMeters;                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrientPositionSelector                                    Options;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
	 */
	struct UOculusFunctionLibrary_IsGuardianDisplayed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
	 */
	struct UOculusFunctionLibrary_IsGuardianConfigured_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
	 */
	struct UOculusFunctionLibrary_IsDeviceTracked_Params
	{
	public:
		ETrackedDeviceType                                         DeviceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
	 */
	struct UOculusFunctionLibrary_HasSystemOverlayPresent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.HasInputFocus
	 */
	struct UOculusFunctionLibrary_HasInputFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetUserProfile
	 */
	struct UOculusFunctionLibrary_GetUserProfile_Params
	{
	public:
		struct FHmdUserProfile                                     Profile;                                                 // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled
	 */
	struct UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
	 */
	struct UOculusFunctionLibrary_GetRawSensorData_Params
	{
	public:
		struct FVector                                             AngularAcceleration;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearAcceleration;                                      // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearVelocity;                                          // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeInSeconds;                                           // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETrackedDeviceType                                         DeviceType;                                              // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetPose
	 */
	struct UOculusFunctionLibrary_GetPose_Params
	{
	public:
		struct FRotator                                            DeviceRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             DevicePosition;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NeckPosition;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseOrienationForPlayerCamera;                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePositionForPlayerCamera;                             // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C0I4[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PositionScale;                                           // 0x0028(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
	 */
	struct UOculusFunctionLibrary_GetPointGuardianIntersection_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoundaryType                                              BoundaryType;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U6YX[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuardianTestResult                                 ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
	 */
	struct UOculusFunctionLibrary_GetPlayAreaTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
	 */
	struct UOculusFunctionLibrary_GetNodeGuardianIntersection_Params
	{
	public:
		ETrackedDeviceType                                         DeviceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBoundaryType                                              BoundaryType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4KRA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuardianTestResult                                 ReturnValue;                                             // 0x0004(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc
	 */
	struct UOculusFunctionLibrary_GetHmdColorDesc_Params
	{
	public:
		EColorSpace                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
	 */
	struct UOculusFunctionLibrary_GetGuardianPoints_Params
	{
	public:
		EBoundaryType                                              BoundaryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UsePawnSpace;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_US4Y[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
	 */
	struct UOculusFunctionLibrary_GetGuardianDimensions_Params
	{
	public:
		EBoundaryType                                              BoundaryType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V7U2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
	 */
	struct UOculusFunctionLibrary_GetGPUUtilization_Params
	{
	public:
		bool                                                       IsGPUAvailable;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PNEC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GPUUtilization;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
	 */
	struct UOculusFunctionLibrary_GetGPUFrameTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
	 */
	struct UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Params
	{
	public:
		EFixedFoveatedRenderingLevel                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetDeviceType
	 */
	struct UOculusFunctionLibrary_GetDeviceType_Params
	{
	public:
		EOculusDeviceType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetDeviceName
	 */
	struct UOculusFunctionLibrary_GetDeviceName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
	 */
	struct UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	 */
	struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
	{
	public:
		struct FRotator                                            OutRot;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutPosOffset;                                            // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	 */
	struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
	{
	public:
		struct FRotator                                            OutRotation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutBaseOffsetInMeters;                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
	 */
	struct UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params
	{
	public:
		TArray<float>                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
	 */
	struct UOculusFunctionLibrary_EnablePositionTracking_Params
	{
	public:
		bool                                                       bPositionTracking;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
	 */
	struct UOculusFunctionLibrary_EnableOrientationTracking_Params
	{
	public:
		bool                                                       bOrientationTracking;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
	 */
	struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
	{	};

	/**
	 * Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
	 */
	struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TranslationInMeters;                                     // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           SizeInMeters;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            DeltaRotation;                                           // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bClearBeforeAdd;                                         // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
