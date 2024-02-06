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
	 * Enum AppleImageUtils.EAppleTextureType
	 */
	enum class EAppleTextureType : uint8_t
	{
		Unknown      = 0,
		Image        = 1,
		PixelBuffer  = 2,
		Surface      = 3,
		MetalTexture = 4,
		MAX          = 5
	};

	/**
	 * Enum AppleImageUtils.ETextureRotationDirection
	 */
	enum class ETextureRotationDirection : uint8_t
	{
		None          = 0,
		Left          = 1,
		Right         = 2,
		Down          = 3,
		LeftMirrored  = 4,
		RightMirrored = 5,
		DownMirrored  = 6,
		UpMirrored    = 7,
		MAX           = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
	 * Size -> 0x0020
	 */
	struct FAppleImageUtilsImageConversionResult
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ImageData;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
