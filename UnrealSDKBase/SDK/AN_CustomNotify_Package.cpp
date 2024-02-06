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
	 * 		Name   -> Function AN_CustomNotify.AN_CustomNotify_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UAN_CustomNotify_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AN_CustomNotify.AN_CustomNotify_C.GetNotifyName");
		
		UAN_CustomNotify_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAN_CustomNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAN_CustomNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AN_CustomNotify.AN_CustomNotify_C");
		return ptr;
	}

}


