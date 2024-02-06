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
	 * 		Name   -> Function MobilePatchingUtils.MobileInstalledContent.Mount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PakOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MountPoint                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMobileInstalledContent::Mount(int32_t PakOrder, const class FString& MountPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.Mount");
		
		UMobileInstalledContent_Mount_Params params {};
		params.PakOrder = PakOrder;
		params.MountPoint = MountPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	 * 		Flags  -> ()
	 */
	float UMobileInstalledContent::GetInstalledContentSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize");
		
		UMobileInstalledContent_GetInstalledContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	 * 		Flags  -> ()
	 */
	float UMobileInstalledContent::GetDiskFreeSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace");
		
		UMobileInstalledContent_GetDiskFreeSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMobileInstalledContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMobileInstalledContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MobilePatchingUtils.MobileInstalledContent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.StartInstall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnSucceeded                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailed                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMobilePendingContent::StartInstall(const class FScriptDelegate& OnSucceeded, const class FScriptDelegate& OnFailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.StartInstall");
		
		UMobilePendingContent_StartInstall_Params params {};
		params.OnSucceeded = OnSucceeded;
		params.OnFailed = OnFailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	 * 		Flags  -> ()
	 */
	float UMobilePendingContent::GetTotalDownloadedSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize");
		
		UMobilePendingContent_GetTotalDownloadedSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	 * 		Flags  -> ()
	 */
	float UMobilePendingContent::GetRequiredDiskSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace");
		
		UMobilePendingContent_GetRequiredDiskSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	 * 		Flags  -> ()
	 */
	float UMobilePendingContent::GetInstallProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress");
		
		UMobilePendingContent_GetInstallProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	 * 		Flags  -> ()
	 */
	class FText UMobilePendingContent::GetDownloadStatusText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText");
		
		UMobilePendingContent_GetDownloadStatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	 * 		Flags  -> ()
	 */
	float UMobilePendingContent::GetDownloadSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed");
		
		UMobilePendingContent_GetDownloadSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	 * 		Flags  -> ()
	 */
	float UMobilePendingContent::GetDownloadSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize");
		
		UMobilePendingContent_GetDownloadSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMobilePendingContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMobilePendingContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePendingContent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RemoteManifestURL                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CloudURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstallDirectory                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSucceeded                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailed                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMobilePatchingLibrary::RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, const class FScriptDelegate& OnSucceeded, const class FScriptDelegate& OnFailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent");
		
		UMobilePatchingLibrary_RequestContent_Params params {};
		params.RemoteManifestURL = RemoteManifestURL;
		params.CloudURL = CloudURL;
		params.InstallDirectory = InstallDirectory;
		params.OnSucceeded = OnSucceeded;
		params.OnFailed = OnFailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	 * 		Flags  -> ()
	 */
	bool UMobilePatchingLibrary::HasActiveWiFiConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection");
		
		UMobilePatchingLibrary_HasActiveWiFiConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	 * 		Flags  -> ()
	 */
	TArray<class FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames");
		
		UMobilePatchingLibrary_GetSupportedPlatformNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InstallDirectory                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const class FString& InstallDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent");
		
		UMobilePatchingLibrary_GetInstalledContent_Params params {};
		params.InstallDirectory = InstallDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	 * 		Flags  -> ()
	 */
	class FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName");
		
		UMobilePatchingLibrary_GetActiveDeviceProfileName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMobilePatchingLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMobilePatchingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePatchingLibrary");
		return ptr;
	}

}


