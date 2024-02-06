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
	 * UserDefinedStruct GroundItem.GroundItem
	 * Size -> 0x0038
	 */
	struct FGroundItem
	{
	public:
		int64_t                                                    InstanceId_18_888CB73B4110DDF6035E91B2272B7BC3;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemId_4_6C2FB82F49DE1079BC445DB2E87C9C77;               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_6_BFAA0BDD451209F988636D83E30066D2;               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index_13_80DD5D0147D916BB4D4D41A4F7A27CC7;               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JB54[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ExtraInts_27_D9A07E9A4729B1A38EA77C9A90DA1275;           // 0x0018(0x0010) Edit, BlueprintVisible
		class FString                                              ExtraString_23_0C4683494B31F52A19A5BC8CE24BE768;         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
