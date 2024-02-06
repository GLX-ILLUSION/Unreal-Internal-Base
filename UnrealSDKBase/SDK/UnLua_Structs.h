#pragma once

/**
 * Name: GreedIsGood
 * Version: fodase
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UnLua.PropertyCollector
	 * Size -> 0x0001
	 */
	struct FPropertyCollector
	{
	public:
		struct FCommonUIRedirectKeyData                            None;                                                    // 0x0000(0x0050) HasGetValueTypeHash
		struct FHitResult                                          None2;                                                   // 0x0000(0x0088) IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              None3;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EObjectTypeQuery                                           None4;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              None5;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
