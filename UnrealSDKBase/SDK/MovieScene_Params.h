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
	 * Function MovieScene.MovieSceneSection.SetRowIndex
	 */
	struct UMovieSceneSection_SetRowIndex_Params
	{
	public:
		int32_t                                                    NewRowIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetPreRollFrames
	 */
	struct UMovieSceneSection_SetPreRollFrames_Params
	{
	public:
		int32_t                                                    InPreRollFrames;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetPostRollFrames
	 */
	struct UMovieSceneSection_SetPostRollFrames_Params
	{
	public:
		int32_t                                                    InPostRollFrames;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetOverlapPriority
	 */
	struct UMovieSceneSection_SetOverlapPriority_Params
	{
	public:
		int32_t                                                    NewPriority;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetIsLocked
	 */
	struct UMovieSceneSection_SetIsLocked_Params
	{
	public:
		bool                                                       bInIsLocked;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetIsActive
	 */
	struct UMovieSceneSection_SetIsActive_Params
	{
	public:
		bool                                                       bInIsActive;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetCompletionMode
	 */
	struct UMovieSceneSection_SetCompletionMode_Params
	{
	public:
		EMovieSceneCompletionMode                                  InCompletionMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.SetBlendType
	 */
	struct UMovieSceneSection_SetBlendType_Params
	{
	public:
		EMovieSceneBlendType                                       InBlendType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.IsLocked
	 */
	struct UMovieSceneSection_IsLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.IsActive
	 */
	struct UMovieSceneSection_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.GetRowIndex
	 */
	struct UMovieSceneSection_GetRowIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.GetPreRollFrames
	 */
	struct UMovieSceneSection_GetPreRollFrames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.GetPostRollFrames
	 */
	struct UMovieSceneSection_GetPostRollFrames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.GetOverlapPriority
	 */
	struct UMovieSceneSection_GetOverlapPriority_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.GetCompletionMode
	 */
	struct UMovieSceneSection_GetCompletionMode_Params
	{
	public:
		EMovieSceneCompletionMode                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSection.GetBlendType
	 */
	struct UMovieSceneSection_GetBlendType_Params
	{
	public:
		struct FOptionalMovieSceneBlendType                        ReturnValue;                                             // 0x0000(0x0002)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequence.FindBindingsByTag
	 */
	struct UMovieSceneSequence_FindBindingsByTag_Params
	{
	public:
		class FName                                                InBindingName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMovieSceneObjectBindingID>                  ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequence.FindBindingByTag
	 */
	struct UMovieSceneSequence_FindBindingByTag_Params
	{
	public:
		class FName                                                InBindingName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	 */
	struct UMovieSceneSequencePlayer_StopAtCurrentTime_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.Stop
	 */
	struct UMovieSceneSequencePlayer_Stop_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	 */
	struct UMovieSceneSequencePlayer_SetTimeRange_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	 */
	struct UMovieSceneSequencePlayer_SetPlayRate_Params
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	 */
	struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
	{
	public:
		struct FMovieSceneSequencePlaybackParams                   PlaybackParams;                                          // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	 */
	struct UMovieSceneSequencePlayer_SetFrameRate_Params
	{
	public:
		struct FFrameRate                                          FrameRate;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	 */
	struct UMovieSceneSequencePlayer_SetFrameRange_Params
	{
	public:
		int32_t                                                    StartFrame;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Duration;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrames;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	 */
	struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
	{
	public:
		bool                                                       bInDisableCameraCuts;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	 */
	struct UMovieSceneSequencePlayer_ScrubToSeconds_Params
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	 */
	struct UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params
	{
	public:
		class FString                                              InLabel;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	 */
	struct UMovieSceneSequencePlayer_ScrubToFrame_Params
	{
	public:
		struct FFrameTime                                          NewPosition;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.Scrub
	 */
	struct UMovieSceneSequencePlayer_Scrub_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	 */
	struct UMovieSceneSequencePlayer_RPC_OnStopEvent_Params
	{
	public:
		struct FFrameTime                                          StoppedTime;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	 */
	struct UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
	{
	public:
		EUpdatePositionMethod                                      Method;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QYT7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          RelevantTime;                                            // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.RestoreState
	 */
	struct UMovieSceneSequencePlayer_RestoreState_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	 */
	struct UMovieSceneSequencePlayer_PlayToSeconds_Params
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	 */
	struct UMovieSceneSequencePlayer_PlayToMarkedFrame_Params
	{
	public:
		class FString                                              InLabel;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	 */
	struct UMovieSceneSequencePlayer_PlayToFrame_Params
	{
	public:
		struct FFrameTime                                          NewPosition;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayTo
	 */
	struct UMovieSceneSequencePlayer_PlayTo_Params
	{
	public:
		struct FMovieSceneSequencePlaybackParams                   PlaybackParams;                                          // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	 */
	struct UMovieSceneSequencePlayer_PlayReverse_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	 */
	struct UMovieSceneSequencePlayer_PlayLooping_Params
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.Play
	 */
	struct UMovieSceneSequencePlayer_Play_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.Pause
	 */
	struct UMovieSceneSequencePlayer_Pause_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	 */
	struct UMovieSceneSequencePlayer_JumpToSeconds_Params
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	 */
	struct UMovieSceneSequencePlayer_JumpToMarkedFrame_Params
	{
	public:
		class FString                                              InLabel;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	 */
	struct UMovieSceneSequencePlayer_JumpToFrame_Params
	{
	public:
		struct FFrameTime                                          NewPosition;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.IsReversed
	 */
	struct UMovieSceneSequencePlayer_IsReversed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	 */
	struct UMovieSceneSequencePlayer_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.IsPaused
	 */
	struct UMovieSceneSequencePlayer_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	 */
	struct UMovieSceneSequencePlayer_GoToEndAndStop_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	 */
	struct UMovieSceneSequencePlayer_GetStartTime_Params
	{
	public:
		struct FQualifiedFrameTime                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetSequence
	 */
	struct UMovieSceneSequencePlayer_GetSequence_Params
	{
	public:
		class UMovieSceneSequence*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	 */
	struct UMovieSceneSequencePlayer_GetPlayRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	 */
	struct UMovieSceneSequencePlayer_GetObjectBindings_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMovieSceneObjectBindingID>                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	 */
	struct UMovieSceneSequencePlayer_GetFrameRate_Params
	{
	public:
		struct FFrameRate                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	 */
	struct UMovieSceneSequencePlayer_GetFrameDuration_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	 */
	struct UMovieSceneSequencePlayer_GetEndTime_Params
	{
	public:
		struct FQualifiedFrameTime                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetDuration
	 */
	struct UMovieSceneSequencePlayer_GetDuration_Params
	{
	public:
		struct FQualifiedFrameTime                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	 */
	struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	 */
	struct UMovieSceneSequencePlayer_GetCurrentTime_Params
	{
	public:
		struct FQualifiedFrameTime                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	 */
	struct UMovieSceneSequencePlayer_GetBoundObjects_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ObjectBinding;                                           // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	 */
	struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSubSection.SetSequence
	 */
	struct UMovieSceneSubSection_SetSequence_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneSubSection.GetSequence
	 */
	struct UMovieSceneSubSection_GetSequence_Params
	{
	public:
		class UMovieSceneSequence*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneCustomClockSource.OnTick
	 */
	struct UMovieSceneCustomClockSource_OnTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	 */
	struct UMovieSceneCustomClockSource_OnStopPlaying_Params
	{
	public:
		struct FQualifiedFrameTime                                 InStopTime;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	 */
	struct UMovieSceneCustomClockSource_OnStartPlaying_Params
	{
	public:
		struct FQualifiedFrameTime                                 InStartTime;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
	 */
	struct UMovieSceneCustomClockSource_OnRequestCurrentTime_Params
	{
	public:
		struct FQualifiedFrameTime                                 InCurrentTime;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameTime                                          ReturnValue;                                             // 0x0014(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	 */
	struct UMovieSceneEasingFunction_OnEvaluate_Params
	{
	public:
		float                                                      Interp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
