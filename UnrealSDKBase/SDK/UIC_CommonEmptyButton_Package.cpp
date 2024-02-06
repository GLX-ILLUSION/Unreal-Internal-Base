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
	 * 		Name   -> PredefinedFunction UUIC_CommonEmptyButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIC_CommonEmptyButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIC_CommonEmptyButton.UIC_CommonEmptyButton_C");
		return ptr;
	}

}


