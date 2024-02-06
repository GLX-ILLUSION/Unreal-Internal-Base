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
	 * Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
	 */
	struct UMagicLeapPlanesComponent_RequestPlanesAsync_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
	 */
	struct UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params
	{
	public:
		TArray<EMagicLeapPlaneQueryFlags>                          InPriority;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EMagicLeapPlaneQueryFlags>                          InFlagsToReorder;                                        // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EMagicLeapPlaneQueryFlags>                          OutReorderedFlags;                                       // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
	 */
	struct UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params
	{
	public:
		struct FGuid                                               Handle;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
	 */
	struct UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params
	{
	public:
		TArray<EMagicLeapPlaneQueryFlags>                          InQueryFlags;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EMagicLeapPlaneQueryFlags>                          InResultFlags;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EMagicLeapPlaneQueryFlags>                          OutFlags;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
	 */
	struct UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params
	{
	public:
		struct FMagicLeapPlanesQuery                               Query;                                                   // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ResultDelegate;                                          // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
	 */
	struct UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params
	{
	public:
		struct FMagicLeapPlanesQuery                               Query;                                                   // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGuid                                               Handle;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ResultDelegate;                                          // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
	 */
	struct UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
	 */
	struct UMagicLeapPlanesFunctionLibrary_GetContentScale_Params
	{
	public:
		class AActor*                                              ContentActor;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMagicLeapPlaneResult                               PlaneResult;                                             // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JELF[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0070(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
	 */
	struct UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
	 */
	struct UMagicLeapPlanesFunctionLibrary_CreateTracker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
	 */
	struct UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params
	{
	public:
		EMagicLeapPlaneQueryType                                   PersistentQueryType;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4Y7E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
