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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	 */
	struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	 */
	struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InConstraintBindingID;                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	 */
	struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	 */
	struct UMovieSceneAudioSection_SetStartOffset_Params
	{
	public:
		struct FFrameNumber                                        InStartOffset;                                           // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	 */
	struct UMovieSceneAudioSection_SetSound_Params
	{
	public:
		class USoundBase*                                          InSound;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	 */
	struct UMovieSceneAudioSection_GetStartOffset_Params
	{
	public:
		struct FFrameNumber                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	 */
	struct UMovieSceneAudioSection_GetSound_Params
	{
	public:
		class USoundBase*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	 */
	struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InCameraBindingID;                                       // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	 */
	struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	 */
	struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
	{
	public:
		class FString                                              InShotDisplayName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	 */
	struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	 */
	struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
	{
	public:
		ELevelVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	 */
	struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
	{
	public:
		TArray<class FName>                                        InLevelNames;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	 */
	struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
	{
	public:
		ELevelVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	 */
	struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	 */
	struct UMovieSceneParameterSection_RemoveVectorParameter_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	 */
	struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	 */
	struct UMovieSceneParameterSection_RemoveTransformParameter_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	 */
	struct UMovieSceneParameterSection_RemoveScalarParameter_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	 */
	struct UMovieSceneParameterSection_RemoveColorParameter_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	 */
	struct UMovieSceneParameterSection_RemoveBoolParameter_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	 */
	struct UMovieSceneParameterSection_GetParameterNames_Params
	{	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	 */
	struct UMovieSceneParameterSection_AddVectorParameterKey_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InTime;                                                  // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	 */
	struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InTime;                                                  // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	 */
	struct UMovieSceneParameterSection_AddTransformParameterKey_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InTime;                                                  // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1DRL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InValue;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	 */
	struct UMovieSceneParameterSection_AddScalarParameterKey_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InTime;                                                  // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	 */
	struct UMovieSceneParameterSection_AddColorParameterKey_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InTime;                                                  // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	 */
	struct UMovieSceneParameterSection_AddBoolParameterKey_Params
	{
	public:
		class FName                                                InParameterName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InTime;                                                  // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
