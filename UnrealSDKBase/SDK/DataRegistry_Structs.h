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
	 * Enum DataRegistry.EDataRegistryAcquireStatus
	 */
	enum class EDataRegistryAcquireStatus : uint8_t
	{
		NotStarted               = 0,
		WaitingForInitialAcquire = 1,
		InitialAcquireFinished   = 2,
		WaitingForResources      = 3,
		AcquireFinished          = 4,
		AcquireError             = 5,
		DoesNotExist             = 6,
		MAX                      = 7
	};

	/**
	 * Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
	 */
	enum class EMetaDataRegistrySourceAssetUsage : uint8_t
	{
		NoAssets                = 0,
		SearchAssets            = 1,
		RegisterAssets          = 2,
		SearchAndRegisterAssets = 3,
		MAX                     = 4
	};

	/**
	 * Enum DataRegistry.EDataRegistrySubsystemGetItemResult
	 */
	enum class EDataRegistrySubsystemGetItemResult : uint8_t
	{
		Found    = 0,
		NotFound = 1,
		MAX      = 2
	};

	/**
	 * Enum DataRegistry.EDataRegistryAvailability
	 */
	enum class EDataRegistryAvailability : uint8_t
	{
		DoesNotExist = 0,
		Unknown      = 1,
		Remote       = 2,
		OnDisk       = 3,
		LocalAsset   = 4,
		PreCached    = 5,
		MAX          = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DataRegistry.DataRegistryIdFormat
	 * Size -> 0x0008
	 */
	struct FDataRegistryIdFormat
	{
	public:
		struct FGameplayTag                                        BaseGameplayTag;                                         // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DataRegistry.DataRegistryCachePolicy
	 * Size -> 0x0014
	 */
	struct FDataRegistryCachePolicy
	{
	public:
		bool                                                       bCacheIsAlwaysVolatile;                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurveTableCacheVersion;                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7QK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinNumberKept;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberKept;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceKeepSeconds;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceReleaseSeconds;                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
	 * Size -> 0x0008
	 */
	struct FDataRegistrySource_DataTableRules
	{
	public:
		bool                                                       bPrecacheTable;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJ38[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedTableKeepSeconds;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DataRegistry.DataRegistryLookup
	 * Size -> 0x0020
	 */
	struct FDataRegistryLookup
	{
	public:
		unsigned char                                              UnknownData_TC50[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataRegistry.DataRegistryType
	 * Size -> 0x0008
	 */
	struct FDataRegistryType
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DataRegistry.DataRegistryId
	 * Size -> 0x0010
	 */
	struct FDataRegistryId
	{
	public:
		struct FDataRegistryType                                   RegistryType;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemName;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DataRegistry.DataRegistrySourceItemId
	 * Size -> 0x0040
	 */
	struct FDataRegistrySourceItemId
	{
	public:
		unsigned char                                              UnknownData_O4QG[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
