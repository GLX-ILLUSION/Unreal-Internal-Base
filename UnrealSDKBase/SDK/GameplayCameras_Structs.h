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
	 * Enum GameplayCameras.EInitialOscillatorOffset
	 */
	enum class EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero   = 1,
		EOO_MAX          = 2
	};

	/**
	 * Enum GameplayCameras.EOscillatorWaveform
	 */
	enum class EOscillatorWaveform : uint8_t
	{
		SineWave    = 0,
		PerlinNoise = 1,
		MAX         = 2
	};

	/**
	 * Enum GameplayCameras.EInitialWaveOscillatorOffsetType
	 */
	enum class EInitialWaveOscillatorOffsetType : uint8_t
	{
		Random = 0,
		Zero   = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayCameras.FOscillator
	 * Size -> 0x000C
	 */
	struct FFOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialOscillatorOffset                                   InitialOffset;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOscillatorWaveform                                        Waveform;                                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z951[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayCameras.ROscillator
	 * Size -> 0x0024
	 */
	struct FROscillator
	{
	public:
		struct FFOscillator                                        Pitch;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Yaw;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Roll;                                                    // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.VOscillator
	 * Size -> 0x0024
	 */
	struct FVOscillator
	{
	public:
		struct FFOscillator                                        X;                                                       // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Y;                                                       // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFOscillator                                        Z;                                                       // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.PerlinNoiseShaker
	 * Size -> 0x0008
	 */
	struct FPerlinNoiseShaker
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayCameras.WaveOscillator
	 * Size -> 0x000C
	 */
	struct FWaveOscillator
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialWaveOscillatorOffsetType                           InitialOffsetType;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMPN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
