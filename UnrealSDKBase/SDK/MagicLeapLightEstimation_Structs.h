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
	 * Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
	 */
	enum class EMagicLeapLightEstimationCamera : uint8_t
	{
		Left     = 0,
		Right    = 1,
		FarLeft  = 2,
		FarRight = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
	 * Size -> 0x0020
	 */
	struct FMagicLeapLightEstimationColorTemperatureState
	{
	public:
		float                                                      ColorTemperatureKelvin;                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AmbientColor;                                            // 0x0004(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWTN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           Timestamp;                                               // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
	 * Size -> 0x0018
	 */
	struct FMagicLeapLightEstimationAmbientGlobalState
	{
	public:
		TArray<float>                                              AmbientIntensityNits;                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTimespan                                           Timestamp;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
