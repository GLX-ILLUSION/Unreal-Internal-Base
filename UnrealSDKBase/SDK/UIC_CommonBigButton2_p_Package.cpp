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
	 * 		Name   -> Function UIC_CommonBigButton2_p.UIC_CommonBigButton2_p_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIC_CommonBigButton2_p_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIC_CommonBigButton2_p.UIC_CommonBigButton2_p_C.PreConstruct");
		
		UUIC_CommonBigButton2_p_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIC_CommonBigButton2_p.UIC_CommonBigButton2_p_C.ExecuteUbergraph_UIC_CommonBigButton2_p
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIC_CommonBigButton2_p_C::ExecuteUbergraph_UIC_CommonBigButton2_p(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIC_CommonBigButton2_p.UIC_CommonBigButton2_p_C.ExecuteUbergraph_UIC_CommonBigButton2_p");
		
		UUIC_CommonBigButton2_p_C_ExecuteUbergraph_UIC_CommonBigButton2_p_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIC_CommonBigButton2_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIC_CommonBigButton2_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIC_CommonBigButton2_p.UIC_CommonBigButton2_p_C");
		return ptr;
	}

}


