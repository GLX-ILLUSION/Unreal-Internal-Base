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
	 * BlueprintGeneratedClass AN_PlaySoundHasEventName.AN_PlaySoundHasEventName_C
	 * Size -> 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
	 */
	class UAN_PlaySoundHasEventName_C : public UAN_CustomNotify_C
	{
	public:
		int32_t                                                    CfgId;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		class FString GetNotifyName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
