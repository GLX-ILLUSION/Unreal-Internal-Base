/**
 * Name: GreedIsGood
 * Version: fodase
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.UnInit
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::UnInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.UnInit");
		
		UYouMeTalkAPI_UnInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.UnbindObserver
	 * 		Flags  -> ()
	 */
	void UYouMeTalkAPI::UnbindObserver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.UnbindObserver");
		
		UYouMeTalkAPI_UnbindObserver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.Talk_SetMicLevelCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::Talk_SetMicLevelCallback(int32_t MaxLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.Talk_SetMicLevelCallback");
		
		UYouMeTalkAPI_Talk_SetMicLevelCallback_Params params {};
		params.MaxLevel = MaxLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.StopInviteMic
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::StopInviteMic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.StopInviteMic");
		
		UYouMeTalkAPI_StopInviteMic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.StopGrabMicAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pContent                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::StopGrabMicAction(const class FString& pChannelID, const class FString& pContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.StopGrabMicAction");
		
		UYouMeTalkAPI_StopGrabMicAction_Params params {};
		params.pChannelID = pChannelID;
		params.pContent = pContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.StopEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            effectId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::StopEffect(int32_t effectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.StopEffect");
		
		UYouMeTalkAPI_StopEffect_Params params {};
		params.effectId = effectId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.StopBackgroundMusic
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::StopBackgroundMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.StopBackgroundMusic");
		
		UYouMeTalkAPI_StopBackgroundMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.StopAllEffects
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::StopAllEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.StopAllEffects");
		
		UYouMeTalkAPI_StopAllEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.StartGrabMicAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pContent                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::StartGrabMicAction(const class FString& pChannelID, const class FString& pContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.StartGrabMicAction");
		
		UYouMeTalkAPI_StartGrabMicAction_Params params {};
		params.pChannelID = pChannelID;
		params.pContent = pContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SpeakToChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strChannelID                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SpeakToChannel(const class FString& strChannelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SpeakToChannel");
		
		UYouMeTalkAPI_SpeakToChannel_Params params {};
		params.strChannelID = strChannelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetWhiteUserList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strChannelID                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      vecWhiteUserList                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetWhiteUserList(const class FString& strChannelID, const class FString& vecWhiteUserList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetWhiteUserList");
		
		UYouMeTalkAPI_SetWhiteUserList_Params params {};
		params.strChannelID = strChannelID;
		params.vecWhiteUserList = vecWhiteUserList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            uiVolume                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetVolume(int32_t uiVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetVolume");
		
		UYouMeTalkAPI_SetVolume_Params params {};
		params.uiVolume = uiVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetVadCallbackEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetVadCallbackEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetVadCallbackEnabled");
		
		UYouMeTalkAPI_SetVadCallbackEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetUserVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            uiVolume                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetUserVolume(const class FString& userId, int32_t uiVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetUserVolume");
		
		UYouMeTalkAPI_SetUserVolume_Params params {};
		params.userId = userId;
		params.uiVolume = uiVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetUserRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYouMeUserRole                                     eUserRole                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetUserRole(EYouMeUserRole eUserRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetUserRole");
		
		UYouMeTalkAPI_SetUserRole_Params params {};
		params.eUserRole = eUserRole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetUseMobileNetworkEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetUseMobileNetworkEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetUseMobileNetworkEnabled");
		
		UYouMeTalkAPI_SetUseMobileNetworkEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pToken                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetToken(const class FString& pToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetToken");
		
		UYouMeTalkAPI_SetToken_Params params {};
		params.pToken = pToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetSpeakerRecordOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetSpeakerRecordOn(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetSpeakerRecordOn");
		
		UYouMeTalkAPI_SetSpeakerRecordOn_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetSpeakerMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               mute                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetSpeakerMute(bool mute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetSpeakerMute");
		
		UYouMeTalkAPI_SetSpeakerMute_Params params {};
		params.mute = mute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetSoundtouchPitchSemiTones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fPitchSemiTones                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetSoundtouchPitchSemiTones(float fPitchSemiTones)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetSoundtouchPitchSemiTones");
		
		UYouMeTalkAPI_SetSoundtouchPitchSemiTones_Params params {};
		params.fPitchSemiTones = fPitchSemiTones;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetServerRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYouMeRTCServerRegion                              regionId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      extRegionName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAppend                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetServerRegion(EYouMeRTCServerRegion regionId, const class FString& extRegionName, bool bAppend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetServerRegion");
		
		UYouMeTalkAPI_SetServerRegion_Params params {};
		params.regionId = regionId;
		params.extRegionName = extRegionName;
		params.bAppend = bAppend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetReverbEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetReverbEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetReverbEnabled");
		
		UYouMeTalkAPI_SetReverbEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetRestApiCallback
	 * 		Flags  -> ()
	 */
	void UYouMeTalkAPI::SetRestApiCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetRestApiCallback");
		
		UYouMeTalkAPI_SetRestApiCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetReleaseMicWhenMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetReleaseMicWhenMute(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetReleaseMicWhenMute");
		
		UYouMeTalkAPI_SetReleaseMicWhenMute_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetRecordingTimeMs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            timeMs                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetRecordingTimeMs(int32_t timeMs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetRecordingTimeMs");
		
		UYouMeTalkAPI_SetRecordingTimeMs_Params params {};
		params.timeMs = timeMs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetPlayingTimeMs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            timeMs                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetPlayingTimeMs(int32_t timeMs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetPlayingTimeMs");
		
		UYouMeTalkAPI_SetPlayingTimeMs_Params params {};
		params.timeMs = timeMs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetOutputToSpeaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutputToSpeaker                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetOutputToSpeaker(bool bOutputToSpeaker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetOutputToSpeaker");
		
		UYouMeTalkAPI_SetOutputToSpeaker_Params params {};
		params.bOutputToSpeaker = bOutputToSpeaker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetOtherSpeakerMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pUserID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               mute                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetOtherSpeakerMute(const class FString& pUserID, bool mute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetOtherSpeakerMute");
		
		UYouMeTalkAPI_SetOtherSpeakerMute_Params params {};
		params.pUserID = pUserID;
		params.mute = mute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetOtherMicMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pUserID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               mute                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetOtherMicMute(const class FString& pUserID, bool mute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetOtherMicMute");
		
		UYouMeTalkAPI_SetOtherMicMute_Params params {};
		params.pUserID = pUserID;
		params.mute = mute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetMicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            uiVolume                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetMicVolume(int32_t uiVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetMicVolume");
		
		UYouMeTalkAPI_SetMicVolume_Params params {};
		params.uiVolume = uiVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetMicrophoneMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               mute                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetMicrophoneMute(bool mute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetMicrophoneMute");
		
		UYouMeTalkAPI_SetMicrophoneMute_Params params {};
		params.mute = mute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetMagicVoiceEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetMagicVoiceEnable(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetMagicVoiceEnable");
		
		UYouMeTalkAPI_SetMagicVoiceEnable_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetListenOtherVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetListenOtherVoice(const class FString& userId, bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetListenOtherVoice");
		
		UYouMeTalkAPI_SetListenOtherVoice_Params params {};
		params.userId = userId;
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetInviteMicOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            waitTimeout                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxTalkTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetInviteMicOption(const class FString& pChannelID, int32_t waitTimeout, int32_t maxTalkTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetInviteMicOption");
		
		UYouMeTalkAPI_SetInviteMicOption_Params params {};
		params.pChannelID = pChannelID;
		params.waitTimeout = waitTimeout;
		params.maxTalkTime = maxTalkTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetHeadsetMonitorOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               micEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bgmEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetHeadsetMonitorOn(bool micEnabled, bool bgmEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetHeadsetMonitorOn");
		
		UYouMeTalkAPI_SetHeadsetMonitorOn_Params params {};
		params.micEnabled = micEnabled;
		params.bgmEnabled = bgmEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetGrabMicOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxAllowCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxTalkTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            voteTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetGrabMicOption(const class FString& pChannelID, int32_t Mode, int32_t maxAllowCount, int32_t maxTalkTime, int32_t voteTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetGrabMicOption");
		
		UYouMeTalkAPI_SetGrabMicOption_Params params {};
		params.pChannelID = pChannelID;
		params.Mode = Mode;
		params.maxAllowCount = maxAllowCount;
		params.maxTalkTime = maxTalkTime;
		params.voteTime = voteTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetForceDisableAGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               disable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetForceDisableAGC(bool disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetForceDisableAGC");
		
		UYouMeTalkAPI_SetForceDisableAGC_Params params {};
		params.disable = disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetForceDisableAEC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               disable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetForceDisableAEC(bool disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetForceDisableAEC");
		
		UYouMeTalkAPI_SetForceDisableAEC_Params params {};
		params.disable = disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetFarendVoiceLevelCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxMixedLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetFarendVoiceLevelCallback(int32_t MaxLevel, int32_t maxMixedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetFarendVoiceLevelCallback");
		
		UYouMeTalkAPI_SetFarendVoiceLevelCallback_Params params {};
		params.MaxLevel = MaxLevel;
		params.maxMixedLevel = maxMixedLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetExternalSoundCardMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isExternalSoundCard                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetExternalSoundCardMode(bool isExternalSoundCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetExternalSoundCardMode");
		
		UYouMeTalkAPI_SetExternalSoundCardMode_Params params {};
		params.isExternalSoundCard = isExternalSoundCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetExitCommModeWhenHeadsetPlugin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetExitCommModeWhenHeadsetPlugin(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetExitCommModeWhenHeadsetPlugin");
		
		UYouMeTalkAPI_SetExitCommModeWhenHeadsetPlugin_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetEffectVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            vol                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetEffectVolume(int32_t vol)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetEffectVolume");
		
		UYouMeTalkAPI_SetEffectVolume_Params params {};
		params.vol = vol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetChannelAudioMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChannelAudioMode                                  audioMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetChannelAudioMode(EChannelAudioMode audioMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetChannelAudioMode");
		
		UYouMeTalkAPI_SetChannelAudioMode_Params params {};
		params.audioMode = audioMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetBackgroundMusicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            vol                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetBackgroundMusicVolume(int32_t vol)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetBackgroundMusicVolume");
		
		UYouMeTalkAPI_SetBackgroundMusicVolume_Params params {};
		params.vol = vol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetAutoSendStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoSend                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkAPI::SetAutoSendStatus(bool bAutoSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetAutoSendStatus");
		
		UYouMeTalkAPI_SetAutoSendStatus_Params params {};
		params.bAutoSend = bAutoSend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SetAudioEffectType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EffectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SetAudioEffectType(int32_t EffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SetAudioEffectType");
		
		UYouMeTalkAPI_SetAudioEffectType_Params params {};
		params.EffectType = EffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.SendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pContent                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RequestID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::SendMessage(const class FString& pChannelID, const class FString& pContent, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.SendMessage");
		
		UYouMeTalkAPI_SendMessage_Params params {};
		params.pChannelID = pChannelID;
		params.pContent = pContent;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ResumeMicSync
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::ResumeMicSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ResumeMicSync");
		
		UYouMeTalkAPI_ResumeMicSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ResumeChannel
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::ResumeChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ResumeChannel");
		
		UYouMeTalkAPI_ResumeChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ResumeBackgroundMusic
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::ResumeBackgroundMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ResumeBackgroundMusic");
		
		UYouMeTalkAPI_ResumeBackgroundMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ResumeAllEffects
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::ResumeAllEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ResumeAllEffects");
		
		UYouMeTalkAPI_ResumeAllEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ResponseInviteMic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pUserID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isAccept                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pContent                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::ResponseInviteMic(const class FString& pUserID, bool isAccept, const class FString& pContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ResponseInviteMic");
		
		UYouMeTalkAPI_ResponseInviteMic_Params params {};
		params.pUserID = pUserID;
		params.isAccept = isAccept;
		params.pContent = pContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.RequestRestApi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strCommand                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strQueryBody                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RequestID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::RequestRestApi(const class FString& strCommand, const class FString& strQueryBody, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.RequestRestApi");
		
		UYouMeTalkAPI_RequestRestApi_Params params {};
		params.strCommand = strCommand;
		params.strQueryBody = strQueryBody;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.RequestInviteMic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pUserID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pContent                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::RequestInviteMic(const class FString& pChannelID, const class FString& pUserID, const class FString& pContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.RequestInviteMic");
		
		UYouMeTalkAPI_RequestInviteMic_Params params {};
		params.pChannelID = pChannelID;
		params.pUserID = pUserID;
		params.pContent = pContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.RequestGrabMic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isAutoOpenMic                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pContent                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::RequestGrabMic(const class FString& pChannelID, int32_t Score, bool isAutoOpenMic, const class FString& pContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.RequestGrabMic");
		
		UYouMeTalkAPI_RequestGrabMic_Params params {};
		params.pChannelID = pChannelID;
		params.Score = Score;
		params.isAutoOpenMic = isAutoOpenMic;
		params.pContent = pContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ReleaseMicSync
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::ReleaseMicSync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ReleaseMicSync");
		
		UYouMeTalkAPI_ReleaseMicSync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.ReleaseGrabMic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::ReleaseGrabMic(const class FString& pChannelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.ReleaseGrabMic");
		
		UYouMeTalkAPI_ReleaseGrabMic_Params params {};
		params.pChannelID = pChannelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.PlayEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pFilePath                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            repeatCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            pEffectId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::PlayEffect(const class FString& pFilePath, int32_t repeatCount, int32_t* pEffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.PlayEffect");
		
		UYouMeTalkAPI_PlayEffect_Params params {};
		params.pFilePath = pFilePath;
		params.repeatCount = repeatCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pEffectId != nullptr)
			*pEffectId = params.pEffectId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.PlayBackgroundMusic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pFilePath                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::PlayBackgroundMusic(const class FString& pFilePath, bool bRepeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.PlayBackgroundMusic");
		
		UYouMeTalkAPI_PlayBackgroundMusic_Params params {};
		params.pFilePath = pFilePath;
		params.bRepeat = bRepeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.PauseEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            effectId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::PauseEffect(int32_t effectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.PauseEffect");
		
		UYouMeTalkAPI_PauseEffect_Params params {};
		params.effectId = effectId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.PauseChannel
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::PauseChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.PauseChannel");
		
		UYouMeTalkAPI_PauseChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.PauseBackgroundMusic
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::PauseBackgroundMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.PauseBackgroundMusic");
		
		UYouMeTalkAPI_PauseBackgroundMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.LeaveChannelMultiMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strChannelID                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::LeaveChannelMultiMode(const class FString& strChannelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.LeaveChannelMultiMode");
		
		UYouMeTalkAPI_LeaveChannelMultiMode_Params params {};
		params.strChannelID = strChannelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.LeaveChannelAll
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::LeaveChannelAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.LeaveChannelAll");
		
		UYouMeTalkAPI_LeaveChannelAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.KickOtherFromChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pUserID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            lastTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::KickOtherFromChannel(const class FString& pUserID, const class FString& pChannelID, int32_t lastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.KickOtherFromChannel");
		
		UYouMeTalkAPI_KickOtherFromChannel_Params params {};
		params.pUserID = pUserID;
		params.pChannelID = pChannelID;
		params.lastTime = lastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.JoinChannelSingleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUserID                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strChannelID                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYouMeUserRole                                     userRole                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckRoomExist                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::JoinChannelSingleMode(const class FString& strUserID, const class FString& strChannelID, EYouMeUserRole userRole, bool bCheckRoomExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.JoinChannelSingleMode");
		
		UYouMeTalkAPI_JoinChannelSingleMode_Params params {};
		params.strUserID = strUserID;
		params.strChannelID = strChannelID;
		params.userRole = userRole;
		params.bCheckRoomExist = bCheckRoomExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.JoinChannelMultiMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUserID                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYouMeUserRole                                     eUserRole                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strChannelID                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckRoomExist                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::JoinChannelMultiMode(const class FString& strUserID, EYouMeUserRole eUserRole, const class FString& strChannelID, bool bCheckRoomExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.JoinChannelMultiMode");
		
		UYouMeTalkAPI_JoinChannelMultiMode_Params params {};
		params.strUserID = strUserID;
		params.eUserRole = eUserRole;
		params.strChannelID = strChannelID;
		params.bCheckRoomExist = bCheckRoomExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.IsSpeakerRecording
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::IsSpeakerRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.IsSpeakerRecording");
		
		UYouMeTalkAPI_IsSpeakerRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.IsInited
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::IsInited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.IsInited");
		
		UYouMeTalkAPI_IsInited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.IsInChannel
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::IsInChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.IsInChannel");
		
		UYouMeTalkAPI_IsInChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.IsInCertainChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pChannelID                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UYouMeTalkAPI::IsInCertainChannel(const class FString& pChannelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.IsInCertainChannel");
		
		UYouMeTalkAPI_IsInCertainChannel_Params params {};
		params.pChannelID = pChannelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.IsBackgroundMusicPlaying
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::IsBackgroundMusicPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.IsBackgroundMusicPlaying");
		
		UYouMeTalkAPI_IsBackgroundMusicPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strAppKey                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strAPPSecret                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYouMeRTCServerRegion                              youMeRTCServerRegion                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strExtServerRegionName                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::Init(const class FString& strAppKey, const class FString& strAPPSecret, EYouMeRTCServerRegion youMeRTCServerRegion, const class FString& strExtServerRegionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.Init");
		
		UYouMeTalkAPI_Init_Params params {};
		params.strAppKey = strAppKey;
		params.strAPPSecret = strAPPSecret;
		params.youMeRTCServerRegion = youMeRTCServerRegion;
		params.strExtServerRegionName = strExtServerRegionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetVolume
	 * 		Flags  -> ()
	 */
	int32_t UYouMeTalkAPI::GetVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetVolume");
		
		UYouMeTalkAPI_GetVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetUserRole
	 * 		Flags  -> ()
	 */
	EYouMeUserRole UYouMeTalkAPI::GetUserRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetUserRole");
		
		UYouMeTalkAPI_GetUserRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetUseMobileNetworkEnabled
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::GetUseMobileNetworkEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetUseMobileNetworkEnabled");
		
		UYouMeTalkAPI_GetUseMobileNetworkEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetSpeakerMute
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::GetSpeakerMute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetSpeakerMute");
		
		UYouMeTalkAPI_GetSpeakerMute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetSoundtouchPitchSemiTones
	 * 		Flags  -> ()
	 */
	float UYouMeTalkAPI::GetSoundtouchPitchSemiTones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetSoundtouchPitchSemiTones");
		
		UYouMeTalkAPI_GetSoundtouchPitchSemiTones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetSDKVersion
	 * 		Flags  -> ()
	 */
	int32_t UYouMeTalkAPI::GetSDKVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetSDKVersion");
		
		UYouMeTalkAPI_GetSDKVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetMicVolume
	 * 		Flags  -> ()
	 */
	int32_t UYouMeTalkAPI::GetMicVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetMicVolume");
		
		UYouMeTalkAPI_GetMicVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetMicrophoneMute
	 * 		Flags  -> ()
	 */
	bool UYouMeTalkAPI::GetMicrophoneMute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetMicrophoneMute");
		
		UYouMeTalkAPI_GetMicrophoneMute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetEffectVolume
	 * 		Flags  -> ()
	 */
	int32_t UYouMeTalkAPI::GetEffectVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetEffectVolume");
		
		UYouMeTalkAPI_GetEffectVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetChannelUserList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      channelId                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               notifyMemChange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYouMeErrorCode UYouMeTalkAPI::GetChannelUserList(const class FString& channelId, int32_t MaxCount, bool notifyMemChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetChannelUserList");
		
		UYouMeTalkAPI_GetChannelUserList_Params params {};
		params.channelId = channelId;
		params.MaxCount = MaxCount;
		params.notifyMemChange = notifyMemChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.GetBackgroundMusicVolume
	 * 		Flags  -> ()
	 */
	int32_t UYouMeTalkAPI::GetBackgroundMusicVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.GetBackgroundMusicVolume");
		
		UYouMeTalkAPI_GetBackgroundMusicVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.CleanSpeakerRecordCache
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::CleanSpeakerRecordCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.CleanSpeakerRecordCache");
		
		UYouMeTalkAPI_CleanSpeakerRecordCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.CheckIsDeviceMute
	 * 		Flags  -> ()
	 */
	EYouMeErrorCode UYouMeTalkAPI::CheckIsDeviceMute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.CheckIsDeviceMute");
		
		UYouMeTalkAPI_CheckIsDeviceMute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkAPI.BindObserver
	 * 		Flags  -> ()
	 */
	void UYouMeTalkAPI::BindObserver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkAPI.BindObserver");
		
		UYouMeTalkAPI_BindObserver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYouMeTalkAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYouMeTalkAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class YouMeTalk.YouMeTalkAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkObserver.OnMemberChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Channel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 listMemberChangeMap                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FChannelMemberState>                 channelMemberStates                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkObserver::OnMemberChange(const class FString& Channel, TMap<class FString, class FString> listMemberChangeMap, TArray<struct FChannelMemberState> channelMemberStates, bool bUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkObserver.OnMemberChange");
		
		UYouMeTalkObserver_OnMemberChange_Params params {};
		params.Channel = Channel;
		params.listMemberChangeMap = listMemberChangeMap;
		params.channelMemberStates = channelMemberStates;
		params.bUpdate = bUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function YouMeTalk.YouMeTalkObserver.OnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYouMeEvent                                        Event                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYouMeErrorCode                                    Error                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Channel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Param                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYouMeTalkObserver::OnEvent(EYouMeEvent Event, EYouMeErrorCode Error, const class FString& Channel, const class FString& Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YouMeTalk.YouMeTalkObserver.OnEvent");
		
		UYouMeTalkObserver_OnEvent_Params params {};
		params.Event = Event;
		params.Error = Error;
		params.Channel = Channel;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYouMeTalkObserver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYouMeTalkObserver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class YouMeTalk.YouMeTalkObserver");
		return ptr;
	}

}


