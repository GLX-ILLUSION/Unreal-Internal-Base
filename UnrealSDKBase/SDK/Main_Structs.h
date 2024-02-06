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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Main.EOverlayType
	 */
	enum class EOverlayType : uint8_t
	{
		Default  = 0,
		Rifle    = 1,
		Pistol   = 2,
		Knife    = 3,
		TakeItem = 4,
		MAX      = 5
	};

	/**
	 * Enum Main.EEditInputType
	 */
	enum class EEditInputType : uint8_t
	{
		Normal         = 0,
		Number         = 1,
		AlphaAndNumber = 2,
		MAX            = 3
	};

	/**
	 * Enum Main.EWeaponType
	 */
	enum class EWeaponType : uint8_t
	{
		Rifle  = 0,
		Pistol = 1,
		Knife  = 2,
		MAX    = 3
	};

	/**
	 * Enum Main.EStateType
	 */
	enum class EStateType : uint8_t
	{
		Default = 0,
		Stand   = 1,
		Crouch  = 2,
		Vehicle = 3,
		Swim    = 4,
		Ground  = 5,
		Climb   = 6,
		InAir   = 7,
		BackTo  = 8,
		Ladder  = 9,
		MAX     = 10
	};

	/**
	 * Enum Main.EGameplayCueNotify_AttachPolicy
	 */
	enum class EGameplayCueNotify_AttachPolicy : uint8_t
	{
		DoNotAttach            = 0,
		AttachToTarget         = 1,
		EGameplayCueNotify_MAX = 2
	};

	/**
	 * Enum Main.EGameplayCueNotify_LocallyControlledPolicy
	 */
	enum class EGameplayCueNotify_LocallyControlledPolicy : uint8_t
	{
		Always                 = 0,
		LocalOnly              = 1,
		NotLocal               = 2,
		EGameplayCueNotify_MAX = 3
	};

	/**
	 * Enum Main.EGameplayCueNotify_LocallyControlledSource
	 */
	enum class EGameplayCueNotify_LocallyControlledSource : uint8_t
	{
		InstigatorActor        = 0,
		TargetActor            = 1,
		EGameplayCueNotify_MAX = 2
	};

	/**
	 * Enum Main.EGameplayCueNotify_EffectPlaySpace
	 */
	enum class EGameplayCueNotify_EffectPlaySpace : uint8_t
	{
		WorldSpace             = 0,
		CameraSpace            = 1,
		EGameplayCueNotify_MAX = 2
	};

	/**
	 * Enum Main.EClimbType
	 */
	enum class EClimbType : uint8_t
	{
		Cross         = 0,
		StandCross    = 1,
		HighDownClimb = 2,
		HighClimb     = 3,
		MAX           = 4
	};

	/**
	 * Enum Main.EGait
	 */
	enum class EGait : uint8_t
	{
		Walking = 0,
		Runing  = 1,
		Spring  = 2,
		MAX     = 3
	};

	/**
	 * Enum Main.EWidgetCenter
	 */
	enum class EWidgetCenter : uint8_t
	{
		ScreenCenter  = 0,
		MousePosition = 1,
		MAX           = 2
	};

	/**
	 * Enum Main.EButtonState
	 */
	enum class EButtonState : uint8_t
	{
		Active          = 0,
		Normal          = 1,
		Disabled        = 2,
		HoveredNormal   = 3,
		HoveredDisabled = 4,
		MAX             = 5
	};

	/**
	 * Enum Main.EFillMode
	 */
	enum class EFillMode : uint8_t
	{
		LeftToRight      = 0,
		RightToLeft      = 1,
		FillFromCenter   = 2,
		TopToBottom      = 3,
		BottomToTop      = 4,
		ClockWise        = 5,
		CounterClockWise = 6,
		MAX              = 7
	};

	/**
	 * Enum Main.EEaseMode
	 */
	enum class EEaseMode : uint8_t
	{
		LinearIn     = 0,
		QuadEaseIn   = 1,
		QuadEaseOut  = 2,
		CubicEaseIn  = 3,
		CubicEaseOut = 4,
		MAX          = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Main.GameplayCueNotify_SpawnCondition
	 * Size -> 0x0038
	 */
	struct FGameplayCueNotify_SpawnCondition
	{
	public:
		EGameplayCueNotify_LocallyControlledSource                 LocallyControlledSource;                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayCueNotify_LocallyControlledPolicy                 LocallyControlledPolicy;                                 // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRRG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToPlay;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      AllowedSurfaceTypes;                                     // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2F7[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      RejectedSurfaceTypes;                                    // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQ4W[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_PlacementInfo
	 * Size -> 0x0028
	 */
	struct FGameplayCueNotify_PlacementInfo
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayCueNotify_AttachPolicy                            AttachPolicy;                                            // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentRule;                                          // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI7N[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideRotation : 1;                                   // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideScale : 1;                                      // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLHO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationOverride;                                        // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ScaleOverride;                                           // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_ParticleInfo
	 * Size -> 0x0070
	 */
	struct FGameplayCueNotify_ParticleInfo
	{
	public:
		struct FGameplayCueNotify_SpawnCondition                   SpawnConditionOverride;                                  // 0x0000(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayCueNotify_PlacementInfo                    PlacementInfoOverride;                                   // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      NiagaraSystem;                                           // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSpawnCondition : 1;                             // 0x0068(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlacementInfo : 1;                              // 0x0068(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadow : 1;                                         // 0x0068(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0H9[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_SoundParameterInterfaceInfo
	 * Size -> 0x0008
	 */
	struct FGameplayCueNotify_SoundParameterInterfaceInfo
	{
	public:
		class FName                                                StopTriggerName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_SoundInfo
	 * Size -> 0x0088
	 */
	struct FGameplayCueNotify_SoundInfo
	{
	public:
		struct FGameplayCueNotify_SpawnCondition                   SpawnConditionOverride;                                  // 0x0000(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayCueNotify_PlacementInfo                    PlacementInfoOverride;                                   // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound;                                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SoundCue;                                                // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopingFadeOutDuration;                                  // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopingFadeVolumeLevel;                                  // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayCueNotify_SoundParameterInterfaceInfo      SoundParameterInterfaceInfo;                             // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideSpawnCondition : 1;                             // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlacementInfo : 1;                              // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSoundParameterInterface : 1;                         // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBK5[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_CameraShakeInfo
	 * Size -> 0x0080
	 */
	struct FGameplayCueNotify_CameraShakeInfo
	{
	public:
		struct FGameplayCueNotify_SpawnCondition                   SpawnConditionOverride;                                  // 0x0000(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayCueNotify_PlacementInfo                    PlacementInfoOverride;                                   // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              CameraShake;                                             // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShakeScale;                                              // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayCueNotify_EffectPlaySpace                         PlaySpace;                                               // 0x006C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMNC[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideSpawnCondition : 1;                             // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlacementInfo : 1;                              // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayInWorld : 1;                                        // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4XH[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorldInnerRadius;                                        // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldOuterRadius;                                        // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldFalloffExponent;                                    // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_ForceFeedbackInfo
	 * Size -> 0x0080
	 */
	struct FGameplayCueNotify_ForceFeedbackInfo
	{
	public:
		struct FGameplayCueNotify_SpawnCondition                   SpawnConditionOverride;                                  // 0x0000(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayCueNotify_PlacementInfo                    PlacementInfoOverride;                                   // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ForceFeedbackTag;                                        // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLooping : 1;                                          // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSpawnCondition : 1;                             // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlacementInfo : 1;                              // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayInWorld : 1;                                        // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RQE[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorldIntensity;                                          // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UForceFeedbackAttenuation*                           WorldAttenuation;                                        // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_DecalInfo
	 * Size -> 0x0080
	 */
	struct FGameplayCueNotify_DecalInfo
	{
	public:
		struct FGameplayCueNotify_SpawnCondition                   SpawnConditionOverride;                                  // 0x0000(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayCueNotify_PlacementInfo                    PlacementInfoOverride;                                   // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DecalSize;                                               // 0x0068(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSpawnCondition : 1;                             // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePlacementInfo : 1;                              // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFadeOut : 1;                                    // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNSG[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeOutStartDelay;                                       // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDuration;                                         // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_BurstEffects
	 * Size -> 0x01A0
	 */
	struct FGameplayCueNotify_BurstEffects
	{
	public:
		TArray<struct FGameplayCueNotify_ParticleInfo>             BurstParticles;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayCueNotify_SoundInfo>                BurstSounds;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_CameraShakeInfo                  BurstCameraShake;                                        // 0x0020(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_ForceFeedbackInfo                BurstForceFeedback;                                      // 0x00A0(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_DecalInfo                        BurstDecal;                                              // 0x0120(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Main.MaskClip
	 * Size -> 0x0028
	 */
	struct FMaskClip
	{
	public:
		unsigned char                                              UnknownData_HQIM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MaskTex;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MaskPosition;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MaskSize;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClipEnable;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4I9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.MaskSlateStyle
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FMaskSlateStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FMaskClip>                                   MaskClips;                                               // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MaskMatBrush;                                            // 0x00A0(0x0088) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.MultLevelMenuParam
	 * Size -> 0x0030
	 */
	struct FMultLevelMenuParam
	{
	public:
		float                                                      interval;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           btnSize;                                                 // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClickRadiaMin;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClickRadiaMax;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IconRadiaLen;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           iconSize;                                                // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ButtonClass;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.SelfTouchInputControl
	 * Size -> 0x0168
	 */
	struct FSelfTouchInputControl
	{
	public:
		struct FSlateBrush                                         Image1;                                                  // 0x0000(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Image2;                                                  // 0x0088(0x0088) Edit, NativeAccessSpecifierPublic
		struct FVector2D                                           Center;                                                  // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           VisualSize;                                              // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ThumbSize;                                               // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InteractionSize;                                         // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           inputScale;                                              // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                MainInputKey;                                            // 0x0138(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                AltInputKey;                                             // 0x0150(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.CustomGameplayEffectContext
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	struct FCustomGameplayEffectContext : public FGameplayEffectContext
	{
	public:
		unsigned char                                              UnknownData_WS69[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.GameplayAbilityTargetData_FireProjectileInfo
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_FireProjectileInfo : public FGameplayAbilityTargetData
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FVector                                             StartPos;                                                // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQEE[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.GameplayAbilityTargetData_MeleeHitInfo
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_MeleeHitInfo : public FGameplayAbilityTargetData
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayAbilityTargetData_Msg
	 * Size -> 0x00B0 (FullSize[0x00B8] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_Msg : public FGameplayAbilityTargetData
	{
	public:
		TArray<TWeakObjectPtr<class AActor>>                       TargetActorArray;                                        // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0018(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K46C[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Data;                                                    // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GameplayAbilityTargetData_SingleInt
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_SingleInt : public FGameplayAbilityTargetData
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3CT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_LoopingEffects
	 * Size -> 0x0120
	 */
	struct FGameplayCueNotify_LoopingEffects
	{
	public:
		TArray<struct FGameplayCueNotify_ParticleInfo>             LoopingParticles;                                        // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayCueNotify_SoundInfo>                LoopingSounds;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_CameraShakeInfo                  LoopingCameraShake;                                      // 0x0020(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_ForceFeedbackInfo                LoopingForceFeedback;                                    // 0x00A0(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Main.GameplayCueNotify_SpawnResult
	 * Size -> 0x0048
	 */
	struct FGameplayCueNotify_SpawnResult
	{
	public:
		TArray<class UFXSystemComponent*>                          FxSystemComponents;                                      // 0x0000(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UAudioComponent*>                             AudioComponents;                                         // 0x0010(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UCameraShakeBase*>                            CameraShakes;                                            // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class UForceFeedbackComponent*                             ForceFeedbackComponent;                                  // 0x0030(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerController*                                   ForceFeedbackTargetPC;                                   // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDecalComponent*                                     DecalComponent;                                          // 0x0040(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.GridPanelAutoAddChildren
	 * Size -> 0x0020
	 */
	struct FGridPanelAutoAddChildren
	{
	public:
		int32_t                                                    Rows;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           childSize;                                               // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      evenRowBegin;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      oddRowBegin;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemInter;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ButtonClass;                                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Main.PoolingManagerData
	 * Size -> 0x00B0
	 */
	struct FPoolingManagerData
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitCount;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReadyActors[0x50];                                       // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              WaitRecycleActors[0x50];                                 // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Main.RecoilGraph_Struct
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRecoilGraph_Struct : public FTableRowBase
	{
	public:
		bool                                                       Empty;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5S7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Pos;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
