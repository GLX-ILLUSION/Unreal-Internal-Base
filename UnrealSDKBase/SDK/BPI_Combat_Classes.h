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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_Combat.BPI_Combat_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Combat_C : public UInterface
	{
	public:
		void BPI_EndReduceMoveSpeed();
		void BPI_BeginReduceMoveSpeed(float Rate);
		void BPI_PlaySoundEventName(const class FName& EventName, int32_t CfgId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
