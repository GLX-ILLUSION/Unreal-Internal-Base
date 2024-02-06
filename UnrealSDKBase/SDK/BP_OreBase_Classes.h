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
	 * BlueprintGeneratedClass BP_OreBase.BP_OreBase_C
	 * Size -> 0x0078 (FullSize[0x02A0] - InheritedSize[0x0228])
	 */
	class ABP_OreBase_C : public AActor
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CfgId;                                                   // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CanInteractiveNum;                                       // 0x0244(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        BreakMontage;                                            // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class FString>                               ButtonMenuMap;                                           // 0x0250(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnRep_CanInteractiveNum();
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName(class FString* Name);
		class FString GetModuleName();
		void OnRep_CanInteractiveNum__Overridden();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
