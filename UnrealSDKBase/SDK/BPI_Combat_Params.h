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
	 * Function BPI_Combat.BPI_Combat_C.BPI_EndReduceMoveSpeed
	 */
	struct UBPI_Combat_C_BPI_EndReduceMoveSpeed_Params
	{	};

	/**
	 * Function BPI_Combat.BPI_Combat_C.BPI_BeginReduceMoveSpeed
	 */
	struct UBPI_Combat_C_BPI_BeginReduceMoveSpeed_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Combat.BPI_Combat_C.BPI_PlaySoundEventName
	 */
	struct UBPI_Combat_C_BPI_PlaySoundEventName_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CfgId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
