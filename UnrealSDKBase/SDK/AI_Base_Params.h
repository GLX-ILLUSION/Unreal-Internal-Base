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
	 * LuaFunction AI_Base.AI_Base_C.ClientPlayEffectAttached
	 */
	struct AAI_Base_C_ClientPlayEffectAttached_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ReceiveDestroyed
	 */
	struct AAI_Base_C_ReceiveDestroyed_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.LockLookAtTarget
	 */
	struct AAI_Base_C_LockLookAtTarget_Params
	{
	public:
		float                                                      RotateSpeedRate;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ReceiveActorEndOverlap
	 */
	struct AAI_Base_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientUseDoll
	 */
	struct AAI_Base_C_ClientUseDoll_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientStopSlotMontage
	 */
	struct AAI_Base_C_ClientStopSlotMontage_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.GetLeftHandHoldWeaponMesh
	 */
	struct AAI_Base_C_GetLeftHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientPlaySound
	 */
	struct AAI_Base_C_ClientPlaySound_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.InitMonster
	 */
	struct AAI_Base_C_InitMonster_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.GetRightHandHoldWeaponMesh
	 */
	struct AAI_Base_C_GetRightHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.GetInteractionFunctions
	 */
	struct AAI_Base_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ReceiveEndPlay
	 */
	struct AAI_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientDie
	 */
	struct AAI_Base_C_ClientDie_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.OnRep_MoveBlendSpace
	 */
	struct AAI_Base_C_OnRep_MoveBlendSpace_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientPlayEffectById
	 */
	struct AAI_Base_C_ClientPlayEffectById_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaved;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.OnRep_Hp
	 */
	struct AAI_Base_C_OnRep_Hp_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.Die
	 */
	struct AAI_Base_C_Die_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 DamageEffectSpec;                                        // 0x0010(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      DamageMagnitude;                                         // 0x02B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QU2L[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AvatarActor;                                             // 0x02B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02C0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.K2_AddAbilities
	 */
	struct AAI_Base_C_K2_AddAbilities_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientStopAllMontage
	 */
	struct AAI_Base_C_ClientStopAllMontage_Params
	{	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientPlayEffect
	 */
	struct AAI_Base_C_ClientPlayEffect_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaved;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientStopMontage
	 */
	struct AAI_Base_C_ClientStopMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ReceiveActorBeginOverlap
	 */
	struct AAI_Base_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientStopEffectById
	 */
	struct AAI_Base_C_ClientStopEffectById_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction AI_Base.AI_Base_C.ClientStopEffect
	 */
	struct AAI_Base_C_ClientStopEffect_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.GetInteractionFunctions__Overridden
	 */
	struct AAI_Base_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function AI_Base.AI_Base_C.GetMenuName
	 */
	struct AAI_Base_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.GetModuleName
	 */
	struct AAI_Base_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientUseDoll__Overridden
	 */
	struct AAI_Base_C_ClientUseDoll__Overridden_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.OnRep_MoveBlendSpace__Overridden
	 */
	struct AAI_Base_C_OnRep_MoveBlendSpace__Overridden_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.OnRep_Hp__Overridden
	 */
	struct AAI_Base_C_OnRep_Hp__Overridden_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.ClientPlayEffectAttached__Overridden
	 */
	struct AAI_Base_C_ClientPlayEffectAttached__Overridden_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.LuaServerBeginPlay
	 */
	struct AAI_Base_C_LuaServerBeginPlay_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.ClientStopEffectById__Overridden
	 */
	struct AAI_Base_C_ClientStopEffectById__Overridden_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientPlayEffectById__Overridden
	 */
	struct AAI_Base_C_ClientPlayEffectById__Overridden_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaved;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientRotateTo
	 */
	struct AAI_Base_C_ClientRotateTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientStopEffect__Overridden
	 */
	struct AAI_Base_C_ClientStopEffect__Overridden_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientPlayEffect__Overridden
	 */
	struct AAI_Base_C_ClientPlayEffect__Overridden_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaved;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientPlaySound__Overridden
	 */
	struct AAI_Base_C_ClientPlaySound__Overridden_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientElectricShock
	 */
	struct AAI_Base_C_ClientElectricShock_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.ClientStopSlotMontage__Overridden
	 */
	struct AAI_Base_C_ClientStopSlotMontage__Overridden_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientStopMontage__Overridden
	 */
	struct AAI_Base_C_ClientStopMontage__Overridden_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.ClientStopAllMontage__Overridden
	 */
	struct AAI_Base_C_ClientStopAllMontage__Overridden_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.ClientDie__Overridden
	 */
	struct AAI_Base_C_ClientDie__Overridden_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.InitMonster__Overridden
	 */
	struct AAI_Base_C_InitMonster__Overridden_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.MultiStopMontage
	 */
	struct AAI_Base_C_MultiStopMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiStopSlotMontage
	 */
	struct AAI_Base_C_MultiStopSlotMontage_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiStopAllMontage
	 */
	struct AAI_Base_C_MultiStopAllMontage_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.MultiSetCollisionEnable
	 */
	struct AAI_Base_C_MultiSetCollisionEnable_Params
	{
	public:
		bool                                                       SelfEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiSetVisible
	 */
	struct AAI_Base_C_MultiSetVisible_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiElectricShock
	 */
	struct AAI_Base_C_MultiElectricShock_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.MultiDie
	 */
	struct AAI_Base_C_MultiDie_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.MultiPlaySound
	 */
	struct AAI_Base_C_MultiPlaySound_Params
	{
	public:
		int32_t                                                    SoundId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiPlayEffect
	 */
	struct AAI_Base_C_MultiPlayEffect_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaved;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiStopEffect
	 */
	struct AAI_Base_C_MultiStopEffect_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiRotateTo
	 */
	struct AAI_Base_C_MultiRotateTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiPlayEffectById
	 */
	struct AAI_Base_C_MultiPlayEffectById_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaved;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiStopEffectById
	 */
	struct AAI_Base_C_MultiStopEffectById_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiPlayEffectAttached
	 */
	struct AAI_Base_C_MultiPlayEffectAttached_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.UseDoll
	 */
	struct AAI_Base_C_UseDoll_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.ReceiveBeginPlay
	 */
	struct AAI_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.LockLookAtTarget__Overridden
	 */
	struct AAI_Base_C_LockLookAtTarget__Overridden_Params
	{
	public:
		float                                                      RotateSpeedRate;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.DrawDebugPos
	 */
	struct AAI_Base_C_DrawDebugPos_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        LineColor;                                               // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AI_Base.AI_Base_C.MultiPlayMontage
	 */
	struct AAI_Base_C_MultiPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StartTime;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isStopMontage;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AI_Base.AI_Base_C.StartRagdoll
	 */
	struct AAI_Base_C_StartRagdoll_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.StopRagdoll
	 */
	struct AAI_Base_C_StopRagdoll_Params
	{	};

	/**
	 * Function AI_Base.AI_Base_C.ExecuteUbergraph_AI_Base
	 */
	struct AAI_Base_C_ExecuteUbergraph_AI_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J82I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
