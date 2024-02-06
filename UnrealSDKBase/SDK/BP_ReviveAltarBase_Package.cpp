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
	 * 		Name   -> LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_CanUse
	 * 		Flags  -> ()
	 */
	void ABP_ReviveAltarBase_C::OnRep_CanUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_CanUse");
		
		ABP_ReviveAltarBase_C_OnRep_CanUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_ReviveAltarBase_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetInteractionFunctions");
		
		ABP_ReviveAltarBase_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.SetHeartInsId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveAltarBase_C::SetHeartInsId(int32_t InstanceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.SetHeartInsId");
		
		ABP_ReviveAltarBase_C_SetHeartInsId_Params params {};
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ReviveAltarBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.ReceiveBeginPlay");
		
		ABP_ReviveAltarBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_Using
	 * 		Flags  -> ()
	 */
	void ABP_ReviveAltarBase_C::OnRep_Using()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_Using");
		
		ABP_ReviveAltarBase_C_OnRep_Using_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_ReviveAltarBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.ReceiveEndPlay");
		
		ABP_ReviveAltarBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_ReviveAltarBase_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetInteractionFunctions__Overridden");
		
		ABP_ReviveAltarBase_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveAltarBase_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetMenuName");
		
		ABP_ReviveAltarBase_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_ReviveAltarBase_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetModuleName");
		
		ABP_ReviveAltarBase_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_Using__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_ReviveAltarBase_C::OnRep_Using__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_Using__Overridden");
		
		ABP_ReviveAltarBase_C_OnRep_Using__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.SetHeartInsId__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveAltarBase_C::SetHeartInsId__Overridden(int32_t InstanceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.SetHeartInsId__Overridden");
		
		ABP_ReviveAltarBase_C_SetHeartInsId__Overridden_Params params {};
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_CanUse__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_ReviveAltarBase_C::OnRep_CanUse__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_CanUse__Overridden");
		
		ABP_ReviveAltarBase_C_OnRep_CanUse__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ReviveAltarBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ReviveAltarBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReviveAltarBase.BP_ReviveAltarBase_C");
		return ptr;
	}

}


