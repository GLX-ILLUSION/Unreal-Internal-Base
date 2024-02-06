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
	 * 		Name   -> LuaFunction WBP_AlertBox_p.WBP_AlertBox_p_C.CallLuaCommonUIFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWBP_AlertBox_p_C::CallLuaCommonUIFunction(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_AlertBox_p.WBP_AlertBox_p_C.CallLuaCommonUIFunction");
		
		UWBP_AlertBox_p_C_CallLuaCommonUIFunction_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction WBP_AlertBox_p.WBP_AlertBox_p_C.BP_OnHandleBackAction
	 * 		Flags  -> ()
	 */
	bool UWBP_AlertBox_p_C::BP_OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_AlertBox_p.WBP_AlertBox_p_C.BP_OnHandleBackAction");
		
		UWBP_AlertBox_p_C_BP_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_AlertBox_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_AlertBox_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AlertBox_p.WBP_AlertBox_p_C");
		return ptr;
	}

}


