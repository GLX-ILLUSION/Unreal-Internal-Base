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
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.PlayBreakMontage
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::PlayBreakMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.PlayBreakMontage");
		
		ABP_TreasureBase_C_PlayBreakMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.ReceiveBeginPlay");
		
		ABP_TreasureBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_TreasureBase_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.GetInteractionFunctions");
		
		ABP_TreasureBase_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.OnRep_Items
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::OnRep_Items()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.OnRep_Items");
		
		ABP_TreasureBase_C_OnRep_Items_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.LuaOnDestroy
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::LuaOnDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.LuaOnDestroy");
		
		ABP_TreasureBase_C_LuaOnDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.OnRep_Status
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::OnRep_Status()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.OnRep_Status");
		
		ABP_TreasureBase_C_OnRep_Status_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_TreasureBase.BP_TreasureBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_TreasureBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_TreasureBase.BP_TreasureBase_C.ReceiveEndPlay");
		
		ABP_TreasureBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_TreasureBase_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.GetInteractionFunctions__Overridden");
		
		ABP_TreasureBase_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBase_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.GetMenuName");
		
		ABP_TreasureBase_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_TreasureBase_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.GetModuleName");
		
		ABP_TreasureBase_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.OnRep_Status__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::OnRep_Status__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.OnRep_Status__Overridden");
		
		ABP_TreasureBase_C_OnRep_Status__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.GetOpenDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TreasureBase_C::GetOpenDirection(const struct FVector& Location, bool* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.GetOpenDirection");
		
		ABP_TreasureBase_C_GetOpenDirection_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.ServerOpenTreasureBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBase_C::ServerOpenTreasureBox(int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.ServerOpenTreasureBox");
		
		ABP_TreasureBase_C_ServerOpenTreasureBox_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBase.BP_TreasureBase_C.OnRep_Items__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBase_C::OnRep_Items__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBase.BP_TreasureBase_C.OnRep_Items__Overridden");
		
		ABP_TreasureBase_C_OnRep_Items__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TreasureBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TreasureBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureBase.BP_TreasureBase_C");
		return ptr;
	}

}


