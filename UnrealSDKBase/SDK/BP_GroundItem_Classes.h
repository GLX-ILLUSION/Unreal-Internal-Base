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
	 * BlueprintGeneratedClass BP_GroundItem.BP_GroundItem_C
	 * Size -> 0x00BD (FullSize[0x02E5] - InheritedSize[0x0228])
	 */
	class ABP_GroundItem_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int64_t                                                    InstanceId;                                              // 0x0250(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FGroundItem                                         ItemData;                                                // 0x0258(0x0038) Edit, BlueprintVisible, Net, RepNotify, HasGetValueTypeHash
		TMap<int32_t, class FString>                               ButtonMenuMap;                                           // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DropId;                                                  // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDrop;                                                   // 0x02E4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void Mult_Drop();
		void ReceiveBeginPlay();
		void OnRep_bDrop();
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName(class FString* Name);
		class FString GetModuleName();
		void OnRep_bDrop__Overridden();
		void OnRep_ItemData();
		void OnRep_InstanceId();
		void Mult_Drop__Overridden();
		void ExecuteUbergraph_BP_GroundItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
