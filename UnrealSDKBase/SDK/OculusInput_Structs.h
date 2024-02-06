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
	 * Enum OculusInput.ESystemGestureBehavior
	 */
	enum class ESystemGestureBehavior : uint8_t
	{
		None         = 0,
		SwapMaterial = 1,
		MAX          = 2
	};

	/**
	 * Enum OculusInput.EConfidenceBehavior
	 */
	enum class EConfidenceBehavior : uint8_t
	{
		None      = 0,
		HideActor = 1,
		MAX       = 2
	};

	/**
	 * Enum OculusInput.EBone
	 */
	enum class EBone : uint8_t
	{
		Wrist_Root    = 0,
		Hand_Start    = 1,
		Forearm_Stub  = 2,
		Thumb         = 3,
		Thumb01       = 4,
		Thumb02       = 5,
		Thumb03       = 6,
		Index         = 7,
		Index01       = 8,
		Index02       = 9,
		Middle        = 10,
		Middle01      = 11,
		Middle02      = 12,
		Ring          = 13,
		Ring01        = 14,
		Ring02        = 15,
		Pinky         = 16,
		Pinky01       = 17,
		Pinky02       = 18,
		Pinky03       = 19,
		Thumb_Tip     = 20,
		Max_Skinnable = 21,
		Index_Tip     = 22,
		Middle_Tip    = 23,
		Ring_Tip      = 24,
		Pinky_Tip     = 25,
		Hand_End      = 26,
		Bone_Max      = 27,
		Invalid       = 28,
		MAX           = 29
	};

	/**
	 * Enum OculusInput.ETrackingConfidence
	 */
	enum class ETrackingConfidence : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum OculusInput.EOculusHandType
	 */
	enum class EOculusHandType : uint8_t
	{
		None      = 0,
		HandLeft  = 1,
		HandRight = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OculusInput.OculusCapsuleCollider
	 * Size -> 0x0010
	 */
	struct FOculusCapsuleCollider
	{
	public:
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBone                                                      BoneId;                                                  // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1XY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
