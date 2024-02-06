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
	 * Function YouMeTalk.YouMeTalkAPI.UnInit
	 */
	struct UYouMeTalkAPI_UnInit_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.UnbindObserver
	 */
	struct UYouMeTalkAPI_UnbindObserver_Params
	{	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.Talk_SetMicLevelCallback
	 */
	struct UYouMeTalkAPI_Talk_SetMicLevelCallback_Params
	{
	public:
		int32_t                                                    MaxLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.StopInviteMic
	 */
	struct UYouMeTalkAPI_StopInviteMic_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.StopGrabMicAction
	 */
	struct UYouMeTalkAPI_StopGrabMicAction_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pContent;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.StopEffect
	 */
	struct UYouMeTalkAPI_StopEffect_Params
	{
	public:
		int32_t                                                    effectId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.StopBackgroundMusic
	 */
	struct UYouMeTalkAPI_StopBackgroundMusic_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.StopAllEffects
	 */
	struct UYouMeTalkAPI_StopAllEffects_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.StartGrabMicAction
	 */
	struct UYouMeTalkAPI_StartGrabMicAction_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pContent;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SpeakToChannel
	 */
	struct UYouMeTalkAPI_SpeakToChannel_Params
	{
	public:
		class FString                                              strChannelID;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetWhiteUserList
	 */
	struct UYouMeTalkAPI_SetWhiteUserList_Params
	{
	public:
		class FString                                              strChannelID;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              vecWhiteUserList;                                        // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetVolume
	 */
	struct UYouMeTalkAPI_SetVolume_Params
	{
	public:
		int32_t                                                    uiVolume;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetVadCallbackEnabled
	 */
	struct UYouMeTalkAPI_SetVadCallbackEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetUserVolume
	 */
	struct UYouMeTalkAPI_SetUserVolume_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    uiVolume;                                                // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetUserRole
	 */
	struct UYouMeTalkAPI_SetUserRole_Params
	{
	public:
		EYouMeUserRole                                             eUserRole;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetUseMobileNetworkEnabled
	 */
	struct UYouMeTalkAPI_SetUseMobileNetworkEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetToken
	 */
	struct UYouMeTalkAPI_SetToken_Params
	{
	public:
		class FString                                              pToken;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetSpeakerRecordOn
	 */
	struct UYouMeTalkAPI_SetSpeakerRecordOn_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetSpeakerMute
	 */
	struct UYouMeTalkAPI_SetSpeakerMute_Params
	{
	public:
		bool                                                       mute;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetSoundtouchPitchSemiTones
	 */
	struct UYouMeTalkAPI_SetSoundtouchPitchSemiTones_Params
	{
	public:
		float                                                      fPitchSemiTones;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetServerRegion
	 */
	struct UYouMeTalkAPI_SetServerRegion_Params
	{
	public:
		EYouMeRTCServerRegion                                      regionId;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I9YR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              extRegionName;                                           // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAppend;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetReverbEnabled
	 */
	struct UYouMeTalkAPI_SetReverbEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetRestApiCallback
	 */
	struct UYouMeTalkAPI_SetRestApiCallback_Params
	{	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetReleaseMicWhenMute
	 */
	struct UYouMeTalkAPI_SetReleaseMicWhenMute_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetRecordingTimeMs
	 */
	struct UYouMeTalkAPI_SetRecordingTimeMs_Params
	{
	public:
		int32_t                                                    timeMs;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetPlayingTimeMs
	 */
	struct UYouMeTalkAPI_SetPlayingTimeMs_Params
	{
	public:
		int32_t                                                    timeMs;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetOutputToSpeaker
	 */
	struct UYouMeTalkAPI_SetOutputToSpeaker_Params
	{
	public:
		bool                                                       bOutputToSpeaker;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetOtherSpeakerMute
	 */
	struct UYouMeTalkAPI_SetOtherSpeakerMute_Params
	{
	public:
		class FString                                              pUserID;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       mute;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetOtherMicMute
	 */
	struct UYouMeTalkAPI_SetOtherMicMute_Params
	{
	public:
		class FString                                              pUserID;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       mute;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetMicVolume
	 */
	struct UYouMeTalkAPI_SetMicVolume_Params
	{
	public:
		int32_t                                                    uiVolume;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetMicrophoneMute
	 */
	struct UYouMeTalkAPI_SetMicrophoneMute_Params
	{
	public:
		bool                                                       mute;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetMagicVoiceEnable
	 */
	struct UYouMeTalkAPI_SetMagicVoiceEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetListenOtherVoice
	 */
	struct UYouMeTalkAPI_SetListenOtherVoice_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       On;                                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetInviteMicOption
	 */
	struct UYouMeTalkAPI_SetInviteMicOption_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    waitTimeout;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxTalkTime;                                             // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetHeadsetMonitorOn
	 */
	struct UYouMeTalkAPI_SetHeadsetMonitorOn_Params
	{
	public:
		bool                                                       micEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bgmEnabled;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetGrabMicOption
	 */
	struct UYouMeTalkAPI_SetGrabMicOption_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Mode;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxAllowCount;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxTalkTime;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    voteTime;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetForceDisableAGC
	 */
	struct UYouMeTalkAPI_SetForceDisableAGC_Params
	{
	public:
		bool                                                       disable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetForceDisableAEC
	 */
	struct UYouMeTalkAPI_SetForceDisableAEC_Params
	{
	public:
		bool                                                       disable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetFarendVoiceLevelCallback
	 */
	struct UYouMeTalkAPI_SetFarendVoiceLevelCallback_Params
	{
	public:
		int32_t                                                    MaxLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    maxMixedLevel;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetExternalSoundCardMode
	 */
	struct UYouMeTalkAPI_SetExternalSoundCardMode_Params
	{
	public:
		bool                                                       isExternalSoundCard;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetExitCommModeWhenHeadsetPlugin
	 */
	struct UYouMeTalkAPI_SetExitCommModeWhenHeadsetPlugin_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetEffectVolume
	 */
	struct UYouMeTalkAPI_SetEffectVolume_Params
	{
	public:
		int32_t                                                    vol;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetChannelAudioMode
	 */
	struct UYouMeTalkAPI_SetChannelAudioMode_Params
	{
	public:
		EChannelAudioMode                                          audioMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetBackgroundMusicVolume
	 */
	struct UYouMeTalkAPI_SetBackgroundMusicVolume_Params
	{
	public:
		int32_t                                                    vol;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetAutoSendStatus
	 */
	struct UYouMeTalkAPI_SetAutoSendStatus_Params
	{
	public:
		bool                                                       bAutoSend;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SetAudioEffectType
	 */
	struct UYouMeTalkAPI_SetAudioEffectType_Params
	{
	public:
		int32_t                                                    EffectType;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.SendMessage
	 */
	struct UYouMeTalkAPI_SendMessage_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pContent;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RequestID;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ResumeMicSync
	 */
	struct UYouMeTalkAPI_ResumeMicSync_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ResumeChannel
	 */
	struct UYouMeTalkAPI_ResumeChannel_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ResumeBackgroundMusic
	 */
	struct UYouMeTalkAPI_ResumeBackgroundMusic_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ResumeAllEffects
	 */
	struct UYouMeTalkAPI_ResumeAllEffects_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ResponseInviteMic
	 */
	struct UYouMeTalkAPI_ResponseInviteMic_Params
	{
	public:
		class FString                                              pUserID;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isAccept;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GDKE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              pContent;                                                // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.RequestRestApi
	 */
	struct UYouMeTalkAPI_RequestRestApi_Params
	{
	public:
		class FString                                              strCommand;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strQueryBody;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RequestID;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.RequestInviteMic
	 */
	struct UYouMeTalkAPI_RequestInviteMic_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pUserID;                                                 // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pContent;                                                // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.RequestGrabMic
	 */
	struct UYouMeTalkAPI_RequestGrabMic_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Score;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isAutoOpenMic;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LLZT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              pContent;                                                // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ReleaseMicSync
	 */
	struct UYouMeTalkAPI_ReleaseMicSync_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.ReleaseGrabMic
	 */
	struct UYouMeTalkAPI_ReleaseGrabMic_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.PlayEffect
	 */
	struct UYouMeTalkAPI_PlayEffect_Params
	{
	public:
		class FString                                              pFilePath;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    repeatCount;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    pEffectId;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.PlayBackgroundMusic
	 */
	struct UYouMeTalkAPI_PlayBackgroundMusic_Params
	{
	public:
		class FString                                              pFilePath;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRepeat;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.PauseEffect
	 */
	struct UYouMeTalkAPI_PauseEffect_Params
	{
	public:
		int32_t                                                    effectId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.PauseChannel
	 */
	struct UYouMeTalkAPI_PauseChannel_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.PauseBackgroundMusic
	 */
	struct UYouMeTalkAPI_PauseBackgroundMusic_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.LeaveChannelMultiMode
	 */
	struct UYouMeTalkAPI_LeaveChannelMultiMode_Params
	{
	public:
		class FString                                              strChannelID;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.LeaveChannelAll
	 */
	struct UYouMeTalkAPI_LeaveChannelAll_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.KickOtherFromChannel
	 */
	struct UYouMeTalkAPI_KickOtherFromChannel_Params
	{
	public:
		class FString                                              pUserID;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pChannelID;                                              // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    lastTime;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.JoinChannelSingleMode
	 */
	struct UYouMeTalkAPI_JoinChannelSingleMode_Params
	{
	public:
		class FString                                              strUserID;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strChannelID;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeUserRole                                             userRole;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCheckRoomExist;                                         // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.JoinChannelMultiMode
	 */
	struct UYouMeTalkAPI_JoinChannelMultiMode_Params
	{
	public:
		class FString                                              strUserID;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeUserRole                                             eUserRole;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QFVV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              strChannelID;                                            // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCheckRoomExist;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.IsSpeakerRecording
	 */
	struct UYouMeTalkAPI_IsSpeakerRecording_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.IsInited
	 */
	struct UYouMeTalkAPI_IsInited_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.IsInChannel
	 */
	struct UYouMeTalkAPI_IsInChannel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.IsInCertainChannel
	 */
	struct UYouMeTalkAPI_IsInCertainChannel_Params
	{
	public:
		class FString                                              pChannelID;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.IsBackgroundMusicPlaying
	 */
	struct UYouMeTalkAPI_IsBackgroundMusicPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.Init
	 */
	struct UYouMeTalkAPI_Init_Params
	{
	public:
		class FString                                              strAppKey;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strAPPSecret;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeRTCServerRegion                                      youMeRTCServerRegion;                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MX73[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              strExtServerRegionName;                                  // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetVolume
	 */
	struct UYouMeTalkAPI_GetVolume_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetUserRole
	 */
	struct UYouMeTalkAPI_GetUserRole_Params
	{
	public:
		EYouMeUserRole                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetUseMobileNetworkEnabled
	 */
	struct UYouMeTalkAPI_GetUseMobileNetworkEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetSpeakerMute
	 */
	struct UYouMeTalkAPI_GetSpeakerMute_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetSoundtouchPitchSemiTones
	 */
	struct UYouMeTalkAPI_GetSoundtouchPitchSemiTones_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetSDKVersion
	 */
	struct UYouMeTalkAPI_GetSDKVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetMicVolume
	 */
	struct UYouMeTalkAPI_GetMicVolume_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetMicrophoneMute
	 */
	struct UYouMeTalkAPI_GetMicrophoneMute_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetEffectVolume
	 */
	struct UYouMeTalkAPI_GetEffectVolume_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetChannelUserList
	 */
	struct UYouMeTalkAPI_GetChannelUserList_Params
	{
	public:
		class FString                                              channelId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCount;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       notifyMemChange;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.GetBackgroundMusicVolume
	 */
	struct UYouMeTalkAPI_GetBackgroundMusicVolume_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.CleanSpeakerRecordCache
	 */
	struct UYouMeTalkAPI_CleanSpeakerRecordCache_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.CheckIsDeviceMute
	 */
	struct UYouMeTalkAPI_CheckIsDeviceMute_Params
	{
	public:
		EYouMeErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkAPI.BindObserver
	 */
	struct UYouMeTalkAPI_BindObserver_Params
	{	};

	/**
	 * Function YouMeTalk.YouMeTalkObserver.OnMemberChange
	 */
	struct UYouMeTalkObserver_OnMemberChange_Params
	{
	public:
		class FString                                              Channel;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         listMemberChangeMap;                                     // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FChannelMemberState>                         channelMemberStates;                                     // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUpdate;                                                 // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function YouMeTalk.YouMeTalkObserver.OnEvent
	 */
	struct UYouMeTalkObserver_OnEvent_Params
	{
	public:
		EYouMeEvent                                                Event;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYouMeErrorCode                                            Error;                                                   // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8P4Z[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Channel;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Param;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
