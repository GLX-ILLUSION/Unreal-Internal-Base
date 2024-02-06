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
	 * UserDefinedStruct ST_WeaponAnimData.ST_WeaponAnimData
	 * Size -> 0x0020
	 */
	struct FST_WeaponAnimData
	{
	public:
		class UAnimSequence*                                       Pose_R_17_E1EDED804FF377A36AC0E99C79C4A160;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Pose_R_FPP_24_FB7D40264238D3CDD75A3DB2A550A7B9;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Pose_L_21_7A8AFE0545158D87FE9120BEE4B3541E;              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Pose_L_FPP_25_91D78CA346AD7D2759DBAA8E610370F3;          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
