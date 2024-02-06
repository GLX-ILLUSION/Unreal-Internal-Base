﻿/**
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
	 * 		Name   -> PredefinedFunction UMyPluginObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyPluginObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		return ptr;
	}

}


