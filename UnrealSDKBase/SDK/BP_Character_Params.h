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
	// # Structs
	// --------------------------------------------------
	/**
	 * LuaFunction BP_Character.BP_Character_C.K2_OnStartCrouch
	 */
	struct ABP_Character_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_MaxWalkSpeed
	 */
	struct ABP_Character_C_OnRep_MaxWalkSpeed_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.Mult_Possessed
	 */
	struct ABP_Character_C_Mult_Possessed_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.DoOpenDeathBox
	 */
	struct ABP_Character_C_DoOpenDeathBox_Params
	{
	public:
		class AActor*                                              DeathBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DeathActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_bSoul
	 */
	struct ABP_Character_C_OnRep_bSoul_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.DoInteractiveStart
	 */
	struct ABP_Character_C_DoInteractiveStart_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    interactiveNum;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.Mult_Jump
	 */
	struct ABP_Character_C_Mult_Jump_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_ThrowWeapon
	 */
	struct ABP_Character_C_OnRep_ThrowWeapon_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.BPI_PlaySoundEventName
	 */
	struct ABP_Character_C_BPI_PlaySoundEventName_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CfgId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.MultOwn_PlayHitSoundEffect
	 */
	struct ABP_Character_C_MultOwn_PlayHitSoundEffect_Params
	{
	public:
		int32_t                                                    hitAudioId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    hitEffectId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.GetLeftHandHoldWeaponMesh
	 */
	struct ABP_Character_C_GetLeftHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.IsSelf
	 */
	struct ABP_Character_C_IsSelf_Params
	{
	public:
		bool                                                       bself;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_RightWeaponList
	 */
	struct ABP_Character_C_OnRep_RightWeaponList_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_ShoesId
	 */
	struct ABP_Character_C_OnRep_ShoesId_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_ChestId
	 */
	struct ABP_Character_C_OnRep_ChestId_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_ThighId
	 */
	struct ABP_Character_C_OnRep_ThighId_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.LuaOnDie
	 */
	struct ABP_Character_C_LuaOnDie_Params
	{
	public:
		class AActor*                                              EffectInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              EffectCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0010(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      EffectMagnitude;                                         // 0x02B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3DPG[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AvatarActor;                                             // 0x02B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.BPI_SetMovementState
	 */
	struct ABP_Character_C_BPI_SetMovementState_Params
	{
	public:
		E_MovementState                                            State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.K2_OnMovementModeChanged
	 */
	struct ABP_Character_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.InitCharacter
	 */
	struct ABP_Character_C_InitCharacter_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.BPI_EndReduceMoveSpeed
	 */
	struct ABP_Character_C_BPI_EndReduceMoveSpeed_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_QuickUse
	 */
	struct ABP_Character_C_OnRep_QuickUse_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_bOffline
	 */
	struct ABP_Character_C_OnRep_bOffline_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_bDead
	 */
	struct ABP_Character_C_OnRep_bDead_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.GetInteractionFunctions
	 */
	struct ABP_Character_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.SetHudIndex
	 */
	struct ABP_Character_C_SetHudIndex_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.K2_OnEndCrouch
	 */
	struct ABP_Character_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_GlovesId
	 */
	struct ABP_Character_C_OnRep_GlovesId_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.LuaReceiveTick
	 */
	struct ABP_Character_C_LuaReceiveTick_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_HelmetId
	 */
	struct ABP_Character_C_OnRep_HelmetId_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.Mult_Escape
	 */
	struct ABP_Character_C_Mult_Escape_Params
	{
	public:
		bool                                                       isRedGate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.SetCameraBoom
	 */
	struct ABP_Character_C_SetCameraBoom_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      targetHeight;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      targetDis;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      reverseHeight;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      reverseDis;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      cacheHeight;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      cacheDis;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reverse;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UOPD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.MoveForwardLua
	 */
	struct ABP_Character_C_MoveForwardLua_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_RoleId
	 */
	struct ABP_Character_C_OnRep_RoleId_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_LeftWeaponList
	 */
	struct ABP_Character_C_OnRep_LeftWeaponList_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.AttributeSetInitFinish
	 */
	struct ABP_Character_C_AttributeSetInitFinish_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.LuaBeginPlay
	 */
	struct ABP_Character_C_LuaBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.CacheCameraSpringValue
	 */
	struct ABP_Character_C_CacheCameraSpringValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.STC_OnBattleStateChange
	 */
	struct ABP_Character_C_STC_OnBattleStateChange_Params
	{
	public:
		bool                                                       bInBattleState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.ReceiveEndPlay
	 */
	struct ABP_Character_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.ChangeCamera
	 */
	struct ABP_Character_C_ChangeCamera_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnReceiveAttributeChange
	 */
	struct ABP_Character_C_OnReceiveAttributeChange_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_CurMatch
	 */
	struct ABP_Character_C_OnRep_CurMatch_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_BattleStage
	 */
	struct ABP_Character_C_OnRep_BattleStage_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.Server_Jump
	 */
	struct ABP_Character_C_Server_Jump_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.ServerChangeMoveDir
	 */
	struct ABP_Character_C_ServerChangeMoveDir_Params
	{
	public:
		int32_t                                                    Dir;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnRep_bEscape
	 */
	struct ABP_Character_C_OnRep_bEscape_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.MultUseControllerRotationYaw
	 */
	struct ABP_Character_C_MultUseControllerRotationYaw_Params
	{
	public:
		bool                                                       use;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.K2_OnClientCorrectionReceived
	 */
	struct ABP_Character_C_K2_OnClientCorrectionReceived_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.K2_AddAbilities
	 */
	struct ABP_Character_C_K2_AddAbilities_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.K2_OnGetHurt
	 */
	struct ABP_Character_C_K2_OnGetHurt_Params
	{
	public:
		class AActor*                                              FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DamageAttributeType;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FromPlayerOrSystem;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.LuaSetupPlayerInputComponent
	 */
	struct ABP_Character_C_LuaSetupPlayerInputComponent_Params
	{
	public:
		class UInputComponent*                                     PlayerInputComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.OnJumped
	 */
	struct ABP_Character_C_OnJumped_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.MoveRightLua
	 */
	struct ABP_Character_C_MoveRightLua_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.GetRightHandHoldWeaponMesh
	 */
	struct ABP_Character_C_GetRightHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.UserConstructionScript
	 */
	struct ABP_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * LuaFunction BP_Character.BP_Character_C.BPI_BeginReduceMoveSpeed
	 */
	struct ABP_Character_C_BPI_BeginReduceMoveSpeed_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_Character_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_Character.BP_Character_C.GetMenuName
	 */
	struct ABP_Character_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.GetModuleName
	 */
	struct ABP_Character_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_BattleStage__Overridden
	 */
	struct ABP_Character_C_OnRep_BattleStage__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_QuickUse__Overridden
	 */
	struct ABP_Character_C_OnRep_QuickUse__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_GlovesId__Overridden
	 */
	struct ABP_Character_C_OnRep_GlovesId__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_ShoesId__Overridden
	 */
	struct ABP_Character_C_OnRep_ShoesId__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_bEscape__Overridden
	 */
	struct ABP_Character_C_OnRep_bEscape__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_bOffline__Overridden
	 */
	struct ABP_Character_C_OnRep_bOffline__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_CurMatch__Overridden
	 */
	struct ABP_Character_C_OnRep_CurMatch__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_LeftWeaponList__Overridden
	 */
	struct ABP_Character_C_OnRep_LeftWeaponList__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_RightWeaponList__Overridden
	 */
	struct ABP_Character_C_OnRep_RightWeaponList__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.DoInteractiveStart__Overridden
	 */
	struct ABP_Character_C_DoInteractiveStart__Overridden_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    interactiveNum;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.DoOpenDeathBox__Overridden
	 */
	struct ABP_Character_C_DoOpenDeathBox__Overridden_Params
	{
	public:
		class AActor*                                              DeathBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DeathActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_MaxWalkSpeed__Overridden
	 */
	struct ABP_Character_C_OnRep_MaxWalkSpeed__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_SpeedRate
	 */
	struct ABP_Character_C_OnRep_SpeedRate_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ChangeCamera__Overridden
	 */
	struct ABP_Character_C_ChangeCamera__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_bSoul__Overridden
	 */
	struct ABP_Character_C_OnRep_bSoul__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_ThrowWeapon__Overridden
	 */
	struct ABP_Character_C_OnRep_ThrowWeapon__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.MyShowDamageNumber
	 */
	struct ABP_Character_C_MyShowDamageNumber_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isBaoji;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IIIC[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Character.BP_Character_C.SetHudIndex__Overridden
	 */
	struct ABP_Character_C_SetHudIndex__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_ThighId__Overridden
	 */
	struct ABP_Character_C_OnRep_ThighId__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_ChestId__Overridden
	 */
	struct ABP_Character_C_OnRep_ChestId__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_HelmetId__Overridden
	 */
	struct ABP_Character_C_OnRep_HelmetId__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_SecondWeaponId
	 */
	struct ABP_Character_C_OnRep_SecondWeaponId_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_MainWeaponId
	 */
	struct ABP_Character_C_OnRep_MainWeaponId_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_bSecondHp
	 */
	struct ABP_Character_C_OnRep_bSecondHp_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_maxSpeedChangeRate
	 */
	struct ABP_Character_C_OnRep_maxSpeedChangeRate_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_bDead__Overridden
	 */
	struct ABP_Character_C_OnRep_bDead__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_RoleId__Overridden
	 */
	struct ABP_Character_C_OnRep_RoleId__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.SetCameraBoom__Overridden
	 */
	struct ABP_Character_C_SetCameraBoom__Overridden_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      targetHeight;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      targetDis;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      reverseHeight;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      reverseDis;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      cacheHeight;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      cacheDis;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reverse;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_32OD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.CacheCameraSpringValue__Overridden
	 */
	struct ABP_Character_C_CacheCameraSpringValue__Overridden_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.IsSelf__Overridden
	 */
	struct ABP_Character_C_IsSelf__Overridden_Params
	{
	public:
		bool                                                       bself;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.LuaReceiveTick__Overridden
	 */
	struct ABP_Character_C_LuaReceiveTick__Overridden_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.MoveRightLua__Overridden
	 */
	struct ABP_Character_C_MoveRightLua__Overridden_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.MoveForwardLua__Overridden
	 */
	struct ABP_Character_C_MoveForwardLua__Overridden_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.LuaBeginPlay__Overridden
	 */
	struct ABP_Character_C_LuaBeginPlay__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.CrouchDown__FinishedFunc
	 */
	struct ABP_Character_C_CrouchDown__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.CrouchDown__UpdateFunc
	 */
	struct ABP_Character_C_CrouchDown__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveTick
	 */
	struct ABP_Character_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.MultUseControllerRotationYaw__Overridden
	 */
	struct ABP_Character_C_MultUseControllerRotationYaw__Overridden_Params
	{
	public:
		bool                                                       use;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.SendUseControllerRotationYaw
	 */
	struct ABP_Character_C_SendUseControllerRotationYaw_Params
	{
	public:
		bool                                                       use;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnMovementModeChanged__Overridden
	 */
	struct ABP_Character_C_K2_OnMovementModeChanged__Overridden_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.DoTL_Crouch
	 */
	struct ABP_Character_C_DoTL_Crouch_Params
	{
	public:
		bool                                                       Reverse;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.MultOwn_PlayHitSoundEffect__Overridden
	 */
	struct ABP_Character_C_MultOwn_PlayHitSoundEffect__Overridden_Params
	{
	public:
		int32_t                                                    hitAudioId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    hitEffectId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Character.BP_Character_C.ServerSetMaxSpeedChangeRate
	 */
	struct ABP_Character_C_ServerSetMaxSpeedChangeRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.Server_Jump__Overridden
	 */
	struct ABP_Character_C_Server_Jump__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.Mult_Jump__Overridden
	 */
	struct ABP_Character_C_Mult_Jump__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ServerChangeWeapon2Hand
	 */
	struct ABP_Character_C_ServerChangeWeapon2Hand_Params
	{
	public:
		bool                                                       onHand;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_379U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_BaseWeapon_C*                                    Weapon;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.Mult_Escape__Overridden
	 */
	struct ABP_Character_C_Mult_Escape__Overridden_Params
	{
	public:
		bool                                                       isRedGate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.ReceivePossessed
	 */
	struct ABP_Character_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.Mult_Possessed__Overridden
	 */
	struct ABP_Character_C_Mult_Possessed__Overridden_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.BPI_SetMovementState__Overridden
	 */
	struct ABP_Character_C_BPI_SetMovementState__Overridden_Params
	{
	public:
		E_MovementState                                            State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.STC_OnBattleStateChange__Overridden
	 */
	struct ABP_Character_C_STC_OnBattleStateChange__Overridden_Params
	{
	public:
		bool                                                       bInBattleState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.STC_OnAttributeChange
	 */
	struct ABP_Character_C_STC_OnAttributeChange_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.InteractiveActor
	 */
	struct ABP_Character_C_InteractiveActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ServerSetSpeedRate
	 */
	struct ABP_Character_C_ServerSetSpeedRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ServerChangeMoveDir__Overridden
	 */
	struct ABP_Character_C_ServerChangeMoveDir__Overridden_Params
	{
	public:
		int32_t                                                    Dir;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.OpenDeathBox
	 */
	struct ABP_Character_C_OpenDeathBox_Params
	{
	public:
		class AActor*                                              DeathBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DeathActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.InteractiveStart
	 */
	struct ABP_Character_C_InteractiveStart_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    interactiveNum;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ReviveTeammate
	 */
	struct ABP_Character_C_ReviveTeammate_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceId;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.Mult_PlayMontage
	 */
	struct ABP_Character_C_Mult_PlayMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StartTime;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isStopMontage;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.DrawServerDebugLine
	 */
	struct ABP_Character_C_DrawServerDebugLine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.BPI_Jumped
	 */
	struct ABP_Character_C_BPI_Jumped_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.BPI_EndReduceMoveSpeed__Overridden
	 */
	struct ABP_Character_C_BPI_EndReduceMoveSpeed__Overridden_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.BPI_BeginReduceMoveSpeed__Overridden
	 */
	struct ABP_Character_C_BPI_BeginReduceMoveSpeed__Overridden_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.BPI_PlaySoundEventName__Overridden
	 */
	struct ABP_Character_C_BPI_PlaySoundEventName__Overridden_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CfgId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.StartRagdoll
	 */
	struct ABP_Character_C_StartRagdoll_Params
	{
	public:
		float                                                      delayBakeTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.StopRagdoll
	 */
	struct ABP_Character_C_StopRagdoll_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
	 */
	struct ABP_Character_C_ExecuteUbergraph_BP_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
