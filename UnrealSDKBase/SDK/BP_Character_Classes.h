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
	 * BlueprintGeneratedClass BP_Character.BP_Character_C
	 * Size -> 0x02E0 (FullSize[0x0A70] - InheritedSize[0x0790])
	 */
	class ABP_Character_C : public AMyShootCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class Ubp_ragdoll_component_C*                             RagdollSystem;                                           // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 DeadSpringArm;                                           // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Thigh;                                                   // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Shoes;                                                   // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Helmet;                                                  // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Face;                                                    // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hair;                                                    // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChangeSkinUtil_C*                                   ChangeSkinUtil;                                          // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Gloves;                                                  // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BodyMesh;                                                // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    BloodWidget;                                             // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_EquipInfoBillboard_C*                            BP_EquipInfoBillboard;                                   // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    FpCamera;                                                // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_FSMSystem_C*                                     FSMSystemComp;                                           // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_FSMSystem_C*                                     BaseFSMSystemComp;                                       // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchDown_Value_71387067426DDA9F41EA65A3F920CA4C;       // 0x0810(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CrouchDown__Direction_71387067426DDA9F41EA65A3F920CA4C;  // 0x0814(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_67TQ[0x3];                                   // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CrouchDown;                                              // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimInstance*                                       AnimInstance;                                            // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurVelocity;                                             // 0x0828(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MovementState                                            MovementState;                                           // 0x0834(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCrouch;                                                 // 0x0835(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FIA2[0x2];                                   // 0x0836(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultSpringArmLength;                                  // 0x0838(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultSpringOffsetZ;                                    // 0x083C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CachedCameraSpringHeight;                                // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CachedCameraSpringLength;                                // 0x0844(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    roleid;                                                  // 0x0848(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bDead;                                                   // 0x0850(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_7Y8F[0x3];                                   // 0x0851(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      maxSpeedChangeRate;                                      // 0x0854(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bSecondHp;                                               // 0x0858(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bInAir;                                                  // 0x0859(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VGVT[0x2];                                   // 0x085A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MainWeaponId;                                            // 0x085C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SecondWeaponId;                                          // 0x0860(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HelmetId;                                                // 0x0864(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ChestId;                                                 // 0x0868(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ThighId;                                                 // 0x086C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_BaseWeapon_C*>                            LeftWeaponList;                                          // 0x0870(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
		TArray<class ABP_BaseWeapon_C*>                            RightWeaponList;                                         // 0x0880(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
		int32_t                                                    CfgId;                                                   // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D6ID[0x4];                                   // 0x0894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        IdlePose;                                                // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Owner_1;                                                 // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BaseWeapon_C*                                    ThrowWeapon;                                             // 0x08A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TMap<E_WeaponSubType, struct FST_WeaponAnimData>           WeaponSubType2WeaponAnimData;                            // 0x08B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bSoul;                                                   // 0x0900(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_WTG7[0x3];                                   // 0x0901(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BecomeSoulTime;                                          // 0x0904(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInputMappingContext*                                IMC;                                                     // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInputMappingContext*                                IMC_Ability;                                             // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_WeaponAnimData                                  AnimData_Man;                                            // 0x0918(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_WeaponAnimData                                  AnimData_Woman;                                          // 0x0938(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DirMoveSpeedRate;                                        // 0x0958(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimMoveSpeedRate;                                       // 0x095C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWalkSpeed;                                            // 0x0960(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I4H1[0x4];                                   // 0x0964(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class FString>                               ButtonMenuMap;                                           // 0x0968(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurMatch;                                                // 0x09B8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkinId;                                                  // 0x09BC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSlowMove;                                               // 0x09C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOffline;                                                // 0x09C1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bEscape;                                                 // 0x09C2(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_VQEG[0x1];                                   // 0x09C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    primaryGA;                                               // 0x09C4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    secondaryGA;                                             // 0x09C8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OverlayState;                                            // 0x09CC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_WeaponAnimData                                  CurWeaponAnimData;                                       // 0x09D0(0x0020) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SetBlockChangeCurWeaponAnimData;                         // 0x09F0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZYZ[0x3];                                   // 0x09F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShoesId;                                                 // 0x09F4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GlovesId;                                                // 0x09F8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QK0F[0x4];                                   // 0x09FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                IMC_Ability_WaitReleased;                                // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            ExtraAllowedWeaponType;                                  // 0x0A08(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		TArray<class UAnimMontage*>                                DeadMontage_Man;                                         // 0x0A18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimMontage*>                                DeadMontage_Woman;                                       // 0x0A28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_MedicineActor_Base_C*                            QuickUse;                                                // 0x0A38(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BattleStage;                                             // 0x0A40(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NI1C[0x4];                                   // 0x0A44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                IMC_NoDestroy;                                           // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMeshComponent*>                              AllMesh;                                                 // 0x0A50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UMaterialInterface*>                          AllMaterialsBeforeEscape;                                // 0x0A60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void OnRep_MaxWalkSpeed();
		void Mult_Possessed(class APlayerController* Controller);
		void DoOpenDeathBox(class AActor* DeathBox, class AActor* DeathActor);
		void OnRep_bSoul();
		void DoInteractiveStart(class AActor* Actor, float Time, int32_t interactiveNum);
		void Mult_Jump();
		void OnRep_ThrowWeapon();
		void BPI_PlaySoundEventName(const class FName& EventName, int32_t CfgId);
		void MultOwn_PlayHitSoundEffect(int32_t hitAudioId, int32_t hitEffectId, const struct FHitResult& HitResult);
		class USkeletalMeshComponent* GetLeftHandHoldWeaponMesh();
		void IsSelf(bool* bself);
		void OnRep_RightWeaponList();
		void OnRep_ShoesId();
		void OnRep_ChestId();
		void OnRep_ThighId();
		void LuaOnDie(class AActor* EffectInstigator, class AActor* EffectCauser, const struct FGameplayEffectSpec& EffectSpec, float EffectMagnitude, class AActor* AvatarActor);
		void BPI_SetMovementState(E_MovementState State);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void InitCharacter();
		void BPI_EndReduceMoveSpeed();
		void OnRep_QuickUse();
		void OnRep_bOffline();
		void OnRep_bDead();
		void GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc);
		void SetHudIndex();
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void OnRep_GlovesId();
		void LuaReceiveTick(float Delta);
		void OnRep_HelmetId();
		void Mult_Escape(bool isRedGate);
		void SetCameraBoom(float Alpha, float targetHeight, float targetDis, float reverseHeight, float reverseDis, float cacheHeight, float cacheDis, bool Reverse, int32_t Index);
		void MoveForwardLua(float Value);
		void OnRep_RoleId();
		void OnRep_LeftWeaponList();
		void AttributeSetInitFinish();
		void LuaBeginPlay();
		void CacheCameraSpringValue(int32_t* Index);
		void STC_OnBattleStateChange(bool bInBattleState);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ChangeCamera();
		void OnReceiveAttributeChange();
		void OnRep_CurMatch();
		void OnRep_BattleStage();
		void Server_Jump();
		void ServerChangeMoveDir(int32_t Dir);
		void OnRep_bEscape();
		void MultUseControllerRotationYaw(bool use);
		void K2_OnClientCorrectionReceived(const struct FVector& NewLocation);
		void K2_AddAbilities();
		void K2_OnGetHurt(class AActor* FromCharacter, int32_t DamageAttributeType, int32_t FromPlayerOrSystem);
		void LuaSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
		void OnJumped();
		void MoveRightLua(float Value);
		class USkeletalMeshComponent* GetRightHandHoldWeaponMesh();
		void UserConstructionScript();
		void BPI_BeginReduceMoveSpeed(float Rate);
		void GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc);
		void GetMenuName(class FString* Name);
		class FString GetModuleName();
		void OnRep_BattleStage__Overridden();
		void OnRep_QuickUse__Overridden();
		void OnRep_GlovesId__Overridden();
		void OnRep_ShoesId__Overridden();
		void OnRep_bEscape__Overridden();
		void OnRep_bOffline__Overridden();
		void OnRep_CurMatch__Overridden();
		void OnRep_LeftWeaponList__Overridden();
		void OnRep_RightWeaponList__Overridden();
		void DoInteractiveStart__Overridden(class AActor* Actor, float Time, int32_t interactiveNum);
		void DoOpenDeathBox__Overridden(class AActor* DeathBox, class AActor* DeathActor);
		void OnRep_MaxWalkSpeed__Overridden();
		void OnRep_SpeedRate();
		void ChangeCamera__Overridden();
		void OnRep_bSoul__Overridden();
		void OnRep_ThrowWeapon__Overridden();
		void MyShowDamageNumber(const struct FVector& Pos, int32_t Num, bool isBaoji);
		void SetHudIndex__Overridden();
		void OnRep_ThighId__Overridden();
		void OnRep_ChestId__Overridden();
		void OnRep_HelmetId__Overridden();
		void OnRep_SecondWeaponId();
		void OnRep_MainWeaponId();
		void OnRep_bSecondHp();
		void OnRep_maxSpeedChangeRate();
		void OnRep_bDead__Overridden();
		void OnRep_RoleId__Overridden();
		void SetCameraBoom__Overridden(float Alpha, float targetHeight, float targetDis, float reverseHeight, float reverseDis, float cacheHeight, float cacheDis, bool Reverse, int32_t Index);
		void CacheCameraSpringValue__Overridden(int32_t* Index);
		void IsSelf__Overridden(bool* bself);
		void LuaReceiveTick__Overridden(float Delta);
		void MoveRightLua__Overridden(float Value);
		void MoveForwardLua__Overridden(float Value);
		void LuaBeginPlay__Overridden();
		void CrouchDown__FinishedFunc();
		void CrouchDown__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void MultUseControllerRotationYaw__Overridden(bool use);
		void SendUseControllerRotationYaw(bool use);
		void K2_OnMovementModeChanged__Overridden(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void DoTL_Crouch(bool Reverse);
		void MultOwn_PlayHitSoundEffect__Overridden(int32_t hitAudioId, int32_t hitEffectId, const struct FHitResult& HitResult);
		void ServerSetMaxSpeedChangeRate(float Rate);
		void Server_Jump__Overridden();
		void Mult_Jump__Overridden();
		void ServerChangeWeapon2Hand(bool onHand, class ABP_BaseWeapon_C* Weapon);
		void Mult_Escape__Overridden(bool isRedGate);
		void ReceivePossessed(class AController* NewController);
		void Mult_Possessed__Overridden(class APlayerController* Controller);
		void BPI_SetMovementState__Overridden(E_MovementState State);
		void STC_OnBattleStateChange__Overridden(bool bInBattleState);
		void STC_OnAttributeChange();
		void InteractiveActor(class AActor* Actor);
		void ServerSetSpeedRate(float Rate);
		void ServerChangeMoveDir__Overridden(int32_t Dir);
		void OpenDeathBox(class AActor* DeathBox, class AActor* DeathActor);
		void InteractiveStart(class AActor* Actor, float Time, int32_t interactiveNum);
		void ReviveTeammate(class AActor* Actor, int32_t InstanceId);
		void Mult_PlayMontage(class UAnimMontage* Montage, float Rate, float StartTime, bool isStopMontage);
		void DrawServerDebugLine(const struct FVector& Start, const struct FVector& End);
		void BPI_Jumped();
		void BPI_EndReduceMoveSpeed__Overridden();
		void BPI_BeginReduceMoveSpeed__Overridden(float Rate);
		void BPI_PlaySoundEventName__Overridden(const class FName& EventName, int32_t CfgId);
		void StartRagdoll(float delayBakeTime);
		void StopRagdoll();
		void ExecuteUbergraph_BP_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
