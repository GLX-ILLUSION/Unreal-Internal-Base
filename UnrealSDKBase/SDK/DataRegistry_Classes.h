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
	 * Class DataRegistry.DataRegistry
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UDataRegistry : public UObject
	{
	public:
		class FName                                                RegistryType;                                            // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDataRegistryIdFormat                               IdFormat;                                                // 0x0030(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UScriptStruct*                                       ItemStruct;                                              // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UDataRegistrySource*>                         DataSources;                                             // 0x0040(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UDataRegistrySource*>                         RuntimeSources;                                          // 0x0050(0x0010) Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		float                                                      TimerUpdateFrequency;                                    // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDataRegistryCachePolicy                            DefaultCachePolicy;                                      // 0x0064(0x0014) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RTFH[0x48];                                  // 0x0078(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.DataRegistrySettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UDataRegistrySettings : public UDeveloperSettings
	{
	public:
		TArray<struct FDirectoryPath>                              DirectoriesToScan;                                       // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bInitializeAllLoadedRegistries;                          // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMissingCookedAssetRegistryData;                   // 0x0049(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T35M[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.DataRegistrySource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDataRegistrySource : public UObject
	{
	public:
		unsigned char                                              UnknownData_H0L0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataRegistrySource*                                 ParentSource;                                            // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.MetaDataRegistrySource
	 * Size -> 0x00D0 (FullSize[0x0108] - InheritedSize[0x0038])
	 */
	class UMetaDataRegistrySource : public UDataRegistrySource
	{
	public:
		EMetaDataRegistrySourceAssetUsage                          AssetUsage;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CEI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAssetManagerSearchRules                            SearchRules;                                             // 0x0040(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FName, class UDataRegistrySource*>              RuntimeChildren;                                         // 0x0090(0x0050) ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_31I8[0x28];                                  // 0x00E0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.DataRegistrySource_CurveTable
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UDataRegistrySource_CurveTable : public UDataRegistrySource
	{
	public:
		unsigned char                                              SourceTable[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FDataRegistrySource_DataTableRules                  TableRules;                                              // 0x0060(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCurveTable*                                         CachedTable;                                             // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveTable*                                         PreloadTable;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_65MB[0x28];                                  // 0x0078(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.MetaDataRegistrySource_CurveTable
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
	{
	public:
		class UClass*                                              CreatedSource;                                           // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataRegistrySource_DataTableRules                  TableRules;                                              // 0x0110(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.DataRegistrySource_DataTable
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UDataRegistrySource_DataTable : public UDataRegistrySource
	{
	public:
		unsigned char                                              SourceTable[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FDataRegistrySource_DataTableRules                  TableRules;                                              // 0x0060(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UDataTable*                                          CachedTable;                                             // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          PreloadTable;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7UMP[0x28];                                  // 0x0078(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.MetaDataRegistrySource_DataTable
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
	{
	public:
		class UClass*                                              CreatedSource;                                           // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataRegistrySource_DataTableRules                  TableRules;                                              // 0x0110(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataRegistry.DataRegistrySubsystem
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UDataRegistrySubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_71ZQ[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (PADDING)

	public:
		bool NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
		bool NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
		bool IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);
		bool IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);
		bool GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);
		bool GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase* OutItem);
		void FindCachedItemBP(const struct FDataRegistryId& ItemId, EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem);
		void EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue);
		bool EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
		bool EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
		class FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);
		class FString Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);
		bool AcquireItemBP(const struct FDataRegistryId& ItemId, const class FScriptDelegate& AcquireCallback);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
