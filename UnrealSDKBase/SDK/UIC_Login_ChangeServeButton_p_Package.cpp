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
	 * 		Name   -> PredefinedFunction UUIC_Login_ChangeServeButton_p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIC_Login_ChangeServeButton_p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIC_Login_ChangeServeButton_p.UIC_Login_ChangeServeButton_p_C");
		return ptr;
	}

}


