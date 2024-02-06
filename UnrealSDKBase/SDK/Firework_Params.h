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
	 * Function Firework.FireworkBFL.SetWindowedMaximized
	 */
	struct UFireworkBFL_SetWindowedMaximized_Params
	{	};

	/**
	 * Function Firework.FireworkBFL.SetFolderPath
	 */
	struct UFireworkBFL_SetFolderPath_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewFolderPath;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.PrintInitialDisplayMetrics
	 */
	struct UFireworkBFL_PrintInitialDisplayMetrics_Params
	{	};

	/**
	 * Function Firework.FireworkBFL.PrintAvailableResolutions
	 */
	struct UFireworkBFL_PrintAvailableResolutions_Params
	{	};

	/**
	 * Function Firework.FireworkBFL.LogActorGUID
	 */
	struct UFireworkBFL_LogActorGUID_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetUObjectGUID
	 */
	struct UFireworkBFL_GetUObjectGUID_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolutionsWindowedFullscreen
	 */
	struct UFireworkBFL_GetResolutionsWindowedFullscreen_Params
	{
	public:
		TArray<struct FScreenResolutionEntry>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolutionsWindowed
	 */
	struct UFireworkBFL_GetResolutionsWindowed_Params
	{
	public:
		bool                                                       bInAllowWindowedMaximize;                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W4ZO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScreenResolutionEntry>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolutionsText
	 */
	struct UFireworkBFL_GetResolutionsText_Params
	{
	public:
		struct FScreenResolutionEntry                              InScreenResolutionEntry;                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolutionsFullscreen
	 */
	struct UFireworkBFL_GetResolutionsFullscreen_Params
	{
	public:
		TArray<struct FScreenResolutionEntry>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolutionsByWindowMode
	 */
	struct UFireworkBFL_GetResolutionsByWindowMode_Params
	{
	public:
		EWindowMode                                                InWindowMode;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInAllowWindowedMaximize;                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J9CM[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScreenResolutionEntry>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolutions
	 */
	struct UFireworkBFL_GetResolutions_Params
	{
	public:
		TArray<struct FScreenResolutionEntry>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetResolution
	 */
	struct UFireworkBFL_GetResolution_Params
	{
	public:
		struct FScreenResolutionEntry                              InScreenResolutionEntry;                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FIntPoint                                           ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetPlatformSeconds
	 */
	struct UFireworkBFL_GetPlatformSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetGameUserSettings
	 */
	struct UFireworkBFL_GetGameUserSettings_Params
	{
	public:
		class UGameUserSettings*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.GetActorGUID
	 */
	struct UFireworkBFL_GetActorGUID_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.FireworkBFL.CreateWidgetByPath
	 */
	struct UFireworkBFL_CreateWidgetByPath_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftClassPath                                      InWidgetPath;                                            // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Firework.NeedsLoadForClientActor.LogActor
	 */
	struct ANeedsLoadForClientActor_LogActor_Params
	{
	public:
		class FString                                              InPrefix;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
