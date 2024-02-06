#pragma once

/**
 * Name: GreedIsGood
 * Version: playtest
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
	 * UserDefinedStruct St_SkillMontageInfo.ST_SkillMontageInfo
	 * Size -> 0x0020
	 */
	struct FST_SkillMontageInfo
	{
	public:
		TArray<class UAnimMontage*>                                MontageList_Man_5_F7651B714CF5D6C723AF26A4DAEA079D;      // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                MontageList_Woman_9_FF5C562149A11FA540BD2D8E33A87BDC;    // 0x0010(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
