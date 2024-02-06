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
	 * Enum CPathfinding.ECPathfindingFailReason
	 */
	enum class ECPathfindingFailReason : uint8_t
	{
		ReasonNone                   = 0,
		ReasonVolumeNotValid         = 1,
		ReasonVolumeNotGenerated     = 2,
		ReasonTimeout                = 3,
		ReasonWrongStartLocation     = 4,
		ReasonWrongEndLocation       = 5,
		ReasonEndLocationUnreachable = 6,
		ReasonUnknown                = 7,
		MAX                          = 8
	};

	/**
	 * Enum CPathfinding.EAgentShape
	 */
	enum class EAgentShape : uint8_t
	{
		ShapeCapsule = 0,
		ShapeBox     = 1,
		ShapeSphere  = 2,
		MAX          = 3
	};

	/**
	 * Enum CPathfinding.BranchFailSuccessEnum
	 */
	enum class EBranchFailSuccessEnum : uint8_t
	{
		BranchSuccess             = 0,
		BranchFailure             = 1,
		BranchFailSuccessEnum_MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CPathfinding.CPathNode
	 * Size -> 0x0018
	 */
	struct FCPathNode
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CPathfinding.CPathResult
	 * Size -> 0x0038
	 */
	struct FCPathResult
	{
	public:
		unsigned char                                              UnknownData_H7BS[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
