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
	 * BlueprintGeneratedClass AIController_Base.AIController_Base_C
	 * Size -> 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
	 */
	class AAIController_Base_C : public AAIController
	{
	public:
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void ReceivePossess(class APawn* PossessedPawn);
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
