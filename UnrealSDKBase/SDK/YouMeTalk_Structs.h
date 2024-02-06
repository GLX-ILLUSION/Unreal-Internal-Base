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
	 * Enum YouMeTalk.EChannelAudioMode
	 */
	enum class EChannelAudioMode : uint8_t
	{
		CHANNEL_AUDIO_MODE_CALL     = 0,
		CHANNEL_AUDIO_MODE_HQ_MUSIC = 1,
		CHANNEL_AUDIO_MODE_MAX      = 2
	};

	/**
	 * Enum YouMeTalk.EYouMeUserRole
	 */
	enum class EYouMeUserRole : uint8_t
	{
		YOUME_USER_NONE             = 0,
		YOUME_USER_TALKER_FREE      = 1,
		YOUME_USER_TALKER_ON_DEMAND = 2,
		YOUME_USER_LISTENER         = 3,
		YOUME_USER_COMMANDER        = 4,
		YOUME_USER_HOST             = 5,
		YOUME_USER_GUSET            = 6,
		YOUME_USER_MAX              = 7
	};

	/**
	 * Enum YouMeTalk.EYouMeLogLevel
	 */
	enum class EYouMeLogLevel : uint8_t
	{
		LOG_DISABLED = 0,
		LOG_FATAL    = 1,
		LOG_ERROR    = 2,
		LOG_WARNING  = 3,
		LOG_INFO     = 4,
		LOG_DEBUG    = 5,
		LOG_VERBOSE  = 6,
		LOG_MAX      = 7
	};

	/**
	 * Enum YouMeTalk.EYouMeRTCServerRegion
	 */
	enum class EYouMeRTCServerRegion : uint8_t
	{
		RTC_CN_SERVER      = 0,
		RTC_HK_SERVER      = 1,
		RTC_US_SERVER      = 2,
		RTC_SG_SERVER      = 3,
		RTC_KR_SERVER      = 4,
		RTC_AU_SERVER      = 5,
		RTC_DE_SERVER      = 6,
		RTC_BR_SERVER      = 7,
		RTC_IN_SERVER      = 8,
		RTC_JP_SERVER      = 9,
		RTC_IE_SERVER      = 10,
		RTC_USW_SERVER     = 11,
		RTC_USM_SERVER     = 12,
		RTC_CA_SERVER      = 13,
		RTC_LON_SERVER     = 14,
		RTC_FRA_SERVER     = 15,
		RTC_DXB_SERVER     = 16,
		RTC_EXT_SERVER     = 17,
		RTC_DEFAULT_SERVER = 18,
		RTC_MAX            = 19
	};

	/**
	 * Enum YouMeTalk.EYouMeErrorCode
	 */
	enum class EYouMeErrorCode : uint8_t
	{
		YOUME_SUCCESS                          = 0,
		YOUME_ERROR_API_NOT_SUPPORTED          = 1,
		YOUME_ERROR_INVALID_PARAM              = 2,
		YOUME_ERROR_ALREADY_INIT               = 3,
		YOUME_ERROR_NOT_INIT                   = 4,
		YOUME_ERROR_CHANNEL_EXIST              = 5,
		YOUME_ERROR_CHANNEL_NOT_EXIST          = 6,
		YOUME_ERROR_WRONG_STATE                = 7,
		YOUME_ERROR_NOT_ALLOWED_MOBILE_NETWROK = 8,
		YOUME_ERROR_WRONG_CHANNEL_MODE         = 9,
		YOUME_ERROR_TOO_MANY_CHANNELS          = 10,
		YOUME_ERROR_TOKEN_ERROR                = 11,
		YOUME_ERROR_NOT_IN_CHANNEL             = 12,
		YOUME_ERROR_BE_KICK                    = 13,
		YOUME_ERROR_MEMORY_OUT                 = 14,
		YOUME_ERROR_START_FAILED               = 15,
		YOUME_ERROR_STOP_FAILED                = 16,
		YOUME_ERROR_ILLEGAL_SDK                = 17,
		YOUME_ERROR_SERVER_INVALID             = 18,
		YOUME_ERROR_NETWORK_ERROR              = 19,
		YOUME_ERROR_SERVER_INTER_ERROR         = 20,
		YOUME_ERROR_QUERY_RESTAPI_FAIL         = 21,
		YOUME_ERROR_USER_ABORT                 = 22,
		YOUME_ERROR_SEND_MESSAGE_FAIL          = 23,
		YOUME_ERROR_REC_INIT_FAILED            = 24,
		YOUME_ERROR_REC_NO_PERMISSION          = 25,
		YOUME_ERROR_REC_NO_DATA                = 26,
		YOUME_ERROR_REC_OTHERS                 = 27,
		YOUME_ERROR_REC_PERMISSION_UNDEFINED   = 28,
		YOUME_ERROR_GRABMIC_FULL               = 29,
		YOUME_ERROR_GRABMIC_HASEND             = 30,
		YOUME_ERROR_INVITEMIC_NOUSER           = 31,
		YOUME_ERROR_INVITEMIC_OFFLINE          = 32,
		YOUME_ERROR_INVITEMIC_REJECT           = 33,
		YOUME_ERROR_INVITEMIC_TIMEOUT          = 34,
		YOUME_ERROR_WHITE_SOMEUSER_ABNORMAL    = 35,
		YOUME_ERROR_MAGICVOICE_EXPIRED         = 36,
		YOUME_ERROR_UNKNOWN                    = 37,
		YOUME_MAX                              = 38
	};

	/**
	 * Enum YouMeTalk.EYouMeEvent
	 */
	enum class EYouMeEvent : uint8_t
	{
		YOUME_EVENT_INIT_OK                    = 0,
		YOUME_EVENT_INIT_FAILED                = 1,
		YOUME_EVENT_JOIN_OK                    = 2,
		YOUME_EVENT_JOIN_FAILED                = 3,
		YOUME_EVENT_LEAVED_ONE                 = 4,
		YOUME_EVENT_LEAVED_ALL                 = 5,
		YOUME_EVENT_PAUSED                     = 6,
		YOUME_EVENT_RESUMED                    = 7,
		YOUME_EVENT_SPEAK_SUCCESS              = 8,
		YOUME_EVENT_SPEAK_FAILED               = 9,
		YOUME_EVENT_RECONNECTING               = 10,
		YOUME_EVENT_RECONNECTED                = 11,
		YOUME_EVENT_REC_PERMISSION_STATUS      = 12,
		YOUME_EVENT_BGM_STOPPED                = 13,
		YOUME_EVENT_BGM_FAILED                 = 14,
		YOUME_EVENT_OTHERS_MIC_ON              = 15,
		YOUME_EVENT_OTHERS_MIC_OFF             = 16,
		YOUME_EVENT_OTHERS_SPEAKER_ON          = 17,
		YOUME_EVENT_OTHERS_SPEAKER_OFF         = 18,
		YOUME_EVENT_OTHERS_VOICE_ON            = 19,
		YOUME_EVENT_OTHERS_VOICE_OFF           = 20,
		YOUME_EVENT_MY_MIC_LEVEL               = 21,
		YOUME_EVENT_MIC_CTR_ON                 = 22,
		YOUME_EVENT_MIC_CTR_OFF                = 23,
		YOUME_EVENT_SPEAKER_CTR_ON             = 24,
		YOUME_EVENT_SPEAKER_CTR_OFF            = 25,
		YOUME_EVENT_LISTEN_OTHER_ON            = 26,
		YOUME_EVENT_LISTEN_OTHER_OFF           = 27,
		YOUME_EVENT_LOCAL_MIC_ON               = 28,
		YOUME_EVENT_LOCAL_MIC_OFF              = 29,
		YOUME_EVENT_LOCAL_SPEAKER_ON           = 30,
		YOUME_EVENT_LOCAL_SPEAKER_OFF          = 31,
		YOUME_EVENT_GRABMIC_START_OK           = 32,
		YOUME_EVENT_GRABMIC_START_FAILED       = 33,
		YOUME_EVENT_GRABMIC_STOP_OK            = 34,
		YOUME_EVENT_GRABMIC_STOP_FAILED        = 35,
		YOUME_EVENT_GRABMIC_REQUEST_OK         = 36,
		YOUME_EVENT_GRABMIC_REQUEST_FAILED     = 37,
		YOUME_EVENT_GRABMIC_REQUEST_WAIT       = 38,
		YOUME_EVENT_GRABMIC_RELEASE_OK         = 39,
		YOUME_EVENT_GRABMIC_RELEASE_FAILED     = 40,
		YOUME_EVENT_GRABMIC_ENDMIC             = 41,
		YOUME_EVENT_GRABMIC_NOTIFY_START       = 42,
		YOUME_EVENT_GRABMIC_NOTIFY_STOP        = 43,
		YOUME_EVENT_GRABMIC_NOTIFY_HASMIC      = 44,
		YOUME_EVENT_GRABMIC_NOTIFY_NOMIC       = 45,
		YOUME_EVENT_INVITEMIC_SETOPT_OK        = 46,
		YOUME_EVENT_INVITEMIC_SETOPT_FAILED    = 47,
		YOUME_EVENT_INVITEMIC_REQUEST_OK       = 48,
		YOUME_EVENT_INVITEMIC_REQUEST_FAILED   = 49,
		YOUME_EVENT_INVITEMIC_RESPONSE_OK      = 50,
		YOUME_EVENT_INVITEMIC_RESPONSE_FAILED  = 51,
		YOUME_EVENT_INVITEMIC_STOP_OK          = 52,
		YOUME_EVENT_INVITEMIC_STOP_FAILED      = 53,
		YOUME_EVENT_INVITEMIC_CAN_TALK         = 54,
		YOUME_EVENT_INVITEMIC_CANNOT_TALK      = 55,
		YOUME_EVENT_INVITEMIC_NOTIFY_CALL      = 56,
		YOUME_EVENT_INVITEMIC_NOTIFY_ANSWER    = 57,
		YOUME_EVENT_INVITEMIC_NOTIFY_CANCEL    = 58,
		YOUME_EVENT_SEND_MESSAGE_RESULT        = 59,
		YOUME_EVENT_MESSAGE_NOTIFY             = 60,
		YOUME_EVENT_SET_WHITE_USER_LIST_OK     = 61,
		YOUME_EVENT_SET_WHITE_USER_LIST_FAILED = 62,
		YOUME_EVENT_KICK_RESULT                = 63,
		YOUME_EVENT_KICK_NOTIFY                = 64,
		YOUME_EVENT_FAREND_VOICE_LEVEL         = 65,
		YOUME_EVENT_OTHERS_BE_KICKED           = 66,
		YOUME_EVENT_SPEAK_RECORD_ON            = 67,
		YOUME_EVENT_SPEAK_RECORD_OFF           = 68,
		YOUME_EVENT_SPEAK_RECORD_RESET         = 69,
		YOUME_EVENT_EFFECT_PLAY_COMPLETE       = 70,
		YOUME_EVENT_SWITCH_OUTPUT              = 71,
		YOUME_EVENT_CHECK_DEVICE_MUTE_RESULT   = 72,
		YOUME_EVENT_EOF                        = 73,
		YOUME_EVENT_MAX                        = 74
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct YouMeTalk.ChannelMemberState
	 * Size -> 0x0018
	 */
	struct FChannelMemberState
	{
	public:
		bool                                                       bisJoin;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TY6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              userId;                                                  // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
