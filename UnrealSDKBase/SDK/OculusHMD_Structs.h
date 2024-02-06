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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OculusHMD.EOculusDeviceType
	 */
	enum class EOculusDeviceType : uint8_t
	{
		OculusMobile_Deprecated0 = 0,
		OculusQuest              = 1,
		OculusQuest2             = 2,
		Rift                     = 3,
		Rift_S                   = 4,
		Quest_Link               = 5,
		Quest2_Link              = 6,
		OculusUnknown            = 7,
		MAX                      = 8
	};

	/**
	 * Enum OculusHMD.EHandTrackingSupport
	 */
	enum class EHandTrackingSupport : uint8_t
	{
		ControllersOnly     = 0,
		ControllersAndHands = 1,
		HandsOnly           = 2,
		MAX                 = 3
	};

	/**
	 * Enum OculusHMD.EColorSpace
	 */
	enum class EColorSpace : uint8_t
	{
		Unknown   = 0,
		Unmanaged = 1,
		Rec       = 2,
		Rec01     = 3,
		Rift_CV1  = 4,
		Rift_S    = 5,
		Quest     = 6,
		P3        = 7,
		Adobe_RGB = 8,
		MAX       = 9
	};

	/**
	 * Enum OculusHMD.EBoundaryType
	 */
	enum class EBoundaryType : uint8_t
	{
		Boundary_Outer    = 0,
		Boundary_PlayArea = 1,
		Boundary_MAX      = 2
	};

	/**
	 * Enum OculusHMD.EFixedFoveatedRenderingLevel
	 */
	enum class EFixedFoveatedRenderingLevel : uint8_t
	{
		FFR_Off     = 0,
		FFR_Low     = 1,
		FFR_Medium  = 2,
		FFR_High    = 3,
		FFR_HighTop = 4,
		FFR_MAX     = 5
	};

	/**
	 * Enum OculusHMD.ETrackedDeviceType
	 */
	enum class ETrackedDeviceType : uint8_t
	{
		None             = 0,
		HMD              = 1,
		LTouch           = 2,
		RTouch           = 3,
		Touch            = 4,
		DeviceObjectZero = 5,
		All              = 6,
		MAX              = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OculusHMD.OculusSplashDesc
	 * Size -> 0x00A0
	 */
	struct FOculusSplashDesc
	{
	public:
		struct FSoftObjectPath                                     TexturePath;                                             // 0x0000(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8FW[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformInMeters;                                       // 0x0020(0x0030) Edit, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           QuadSizeInMeters;                                        // 0x0050(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGPA[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               DeltaRotation;                                           // 0x0060(0x0010) Edit, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           TextureOffset;                                           // 0x0070(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TextureScale;                                            // 0x0078(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoAlphaChannel;                                         // 0x0080(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2ST[0x1F];                                  // 0x0081(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OculusHMD.GuardianTestResult
	 * Size -> 0x0020
	 */
	struct FGuardianTestResult
	{
	public:
		bool                                                       IsTriggering;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackedDeviceType                                         DeviceType;                                              // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HR53[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClosestDistance;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ClosestPoint;                                            // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ClosestPointNormal;                                      // 0x0014(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OculusHMD.HmdUserProfileField
	 * Size -> 0x0020
	 */
	struct FHmdUserProfileField
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FieldValue;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OculusHMD.HmdUserProfile
	 * Size -> 0x0048
	 */
	struct FHmdUserProfile
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Gender;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerHeight;                                            // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyeHeight;                                               // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IPD;                                                     // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           NeckToEyeDistance;                                       // 0x002C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5L1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHmdUserProfileField>                        ExtraFields;                                             // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
