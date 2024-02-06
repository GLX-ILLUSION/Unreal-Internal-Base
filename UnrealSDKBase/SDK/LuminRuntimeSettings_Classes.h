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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LuminRuntimeSettings.LuminRuntimeSettings
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class ULuminRuntimeSettings : public UObject
	{
	public:
		class FString                                              PackageName;                                             // 0x0028(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ApplicationDisplayName;                                  // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELuminFrameTimingHint                                      FrameTimingHint;                                         // 0x0048(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProtectedContent;                                       // 0x0049(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bManualCallToAppReady;                                   // 0x004A(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMobileRendering;                                     // 0x004B(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVulkan;                                              // 0x004C(0x0001) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSW0[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           Certificate;                                             // 0x0050(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      IconModelPath;                                           // 0x0060(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      IconPortalPath;                                          // 0x0070(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		struct FLocalizedIconInfos                                 LocalizedIconInfos;                                      // 0x0080(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		int32_t                                                    VersionCode;                                             // 0x0090(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumAPILevel;                                         // 0x0094(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<ELuminPrivilege>                                    AppPrivileges;                                           // 0x0098(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
		TArray<struct FLuminComponentSubElement>                   ExtraComponentSubElements;                               // 0x00A8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
		TArray<struct FLuminComponentElement>                      ExtraComponentElements;                                  // 0x00B8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
		class FString                                              SpatializationPlugin;                                    // 0x00C8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReverbPlugin;                                            // 0x00D8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OcclusionPlugin;                                         // 0x00E8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SoundCueCookQualityIndex;                                // 0x00F8(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveDebugInfo;                                        // 0x00FC(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD7V[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      VulkanValidationLayerLibs;                               // 0x0100(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		bool                                                       bFrameVignette;                                          // 0x0110(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UA0E[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLocalizedAppName>                           LocalizedAppNames;                                       // 0x0118(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOTU[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
