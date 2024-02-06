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
	 * Class YouMeTalk.YouMeTalkAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UYouMeTalkAPI : public UBlueprintFunctionLibrary
	{
	public:
		EYouMeErrorCode UnInit();
		void UnbindObserver();
		EYouMeErrorCode Talk_SetMicLevelCallback(int32_t MaxLevel);
		EYouMeErrorCode StopInviteMic();
		EYouMeErrorCode StopGrabMicAction(const class FString& pChannelID, const class FString& pContent);
		EYouMeErrorCode StopEffect(int32_t effectId);
		EYouMeErrorCode StopBackgroundMusic();
		EYouMeErrorCode StopAllEffects();
		EYouMeErrorCode StartGrabMicAction(const class FString& pChannelID, const class FString& pContent);
		EYouMeErrorCode SpeakToChannel(const class FString& strChannelID);
		EYouMeErrorCode SetWhiteUserList(const class FString& strChannelID, const class FString& vecWhiteUserList);
		void SetVolume(int32_t uiVolume);
		EYouMeErrorCode SetVadCallbackEnabled(bool Enabled);
		void SetUserVolume(const class FString& userId, int32_t uiVolume);
		EYouMeErrorCode SetUserRole(EYouMeUserRole eUserRole);
		void SetUseMobileNetworkEnabled(bool bEnabled);
		void SetToken(const class FString& pToken);
		EYouMeErrorCode SetSpeakerRecordOn(bool enable);
		void SetSpeakerMute(bool mute);
		EYouMeErrorCode SetSoundtouchPitchSemiTones(float fPitchSemiTones);
		void SetServerRegion(EYouMeRTCServerRegion regionId, const class FString& extRegionName, bool bAppend);
		EYouMeErrorCode SetReverbEnabled(bool Enabled);
		void SetRestApiCallback();
		EYouMeErrorCode SetReleaseMicWhenMute(bool Enabled);
		void SetRecordingTimeMs(int32_t timeMs);
		void SetPlayingTimeMs(int32_t timeMs);
		EYouMeErrorCode SetOutputToSpeaker(bool bOutputToSpeaker);
		EYouMeErrorCode SetOtherSpeakerMute(const class FString& pUserID, bool mute);
		EYouMeErrorCode SetOtherMicMute(const class FString& pUserID, bool mute);
		void SetMicVolume(int32_t uiVolume);
		void SetMicrophoneMute(bool mute);
		EYouMeErrorCode SetMagicVoiceEnable(bool Enabled);
		EYouMeErrorCode SetListenOtherVoice(const class FString& userId, bool On);
		EYouMeErrorCode SetInviteMicOption(const class FString& pChannelID, int32_t waitTimeout, int32_t maxTalkTime);
		EYouMeErrorCode SetHeadsetMonitorOn(bool micEnabled, bool bgmEnabled);
		EYouMeErrorCode SetGrabMicOption(const class FString& pChannelID, int32_t Mode, int32_t maxAllowCount, int32_t maxTalkTime, int32_t voteTime);
		EYouMeErrorCode SetForceDisableAGC(bool disable);
		EYouMeErrorCode SetForceDisableAEC(bool disable);
		EYouMeErrorCode SetFarendVoiceLevelCallback(int32_t MaxLevel, int32_t maxMixedLevel);
		EYouMeErrorCode SetExternalSoundCardMode(bool isExternalSoundCard);
		EYouMeErrorCode SetExitCommModeWhenHeadsetPlugin(bool Enabled);
		EYouMeErrorCode SetEffectVolume(int32_t vol);
		EYouMeErrorCode SetChannelAudioMode(EChannelAudioMode audioMode);
		EYouMeErrorCode SetBackgroundMusicVolume(int32_t vol);
		void SetAutoSendStatus(bool bAutoSend);
		EYouMeErrorCode SetAudioEffectType(int32_t EffectType);
		EYouMeErrorCode SendMessage(const class FString& pChannelID, const class FString& pContent, int32_t RequestID);
		bool ResumeMicSync();
		EYouMeErrorCode ResumeChannel();
		EYouMeErrorCode ResumeBackgroundMusic();
		EYouMeErrorCode ResumeAllEffects();
		EYouMeErrorCode ResponseInviteMic(const class FString& pUserID, bool isAccept, const class FString& pContent);
		EYouMeErrorCode RequestRestApi(const class FString& strCommand, const class FString& strQueryBody, int32_t RequestID);
		EYouMeErrorCode RequestInviteMic(const class FString& pChannelID, const class FString& pUserID, const class FString& pContent);
		EYouMeErrorCode RequestGrabMic(const class FString& pChannelID, int32_t Score, bool isAutoOpenMic, const class FString& pContent);
		bool ReleaseMicSync();
		EYouMeErrorCode ReleaseGrabMic(const class FString& pChannelID);
		EYouMeErrorCode PlayEffect(const class FString& pFilePath, int32_t repeatCount, int32_t* pEffectId);
		EYouMeErrorCode PlayBackgroundMusic(const class FString& pFilePath, bool bRepeat);
		EYouMeErrorCode PauseEffect(int32_t effectId);
		EYouMeErrorCode PauseChannel();
		EYouMeErrorCode PauseBackgroundMusic();
		EYouMeErrorCode LeaveChannelMultiMode(const class FString& strChannelID);
		EYouMeErrorCode LeaveChannelAll();
		EYouMeErrorCode KickOtherFromChannel(const class FString& pUserID, const class FString& pChannelID, int32_t lastTime);
		EYouMeErrorCode JoinChannelSingleMode(const class FString& strUserID, const class FString& strChannelID, EYouMeUserRole userRole, bool bCheckRoomExist);
		EYouMeErrorCode JoinChannelMultiMode(const class FString& strUserID, EYouMeUserRole eUserRole, const class FString& strChannelID, bool bCheckRoomExist);
		bool IsSpeakerRecording();
		bool IsInited();
		bool IsInChannel();
		bool IsInCertainChannel(const class FString& pChannelID);
		bool IsBackgroundMusicPlaying();
		EYouMeErrorCode Init(const class FString& strAppKey, const class FString& strAPPSecret, EYouMeRTCServerRegion youMeRTCServerRegion, const class FString& strExtServerRegionName);
		int32_t GetVolume();
		EYouMeUserRole GetUserRole();
		bool GetUseMobileNetworkEnabled();
		bool GetSpeakerMute();
		float GetSoundtouchPitchSemiTones();
		int32_t GetSDKVersion();
		int32_t GetMicVolume();
		bool GetMicrophoneMute();
		int32_t GetEffectVolume();
		EYouMeErrorCode GetChannelUserList(const class FString& channelId, int32_t MaxCount, bool notifyMemChange);
		int32_t GetBackgroundMusicVolume();
		EYouMeErrorCode CleanSpeakerRecordCache();
		EYouMeErrorCode CheckIsDeviceMute();
		void BindObserver();
		static UClass* StaticClass();
	};

	/**
	 * Class YouMeTalk.YouMeTalkObserver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UYouMeTalkObserver : public UInterface
	{
	public:
		void OnMemberChange(const class FString& Channel, TMap<class FString, class FString> listMemberChangeMap, TArray<struct FChannelMemberState> channelMemberStates, bool bUpdate);
		void OnEvent(EYouMeEvent Event, EYouMeErrorCode Error, const class FString& Channel, const class FString& Param);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
