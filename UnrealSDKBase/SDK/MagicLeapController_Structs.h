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
	 * Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
	 */
	enum class EMagicLeapTouchpadGestureDirection : uint8_t
	{
		None             = 0,
		Up               = 1,
		Down             = 2,
		Left             = 3,
		Right            = 4,
		In               = 5,
		Out              = 6,
		Clockwise        = 7,
		CounterClockwise = 8,
		MAX              = 9
	};

	/**
	 * Enum MagicLeapController.EMagicLeapTouchpadGestureType
	 */
	enum class EMagicLeapTouchpadGestureType : uint8_t
	{
		None            = 0,
		Tap             = 1,
		ForceTapDown    = 2,
		ForceTapUp      = 3,
		ForceDwell      = 4,
		SecondForceDown = 5,
		LongHold        = 6,
		RadialScroll    = 7,
		Swipe           = 8,
		Scroll          = 9,
		Pinch           = 10,
		MAX             = 11
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerTrackingMode
	 */
	enum class EMagicLeapControllerTrackingMode : uint8_t
	{
		InputService       = 0,
		CoordinateFrameUID = 1,
		MAX                = 2
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerHapticIntensity
	 */
	enum class EMagicLeapControllerHapticIntensity : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerHapticPattern
	 */
	enum class EMagicLeapControllerHapticPattern : uint8_t
	{
		None            = 0,
		Click           = 1,
		Bump            = 2,
		DoubleClick     = 3,
		Buzz            = 4,
		Tick            = 5,
		ForceDown       = 6,
		ForceUp         = 7,
		ForceDwell      = 8,
		SecondForceDown = 9,
		MAX             = 10
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDSpeed
	 */
	enum class EMagicLeapControllerLEDSpeed : uint8_t
	{
		Slow   = 0,
		Medium = 1,
		Fast   = 2,
		MAX    = 3
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDColor
	 */
	enum class EMagicLeapControllerLEDColor : uint8_t
	{
		BrightMissionRed    = 0,
		PastelMissionRed    = 1,
		BrightFloridaOrange = 2,
		PastelFloridaOrange = 3,
		BrightLunaYellow    = 4,
		PastelLunaYellow    = 5,
		BrightNebulaPink    = 6,
		PastelNebulaPink    = 7,
		BrightCosmicPurple  = 8,
		PastelCosmicPurple  = 9,
		BrightMysticBlue    = 10,
		PastelMysticBlue    = 11,
		BrightCelestialBlue = 12,
		PastelCelestialBlue = 13,
		BrightShaggleGreen  = 14,
		PastelShaggleGreen  = 15,
		MAX                 = 16
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDEffect
	 */
	enum class EMagicLeapControllerLEDEffect : uint8_t
	{
		RotateCW  = 0,
		RotateCCW = 1,
		Pulse     = 2,
		PaintCW   = 3,
		PaintCCW  = 4,
		Blink     = 5,
		MAX       = 6
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDPattern
	 */
	enum class EMagicLeapControllerLEDPattern : uint8_t
	{
		None       = 0,
		Clock01    = 1,
		Clock02    = 2,
		Clock03    = 3,
		Clock04    = 4,
		Clock05    = 5,
		Clock06    = 6,
		Clock07    = 7,
		Clock08    = 8,
		Clock09    = 9,
		Clock10    = 10,
		Clock11    = 11,
		Clock12    = 12,
		Clock01_07 = 13,
		Clock02_08 = 14,
		Clock03_09 = 15,
		Clock0401  = 16,
		Clock0501  = 17,
		Clock0601  = 18,
		MAX        = 19
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerType
	 */
	enum class EMagicLeapControllerType : uint8_t
	{
		None      = 0,
		Device    = 1,
		MobileApp = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
	 * Size -> 0x0030
	 */
	struct FMagicLeapTouchpadGesture
	{
	public:
		EControllerHand                                            Hand;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXIA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MotionSource;                                            // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapTouchpadGestureType                              Type;                                                    // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapTouchpadGestureDirection                         Direction;                                               // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_674I[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PositionAndForce;                                        // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FingerGap;                                               // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
