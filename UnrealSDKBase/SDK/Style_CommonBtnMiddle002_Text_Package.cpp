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
	 * 		Name   -> PredefinedFunction UStyle_CommonBtnMiddle002_Text_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyle_CommonBtnMiddle002_Text_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Style_CommonBtnMiddle002_Text.Style_CommonBtnMiddle002_Text_C");
		return ptr;
	}

}


