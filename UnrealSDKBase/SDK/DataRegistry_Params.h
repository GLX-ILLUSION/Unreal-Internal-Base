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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
	 */
	struct UDataRegistrySubsystem_NotEqual_DataRegistryType_Params
	{
	public:
		struct FDataRegistryType                                   A;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDataRegistryType                                   B;                                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
	 */
	struct UDataRegistrySubsystem_NotEqual_DataRegistryId_Params
	{
	public:
		struct FDataRegistryId                                     A;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDataRegistryId                                     B;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
	 */
	struct UDataRegistrySubsystem_IsValidDataRegistryType_Params
	{
	public:
		struct FDataRegistryType                                   DataRegistryType;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
	 */
	struct UDataRegistrySubsystem_IsValidDataRegistryId_Params
	{
	public:
		struct FDataRegistryId                                     DataRegistryId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
	 */
	struct UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params
	{
	public:
		struct FDataRegistryId                                     ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDataRegistryLookup                                 ResolvedLookup;                                          // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTableRowBase                                       OutItem;                                                 // 0x0030(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
	 */
	struct UDataRegistrySubsystem_GetCachedItemBP_Params
	{
	public:
		struct FDataRegistryId                                     ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTableRowBase                                       OutItem;                                                 // 0x0010(0x0008)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
	 */
	struct UDataRegistrySubsystem_FindCachedItemBP_Params
	{
	public:
		struct FDataRegistryId                                     ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDataRegistrySubsystemGetItemResult                        OutResult;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9ZJE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTableRowBase                                       OutItem;                                                 // 0x0018(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
	 */
	struct UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params
	{
	public:
		struct FDataRegistryId                                     ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InputValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DefaultValue;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDataRegistrySubsystemGetItemResult                        OutResult;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T3LR[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutValue;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
	 */
	struct UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params
	{
	public:
		struct FDataRegistryType                                   A;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDataRegistryType                                   B;                                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
	 */
	struct UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params
	{
	public:
		struct FDataRegistryId                                     A;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDataRegistryId                                     B;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
	 */
	struct UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params
	{
	public:
		struct FDataRegistryType                                   DataRegistryType;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
	 */
	struct UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params
	{
	public:
		struct FDataRegistryId                                     DataRegistryId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
	 */
	struct UDataRegistrySubsystem_AcquireItemBP_Params
	{
	public:
		struct FDataRegistryId                                     ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      AcquireCallback;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
