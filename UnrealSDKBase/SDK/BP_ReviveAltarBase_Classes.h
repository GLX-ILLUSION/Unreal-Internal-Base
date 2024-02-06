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
	 * BlueprintGeneratedClass BP_ReviveAltarBase.BP_ReviveAltarBase_C
	 * Size -> 0x006E (FullSize[0x0296] - InheritedSize[0x0228])
	 */
	class ABP_ReviveAltarBase_C : public AActor
	{
	public:
		class UBoxComponent*                                       Box;                                                     // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class FString>                               ButtonMenuMap;                                           // 0x0240(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      InteractiveTime;                                         // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUse;                                                  // 0x0294(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Using;                                                   // 0x0295(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_CanUse();
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void SetHeartInsId(int32_t InstanceId);
		void ReceiveBeginPlay();
		void OnRep_Using();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName(class FString* Name);
		class FString GetModuleName();
		void OnRep_Using__Overridden();
		void SetHeartInsId__Overridden(int32_t InstanceId);
		void OnRep_CanUse__Overridden();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
