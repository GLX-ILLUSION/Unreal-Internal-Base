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
	 * BlueprintGeneratedClass AI_Base.AI_Base_C
	 * Size -> 0x0229 (FullSize[0x0779] - InheritedSize[0x0550])
	 */
	class AAI_Base_C : public AAIPawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ProjectileCheckBox_C*                            BP_ProjectileCheckBox;                                   // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class Ubp_ragdoll_component_C*                             RagdollSystem;                                           // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CfgId;                                                   // 0x0568(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Hp;                                                      // 0x056C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TArray<class UBlendSpace*>                                 BL_Moves;                                                // 0x0570(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBlendSpace*                                         BL_Sleep;                                                // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         MoveBlendSpace;                                          // 0x0588(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_SleepStart;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_SleepEnd;                                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAnimMontage*>                                Montages_Idle;                                           // 0x05A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimMontage*>                                Montages_Die;                                            // 0x05B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int64_t                                                    InstanceId;                                              // 0x05C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class FString>                               ButtonMenuMap;                                           // 0x05C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        Montage_Roar;                                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Hit_F;                                           // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Hit_B;                                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Hit_R;                                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Hit_L;                                           // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Turn_180_R;                                      // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Turn_180_L;                                      // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Turn_90_R;                                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_Turn_90_L;                                       // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RightWeaponCfgId;                                        // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LeftWeaponCfgId;                                         // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, float>                                 SkillName2Weight;                                        // 0x0668(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, float>                                 SkillName2CoolDown;                                      // 0x06B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Pitch;                                                   // 0x0708(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroupId;                                                 // 0x070C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, int32_t>                               SkillName2CfgId;                                         // 0x0710(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsStartLogic;                                            // 0x0760(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8HWK[0x3];                                   // 0x0761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AcceptRadius;                                            // 0x0764(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      SkillNameOrder;                                          // 0x0768(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsNeedTick;                                              // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClientPlayEffectAttached(const class FString& Path, const class FString& Name);
		void ReceiveDestroyed();
		void LockLookAtTarget(float RotateSpeedRate);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void ClientUseDoll();
		void ClientStopSlotMontage(const class FString& SlotName);
		class USkeletalMeshComponent* GetLeftHandHoldWeaponMesh();
		void ClientPlaySound(int32_t ID);
		void InitMonster();
		class USkeletalMeshComponent* GetRightHandHoldWeaponMesh();
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ClientDie();
		void OnRep_MoveBlendSpace();
		void ClientPlayEffectById(int32_t ID, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved);
		void OnRep_Hp();
		float Die(class AActor* DamageInstigator, class AActor* DamageCauser, const struct FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude, class AActor* AvatarActor);
		void K2_AddAbilities();
		void ClientStopAllMontage();
		void ClientPlayEffect(const class FString& Path, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved);
		void ClientStopMontage(class UAnimMontage* Montage);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ClientStopEffectById(int32_t ID);
		void ClientStopEffect(const class FString& Path);
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName(class FString* Name);
		class FString GetModuleName();
		void ClientUseDoll__Overridden();
		void OnRep_MoveBlendSpace__Overridden();
		void OnRep_Hp__Overridden();
		void ClientPlayEffectAttached__Overridden(const class FString& Path, const class FString& Name);
		void LuaServerBeginPlay();
		void ClientStopEffectById__Overridden(int32_t ID);
		void ClientPlayEffectById__Overridden(int32_t ID, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved);
		void ClientRotateTo(const struct FVector& Location);
		void ClientStopEffect__Overridden(const class FString& Path);
		void ClientPlayEffect__Overridden(const class FString& Path, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved);
		void ClientPlaySound__Overridden(int32_t ID);
		void ClientElectricShock();
		void ClientStopSlotMontage__Overridden(const class FString& SlotName);
		void ClientStopMontage__Overridden(class UAnimMontage* Montage);
		void ClientStopAllMontage__Overridden();
		void ClientDie__Overridden();
		void InitMonster__Overridden();
		void MultiStopMontage(class UAnimMontage* Montage);
		void MultiStopSlotMontage(const class FString& SlotName);
		void MultiStopAllMontage();
		void MultiSetCollisionEnable(bool SelfEnable);
		void MultiSetVisible(bool enable);
		void MultiElectricShock();
		void MultiDie();
		void MultiPlaySound(int32_t SoundId);
		void MultiPlayEffect(const class FString& Path, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved);
		void MultiStopEffect(const class FString& Path);
		void MultiRotateTo(const struct FVector& Location);
		void MultiPlayEffectById(int32_t ID, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved);
		void MultiStopEffectById(int32_t ID);
		void MultiPlayEffectAttached(const class FString& Path, const class FString& Name);
		void UseDoll();
		void ReceiveBeginPlay();
		void LockLookAtTarget__Overridden(float RotateSpeedRate);
		void DrawDebugPos(const struct FVector& Pos, const struct FLinearColor& LineColor);
		void MultiPlayMontage(class UAnimMontage* Montage, float Rate, float StartTime, bool isStopMontage);
		void StartRagdoll();
		void StopRagdoll();
		void ExecuteUbergraph_AI_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
