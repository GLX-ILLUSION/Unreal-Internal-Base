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
	 * Class Firework.FireworkBFL
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFireworkBFL : public UBlueprintFunctionLibrary
	{
	public:
		void SetWindowedMaximized();
		void SetFolderPath(class AActor* InActor, const class FName& NewFolderPath);
		void PrintInitialDisplayMetrics();
		void PrintAvailableResolutions();
		void LogActorGUID(class AActor* InActor);
		class FString GetUObjectGUID(class UObject* InObject);
		TArray<struct FScreenResolutionEntry> GetResolutionsWindowedFullscreen();
		TArray<struct FScreenResolutionEntry> GetResolutionsWindowed(bool bInAllowWindowedMaximize);
		class FText GetResolutionsText(const struct FScreenResolutionEntry& InScreenResolutionEntry);
		TArray<struct FScreenResolutionEntry> GetResolutionsFullscreen();
		TArray<struct FScreenResolutionEntry> GetResolutionsByWindowMode(EWindowMode InWindowMode, bool bInAllowWindowedMaximize);
		TArray<struct FScreenResolutionEntry> GetResolutions();
		struct FIntPoint GetResolution(const struct FScreenResolutionEntry& InScreenResolutionEntry);
		float GetPlatformSeconds();
		class UGameUserSettings* GetGameUserSettings();
		class FString GetActorGUID(class AActor* InActor);
		class UUserWidget* CreateWidgetByPath(class UObject* WorldContextObject, const struct FSoftClassPath& InWidgetPath);
		static UClass* StaticClass();
	};

	/**
	 * Class Firework.NeedsLoadForClientActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class ANeedsLoadForClientActor : public AActor
	{
	public:
		bool                                                       bNeedsLoadForClient : 1;                                 // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YO0I[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		void LogActor(const class FString& InPrefix);
		static UClass* StaticClass();
	};

	/**
	 * Class Firework.PVSInfo
	 * Size -> 0x0058 (FullSize[0x0280] - InheritedSize[0x0228])
	 */
	class APVSInfo : public AInfo
	{
	public:
		int32_t                                                    PrecomputedVisibilityHandlerId;                          // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AMU2[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, int32_t>                                    VisibilityIDMap;                                         // 0x0230(0x0050) Edit, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
