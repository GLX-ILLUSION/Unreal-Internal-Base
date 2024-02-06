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
	 * 		Name   -> LuaFunction WBP_DamageNum_p.WBP_DamageNum_p_C.PlayAnima
	 * 		Flags  -> ()
	 */
	void UWBP_DamageNum_p_C::PlayAnima()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction WBP_DamageNum_p.WBP_DamageNum_p_C.PlayAnima");
		
		UWBP_DamageNum_p_C_PlayAnima_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DamageNum_p.WBP_DamageNum_p_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString UWBP_DamageNum_p_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageNum_p.WBP_DamageNum_p_C.GetModuleName");
		
		UWBP_DamageNum_p_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DamageNum_p.WBP_DamageNum_p_C.PlayAnima__Overridden
	 * 		Flags  -> ()
	 */
	void UWBP_DamageNum_p_C::PlayAnima__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageNum_p.WBP_DamageNum_p_C.PlayAnima__Overridden");
		
		UWBP_DamageNum_p_C_PlayAnima__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DamageNum_p.WBP_DamageNum_p_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DamageNum_p_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageNum_p.WBP_DamageNum_p_C.PreConstruct");
		
		UWBP_DamageNum_p_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DamageNum_p.WBP_DamageNum_p_C.ExecuteUbergraph_WBP_DamageNum_p
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DamageNum_p_C::ExecuteUbergraph_WBP_DamageNum_p(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DamageNum_p.WBP_DamageNum_p_C.ExecuteUbergraph_WBP_DamageNum_p");
		
		UWBP_DamageNum_p_C_ExecuteUbergraph_WBP_DamageNum_p_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DamageNum_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DamageNum_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DamageNum_p.WBP_DamageNum_p_C");
		return ptr;
	}

}


