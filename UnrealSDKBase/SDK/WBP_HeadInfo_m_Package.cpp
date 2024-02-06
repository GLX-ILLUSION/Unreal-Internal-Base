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
	 * 		Name   -> LuaFunction WBP_HeadInfo_m.WBP_HeadInfo_m_C.CallLuaCommonUIFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWBP_HeadInfo_m_C::CallLuaCommonUIFunction(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_HeadInfo_m.WBP_HeadInfo_m_C.CallLuaCommonUIFunction");
		
		UWBP_HeadInfo_m_C_CallLuaCommonUIFunction_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction WBP_HeadInfo_m.WBP_HeadInfo_m_C.BP_OnHandleBackAction
	 * 		Flags  -> ()
	 */
	bool UWBP_HeadInfo_m_C::BP_OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_HeadInfo_m.WBP_HeadInfo_m_C.BP_OnHandleBackAction");
		
		UWBP_HeadInfo_m_C_BP_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HeadInfo_m_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HeadInfo_m_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HeadInfo_m.WBP_HeadInfo_m_C");
		return ptr;
	}

}


