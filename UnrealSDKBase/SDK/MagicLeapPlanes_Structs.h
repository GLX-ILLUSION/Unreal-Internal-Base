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
	 * Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
	 */
	enum class EMagicLeapPlaneQueryFlags : uint8_t
	{
		Vertical        = 0,
		Horizontal      = 1,
		Arbitrary       = 2,
		OrientToGravity = 3,
		PreferInner     = 4,
		Ceiling         = 5,
		Floor           = 6,
		Wall            = 7,
		Polygons        = 8,
		MAX             = 9
	};

	/**
	 * Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
	 */
	enum class EMagicLeapPlaneQueryType : uint8_t
	{
		Bulk  = 0,
		Delta = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapPlanes.MagicLeapPolygon
	 * Size -> 0x0010
	 */
	struct FMagicLeapPolygon
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
	 * Size -> 0x0020
	 */
	struct FMagicLeapPlaneBoundary
	{
	public:
		struct FMagicLeapPolygon                                   Polygon;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FMagicLeapPolygon>                           Holes;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
	 * Size -> 0x0020
	 */
	struct FMagicLeapPlaneBoundaries
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMagicLeapPlaneBoundary>                     Boundaries;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
	 * Size -> 0x0060
	 */
	struct FMagicLeapPlaneResult
	{
	public:
		struct FVector                                             PlanePosition;                                           // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlaneOrientation;                                        // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            ContentOrientation;                                      // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           PlaneDimensions;                                         // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQS2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EMagicLeapPlaneQueryFlags>                          PlaneFlags;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InnerID;                                                 // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
	 * Size -> 0x0060
	 */
	struct FMagicLeapPlanesQuery
	{
	public:
		TArray<EMagicLeapPlaneQueryFlags>                          Flags;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UBoxComponent*                                       SearchVolume;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResults;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHoleLength;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlaneArea;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SearchVolumePosition;                                    // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               SearchVolumeOrientation;                                 // 0x0030(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             SearchVolumeExtents;                                     // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimilarityThreshold;                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSearchVolumeTrackingSpace;                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResultTrackingSpace;                                    // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPES[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
