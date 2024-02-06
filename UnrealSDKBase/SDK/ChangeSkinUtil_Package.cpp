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
	 * 		Name   -> Function ChangeSkinUtil.ChangeSkinUtil_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString UChangeSkinUtil_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangeSkinUtil.ChangeSkinUtil_C.GetModuleName");
		
		UChangeSkinUtil_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeSkinUtil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeSkinUtil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChangeSkinUtil.ChangeSkinUtil_C");
		return ptr;
	}

}


