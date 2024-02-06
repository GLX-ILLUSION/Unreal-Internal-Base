/**
 * Name: GreedIsGood
 * Version: fodase
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.SetWindowedMaximized
	 * 		Flags  -> ()
	 */
	void UFireworkBFL::SetWindowedMaximized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.SetWindowedMaximized");
		
		UFireworkBFL_SetWindowedMaximized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.SetFolderPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewFolderPath                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFireworkBFL::SetFolderPath(class AActor* InActor, const class FName& NewFolderPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.SetFolderPath");
		
		UFireworkBFL_SetFolderPath_Params params {};
		params.InActor = InActor;
		params.NewFolderPath = NewFolderPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.PrintInitialDisplayMetrics
	 * 		Flags  -> ()
	 */
	void UFireworkBFL::PrintInitialDisplayMetrics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.PrintInitialDisplayMetrics");
		
		UFireworkBFL_PrintInitialDisplayMetrics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.PrintAvailableResolutions
	 * 		Flags  -> ()
	 */
	void UFireworkBFL::PrintAvailableResolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.PrintAvailableResolutions");
		
		UFireworkBFL_PrintAvailableResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.LogActorGUID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFireworkBFL::LogActorGUID(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.LogActorGUID");
		
		UFireworkBFL_LogActorGUID_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetUObjectGUID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFireworkBFL::GetUObjectGUID(class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetUObjectGUID");
		
		UFireworkBFL_GetUObjectGUID_Params params {};
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolutionsWindowedFullscreen
	 * 		Flags  -> ()
	 */
	TArray<struct FScreenResolutionEntry> UFireworkBFL::GetResolutionsWindowedFullscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolutionsWindowedFullscreen");
		
		UFireworkBFL_GetResolutionsWindowedFullscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolutionsWindowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowWindowedMaximize                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FScreenResolutionEntry> UFireworkBFL::GetResolutionsWindowed(bool bInAllowWindowedMaximize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolutionsWindowed");
		
		UFireworkBFL_GetResolutionsWindowed_Params params {};
		params.bInAllowWindowedMaximize = bInAllowWindowedMaximize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolutionsText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScreenResolutionEntry                      InScreenResolutionEntry                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UFireworkBFL::GetResolutionsText(const struct FScreenResolutionEntry& InScreenResolutionEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolutionsText");
		
		UFireworkBFL_GetResolutionsText_Params params {};
		params.InScreenResolutionEntry = InScreenResolutionEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolutionsFullscreen
	 * 		Flags  -> ()
	 */
	TArray<struct FScreenResolutionEntry> UFireworkBFL::GetResolutionsFullscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolutionsFullscreen");
		
		UFireworkBFL_GetResolutionsFullscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolutionsByWindowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowMode                                        InWindowMode                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllowWindowedMaximize                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FScreenResolutionEntry> UFireworkBFL::GetResolutionsByWindowMode(EWindowMode InWindowMode, bool bInAllowWindowedMaximize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolutionsByWindowMode");
		
		UFireworkBFL_GetResolutionsByWindowMode_Params params {};
		params.InWindowMode = InWindowMode;
		params.bInAllowWindowedMaximize = bInAllowWindowedMaximize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolutions
	 * 		Flags  -> ()
	 */
	TArray<struct FScreenResolutionEntry> UFireworkBFL::GetResolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolutions");
		
		UFireworkBFL_GetResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScreenResolutionEntry                      InScreenResolutionEntry                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UFireworkBFL::GetResolution(const struct FScreenResolutionEntry& InScreenResolutionEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetResolution");
		
		UFireworkBFL_GetResolution_Params params {};
		params.InScreenResolutionEntry = InScreenResolutionEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetPlatformSeconds
	 * 		Flags  -> ()
	 */
	float UFireworkBFL::GetPlatformSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetPlatformSeconds");
		
		UFireworkBFL_GetPlatformSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetGameUserSettings
	 * 		Flags  -> ()
	 */
	class UGameUserSettings* UFireworkBFL::GetGameUserSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetGameUserSettings");
		
		UFireworkBFL_GetGameUserSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.GetActorGUID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFireworkBFL::GetActorGUID(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.GetActorGUID");
		
		UFireworkBFL_GetActorGUID_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.FireworkBFL.CreateWidgetByPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSoftClassPath                              InWidgetPath                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UFireworkBFL::CreateWidgetByPath(class UObject* WorldContextObject, const struct FSoftClassPath& InWidgetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.FireworkBFL.CreateWidgetByPath");
		
		UFireworkBFL_CreateWidgetByPath_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InWidgetPath = InWidgetPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireworkBFL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireworkBFL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Firework.FireworkBFL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Firework.NeedsLoadForClientActor.LogActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrefix                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANeedsLoadForClientActor::LogActor(const class FString& InPrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Firework.NeedsLoadForClientActor.LogActor");
		
		ANeedsLoadForClientActor_LogActor_Params params {};
		params.InPrefix = InPrefix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANeedsLoadForClientActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANeedsLoadForClientActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Firework.NeedsLoadForClientActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APVSInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APVSInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Firework.PVSInfo");
		return ptr;
	}

}


