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
	 * 		Name   -> PredefinedFunction UStyle_Map_UnmarkButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyle_Map_UnmarkButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Style_Map_UnmarkButton.Style_Map_UnmarkButton_C");
		return ptr;
	}

}


