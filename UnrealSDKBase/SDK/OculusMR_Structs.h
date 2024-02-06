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
	 * Enum OculusMR.EOculusMR_CompositionMethod
	 */
	enum class EOculusMR_CompositionMethod : uint8_t
	{
		ExternalComposition = 0,
		DirectComposition   = 1,
		EOculusMR_MAX       = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_PostProcessEffects
	 */
	enum class EOculusMR_PostProcessEffects : uint8_t
	{
		PPE_Off = 0,
		PPE_On  = 1,
		PPE_MAX = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_ClippingReference
	 */
	enum class EOculusMR_ClippingReference : uint8_t
	{
		CR_TrackingReference = 0,
		CR_Head              = 1,
		CR_MAX               = 2
	};

	/**
	 * Enum OculusMR.EOculusMR_CameraDeviceEnum
	 */
	enum class EOculusMR_CameraDeviceEnum : uint8_t
	{
		CD_None       = 0,
		CD_WebCamera0 = 1,
		CD_WebCamera1 = 2,
		CD_MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OculusMR.TrackedCamera
	 * Size -> 0x0078
	 */
	struct FTrackedCamera
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAZ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     UpdateTime;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FieldOfView;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeX;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeY;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackedDeviceType                                         AttachedTrackedDevice;                                   // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R898[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CalibratedRotation;                                      // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CalibratedOffset;                                        // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            UserRotation;                                            // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             UserOffset;                                              // 0x0054(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RawRotation;                                             // 0x0060(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RawOffset;                                               // 0x006C(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
	 * Size -> 0x003C
	 */
	struct FOculusMR_PlaneMeshTriangle
	{
	public:
		struct FVector                                             Vertex0;                                                 // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0;                                                     // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vertex1;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1;                                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vertex2;                                                 // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV2;                                                     // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
