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
	 * 		Name   -> PredefinedFunction UStyle_Login_DiscordButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyle_Login_DiscordButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Style_Login_DiscordButton.Style_Login_DiscordButton_C");
		return ptr;
	}

}


