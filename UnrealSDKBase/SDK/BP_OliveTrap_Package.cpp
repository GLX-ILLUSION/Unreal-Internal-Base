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
	 * 		Name   -> LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_OliveTrap_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveActorBeginOverlap");
		
		ABP_OliveTrap_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_OliveTrap.BP_OliveTrap_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_OliveTrap_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_OliveTrap.BP_OliveTrap_C.GetInteractionFunctions");
		
		ABP_OliveTrap_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OliveTrap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveBeginPlay");
		
		ABP_OliveTrap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_OliveTrap.BP_OliveTrap_C.OnRep_bClose
	 * 		Flags  -> ()
	 */
	void ABP_OliveTrap_C::OnRep_bClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_OliveTrap.BP_OliveTrap_C.OnRep_bClose");
		
		ABP_OliveTrap_C_OnRep_bClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_OliveTrap_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveEndPlay");
		
		ABP_OliveTrap_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OliveTrap.BP_OliveTrap_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_OliveTrap_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OliveTrap.BP_OliveTrap_C.GetInteractionFunctions__Overridden");
		
		ABP_OliveTrap_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OliveTrap.BP_OliveTrap_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_OliveTrap_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OliveTrap.BP_OliveTrap_C.GetMenuName");
		
		ABP_OliveTrap_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OliveTrap.BP_OliveTrap_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_OliveTrap_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OliveTrap.BP_OliveTrap_C.GetModuleName");
		
		ABP_OliveTrap_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OliveTrap.BP_OliveTrap_C.OnRep_InteractiveActor
	 * 		Flags  -> ()
	 */
	void ABP_OliveTrap_C::OnRep_InteractiveActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OliveTrap.BP_OliveTrap_C.OnRep_InteractiveActor");
		
		ABP_OliveTrap_C_OnRep_InteractiveActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OliveTrap.BP_OliveTrap_C.OnRep_bClose__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_OliveTrap_C::OnRep_bClose__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OliveTrap.BP_OliveTrap_C.OnRep_bClose__Overridden");
		
		ABP_OliveTrap_C_OnRep_bClose__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OliveTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OliveTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OliveTrap.BP_OliveTrap_C");
		return ptr;
	}

}


