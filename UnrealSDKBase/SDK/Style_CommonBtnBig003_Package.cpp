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
	 * 		Name   -> PredefinedFunction UStyle_CommonBtnBig003_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyle_CommonBtnBig003_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Style_CommonBtnBig003.Style_CommonBtnBig003_C");
		return ptr;
	}

}


