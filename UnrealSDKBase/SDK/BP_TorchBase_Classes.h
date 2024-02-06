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
	 * BlueprintGeneratedClass BP_TorchBase.BP_TorchBase_C
	 * Size -> 0x0081 (FullSize[0x02B1] - InheritedSize[0x0230])
	 */
	class ABP_TorchBase_C : public ANeedsLoadForClientActor
	{
	public:
		class UNiagaraComponent*                                   Particle;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LightEffectParent;                                       // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class FString>                               InteractionFunctions;                                    // 0x0260(0x0050) Edit, BlueprintVisible
		bool                                                       bLit;                                                    // 0x02B0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_bLit();
		void GetMenuName(class FString* Name);
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		class FString GetModuleName();
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName__Overridden(class FString* Name);
		void ServerLightTorch(bool bLight);
		void OnRep_bLit__Overridden();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
