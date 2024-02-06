/**
 * Name: GreedIsGood
 * Version: playtest
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
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.BowClose
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::BowClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.BowClose");
		
		UCrosshair_p_C_BowClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.BowOpen
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::BowOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.BowOpen");
		
		UCrosshair_p_C_BowOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.Hide All
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::HideAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.Hide All");
		
		UCrosshair_p_C_HideAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.HideCrossHair
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::HideCrossHair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.HideCrossHair");
		
		UCrosshair_p_C_HideCrossHair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.ShowCenter
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::ShowCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.ShowCenter");
		
		UCrosshair_p_C_ShowCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.ShowAbility
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::ShowAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.ShowAbility");
		
		UCrosshair_p_C_ShowAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.ShowBow
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::ShowBow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.ShowBow");
		
		UCrosshair_p_C_ShowBow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.ShowMelee
	 * 		Flags  -> ()
	 */
	void UCrosshair_p_C::ShowMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.ShowMelee");
		
		UCrosshair_p_C_ShowMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crosshair_p.Crosshair_p_C.ExecuteUbergraph_Crosshair_p
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_p_C::ExecuteUbergraph_Crosshair_p(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_p.Crosshair_p_C.ExecuteUbergraph_Crosshair_p");
		
		UCrosshair_p_C_ExecuteUbergraph_Crosshair_p_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crosshair_p.Crosshair_p_C");
		return ptr;
	}

}


