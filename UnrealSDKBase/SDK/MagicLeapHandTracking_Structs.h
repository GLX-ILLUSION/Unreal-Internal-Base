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
	 * Enum MagicLeapHandTracking.EMagicLeapGestureTransformSpace
	 */
	enum class EMagicLeapGestureTransformSpace : uint8_t
	{
		World    = 0,
		Hand     = 1,
		Tracking = 2,
		MAX      = 3
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
	 */
	enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
	{
		NoFilter                  = 0,
		SlightRobustnessToFlicker = 1,
		MoreRobustnessToFlicker   = 2,
		MAX                       = 3
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
	 */
	enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
	{
		NoFilter            = 0,
		SimpleSmoothing     = 1,
		PredictiveSmoothing = 2,
		MAX                 = 3
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
	 */
	enum class EMagicLeapHandTrackingGesture : uint8_t
	{
		Finger       = 0,
		Fist         = 1,
		Pinch        = 2,
		Thumb        = 3,
		L            = 4,
		OpenHand     = 5,
		OpenHandBack = 6,
		Ok           = 7,
		C            = 8,
		NoPose       = 9,
		NoHand       = 10,
		MAX          = 11
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
	 */
	enum class EMagicLeapHandTrackingKeypoint : uint8_t
	{
		Thumb_Tip    = 0,
		Thumb_IP     = 1,
		Thumb_MCP    = 2,
		Thumb_CMC    = 3,
		Index_Tip    = 4,
		Index_DIP    = 5,
		Index_PIP    = 6,
		Index_MCP    = 7,
		Middle_Tip   = 8,
		Middle_DIP   = 9,
		Middle_PIP   = 10,
		Middle_MCP   = 11,
		Ring_Tip     = 12,
		Ring_DIP     = 13,
		Ring_PIP     = 14,
		Ring_MCP     = 15,
		Pinky_Tip    = 16,
		Pinky_DIP    = 17,
		Pinky_PIP    = 18,
		Pinky_MCP    = 19,
		Wrist_Center = 20,
		Wrist_Ulnar  = 21,
		Wrist_Radial = 22,
		Hand_Center  = 23,
		MAX          = 24
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
