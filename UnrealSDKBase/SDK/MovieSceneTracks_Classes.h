﻿#pragma once

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
	 * Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCameraShakeEvaluator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertyTrack
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
	{
	public:
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieScenePropertyBinding                          PropertyBinding;                                         // 0x0098(0x0014) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B91U[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.ByteChannelEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.FloatChannelEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformOrigin
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneTransformOrigin : public UInterface
	{
	public:
		struct FTransform BP_GetTransformOrigin();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.IntegerChannelEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DConstraintSection
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UMovieScene3DConstraintSection : public UMovieSceneSection
	{
	public:
		struct FGuid                                               ConstraintId;                                            // 0x00E8(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x00F8(0x0018) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
		struct FMovieSceneObjectBindingID GetConstraintBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DAttachSection
	 * Size -> 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
	 */
	class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
	{
	public:
		unsigned char                                              UnknownData_RWJ6[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachSocketName;                                        // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachComponentName;                                     // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentLocationRule;                                  // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentRotationRule;                                  // 0x0129(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentScaleRule;                                     // 0x012A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentLocationRule;                                  // 0x012B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentRotationRule;                                  // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentScaleRule;                                     // 0x012D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGDC[0x2];                                   // 0x012E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DConstraintTrack
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UMovieScene3DConstraintTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ConstraintSections;                                      // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DAttachTrack
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DPathSection
	 * Size -> 0x00A8 (FullSize[0x01B8] - InheritedSize[0x0110])
	 */
	class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
	{
	public:
		struct FMovieSceneFloatChannel                             TimingCurve;                                             // 0x0110(0x00A0) NativeAccessSpecifierPublic
		EMovieScene3DPathSection_Axis                              FrontAxisEnum;                                           // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieScene3DPathSection_Axis                              UpAxisEnum;                                              // 0x01B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDJK[0x2];                                   // 0x01B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bFollow : 1;                                             // 0x01B4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse : 1;                                            // 0x01B4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUpright : 1;                                       // 0x01B4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBPI[0x3];                                   // 0x01B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DPathTrack
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
	{
	public:
		unsigned char                                              UnknownData_6QV2[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertySystem
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UMovieScenePropertySystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_8U0R[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieScenePropertyInstantiatorSystem*               InstantiatorSystem;                                      // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2FYH[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformSection
	 * Size -> 0x0658 (FullSize[0x0740] - InheritedSize[0x00E8])
	 */
	class UMovieScene3DTransformSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_ZK4Q[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x00F0(0x0004) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TW96[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Translation[0x3];                                        // 0x00F8(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Rotation[0x3];                                           // 0x02D8(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Scale[0x3];                                              // 0x04B8(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             ManualWeight;                                            // 0x0698(0x00A0) NativeAccessSpecifierPrivate
		bool                                                       bUseQuaternionInterpolation;                             // 0x0738(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H64K[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformTrack
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneActorReferenceSection
	 * Size -> 0x0140 (FullSize[0x0228] - InheritedSize[0x00E8])
	 */
	class UMovieSceneActorReferenceSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneActorReferenceData                       ActorReferenceData;                                      // 0x00E8(0x00B0) NativeAccessSpecifierPrivate
		struct FIntegralCurve                                      ActorGuidIndexCurve;                                     // 0x0198(0x0080) Deprecated, NativeAccessSpecifierPrivate
		TArray<class FString>                                      ActorGuidStrings;                                        // 0x0218(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneActorReferenceTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_S9B8[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneAudioSection
	 * Size -> 0x0250 (FullSize[0x0338] - InheritedSize[0x00E8])
	 */
	class UMovieSceneAudioSection : public UMovieSceneSection
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x00F0(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x00F4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioStartTime;                                          // 0x00F8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioDilationFactor;                                     // 0x00FC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioVolume;                                             // 0x0100(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QZWM[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             SoundVolume;                                             // 0x0108(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             PitchMultiplier;                                         // 0x01A8(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneActorReferenceData                       AttachActorData;                                         // 0x0248(0x00B0) NativeAccessSpecifierPrivate
		bool                                                       bLooping;                                                // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSuppressSubtitles;                                      // 0x02F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideAttenuation;                                    // 0x02FA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1KG1[0x5];                                   // 0x02FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0300(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptDelegate                                      OnQueueSubtitles;                                        // 0x0308(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAudioFinished;                                         // 0x0318(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAudioPlaybackPercent;                                  // 0x0328(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetStartOffset(const struct FFrameNumber& InStartOffset);
		void SetSound(class USoundBase* InSound);
		struct FFrameNumber GetStartOffset();
		class USoundBase* GetSound();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneAudioTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_1C6W[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AudioSections;                                           // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBoolPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBoolTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_H8D6[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBytePropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneByteSection
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	class UMovieSceneByteSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_2YP8[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneByteChannel                              ByteCurve;                                               // 0x00F0(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneByteTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneByteTrack : public UMovieScenePropertyTrack
	{
	public:
		class UEnum*                                               Enum;                                                    // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraAnimSection
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UMovieSceneCameraAnimSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraAnimSectionData                    AnimData;                                                // 0x00E8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCameraAnim*                                         CameraAnim;                                              // 0x0108(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x0110(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayScale;                                               // 0x0114(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x0118(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x011C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLooping;                                                // 0x0120(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NRCX[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraAnimTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_PDB4[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          CameraAnimSections;                                      // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutSection
	 * Size -> 0x0078 (FullSize[0x0160] - InheritedSize[0x00E8])
	 */
	class UMovieSceneCameraCutSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_CIFI[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLockPreviousCamera;                                     // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD8Y[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               CameraGuid;                                              // 0x00F4(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneObjectBindingID                          CameraBindingID;                                         // 0x0104(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FISP[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialCameraCutTransform;                               // 0x0120(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bHasInitialCameraCutTransform;                           // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QAKF[0xF];                                   // 0x0151(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);
		struct FMovieSceneObjectBindingID GetCameraBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
	{
	public:
		bool                                                       bCanBlend;                                               // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZ6J[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
	 * Size -> 0x0068 (FullSize[0x00B8] - InheritedSize[0x0050])
	 */
	class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
	{
	public:
		unsigned char                                              UnknownData_DF2J[0x68];                                  // 0x0050(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSection
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UMovieSceneCameraShakeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSectionData                   ShakeData;                                               // 0x00E8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ShakeClass;                                              // 0x0108(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayScale;                                               // 0x0110(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraShakePlaySpace                                      PlaySpace;                                               // 0x0114(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DG51[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            UserDefinedPlaySpace;                                    // 0x0118(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WA5[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSectionData                   ShakeData;                                               // 0x00E8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_81HR[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          CameraShakeSections;                                     // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
	 * Size -> 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
	 */
	class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSourceTriggerChannel          Channel;                                                 // 0x00E8(0x0088) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_9E86[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_CFO7[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          CameraShakeSections;                                     // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCinematicShotSection
	 * Size -> 0x0028 (FullSize[0x0190] - InheritedSize[0x0168])
	 */
	class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
	{
	public:
		class FString                                              ShotDisplayName;                                         // 0x0168(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0178(0x0018) Deprecated, NativeAccessSpecifierPrivate

	public:
		void SetShotDisplayName(const class FString& InShotDisplayName);
		class FString GetShotDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCinematicShotTrack
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorSection
	 * Size -> 0x0288 (FullSize[0x0370] - InheritedSize[0x00E8])
	 */
	class UMovieSceneColorSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_SA0V[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             RedCurve;                                                // 0x00F0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenCurve;                                              // 0x0190(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueCurve;                                               // 0x0230(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaCurve;                                              // 0x02D0(0x00A0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneColorTrack : public UMovieScenePropertyTrack
	{
	public:
		bool                                                       bIsSlateColor;                                           // 0x00C0(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OVI6[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
	 * Size -> 0x0180 (FullSize[0x01C0] - InheritedSize[0x0040])
	 */
	class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_FQ81[0x180];                                 // 0x0040(0x0180) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentMobilitySystem
	 * Size -> 0x01E0 (FullSize[0x0220] - InheritedSize[0x0040])
	 */
	class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_VQYV[0x1E0];                                 // 0x0040(0x01E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentTransformSystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_HUWB[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumSection
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	class UMovieSceneEnumSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_9ZH4[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneByteChannel                              EnumCurve;                                               // 0x00F0(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
	{
	public:
		class UEnum*                                               Enum;                                                    // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEulerTransformTrack
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSectionBase
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneEventSectionBase : public UMovieSceneSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventRepeaterSection
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
	{
	public:
		unsigned char                                              UnknownData_Q5JS[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEvent                                    Event;                                                   // 0x00F0(0x0028) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSection
	 * Size -> 0x0100 (FullSize[0x01E8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneEventSection : public UMovieSceneSection
	{
	public:
		struct FNameCurve                                          Events;                                                  // 0x00E8(0x0078) Deprecated, NativeAccessSpecifierPrivate
		struct FMovieSceneEventSectionData                         EventData;                                               // 0x0160(0x0088) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSystem
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UMovieSceneEventSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_KLE9[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePreSpawnEventSystem
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePostSpawnEventSystem
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePostEvalEventSystem
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventTrack
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UMovieSceneEventTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_LWON[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bFireEventsWhenForwards : 1;                             // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFireEventsWhenBackwards : 1;                            // 0x00A0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82EU[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFireEventsAtPosition                                      EventPosition;                                           // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T20N[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventTriggerSection
	 * Size -> 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
	 */
	class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
	{
	public:
		unsigned char                                              UnknownData_NF5C[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEventChannel                             EventChannel;                                            // 0x00F0(0x0088) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFadeSection
	 * Size -> 0x00B8 (FullSize[0x01A0] - InheritedSize[0x00E8])
	 */
	class UMovieSceneFadeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00E8(0x00A0) NativeAccessSpecifierPublic
		struct FLinearColor                                        FadeColor;                                               // 0x0188(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFadeAudio : 1;                                          // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64J1[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatTrack
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFadeTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
	{
	public:
		unsigned char                                              UnknownData_ZU27[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatSection
	 * Size -> 0x00A8 (FullSize[0x0190] - InheritedSize[0x00E8])
	 */
	class UMovieSceneFloatSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_7QE2[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00F0(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneInitialValueSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerSection
	 * Size -> 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
	 */
	class UMovieSceneIntegerSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_A0PM[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneIntegerChannel                           IntegerCurve;                                            // 0x00F0(0x0090) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerTrack
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
	 * Size -> 0x01A8 (FullSize[0x01E8] - InheritedSize[0x0040])
	 */
	class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_YOGY[0x1A8];                                 // 0x0040(0x01A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilitySection
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_UAU1[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELevelVisibility                                           Visibility;                                              // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P69P[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LevelNames;                                              // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SetVisibility(ELevelVisibility InVisibility);
		void SetLevelNames(TArray<class FName> InLevelNames);
		ELevelVisibility GetVisibility();
		TArray<class FName> GetLevelNames();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
	 * Size -> 0x0168 (FullSize[0x01A8] - InheritedSize[0x0040])
	 */
	class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_C7YH[0x168];                                 // 0x0040(0x0168) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMaterialTrack
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
	{
	public:
		unsigned char                                              UnknownData_SZTR[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        MPC;                                                     // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentMaterialTrack
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		unsigned char                                              UnknownData_SZP0[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaterialIndex;                                           // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V4VU[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
	 * Size -> 0x0058 (FullSize[0x0098] - InheritedSize[0x0040])
	 */
	class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_74OO[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneObjectPropertySection
	 * Size -> 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneObjectPropertySection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectPathChannel                        ObjectChannel;                                           // 0x00E8(0x00C0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneObjectPropertyTrack
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_4BOI[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PropertyClass;                                           // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParameterSection
	 * Size -> 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
	 */
	class UMovieSceneParameterSection : public UMovieSceneSection
	{
	public:
		TArray<struct FBoolParameterNameAndCurve>                  BoolParameterNamesAndCurves;                             // 0x00E8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FScalarParameterNameAndCurve>                ScalarParameterNamesAndCurves;                           // 0x00F8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector2DParameterNameAndCurves>             Vector2DParameterNamesAndCurves;                         // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVectorParameterNameAndCurves>               VectorParameterNamesAndCurves;                           // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FColorParameterNameAndCurves>                ColorParameterNamesAndCurves;                            // 0x0128(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FTransformParameterNameAndCurves>            TransformParameterNamesAndCurves;                        // 0x0138(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		bool RemoveVectorParameter(const class FName& InParameterName);
		bool RemoveVector2DParameter(const class FName& InParameterName);
		bool RemoveTransformParameter(const class FName& InParameterName);
		bool RemoveScalarParameter(const class FName& InParameterName);
		bool RemoveColorParameter(const class FName& InParameterName);
		bool RemoveBoolParameter(const class FName& InParameterName);
		void GetParameterNames();
		void AddVectorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue);
		void AddVector2DParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue);
		void AddTransformParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue);
		void AddScalarParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, float InValue);
		void AddColorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue);
		void AddBoolParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, bool InValue);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleParameterTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_5EVS[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleSection
	 * Size -> 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
	 */
	class UMovieSceneParticleSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneParticleChannel                          ParticleKeys;                                            // 0x00E8(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_3VEC[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          ParticleSections;                                        // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_J4Y7[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_PYK9[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_QPBK[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
	 * Size -> 0x00C0 (FullSize[0x0128] - InheritedSize[0x0068])
	 */
	class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_70NU[0xC0];                                  // 0x0068(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
	{
	public:
		unsigned char                                              UnknownData_OL6Z[0x48];                                  // 0x0068(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
	 * Size -> 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
	 */
	class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectPathChannel                        MaterialChannel;                                         // 0x00E8(0x00C0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_KJK7[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaterialIndex;                                           // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SF1[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
	 * Size -> 0x0208 (FullSize[0x0248] - InheritedSize[0x0040])
	 */
	class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_7CCO[0x208];                                 // 0x0040(0x0208) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
	 * Size -> 0x0188 (FullSize[0x0270] - InheritedSize[0x00E8])
	 */
	class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneSkeletalAnimationParams                  Params;                                                  // 0x00E8(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AnimSequence;                                            // 0x01C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   Animation;                                               // 0x01C8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x01D0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndOffset;                                               // 0x01D4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x01D8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReverse : 1;                                            // 0x01DC(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0PLO[0x3];                                   // 0x01DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x01E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             StartLocationOffset;                                     // 0x01E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StartRotationOffset;                                     // 0x01F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMatchWithPrevious;                                      // 0x0200(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2CD[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MatchedBoneName;                                         // 0x0204(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MatchedLocationOffset;                                   // 0x020C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MatchedRotationOffset;                                   // 0x0218(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMatchTranslation;                                       // 0x0224(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchIncludeZHeight;                                    // 0x0225(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotationYaw;                                       // 0x0226(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotationPitch;                                     // 0x0227(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotationRoll;                                      // 0x0228(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IC4[0x47];                                  // 0x0229(0x0047) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_EZEB[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLegacySectionIndexBlend;                             // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3MD[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSkeletalAnimRootMotionTrackParams        RootMotionParams;                                        // 0x00B0(0x0030) NativeAccessSpecifierPublic
		bool                                                       bBlendFirstChildOfRoot;                                  // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DT0[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSlomoSection
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	class UMovieSceneSlomoSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00E8(0x00A0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSlomoTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
	{
	public:
		unsigned char                                              UnknownData_EL67[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneStringSection
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	class UMovieSceneStringSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneStringChannel                            StringCurve;                                             // 0x00E8(0x00A0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneStringTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneStringTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_G8QJ[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformOriginSystem
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_RU3Q[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformTrack
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorSection
	 * Size -> 0x0290 (FullSize[0x0378] - InheritedSize[0x00E8])
	 */
	class UMovieSceneVectorSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_H0JM[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Curves[0x4];                                             // 0x00F0(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y71A[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
	{
	public:
		int32_t                                                    NumChannelsUsed;                                         // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AATX[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVisibilityTrack
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
	{
	public:
		unsigned char                                              UnknownData_PGBX[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_AXJV[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
