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
	 * Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
	 */
	enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
	{
		None = 0,
		Bad  = 1,
		Good = 2,
		MAX  = 3
	};

	/**
	 * Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
	 */
	enum class EMagicLeapEyeTrackingStatus : uint8_t
	{
		NotConnected                 = 0,
		Disabled                     = 1,
		UserNotPresent               = 2,
		UserPresent                  = 3,
		UserPresentAndWatchingWindow = 4,
		MAX                          = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
	 * Size -> 0x0002
	 */
	struct FMagicLeapEyeBlinkState
	{
	public:
		bool                                                       LeftEyeBlinked;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RightEyeBlinked;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
