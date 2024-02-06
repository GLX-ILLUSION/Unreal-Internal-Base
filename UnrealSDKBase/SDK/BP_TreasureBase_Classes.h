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
	 * BlueprintGeneratedClass BP_TreasureBase.BP_TreasureBase_C
	 * Size -> 0x00A0 (FullSize[0x0318] - InheritedSize[0x0278])
	 */
	class ABP_TreasureBase_C : public ABP_Destructible_C
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int64_t                                                    InstanceId;                                              // 0x0288(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGroundItem>                                 Items;                                                   // 0x0290(0x0010) Edit, BlueprintVisible, Net, RepNotify
		unsigned char                                              Status;                                                  // 0x02A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5AAO[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class FString>                               ButtonMenuMap;                                           // 0x02A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        ForwardOpenAnim;                                         // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CfgId;                                                   // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Isforward;                                               // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L9K7[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        BackwardOpenAnim;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        OpenBreakMontage;                                        // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayBreakMontage();
		void ReceiveBeginPlay();
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void OnRep_Items();
		void LuaOnDestroy();
		void OnRep_Status();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName(class FString* Name);
		class FString GetModuleName();
		void OnRep_Status__Overridden();
		void GetOpenDirection(const struct FVector& Location, bool* Output_Get);
		void ServerOpenTreasureBox(int32_t Direction);
		void OnRep_Items__Overridden();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
