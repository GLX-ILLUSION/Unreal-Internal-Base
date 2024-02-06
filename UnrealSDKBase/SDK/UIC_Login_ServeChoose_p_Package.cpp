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
	 * 		Name   -> Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UUIC_Login_ServeChoose_p_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.BP_OnEntryReleased");
		
		UUIC_Login_ServeChoose_p_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIC_Login_ServeChoose_p_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.BP_OnItemExpansionChanged");
		
		UUIC_Login_ServeChoose_p_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIC_Login_ServeChoose_p_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.BP_OnItemSelectionChanged");
		
		UUIC_Login_ServeChoose_p_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.ExecuteUbergraph_UIC_Login_ServeChoose_p
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIC_Login_ServeChoose_p_C::ExecuteUbergraph_UIC_Login_ServeChoose_p(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C.ExecuteUbergraph_UIC_Login_ServeChoose_p");
		
		UUIC_Login_ServeChoose_p_C_ExecuteUbergraph_UIC_Login_ServeChoose_p_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIC_Login_ServeChoose_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIC_Login_ServeChoose_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIC_Login_ServeChoose_p.UIC_Login_ServeChoose_p_C");
		return ptr;
	}

}


