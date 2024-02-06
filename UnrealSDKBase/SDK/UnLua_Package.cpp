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
	 * 		Name   -> Function UnLua.LuaDelegateHandler.Dummy
	 * 		Flags  -> ()
	 */
	void ULuaDelegateHandler::Dummy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.LuaDelegateHandler.Dummy");
		
		ULuaDelegateHandler_Dummy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaDelegateHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaDelegateHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.LuaDelegateHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaEnvLocator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaEnvLocator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.LuaEnvLocator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaEnvLocator_ByGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaEnvLocator_ByGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.LuaEnvLocator_ByGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.LuaFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaModuleLocator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaModuleLocator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.LuaModuleLocator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaModuleLocator_ByPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaModuleLocator_ByPackage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.LuaModuleLocator_ByPackage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaFunctionLibrary.HotReload
	 * 		Flags  -> ()
	 */
	void UUnLuaFunctionLibrary::HotReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaFunctionLibrary.HotReload");
		
		UUnLuaFunctionLibrary_HotReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaFunctionLibrary.GetScriptRootPath
	 * 		Flags  -> ()
	 */
	class FString UUnLuaFunctionLibrary::GetScriptRootPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaFunctionLibrary.GetScriptRootPath");
		
		UUnLuaFunctionLibrary_GetScriptRootPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaFunctionLibrary.GetFileLastModifiedTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UUnLuaFunctionLibrary::GetFileLastModifiedTimestamp(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaFunctionLibrary.GetFileLastModifiedTimestamp");
		
		UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.UnLuaFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaInterface.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString UUnLuaInterface::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaInterface.GetModuleName");
		
		UUnLuaInterface_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.UnLuaInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaLatentAction.SetTickableWhenPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTickableWhenPaused                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaLatentAction::SetTickableWhenPaused(bool bTickableWhenPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaLatentAction.SetTickableWhenPaused");
		
		UUnLuaLatentAction_SetTickableWhenPaused_Params params {};
		params.bTickableWhenPaused = bTickableWhenPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaLatentAction.OnLegacyCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLinkage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaLatentAction::OnLegacyCallback(int32_t InLinkage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaLatentAction.OnLegacyCallback");
		
		UUnLuaLatentAction_OnLegacyCallback_Params params {};
		params.InLinkage = InLinkage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaLatentAction.OnCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLinkage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaLatentAction::OnCompleted(int32_t InLinkage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaLatentAction.OnCompleted");
		
		UUnLuaLatentAction_OnCompleted_Params params {};
		params.InLinkage = InLinkage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaLatentAction.GetTickableWhenPaused
	 * 		Flags  -> ()
	 */
	bool UUnLuaLatentAction::GetTickableWhenPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaLatentAction.GetTickableWhenPaused");
		
		UUnLuaLatentAction_GetTickableWhenPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaLatentAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaLatentAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.UnLuaLatentAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.TriggerAnimNotify
	 * 		Flags  -> ()
	 */
	void UUnLuaManager::TriggerAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.TriggerAnimNotify");
		
		UUnLuaManager_TriggerAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.Override
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        LuaFunctionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::Override(class UClass* Class, const class FName& FunctionName, const class FName& LuaFunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.Override");
		
		UUnLuaManager_Override_Params params {};
		params.Class = Class;
		params.FunctionName = FunctionName;
		params.LuaFunctionName = LuaFunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.OnLatentActionCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LinkID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::OnLatentActionCompleted(int32_t LinkID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.OnLatentActionCompleted");
		
		UUnLuaManager_OnLatentActionCompleted_Params params {};
		params.LinkID = LinkID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.InputVectorAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AxisValue                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputVectorAxis(const struct FVector& AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.InputVectorAxis");
		
		UUnLuaManager_InputVectorAxis_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.InputTouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETouchIndex                                        FingerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputTouch(ETouchIndex FingerIndex, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.InputTouch");
		
		UUnLuaManager_InputTouch_Params params {};
		params.FingerIndex = FingerIndex;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.InputGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputGesture(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.InputGesture");
		
		UUnLuaManager_InputGesture_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.InputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputAxis(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.InputAxis");
		
		UUnLuaManager_InputAxis_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.InputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputAction(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.InputAction");
		
		UUnLuaManager_InputAction_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UnLua.UnLuaManager.GetOrAddBindingObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BindingClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDynamicBlueprintBinding* UUnLuaManager::GetOrAddBindingObject(class UClass* Class, class UClass* BindingClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UnLua.UnLuaManager.GetOrAddBindingObject");
		
		UUnLuaManager_GetOrAddBindingObject_Params params {};
		params.Class = Class;
		params.BindingClass = BindingClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.UnLuaManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UnLua.UnLuaSettings");
		return ptr;
	}

}


