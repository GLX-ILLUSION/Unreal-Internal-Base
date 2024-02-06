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
	 * Class LiveLink.LiveLinkRetargetAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkRetargetAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
	{
	public:
		bool                                                       bInterpolatePropertyValues;                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4QL[0x17];                                  // 0x0029(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
	{
	public:
		unsigned char                                              UnknownData_EN88[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationRoleToTransform
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
	{
	public:
		class FName                                                BoneName;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R41D[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationVirtualSubject
	 * Size -> 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
	 */
	class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
	{
	public:
		unsigned char                                              UnknownData_7A83[0x1];                                   // 0x0160(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAppendSubjectNameToBones;                               // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAYS[0x6];                                   // 0x0162(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
	{
	public:
		ELiveLinkAxis                                              FrontAxis;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELiveLinkAxis                                              RightAxis;                                               // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ELiveLinkAxis                                              UpAxis;                                                  // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseOffsetPosition;                                      // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseOffsetOrientation;                                   // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GOXX[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OffsetPosition;                                          // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            OffsetOrientation;                                       // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L8ZZ[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<class FName>* TransformNames);
		void TransformName(struct FLiveLinkTransform* LiveLinkTransform, class FName* Name);
		void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
		bool RemoveSource(struct FLiveLinkSourceHandle* SourceHandle);
		void ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
		int32_t NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
		bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
		bool IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
		bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
		bool HasParent(struct FLiveLinkTransform* LiveLinkTransform);
		void GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, const class FName& TransformName, struct FLiveLinkTransform* LiveLinkTransform);
		void GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
		class UClass* GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
		class FText GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
		class FText GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
		class FText GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
		void GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
		bool GetPropertyValue(struct FLiveLinkBasicBlueprintData* BasicData, const class FName& PropertyName, float* Value);
		void GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
		void GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
		TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
		class UClass* GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
		TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
		void GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<class FName, float>* Curves);
		void GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
		void GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
		bool GetAnimationStaticData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData);
		bool GetAnimationFrameData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData);
		bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		bool EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
		void ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
		int32_t ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkBlueprintVirtualSubject
	 * Size -> 0x0028 (FullSize[0x0188] - InheritedSize[0x0160])
	 */
	class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
	{
	public:
		unsigned char                                              UnknownData_D5EV[0x28];                                  // 0x0160(0x0028) MISSED OFFSET (PADDING)

	public:
		bool UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct);
		bool UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
		void OnUpdate();
		void OnInitialize();
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkComponent
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class ULiveLinkComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLiveLinkUpdated;                                       // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UJL[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void GetSubjectDataAtWorldTime(const class FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetSubjectDataAtSceneTime(const class FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetSubjectData(const class FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
		void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkDrivenComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class ULiveLinkDrivenComponent : public UActorComponent
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x00B0(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorTransformBone;                                      // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyActorTransform;                                   // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetRelativeLocation;                                    // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVV9[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkInstance
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class ULiveLinkInstance : public UAnimInstance
	{
	public:
		class ULiveLinkRetargetAsset*                              CurrentRetargetAsset;                                    // 0x02B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSubject(const struct FLiveLinkSubjectName& SubjectName);
		void SetRetargetAsset(class UClass* RetargetAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkMessageBusFinder
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULiveLinkMessageBusFinder : public UObject
	{
	public:
		unsigned char                                              UnknownData_AD6E[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
		class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
		void ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkMessageBusSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkMessageBusSourceSettings
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkPreset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class ULiveLinkPreset : public UObject
	{
	public:
		TArray<struct FLiveLinkSourcePreset>                       Sources;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FLiveLinkSubjectPreset>                      Subjects;                                                // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate

	public:
		void BuildFromClient();
		bool ApplyToClient();
		bool AddToClient(bool bRecreatePresets);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkRemapAsset
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
	{
	public:
		unsigned char                                              UnknownData_E1L1[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		void RemapCurveElements(TMap<class FName, float>* CurveItems);
		class FName GetRemappedCurveName(const class FName& CurveName);
		class FName GetRemappedBoneName(const class FName& BoneName);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkSettings
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class ULiveLinkSettings : public UObject
	{
	public:
		TArray<struct FLiveLinkRoleProjectSetting>                 DefaultRoleSettings;                                     // 0x0028(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class UClass*                                              FrameInterpolationProcessor;                             // 0x0038(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultLiveLinkPreset[0x28];                             // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FDirectoryPath                                      PresetSaveDir;                                           // 0x0068(0x0010) Edit, Config, NativeAccessSpecifierPublic
		float                                                      ClockOffsetCorrectionStep;                               // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELiveLinkSourceMode                                        DefaultMessageBusSourceMode;                             // 0x007C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B246[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MessageBusPingRequestFrequency;                          // 0x0080(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MessageBusHeartbeatFrequency;                            // 0x0088(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MessageBusHeartbeatTimeout;                              // 0x0090(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MessageBusTimeBeforeRemovingInactiveSource;              // 0x0098(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     TimeWithoutFrameToBeConsiderAsInvalid;                   // 0x00A0(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ValidColor;                                              // 0x00A8(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InvalidColor;                                            // 0x00B8(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextSizeSource;                                          // 0x00C8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TextSizeSubject;                                         // 0x00C9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBEA[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkTimecodeProvider
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class ULiveLinkTimecodeProvider : public UTimecodeProvider
	{
	public:
		struct FLiveLinkSubjectKey                                 SubjectKey;                                              // 0x0030(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ELiveLinkTimecodeProviderEvaluationType                    Evaluation;                                              // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4JLS[0x3];                                   // 0x0049(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bOverrideFrameRate;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6WAM[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          OverrideFrameRate;                                       // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BufferSize;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BRJ9[0x64];                                  // 0x005C(0x0064) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkTimeSynchronizationSource
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0030(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKWV[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLink.LiveLinkVirtualSubjectSourceSettings
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
	{
	public:
		class FName                                                SourceName;                                              // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
