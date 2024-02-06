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
	 * 		Name   -> LuaFunction WBP_MessageBox_p.WBP_MessageBox_p_C.CallLuaCommonUIFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWBP_MessageBox_p_C::CallLuaCommonUIFunction(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_MessageBox_p.WBP_MessageBox_p_C.CallLuaCommonUIFunction");
		
		UWBP_MessageBox_p_C_CallLuaCommonUIFunction_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction WBP_MessageBox_p.WBP_MessageBox_p_C.BP_OnHandleBackAction
	 * 		Flags  -> ()
	 */
	bool UWBP_MessageBox_p_C::BP_OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_MessageBox_p.WBP_MessageBox_p_C.BP_OnHandleBackAction");
		
		UWBP_MessageBox_p_C_BP_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MessageBox_p.WBP_MessageBox_p_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MessageBox_p_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MessageBox_p.WBP_MessageBox_p_C.Construct");
		
		UWBP_MessageBox_p_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MessageBox_p.WBP_MessageBox_p_C.VisibilityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MessageBox_p_C::VisibilityChange(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MessageBox_p.WBP_MessageBox_p_C.VisibilityChange");
		
		UWBP_MessageBox_p_C_VisibilityChange_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MessageBox_p.WBP_MessageBox_p_C.ExecuteUbergraph_WBP_MessageBox_p
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MessageBox_p_C::ExecuteUbergraph_WBP_MessageBox_p(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MessageBox_p.WBP_MessageBox_p_C.ExecuteUbergraph_WBP_MessageBox_p");
		
		UWBP_MessageBox_p_C_ExecuteUbergraph_WBP_MessageBox_p_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MessageBox_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MessageBox_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MessageBox_p.WBP_MessageBox_p_C");
		return ptr;
	}

}


