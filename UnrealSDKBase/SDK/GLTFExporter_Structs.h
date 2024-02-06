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
	 * Enum GLTFExporter.EGLTFCameraControlMode
	 */
	enum class EGLTFCameraControlMode : uint8_t
	{
		FreeLook = 0,
		Orbital  = 1,
		MAX      = 2
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialVariantMode
	 */
	enum class EGLTFMaterialVariantMode : uint8_t
	{
		None        = 0,
		Simple      = 1,
		UseMeshData = 2,
		MAX         = 3
	};

	/**
	 * Enum GLTFExporter.EGLTFVariantSetsMode
	 */
	enum class EGLTFVariantSetsMode : uint8_t
	{
		None    = 0,
		Khronos = 1,
		Epic    = 2,
		MAX     = 3
	};

	/**
	 * Enum GLTFExporter.EGLTFSceneMobility
	 */
	enum class EGLTFSceneMobility : uint8_t
	{
		None       = 0,
		Static     = 1,
		Stationary = 2,
		Movable    = 3,
		All        = 4,
		MAX        = 5
	};

	/**
	 * Enum GLTFExporter.EGLTFTextureHDREncoding
	 */
	enum class EGLTFTextureHDREncoding : uint8_t
	{
		None = 0,
		RGBM = 1,
		MAX  = 2
	};

	/**
	 * Enum GLTFExporter.EGLTFTextureType
	 */
	enum class EGLTFTextureType : uint8_t
	{
		None       = 0,
		HDR        = 1,
		Normalmaps = 2,
		Lightmaps  = 3,
		All        = 4,
		MAX        = 5
	};

	/**
	 * Enum GLTFExporter.EGLTFTextureImageFormat
	 */
	enum class EGLTFTextureImageFormat : uint8_t
	{
		None = 0,
		PNG  = 1,
		JPEG = 2,
		MAX  = 3
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialPropertyGroup
	 */
	enum class EGLTFMaterialPropertyGroup : uint8_t
	{
		None                  = 0,
		BaseColorOpacity      = 1,
		MetallicRoughness     = 2,
		EmissiveColor         = 3,
		Normal                = 4,
		AmbientOcclusion      = 5,
		ClearCoatRoughness    = 6,
		ClearCoatBottomNormal = 7,
		MAX                   = 8
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialBakeSizePOT
	 */
	enum class EGLTFMaterialBakeSizePOT : uint8_t
	{
		POT     = 0,
		POT01   = 1,
		POT02   = 2,
		POT03   = 3,
		POT04   = 4,
		POT05   = 5,
		POT06   = 6,
		POT07   = 7,
		POT08   = 8,
		POT09   = 9,
		POT10   = 10,
		POT11   = 11,
		POT12   = 12,
		POT13   = 13,
		POT_MAX = 14
	};

	/**
	 * Enum GLTFExporter.EGLTFMaterialBakeMode
	 */
	enum class EGLTFMaterialBakeMode : uint8_t
	{
		Disabled    = 0,
		Simple      = 1,
		UseMeshData = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
	 * Size -> 0x0006
	 */
	struct FGLTFOverrideMaterialBakeSettings
	{
	public:
		bool                                                       bOverrideSize;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGLTFMaterialBakeSizePOT                                   Size;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFilter;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             Filter;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTiling;                                         // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            Tiling;                                                  // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GLTFExporter.GLTFExportMessages
	 * Size -> 0x0030
	 */
	struct FGLTFExportMessages
	{
	public:
		TArray<class FString>                                      Suggestions;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Warnings;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Errors;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
