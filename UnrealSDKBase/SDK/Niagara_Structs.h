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
	 * Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
	 */
	enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
	{
		SetSystemInactive = 0,
		Deactivate        = 1,
		None              = 2,
		MAX               = 3
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
	 */
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
	{
		ActivateIfInactive = 0,
		None               = 1,
		MAX                = 2
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
	 */
	enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
	{
		Activate = 0,
		MAX      = 1
	};

	/**
	 * Enum Niagara.ENiagaraBakerViewMode
	 */
	enum class ENiagaraBakerViewMode : uint8_t
	{
		Perspective = 0,
		OrthoFront  = 1,
		OrthoBack   = 2,
		OrthoLeft   = 3,
		OrthoRight  = 4,
		OrthoTop    = 5,
		OrthoBottom = 6,
		Num         = 7,
		MAX         = 8
	};

	/**
	 * Enum Niagara.ENiagaraCollisionMode
	 */
	enum class ENiagaraCollisionMode : uint8_t
	{
		None          = 0,
		SceneGeometry = 1,
		DepthBuffer   = 2,
		DistanceField = 3,
		MAX           = 4
	};

	/**
	 * Enum Niagara.ENiagaraFunctionDebugState
	 */
	enum class ENiagaraFunctionDebugState : uint8_t
	{
		NoDebug = 0,
		Basic   = 1,
		MAX     = 2
	};

	/**
	 * Enum Niagara.ENiagaraSystemInstanceState
	 */
	enum class ENiagaraSystemInstanceState : uint8_t
	{
		None               = 0,
		PendingSpawn       = 1,
		PendingSpawnPaused = 2,
		Spawning           = 3,
		Running            = 4,
		Paused             = 5,
		Num                = 6,
		MAX                = 7
	};

	/**
	 * Enum Niagara.ENCPoolMethod
	 */
	enum class ENCPoolMethod : uint8_t
	{
		None                     = 0,
		AutoRelease              = 1,
		ManualRelease            = 2,
		ManualRelease_OnComplete = 3,
		FreeInPool               = 4,
		MAX                      = 5
	};

	/**
	 * Enum Niagara.ENiagaraLegacyTrailWidthMode
	 */
	enum class ENiagaraLegacyTrailWidthMode : uint8_t
	{
		FromCentre = 0,
		FromFirst  = 1,
		FromSecond = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraRendererSourceDataMode
	 */
	enum class ENiagaraRendererSourceDataMode : uint8_t
	{
		Particles = 0,
		Emitter   = 1,
		MAX       = 2
	};

	/**
	 * Enum Niagara.ENiagaraBindingSource
	 */
	enum class ENiagaraBindingSource : uint8_t
	{
		ImplicitFromSource = 0,
		ExplicitParticles  = 1,
		ExplicitEmitter    = 2,
		ExplicitSystem     = 3,
		ExplicitUser       = 4,
		MaxBindingSource   = 5,
		MAX                = 6
	};

	/**
	 * Enum Niagara.ENiagaraIterationSource
	 */
	enum class ENiagaraIterationSource : uint8_t
	{
		Particles     = 0,
		DataInterface = 1,
		MAX           = 2
	};

	/**
	 * Enum Niagara.ENiagaraScriptGroup
	 */
	enum class ENiagaraScriptGroup : uint8_t
	{
		Particle = 0,
		Emitter  = 1,
		System   = 2,
		Max      = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptContextStaticSwitch
	 */
	enum class ENiagaraScriptContextStaticSwitch : uint8_t
	{
		System   = 0,
		Emitter  = 1,
		Particle = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraCompileUsageStaticSwitch
	 */
	enum class ENiagaraCompileUsageStaticSwitch : uint8_t
	{
		Spawn           = 0,
		Update          = 1,
		Event           = 2,
		SimulationStage = 3,
		Default         = 4,
		MAX             = 5
	};

	/**
	 * Enum Niagara.ENiagaraScriptUsage
	 */
	enum class ENiagaraScriptUsage : uint8_t
	{
		Function                        = 0,
		Module                          = 1,
		DynamicInput                    = 2,
		ParticleSpawnScript             = 3,
		ParticleSpawnScriptInterpolated = 4,
		ParticleUpdateScript            = 5,
		ParticleEventScript             = 6,
		ParticleSimulationStageScript   = 7,
		ParticleGPUComputeScript        = 8,
		EmitterSpawnScript              = 9,
		EmitterUpdateScript             = 10,
		SystemSpawnScript               = 11,
		SystemUpdateScript              = 12,
		MAX                             = 13
	};

	/**
	 * Enum Niagara.ENiagaraScriptCompileStatus
	 */
	enum class ENiagaraScriptCompileStatus : uint8_t
	{
		NCS_Unknown                     = 0,
		NCS_Dirty                       = 1,
		NCS_Error                       = 2,
		NCS_UpToDate                    = 3,
		NCS_BeingCreated                = 4,
		NCS_UpToDateWithWarnings        = 5,
		NCS_ComputeUpToDateWithWarnings = 6,
		NCS_MAX                         = 7
	};

	/**
	 * Enum Niagara.ENiagaraInputNodeUsage
	 */
	enum class ENiagaraInputNodeUsage : uint8_t
	{
		Undefined               = 0,
		Parameter               = 1,
		Attribute               = 2,
		SystemConstant          = 3,
		TranslatorConstant      = 4,
		RapidIterationParameter = 5,
		MAX                     = 6
	};

	/**
	 * Enum Niagara.ENiagaraDataSetType
	 */
	enum class ENiagaraDataSetType : uint8_t
	{
		ParticleData = 0,
		Shared       = 1,
		Event        = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraStatDisplayMode
	 */
	enum class ENiagaraStatDisplayMode : uint8_t
	{
		Percent  = 0,
		Absolute = 1,
		MAX      = 2
	};

	/**
	 * Enum Niagara.ENiagaraStatEvaluationType
	 */
	enum class ENiagaraStatEvaluationType : uint8_t
	{
		Average = 0,
		Maximum = 1,
		MAX     = 2
	};

	/**
	 * Enum Niagara.ENiagaraAgeUpdateMode
	 */
	enum class ENiagaraAgeUpdateMode : uint8_t
	{
		TickDeltaTime    = 0,
		DesiredAge       = 1,
		DesiredAgeNoSeek = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraSimTarget
	 */
	enum class ENiagaraSimTarget : uint8_t
	{
		CPUSim        = 0,
		GPUComputeSim = 1,
		MAX           = 2
	};

	/**
	 * Enum Niagara.ENiagaraRendererMotionVectorSetting
	 */
	enum class ENiagaraRendererMotionVectorSetting : uint8_t
	{
		AutoDetect  = 0,
		Precise     = 1,
		Approximate = 2,
		Disable     = 3,
		MAX         = 4
	};

	/**
	 * Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
	 */
	enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t
	{
		Precise     = 0,
		Approximate = 1,
		MAX         = 2
	};

	/**
	 * Enum Niagara.ENiagaraDefaultMode
	 */
	enum class ENiagaraDefaultMode : uint8_t
	{
		Value                  = 0,
		Binding                = 1,
		Custom                 = 2,
		FailIfPreviouslyNotSet = 3,
		MAX                    = 4
	};

	/**
	 * Enum Niagara.ENiagaraMipMapGeneration
	 */
	enum class ENiagaraMipMapGeneration : uint8_t
	{
		Disabled     = 0,
		PostStage    = 1,
		PostSimulate = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraGpuBufferFormat
	 */
	enum class ENiagaraGpuBufferFormat : uint8_t
	{
		Float                  = 0,
		HalfFloat              = 1,
		UnsignedNormalizedByte = 2,
		Max                    = 3
	};

	/**
	 * Enum Niagara.ENiagaraTickBehavior
	 */
	enum class ENiagaraTickBehavior : uint8_t
	{
		UsePrereqs            = 0,
		UseComponentTickGroup = 1,
		ForceTickFirst        = 2,
		ForceTickLast         = 3,
		MAX                   = 4
	};

	/**
	 * Enum Niagara.ENDIExport_GPUAllocationMode
	 */
	enum class ENDIExport_GPUAllocationMode : uint8_t
	{
		FixedSize      = 0,
		PerParticle    = 1,
		ENDIExport_MAX = 2
	};

	/**
	 * Enum Niagara.ENDILandscape_SourceMode
	 */
	enum class ENDILandscape_SourceMode : uint8_t
	{
		Default           = 0,
		Source            = 1,
		AttachParent      = 2,
		ENDILandscape_MAX = 3
	};

	/**
	 * Enum Niagara.ESetResolutionMethod
	 */
	enum class ESetResolutionMethod : uint8_t
	{
		Independent = 0,
		MaxAxis     = 1,
		CellSize    = 2,
		MAX         = 3
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SkinningMode
	 */
	enum class ENDISkeletalMesh_SkinningMode : uint8_t
	{
		Invalid              = 0,
		None                 = 1,
		SkinOnTheFly         = 2,
		PreSkin              = 3,
		ENDISkeletalMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SourceMode
	 */
	enum class ENDISkeletalMesh_SourceMode : uint8_t
	{
		Default              = 0,
		Source               = 1,
		AttachParent         = 2,
		ENDISkeletalMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENDIStaticMesh_SourceMode
	 */
	enum class ENDIStaticMesh_SourceMode : uint8_t
	{
		Default            = 0,
		Source             = 1,
		AttachParent       = 2,
		DefaultMeshOnly    = 3,
		ENDIStaticMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudVerbosity
	 */
	enum class ENiagaraDebugHudVerbosity : uint8_t
	{
		None    = 0,
		Basic   = 1,
		Verbose = 2,
		MAX     = 3
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudFont
	 */
	enum class ENiagaraDebugHudFont : uint8_t
	{
		Small  = 0,
		Normal = 1,
		MAX    = 2
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudVAlign
	 */
	enum class ENiagaraDebugHudVAlign : uint8_t
	{
		Top    = 0,
		Center = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum Niagara.ENiagaraDebugHudHAlign
	 */
	enum class ENiagaraDebugHudHAlign : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum Niagara.ENiagaraDebugPlaybackMode
	 */
	enum class ENiagaraDebugPlaybackMode : uint8_t
	{
		Play   = 0,
		Loop   = 1,
		Paused = 2,
		Step   = 3,
		MAX    = 4
	};

	/**
	 * Enum Niagara.ENiagaraScalabilityUpdateFrequency
	 */
	enum class ENiagaraScalabilityUpdateFrequency : uint8_t
	{
		SpawnOnly  = 0,
		Low        = 1,
		Medium     = 2,
		High       = 3,
		Continuous = 4,
		MAX        = 5
	};

	/**
	 * Enum Niagara.ENiagaraCullReaction
	 */
	enum class ENiagaraCullReaction : uint8_t
	{
		Deactivate                = 0,
		DeactivateImmediate       = 1,
		DeactivateResume          = 2,
		DeactivateImmediateResume = 3,
		MAX                       = 4
	};

	/**
	 * Enum Niagara.EParticleAllocationMode
	 */
	enum class EParticleAllocationMode : uint8_t
	{
		AutomaticEstimate = 0,
		ManualEstimate    = 1,
		MAX               = 2
	};

	/**
	 * Enum Niagara.EScriptExecutionMode
	 */
	enum class EScriptExecutionMode : uint8_t
	{
		EveryParticle    = 0,
		SpawnedParticles = 1,
		SingleParticle   = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraSortMode
	 */
	enum class ENiagaraSortMode : uint8_t
	{
		None            = 0,
		ViewDepth       = 1,
		ViewDistance    = 2,
		CustomAscending = 3,
		CustomDecending = 4,
		MAX             = 5
	};

	/**
	 * Enum Niagara.ENiagaraMeshLockedAxisSpace
	 */
	enum class ENiagaraMeshLockedAxisSpace : uint8_t
	{
		Simulation = 0,
		World      = 1,
		Local      = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraMeshPivotOffsetSpace
	 */
	enum class ENiagaraMeshPivotOffsetSpace : uint8_t
	{
		Mesh       = 0,
		Simulation = 1,
		World      = 2,
		Local      = 3,
		MAX        = 4
	};

	/**
	 * Enum Niagara.ENiagaraMeshFacingMode
	 */
	enum class ENiagaraMeshFacingMode : uint8_t
	{
		Default        = 0,
		Velocity       = 1,
		CameraPosition = 2,
		CameraPlane    = 3,
		MAX            = 4
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSetState
	 */
	enum class ENiagaraPlatformSetState : uint8_t
	{
		Disabled = 0,
		Enabled  = 1,
		Active   = 2,
		Unknown  = 3,
		MAX      = 4
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSelectionState
	 */
	enum class ENiagaraPlatformSelectionState : uint8_t
	{
		Default  = 0,
		Enabled  = 1,
		Disabled = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraPreviewGridResetMode
	 */
	enum class ENiagaraPreviewGridResetMode : uint8_t
	{
		Never      = 0,
		Individual = 1,
		All        = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonUVDistributionMode
	 */
	enum class ENiagaraRibbonUVDistributionMode : uint8_t
	{
		ScaledUniformly                = 0,
		ScaledUsingRibbonSegmentLength = 1,
		TiledOverRibbonLength          = 2,
		TiledFromStartOverRibbonLength = 3,
		MAX                            = 4
	};

	/**
	 * Enum Niagara.ENiagaraRibbonUVEdgeMode
	 */
	enum class ENiagaraRibbonUVEdgeMode : uint8_t
	{
		SmoothTransition = 0,
		Locked           = 1,
		MAX              = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonTessellationMode
	 */
	enum class ENiagaraRibbonTessellationMode : uint8_t
	{
		Automatic = 0,
		Custom    = 1,
		Disabled  = 2,
		MAX       = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonShapeMode
	 */
	enum class ENiagaraRibbonShapeMode : uint8_t
	{
		Plane      = 0,
		MultiPlane = 1,
		Tube       = 2,
		Custom     = 3,
		MAX        = 4
	};

	/**
	 * Enum Niagara.ENiagaraRibbonDrawDirection
	 */
	enum class ENiagaraRibbonDrawDirection : uint8_t
	{
		FrontToBack = 0,
		BackToFront = 1,
		MAX         = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonAgeOffsetMode
	 */
	enum class ENiagaraRibbonAgeOffsetMode : uint8_t
	{
		Scale = 0,
		Clip  = 1,
		MAX   = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonFacingMode
	 */
	enum class ENiagaraRibbonFacingMode : uint8_t
	{
		Screen           = 0,
		Custom           = 1,
		CustomSideVector = 2,
		MAX              = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptTemplateSpecification
	 */
	enum class ENiagaraScriptTemplateSpecification : uint8_t
	{
		None     = 0,
		Template = 1,
		Behavior = 2,
		MAX      = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptLibraryVisibility
	 */
	enum class ENiagaraScriptLibraryVisibility : uint8_t
	{
		Invalid   = 0,
		Unexposed = 1,
		Library   = 2,
		Hidden    = 3,
		MAX       = 4
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyScriptConstraint
	 */
	enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
	{
		SameScript = 0,
		AllScripts = 1,
		MAX        = 2
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyType
	 */
	enum class ENiagaraModuleDependencyType : uint8_t
	{
		PreDependency  = 0,
		PostDependency = 1,
		MAX            = 2
	};

	/**
	 * Enum Niagara.EUnusedAttributeBehaviour
	 */
	enum class EUnusedAttributeBehaviour : uint8_t
	{
		Copy        = 0,
		Zero        = 1,
		None        = 2,
		MarkInvalid = 3,
		PassThrough = 4,
		MAX         = 5
	};

	/**
	 * Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
	 */
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
	{
		Full             = 0,
		Half             = 1,
		ENDISkelMesh_MAX = 2
	};

	/**
	 * Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
	 */
	enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
	{
		Full             = 0,
		Limited_24       = 1,
		Limited_23       = 2,
		ENDISkelMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENDISkelMesh_GpuMaxInfluences
	 */
	enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
	{
		AllowMax4        = 0,
		AllowMax8        = 1,
		Unlimited        = 2,
		ENDISkelMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraSpriteFacingMode
	 */
	enum class ENiagaraSpriteFacingMode : uint8_t
	{
		FaceCamera              = 0,
		FaceCameraPlane         = 1,
		CustomFacingVector      = 2,
		FaceCameraPosition      = 3,
		FaceCameraDistanceBlend = 4,
		MAX                     = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteAlignment
	 */
	enum class ENiagaraSpriteAlignment : uint8_t
	{
		Unaligned       = 0,
		VelocityAligned = 1,
		CustomAlignment = 2,
		MAX             = 3
	};

	/**
	 * Enum Niagara.ENiagaraOrientationAxis
	 */
	enum class ENiagaraOrientationAxis : uint8_t
	{
		XAxis = 0,
		YAxis = 1,
		ZAxis = 2,
		MAX   = 3
	};

	/**
	 * Enum Niagara.ENiagaraPythonUpdateScriptReference
	 */
	enum class ENiagaraPythonUpdateScriptReference : uint8_t
	{
		None            = 0,
		ScriptAsset     = 1,
		DirectTextEntry = 2,
		MAX             = 3
	};

	/**
	 * Enum Niagara.ENiagaraCoordinateSpace
	 */
	enum class ENiagaraCoordinateSpace : uint8_t
	{
		Simulation = 0,
		World      = 1,
		Local      = 2,
		MAX        = 3
	};

	/**
	 * Enum Niagara.ENiagaraExecutionState
	 */
	enum class ENiagaraExecutionState : uint8_t
	{
		Active        = 0,
		Inactive      = 1,
		InactiveClear = 2,
		Complete      = 3,
		Disabled      = 4,
		Num           = 5,
		MAX           = 6
	};

	/**
	 * Enum Niagara.ENiagaraExecutionStateSource
	 */
	enum class ENiagaraExecutionStateSource : uint8_t
	{
		Scalability        = 0,
		Internal           = 1,
		Owner              = 2,
		InternalCompletion = 3,
		MAX                = 4
	};

	/**
	 * Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
	 */
	enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
	{
		None     = 0,
		Largest  = 1,
		Smallest = 2,
		Scalar   = 3,
		MAX      = 4
	};

	/**
	 * Enum Niagara.ENiagaraVariantMode
	 */
	enum class ENiagaraVariantMode : uint8_t
	{
		None          = 0,
		Object        = 1,
		DataInterface = 2,
		Bytes         = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinitionHandle
	 * Size -> 0x0004
	 */
	struct FNiagaraTypeDefinitionHandle
	{
	public:
		int32_t                                                    RegisteredTypeIndex;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableBase
	 * Size -> 0x000C
	 */
	struct FNiagaraVariableBase
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraTypeDefinitionHandle                        TypeDefHandle;                                           // 0x0008(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariable
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FNiagaraVariable : public FNiagaraVariableBase
	{
	public:
		unsigned char                                              UnknownData_REAO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      VarData;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraBakerTextureSource
	 * Size -> 0x0008
	 */
	struct FNiagaraBakerTextureSource
	{
	public:
		class FName                                                SourceName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraBakerTextureSettings
	 * Size -> 0x0030
	 */
	struct FNiagaraBakerTextureSettings
	{
	public:
		class FName                                                OutputName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraBakerTextureSource                          SourceBinding;                                           // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFrameSize : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YEUV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           FrameSize;                                               // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           TextureSize;                                             // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FW5W[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GeneratedTexture;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableWithOffset
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
	{
	public:
		int32_t                                                    Offset;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterStore
	 * Size -> 0x0078
	 */
	struct FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_4DCP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraVariableWithOffset>                  SortedParameterOffsets;                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      ParameterData;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UNiagaraDataInterface*>                       DataInterfaces;                                          // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     UObjects;                                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O8SE[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
	{
	public:
		TMap<struct FNiagaraVariable, struct FNiagaraVariable>     UserParameterRedirects;                                  // 0x0078(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraMaterialOverride
	 * Size -> 0x0018
	 */
	struct FNiagaraMaterialOverride
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaterialSubIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCP0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraRendererProperties*                          EmitterRendererProperty;                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NCPoolElement
	 * Size -> 0x0010
	 */
	struct FNCPoolElement
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AF2C[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NCPool
	 * Size -> 0x0010
	 */
	struct FNCPool
	{
	public:
		TArray<struct FNCPoolElement>                              FreeElements;                                            // 0x0000(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
	 * Size -> 0x0010
	 */
	struct FNiagaraDeviceProfileStateEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   QualityLevelMask;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SetQualityLevelMask;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
	 * Size -> 0x0028
	 */
	struct FNiagaraPlatformSetCVarCondition
	{
	public:
		class FName                                                CVarName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N13B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinInt;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInt;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFloat;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFloat;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinInt : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxInt : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMinFloat : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxFloat : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BRD[0xB];                                   // 0x001D(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSet
	 * Size -> 0x0030
	 */
	struct FNiagaraPlatformSet
	{
	public:
		int32_t                                                    QualityLevelMask;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I52J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDeviceProfileStateEntry>             DeviceProfileStates;                                     // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetCVarCondition>            CVarConditions;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL1T[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableAttributeBinding
	 * Size -> 0x0058
	 */
	struct FNiagaraVariableAttributeBinding
	{
	public:
		struct FNiagaraVariableBase                                ParamMapVariable;                                        // 0x0000(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TLCM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariable                                    DataSetVariable;                                         // 0x0010(0x0020) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraVariable                                    RootVariable;                                            // 0x0030(0x0020) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENiagaraBindingSource                                      BindingSourceMode;                                       // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JOYS[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBindingExistsOnSource : 1;                              // 0x0054(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCachedParticleValue : 1;                              // 0x0054(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TB82[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinition
	 * Size -> 0x0010
	 */
	struct FNiagaraTypeDefinition
	{
	public:
		class UObject*                                             ClassStructOrEnum;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UnderlyingType;                                          // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KOF[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraComponentPropertyBinding
	 * Size -> 0x00E8
	 */
	struct FNiagaraComponentPropertyBinding
	{
	public:
		struct FNiagaraVariableAttributeBinding                    AttributeBinding;                                        // 0x0000(0x0058) NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraTypeDefinition                              PropertyType;                                            // 0x0060(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MetadataSetterName;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         PropertySetterParameterDefaults;                         // 0x0078(0x0050) NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    WritableValue;                                           // 0x00C8(0x0020) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraUserParameterBinding
	 * Size -> 0x0020
	 */
	struct FNiagaraUserParameterBinding
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0020) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NDIStaticMeshSectionFilter
	 * Size -> 0x0010
	 */
	struct FNDIStaticMeshSectionFilter
	{
	public:
		TArray<int32_t>                                            AllowedMaterialSlots;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebugHUDVariable
	 * Size -> 0x0018
	 */
	struct FNiagaraDebugHUDVariable
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQQ1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebugHudTextOptions
	 * Size -> 0x0010
	 */
	struct FNiagaraDebugHudTextOptions
	{
	public:
		ENiagaraDebugHudFont                                       Font;                                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HXP[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHudHAlign                                     HorizontalAlignment;                                     // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDebugHudVAlign                                     VerticalAlignment;                                       // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGVR[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenOffset;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebugHUDSettingsData
	 * Size -> 0x00E0
	 */
	struct FNiagaraDebugHUDSettingsData
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidateSystemSimulationDataBuffers;                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidateParticleDataBuffers;                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverviewEnabled;                                        // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDebugHudFont                                       OverviewFont;                                            // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IE9H[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector2D                                           OverviewLocation;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorFilter;                                             // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComponentFilterEnabled;                                 // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KWA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentFilter;                                         // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemFilterEnabled;                                    // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8T8[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SystemFilter;                                            // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmitterFilterEnabled;                                   // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UYK[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EmitterFilter;                                           // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActorFilterEnabled;                                     // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BMPF[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraDebugHudVerbosity                                  SystemDebugVerbosity;                                    // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRTK[0x3];                                   // 0x006D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDebugHudVerbosity                                  SystemEmitterVerbosity;                                  // 0x0070(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O721[0x3];                                   // 0x0071(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSystemShowBounds;                                       // 0x0074(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSystemShowActiveOnlyInWorld;                            // 0x0075(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSystemVariables;                                    // 0x0076(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FA9U[0x1];                                   // 0x0077(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDebugHUDVariable>                    SystemVariables;                                         // 0x0078(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FNiagaraDebugHudTextOptions                         SystemTextOptions;                                       // 0x0088(0x0010) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowParticleVariables;                                  // 0x0098(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGpuParticleReadback;                              // 0x0099(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8TX[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDebugHUDVariable>                    ParticlesVariables;                                      // 0x00A0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FNiagaraDebugHudTextOptions                         ParticleTextOptions;                                     // 0x00B0(0x0010) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowParticlesVariablesWithSystem;                       // 0x00C0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxParticlesToDisplay;                               // 0x00C1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUKS[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxParticlesToDisplay;                                   // 0x00C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDebugPlaybackMode                                  PlaybackMode;                                            // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlaybackRateEnabled;                                    // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJGE[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlaybackRate;                                            // 0x00CC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopTimeEnabled;                                        // 0x00D0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3513[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopTime;                                                // 0x00D4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGlobalBudgetInfo;                                   // 0x00D8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MYQ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettings
	 * Size -> 0x0048
	 */
	struct FNiagaraSystemScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		bool                                                       bCullByDistance : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullMaxInstanceCount : 1;                               // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullPerSystemMaxInstanceCount : 1;                      // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullByMaxTimeWithoutRender : 1;                         // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCullByGlobalBudget : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CF2[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistance;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInstances;                                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSystemInstances;                                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeWithoutRender;                                    // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGlobalBudgetUsage;                                    // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraSystemScalabilitySettings>           Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
	 * Size -> 0x0038
	 */
	struct FNiagaraEmitterScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		bool                                                       bScaleSpawnCount : 1;                                    // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6W7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnCountScale;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraEmitterScalabilitySettings>          Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPerfBaselineStats
	 * Size -> 0x0010
	 */
	struct FNiagaraPerfBaselineStats
	{
	public:
		float                                                      PerInstanceAvg_GT;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerInstanceAvg_RT;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerInstanceMax_GT;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerInstanceMax_RT;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventReceiverProperties
	 * Size -> 0x0018
	 */
	struct FNiagaraEventReceiverProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventGenerator;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEmitter;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeLayoutInfo
	 * Size -> 0x0060
	 */
	struct FNiagaraTypeLayoutInfo
	{
	public:
		TArray<uint32_t>                                           FloatComponentByteOffsets;                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           FloatComponentRegisterOffsets;                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentByteOffsets;                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentRegisterOffsets;                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           HalfComponentByteOffsets;                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           HalfComponentRegisterOffsets;                            // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableLayoutInfo
	 * Size -> 0x0070
	 */
	struct FNiagaraVariableLayoutInfo
	{
	public:
		uint32_t                                                   FloatComponentStart;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Int32ComponentStart;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   HalfComponentStart;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZ1U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeLayoutInfo                              LayoutInfo;                                              // 0x0010(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetID
	 * Size -> 0x000C
	 */
	struct FNiagaraDataSetID
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDataSetType                                        Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AP1J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetCompiledData
	 * Size -> 0x0040
	 */
	struct FNiagaraDataSetCompiledData
	{
	public:
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableLayoutInfo>                  VariableLayouts;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0020(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalFloatComponents;                                    // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalInt32Components;                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalHalfComponents;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresPersistentIDs : 1;                              // 0x0038(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TMK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraSimTarget                                          SimTarget;                                               // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JI7N[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventGeneratorProperties
	 * Size -> 0x0050
	 */
	struct FNiagaraEventGeneratorProperties
	{
	public:
		int32_t                                                    MaxEventsPerFrame;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ID;                                                      // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FXF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0010(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScriptProperties
	 * Size -> 0x0028
	 */
	struct FNiagaraEmitterScriptProperties
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventReceiverProperties>             EventReceivers;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventGeneratorProperties>            EventGenerators;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
	 * Size -> 0x0014
	 */
	struct FNiagaraDetailsLevelScaleOverrides
	{
	public:
		float                                                      Low;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Medium;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      High;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Epic;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cine;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
	{
	public:
		bool                                                       bOverrideSpawnCountScale : 1;                            // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_615D[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraEmitterScalabilityOverride>          Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEventScriptProperties
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
	{
	public:
		EScriptExecutionMode                                       ExecutionMode;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OC3[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SpawnNumber;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEventsPerFrame;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SourceEmitterID;                                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventName;                                         // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSpawnNumber;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1C0[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MinSpawnNumber;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRSN[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
	 * Size -> 0x0028
	 */
	struct FNiagaraMeshRendererMeshProperties
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PivotOffset;                                             // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshPivotOffsetSpace                               PivotOffsetSpace;                                        // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KH8K[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshMaterialOverride
	 * Size -> 0x0028
	 */
	struct FNiagaraMeshMaterialOverride
	{
	public:
		class UMaterialInterface*                                  ExplicitMat;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        UserParamBinding;                                        // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraMaterialAttributeBinding
	 * Size -> 0x002C
	 */
	struct FNiagaraMaterialAttributeBinding
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                NiagaraVariable;                                         // 0x0008(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                ResolvedNiagaraVariable;                                 // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                NiagaraChildVariable;                                    // 0x0020(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraRibbonUVSettings
	 * Size -> 0x0024
	 */
	struct FNiagaraRibbonUVSettings
	{
	public:
		ENiagaraRibbonUVDistributionMode                           DistributionMode;                                        // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D873[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraRibbonUVEdgeMode                                   LeadingEdgeMode;                                         // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0XI[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraRibbonUVEdgeMode                                   TrailingEdgeMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A870[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      TilingLength;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePerParticleUOverride;                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePerParticleVRangeOverride;                        // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0GQ[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
	 * Size -> 0x0014
	 */
	struct FNiagaraRibbonShapeCustomVertex
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Normal;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextureV;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptExecutionPaddingInfo
	{
	public:
		uint16_t                                                   SrcOffset;                                               // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestOffset;                                              // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SrcSize;                                                 // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestSize;                                                // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
	{
	public:
		int32_t                                                    ParameterSize;                                           // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PaddedParameterSize;                                     // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraScriptExecutionPaddingInfo>          PaddingInfo;                                             // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInitialized : 1;                                        // 0x0090(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVJ6[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraBoundParameter
	 * Size -> 0x0028
	 */
	struct FNiagaraBoundParameter
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SrcOffset;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestOffset;                                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableDataId
	 * Size -> 0x0058
	 */
	struct FNiagaraVMExecutableDataId
	{
	public:
		struct FGuid                                               CompilerVersionID;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraScriptUsage                                        ScriptUsageType;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCSY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ScriptUsageTypeID;                                       // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesRapidIterationParams : 1;                           // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolatedSpawn : 1;                                  // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresPersistentIDs : 1;                              // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOK1[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               BaseScriptID;                                            // 0x0028(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraCompileHash                                 BaseScriptCompileHash;                                   // 0x0038(0x0010) NativeAccessSpecifierPublic
		struct FGuid                                               ScriptVersionID;                                         // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompilerTag
	 * Size -> 0x0030
	 */
	struct FNiagaraCompilerTag
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringValue;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataUsageInfo
	 * Size -> 0x0001
	 */
	struct FNiagaraScriptDataUsageInfo
	{
	public:
		bool                                                       bReadsAttributeData;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceCompileInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRIR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0010(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaceholder;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KUY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.VMFunctionSpecifier
	 * Size -> 0x0010
	 */
	struct FVMFunctionSpecifier
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Value;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.VMExternalFunctionBindingInfo
	 * Size -> 0x0038
	 */
	struct FVMExternalFunctionBindingInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               InputParamLocations;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumOutputs;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QCB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVMFunctionSpecifier>                        FunctionSpecifiers;                                      // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetProperties
	 * Size -> 0x0020
	 */
	struct FNiagaraDataSetProperties
	{
	public:
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0000(0x000C) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8V84[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraStatScope
	 * Size -> 0x0010
	 */
	struct FNiagaraStatScope
	{
	public:
		class FName                                                FullName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FriendlyName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableData
	 * Size -> 0x00F0
	 */
	struct FNiagaraVMExecutableData
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      OptimizedByteCode;                                       // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    NumTempRegisters;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUserPtrs;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraCompilerTag>                         CompileTags;                                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ScriptLiterals;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Attributes;                                              // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraScriptDataUsageInfo                         DataUsage;                                               // 0x0058(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EE3[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraScriptDataInterfaceCompileInfo>      DataInterfaceInfo;                                       // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVMExternalFunctionBindingInfo>              CalledVMExternalFunctions;                               // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEIY[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDataSetID>                           ReadDataSets;                                            // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetProperties>                   WriteDataSets;                                           // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraStatScope>                           StatScopes;                                              // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataInterfaceGPUParamInfo>           DIParamInfo;                                             // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ENiagaraScriptCompileStatus                                LastCompileStatus;                                       // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQAQ[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimulationStageMetaData>                    SimulationStageMetaData;                                 // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bReadsSignificanceIndex : 1;                             // 0x00E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsGPUContextInit : 1;                                // 0x00E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WYE[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceInfo
	{
	public:
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3544[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
	 * Size -> 0x0020
	 */
	struct FNiagaraVariableDataInterfaceBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
	{
	public:
		bool                                                       bOverrideDistanceSettings : 1;                           // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInstanceCountSettings : 1;                      // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePerSystemInstanceCountSettings : 1;             // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTimeSinceRendererSettings : 1;                  // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideGlobalBudgetCullingSettings : 1;                // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UF1Y[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraSystemScalabilityOverride>           Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterHandle
	 * Size -> 0x0030
	 */
	struct FNiagaraEmitterHandle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                IdName;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEnabled;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_72RT[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9WKH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEmitter*                                     Instance;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraParameterDataSetBinding
	{
	public:
		int32_t                                                    ParameterOffset;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataSetComponentOffset;                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
	 * Size -> 0x0020
	 */
	struct FNiagaraParameterDataSetBindingCollection
	{
	public:
		TArray<struct FNiagaraParameterDataSetBinding>             FloatOffsets;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBinding>             Int32Offsets;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompiledData
	 * Size -> 0x0218
	 */
	struct FNiagaraSystemCompiledData
	{
	public:
		struct FNiagaraParameterStore                              InstanceParamStore;                                      // 0x0000(0x0078) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0078(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         SpawnInstanceParamsDataSetCompiledData;                  // 0x00B8(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         UpdateInstanceParamsDataSetCompiledData;                 // 0x00F8(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceGlobalBinding;                              // 0x0138(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceSystemBinding;                              // 0x0158(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceOwnerBinding;                               // 0x0178(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   SpawnInstanceEmitterBindings;                            // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceGlobalBinding;                             // 0x01A8(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceSystemBinding;                             // 0x01C8(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceOwnerBinding;                              // 0x01E8(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   UpdateInstanceEmitterBindings;                           // 0x0208(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0020(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneBoolChannel                              BoolChannel;                                             // 0x0040(0x0090) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
	 * Size -> 0x0280 (FullSize[0x02C0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             RedChannel;                                              // 0x0040(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenChannel;                                            // 0x00E0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueChannel;                                             // 0x0180(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaChannel;                                            // 0x0220(0x00A0) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
	 * Size -> 0x00A0 (FullSize[0x00E0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             FloatChannel;                                            // 0x0040(0x00A0) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneIntegerChannel                           IntegerChannel;                                          // 0x0040(0x0090) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
	{
	public:
		struct FFrameNumber                                        SpawnSectionStartFrame;                                  // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        SpawnSectionEndFrame;                                    // 0x0014(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraSystemSpawnSectionStartBehavior                    SpawnSectionStartBehavior;                               // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EYKM[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEvaluateBehavior                 SpawnSectionEvaluateBehavior;                            // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3HM9[0x3];                                   // 0x001D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEndBehavior                      SpawnSectionEndBehavior;                                 // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HNBQ[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraAgeUpdateMode                                      AgeUpdateMode;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5KX4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
	 * Size -> 0x0288 (FullSize[0x02C8] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             VectorChannels[0x4];                                     // 0x0040(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x02C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_29NO[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraScalabilityState
	 * Size -> 0x0008
	 */
	struct FNiagaraScalabilityState
	{
	public:
		float                                                      Significance;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulled : 1;                                             // 0x0004(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviousCulled : 1;                                     // 0x0004(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByDistance : 1;                                   // 0x0004(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByInstanceCount : 1;                              // 0x0004(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByVisibility : 1;                                 // 0x0004(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCulledByGlobalBudget : 1;                               // 0x0004(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BJD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompileDependency
	 * Size -> 0x0050
	 */
	struct FNiagaraCompileDependency
	{
	public:
		class FString                                              LinkerErrorMessage;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               NodeGuid;                                                // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                DependentVariable;                                       // 0x0040(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPGC[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraRandInfo
	 * Size -> 0x000C
	 */
	struct FNiagaraRandInfo
	{
	public:
		int32_t                                                    Seed1;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed2;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed3;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptVariableBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptVariableBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraVariableInfo
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Definition;                                              // 0x0020(0x0018) NativeAccessSpecifierPublic
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemUpdateContext
	 * Size -> 0x0068
	 */
	struct FNiagaraSystemUpdateContext
	{
	public:
		TArray<class UNiagaraComponent*>                           ComponentsToReset;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToReInit;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToNotifySimDestroy;                            // 0x0020(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSystem*>                              SystemSimsToDestroy;                                     // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CEVZ[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraFunctionSignature
	 * Size -> 0x0090
	 */
	struct FNiagaraFunctionSignature
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Inputs;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Outputs;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresContext : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresExecPin : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMemberFunction : 1;                                     // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExperimental : 1;                                       // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsCPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsGPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWriteFunction : 1;                                      // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSoftDeprecatedFunction : 1;                             // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCompileTagGenerator : 1;                              // 0x0031(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden : 1;                                             // 0x0031(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJSO[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ModuleUsageBitmask;                                      // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContextStageMinIndex;                                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContextStageMaxIndex;                                    // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             FunctionSpecifiers;                                      // 0x0040(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
	 * Size -> 0x0018
	 */
	struct FNiagaraEmitterNameSettingsRef
	{
	public:
		class FName                                                SystemName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmitterName;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.BasicParticleData
	 * Size -> 0x001C
	 */
	struct FBasicParticleData
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.MeshTriCoordinate
	 * Size -> 0x0010
	 */
	struct FMeshTriCoordinate
	{
	public:
		int32_t                                                    Tri;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaryCoord;                                               // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSimpleClientInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraSimpleClientInfo
	{
	public:
		TArray<class FString>                                      Systems;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Actors;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Components;                                              // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Emitters;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
	 * Size -> 0x000C
	 */
	struct FNiagaraOutlinerCaptureSettings
	{
	public:
		bool                                                       bTriggerCapture;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LOTS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   CaptureDelayFrames;                                      // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGatherPerfData;                                         // 0x0008(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZLV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
	 * Size -> 0x0001
	 */
	struct FNiagaraRequestSimpleClientInfoMessage
	{
	public:
		unsigned char                                              UnknownData_OMJR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
	 * Size -> 0x0020
	 */
	struct FNiagaraOutlinerEmitterInstanceData
	{
	public:
		class FString                                              EmitterName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBJY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraExecutionState                                     ExecState;                                               // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMOZ[0x3];                                   // 0x0015(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    NumParticles;                                            // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M6A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerTimingData
	 * Size -> 0x0008
	 */
	struct FNiagaraOutlinerTimingData
	{
	public:
		float                                                      GameThread;                                              // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderThread;                                            // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
	 * Size -> 0x0048
	 */
	struct FNiagaraOutlinerSystemInstanceData
	{
	public:
		class FString                                              ComponentName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraOutlinerEmitterInstanceData>         Emitters;                                                // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		ENiagaraExecutionState                                     ActualExecutionState;                                    // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YK1[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraExecutionState                                     RequestedExecutionState;                                 // 0x0024(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GB0Q[0x3];                                   // 0x0025(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FNiagaraScalabilityState                            ScalabilityState;                                        // 0x0028(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPendingKill : 1;                                        // 0x0030(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVD7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENCPoolMethod                                              PoolMethod;                                              // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1Y9[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraOutlinerTimingData                          AverageTime;                                             // 0x0038(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxTime;                                                 // 0x0040(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerSystemData
	 * Size -> 0x0030
	 */
	struct FNiagaraOutlinerSystemData
	{
	public:
		TArray<struct FNiagaraOutlinerSystemInstanceData>          SystemInstances;                                         // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          AveragePerFrameTime;                                     // 0x0010(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxPerFrameTime;                                         // 0x0018(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          AveragePerInstanceTime;                                  // 0x0020(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxPerInstanceTime;                                      // 0x0028(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerWorldData
	 * Size -> 0x0068
	 */
	struct FNiagaraOutlinerWorldData
	{
	public:
		TMap<class FString, struct FNiagaraOutlinerSystemData>     Systems;                                                 // 0x0000(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		bool                                                       bHasBegunPlay;                                           // 0x0050(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WorldType;                                               // 0x0051(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NetMode;                                                 // 0x0052(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKP6[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraOutlinerTimingData                          AveragePerFrameTime;                                     // 0x0054(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraOutlinerTimingData                          MaxPerFrameTime;                                         // 0x005C(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVSP[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraOutlinerData
	 * Size -> 0x0050
	 */
	struct FNiagaraOutlinerData
	{
	public:
		TMap<class FString, struct FNiagaraOutlinerWorldData>      WorldData;                                               // 0x0000(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
	 * Size -> 0x0050
	 */
	struct FNiagaraDebuggerOutlinerUpdate
	{
	public:
		struct FNiagaraOutlinerData                                OutlinerData;                                            // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
	 * Size -> 0x0018
	 */
	struct FNiagaraDebuggerExecuteConsoleCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresWorld;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQ6P[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
	 * Size -> 0x0020
	 */
	struct FNiagaraDebuggerConnectionClosed
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
	 * Size -> 0x0020
	 */
	struct FNiagaraDebuggerAcceptConnection
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraDebuggerRequestConnection
	 * Size -> 0x0020
	 */
	struct FNiagaraDebuggerRequestConnection
	{
	public:
		struct FGuid                                               SessionId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               InstanceId;                                              // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraGraphViewSettings
	 * Size -> 0x0010
	 */
	struct FNiagaraGraphViewSettings
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Zoom;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZS6R[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraCollisionEventPayload
	 * Size -> 0x002C
	 */
	struct FNiagaraCollisionEventPayload
	{
	public:
		struct FVector                                             CollisionPos;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionNormal;                                         // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionVelocity;                                       // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMaterialIndex;                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.ParameterDefinitionsSubscription
	 * Size -> 0x0001
	 */
	struct FParameterDefinitionsSubscription
	{
	public:
		unsigned char                                              UnknownData_RO7Y[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameters
	 * Size -> 0x0010
	 */
	struct FNiagaraParameters
	{
	public:
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
	 * Size -> 0x000C
	 */
	struct FNiagaraPlatformSetConflictEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QualityLevelMask;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
	 * Size -> 0x0018
	 */
	struct FNiagaraPlatformSetConflictInfo
	{
	public:
		int32_t                                                    SetAIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SetBIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetConflictEntry>            Conflicts;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScalabilityManager
	 * Size -> 0x0070
	 */
	struct FNiagaraScalabilityManager
	{
	public:
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           ManagedComponents;                                       // 0x0008(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QX4K[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.VersionedNiagaraScriptData
	 * Size -> 0x0001
	 */
	struct FVersionedNiagaraScriptData
	{
	public:
		unsigned char                                              UnknownData_GR1I[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraModuleDependency
	 * Size -> 0x0028
	 */
	struct FNiagaraModuleDependency
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraModuleDependencyType                               Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraModuleDependencyScriptConstraint                   ScriptConstraint;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M26N[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_SWWY[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptHighlight
	 * Size -> 0x0028
	 */
	struct FNiagaraScriptHighlight
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompileRequest
	 * Size -> 0x0080
	 */
	struct FNiagaraSystemCompileRequest
	{
	public:
		unsigned char                                              UnknownData_OKA9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     RootObjects;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHNE[0x68];                                  // 0x0018(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.EmitterCompiledScriptPair
	 * Size -> 0x0090
	 */
	struct FEmitterCompiledScriptPair
	{
	public:
		unsigned char                                              UnknownData_5VEI[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterCompiledData
	 * Size -> 0x0130
	 */
	struct FNiagaraEmitterCompiledData
	{
	public:
		TArray<class FName>                                        SpawnAttributes;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnIntervalVar;                                 // 0x0010(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInterpSpawnStartDTVar;                            // 0x0030(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnGroupVar;                                    // 0x0050(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterAgeVar;                                           // 0x0070(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterRandomSeedVar;                                    // 0x0090(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInstanceSeedVar;                                  // 0x00B0(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterTotalSpawnedParticlesVar;                         // 0x00D0(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x00F0(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraInputConditionMetadata
	 * Size -> 0x0018
	 */
	struct FNiagaraInputConditionMetadata
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TargetValues;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableMetaData
	 * Size -> 0x00E0
	 */
	struct FNiagaraVariableMetaData
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bAdvancedDisplay;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEX0[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EditorSortPriority;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInlineEditConditionToggle;                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B311[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraInputConditionMetadata                      EditCondition;                                           // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		struct FNiagaraInputConditionMetadata                      VisibleCondition;                                        // 0x0058(0x0018) Edit, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           PropertyMetaData;                                        // 0x0070(0x0050) Edit, NativeAccessSpecifierPublic
		class FName                                                ParentAttribute;                                         // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               VariableGuid;                                            // 0x00C8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsStaticSwitch;                                         // 0x00D8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OQAR[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StaticSwitchDefaultValue;                                // 0x00DC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
	 * Size -> 0x0030
	 */
	struct FNiagaraCompileHashVisitorDebugInfo
	{
	public:
		class FString                                              Object;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyKeys;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyValues;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraID
	 * Size -> 0x0008
	 */
	struct FNiagaraID
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AcquireTag;                                              // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraSpawnInfo
	 * Size -> 0x0010
	 */
	struct FNiagaraSpawnInfo
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpStartDt;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntervalDt;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnGroup;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraAssetVersion
	 * Size -> 0x001C
	 */
	struct FNiagaraAssetVersion
	{
	public:
		int32_t                                                    MajorVersion;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinorVersion;                                            // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               VersionGuid;                                             // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVisibleInVersionSelector;                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ3G[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraMatrix
	 * Size -> 0x0040
	 */
	struct FNiagaraMatrix
	{
	public:
		struct FVector4                                            Row0;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row1;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row2;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row3;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterMap
	 * Size -> 0x0001
	 */
	struct FNiagaraParameterMap
	{
	public:
		unsigned char                                              UnknownData_U9RX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraNumeric
	 * Size -> 0x0001
	 */
	struct FNiagaraNumeric
	{
	public:
		unsigned char                                              UnknownData_T8M5[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector4
	 * Size -> 0x0008
	 */
	struct FNiagaraHalfVector4
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   W;                                                       // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector3
	 * Size -> 0x0006
	 */
	struct FNiagaraHalfVector3
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector2
	 * Size -> 0x0004
	 */
	struct FNiagaraHalfVector2
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraHalf
	 * Size -> 0x0002
	 */
	struct FNiagaraHalf
	{
	public:
		uint16_t                                                   Value;                                                   // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraBool
	 * Size -> 0x0004
	 */
	struct FNiagaraBool
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Niagara.NiagaraInt32
	 * Size -> 0x0004
	 */
	struct FNiagaraInt32
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraFloat
	 * Size -> 0x0004
	 */
	struct FNiagaraFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Niagara.NiagaraWildcard
	 * Size -> 0x0001
	 */
	struct FNiagaraWildcard
	{
	public:
		unsigned char                                              UnknownData_GTSD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraVariant
	 * Size -> 0x0028
	 */
	struct FNiagaraVariant
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      Bytes;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		ENiagaraVariantMode                                        CurrentMode;                                             // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HU7K[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_C90R[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Niagara.NiagaraWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNiagaraWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_6IM8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
