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
	 * 		Name   -> PredefinedFunction UStyle_Login_NoticeBoardButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyle_Login_NoticeBoardButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Style_Login_NoticeBoardButton.Style_Login_NoticeBoardButton_C");
		return ptr;
	}

}


