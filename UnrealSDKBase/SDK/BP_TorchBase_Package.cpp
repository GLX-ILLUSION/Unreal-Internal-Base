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
	 * 		Name   -> LuaFunction BP_TorchBase.BP_TorchBase_C.OnRep_bLit
	 * 		Flags  -> ()
	 */
	void ABP_TorchBase_C::OnRep_bLit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TorchBase.BP_TorchBase_C.OnRep_bLit");
		
		ABP_TorchBase_C_OnRep_bLit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TorchBase.BP_TorchBase_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_TorchBase_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TorchBase.BP_TorchBase_C.GetMenuName");
		
		ABP_TorchBase_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TorchBase.BP_TorchBase_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_TorchBase_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TorchBase.BP_TorchBase_C.GetInteractionFunctions");
		
		ABP_TorchBase_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TorchBase.BP_TorchBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TorchBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TorchBase.BP_TorchBase_C.ReceiveBeginPlay");
		
		ABP_TorchBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TorchBase.BP_TorchBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_TorchBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TorchBase.BP_TorchBase_C.ReceiveEndPlay");
		
		ABP_TorchBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TorchBase.BP_TorchBase_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_TorchBase_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBase.BP_TorchBase_C.GetModuleName");
		
		ABP_TorchBase_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TorchBase.BP_TorchBase_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_TorchBase_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBase.BP_TorchBase_C.GetInteractionFunctions__Overridden");
		
		ABP_TorchBase_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TorchBase.BP_TorchBase_C.GetMenuName__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_TorchBase_C::GetMenuName__Overridden(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBase.BP_TorchBase_C.GetMenuName__Overridden");
		
		ABP_TorchBase_C_GetMenuName__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TorchBase.BP_TorchBase_C.Server Light Torch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TorchBase_C::ServerLightTorch(bool bLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBase.BP_TorchBase_C.Server Light Torch");
		
		ABP_TorchBase_C_ServerLightTorch_Params params {};
		params.bLight = bLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TorchBase.BP_TorchBase_C.OnRep_bLit__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_TorchBase_C::OnRep_bLit__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBase.BP_TorchBase_C.OnRep_bLit__Overridden");
		
		ABP_TorchBase_C_OnRep_bLit__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TorchBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TorchBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TorchBase.BP_TorchBase_C");
		return ptr;
	}

}


