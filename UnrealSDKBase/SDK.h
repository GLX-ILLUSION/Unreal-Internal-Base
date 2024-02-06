﻿#pragma once

// --------------------------------------- \\
//      Sdk Generated By GLX-ILLSION       \\
// --------------------------------------- \\

#include <set>
#include <string>
#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <cstdint>
#include <Windows.h>

#include "SDK/BasicTypes_Package.h"
#include "SDK/Bones_Package.h"
#include "SDK/Global_Package.h"
#include "SDK/CoreUObject_Package.h"
#include "SDK/SlateCore_Package.h"
#include "SDK/InputCore_Package.h"
#include "SDK/DeveloperSettings_Package.h"
#include "SDK/Chaos_Package.h"
#include "SDK/PhysicsCore_Package.h"
#include "SDK/AudioPlatformConfiguration_Package.h"
#include "SDK/PropertyAccess_Package.h"
#include "SDK/PacketHandler_Package.h"
#include "SDK/Slate_Package.h"
#include "SDK/ClothingSystemRuntimeInterface_Package.h"
#include "SDK/Engine_Package.h"
#include "SDK/PropertyPath_Package.h"
#include "SDK/MovieScene_Package.h"
#include "SDK/MovieSceneTracks_Package.h"
#include "SDK/UMG_Package.h"
#include "SDK/ClothingSystemRuntimeCommon_Package.h"
#include "SDK/ChaosCloth_Package.h"
#include "SDK/MagicLeapEyeTracker_Package.h"
#include "SDK/TimeManagement_Package.h"
#include "SDK/EyeTracker_Package.h"
#include "SDK/EngineSettings_Package.h"
#include "SDK/CommonInput_Package.h"
#include "SDK/ControllerData_PC_Gamepad_Package.h"
#include "SDK/GameplayTags_Package.h"
#include "SDK/CommonUI_Package.h"
#include "SDK/Style_Login_DiscordButton_Package.h"
#include "SDK/MeshDescription_Package.h"
#include "SDK/EditableMesh_Package.h"
#include "SDK/HeadMountedDisplay_Package.h"
#include "SDK/OculusHMD_Package.h"
#include "SDK/OculusMR_Package.h"
#include "SDK/E_MovementState_Package.h"
#include "SDK/BPI_Character_Package.h"
#include "SDK/ST_WeaponAnimData_Package.h"
#include "SDK/BP_BaseWeapon_Package.h"
#include "SDK/GameplayTasks_Package.h"
#include "SDK/NavigationSystem_Package.h"
#include "SDK/AIModule_Package.h"
#include "SDK/DataRegistry_Package.h"
#include "SDK/GameplayAbilities_Package.h"
#include "SDK/CPathfinding_Package.h"
#include "SDK/EnhancedInput_Package.h"
#include "SDK/Main_Package.h"
#include "SDK/St_SkillMontageInfo_Package.h"
#include "SDK/E_WeaponSubType_Package.h"
#include "SDK/GA_Base_Package.h"
#include "SDK/RadarChart_Package.h"
#include "SDK/LiveLinkInterface_Package.h"
#include "SDK/LiveLinkComponents_Package.h"
#include "SDK/UIC_BattleMapBtn_p_Package.h"
#include "SDK/BP_altarBase_Package.h"
#include "SDK/Firework_Package.h"
#include "SDK/BP_OrganBase_Package.h"
#include "SDK/GeometryCacheTracks_Package.h"
#include "SDK/RichHref_p_Package.h"
#include "SDK/AI_Base_Package.h"
#include "SDK/MagicLeapARPin_Package.h"
#include "SDK/MagicLeapARPinInfoActor_Package.h"
#include "SDK/AugmentedReality_Package.h"
#include "SDK/MagicLeapImageTracker_Package.h"
#include "SDK/MagicLeapPlanes_Package.h"
#include "SDK/MagicLeapAR_Package.h"
#include "SDK/AssetRegistry_Package.h"
#include "SDK/BP_MenuInterface_Package.h"
#include "SDK/ChangeSkinUtil_Package.h"
#include "SDK/AutomationUtils_Package.h"
#include "SDK/WBP_AlertBox_p_Package.h"
#include "SDK/Style_Login_NoticeBoardButton_Package.h"
#include "SDK/NetCore_Package.h"
#include "SDK/EngineMessages_Package.h"
#include "SDK/AvfMediaFactory_Package.h"
#include "SDK/FacialAnimation_Package.h"
#include "SDK/Style_CommonBtnBig001_Text_Package.h"
#include "SDK/BP_OliveTrap_Package.h"
#include "SDK/UIC_CommonButtonHintText_p_Package.h"
#include "SDK/AudioMixer_Package.h"
#include "SDK/Synthesis_Package.h"
#include "SDK/FireworkServer_Package.h"
#include "SDK/Landscape_Package.h"
#include "SDK/MoviePlayer_Package.h"
#include "SDK/E_WeaponHoldType_Package.h"
#include "SDK/BP_ReviveAltarBase_Package.h"
#include "SDK/MagicLeapPrivileges_Package.h"
#include "SDK/MagicLeapSecureStorage_Package.h"
#include "SDK/WBP_Login_p_Package.h"
#include "SDK/Style_Login_StartButton_Package.h"
#include "SDK/Style_Login_ChangeServeButton_Package.h"
#include "SDK/ProceduralMeshComponent_Package.h"
#include "SDK/GeometryCollectionTracks_Package.h"
#include "SDK/MagicLeapSharedWorld_Package.h"
#include "SDK/ChaosSolverEngine_Package.h"
#include "SDK/BP_FSMSystem_Package.h"
#include "SDK/BP_TorchBase_Package.h"
#include "SDK/ImageWrapper_Package.h"
#include "SDK/VectorVM_Package.h"
#include "SDK/AnimationCore_Package.h"
#include "SDK/Style_Text_a27f68_13_Package.h"
#include "SDK/Style_CommonBtnMiddle002_Text_Package.h"
#include "SDK/UIC_CommonBigButton1_p_Package.h"
#include "SDK/BP_Destructible_Package.h"
#include "SDK/BP_Doorbase_Package.h"
#include "SDK/Style_Text_736F79FF_14_Package.h"
#include "SDK/MRMesh_Package.h"
#include "SDK/SessionMessages_Package.h"
#include "SDK/MagicLeapHandTracking_Package.h"
#include "SDK/MagicLeapIdentity_Package.h"
#include "SDK/WmfMediaFactory_Package.h"
#include "SDK/WBP_Map_p_Package.h"
#include "SDK/Style_Text_49302e_13_Package.h"
#include "SDK/Style_Text_423026_23_Package.h"
#include "SDK/Style_Login_DeveloperListButton_Package.h"
#include "SDK/MagicLeapAudio_Package.h"
#include "SDK/GA_ActorPlacement_Package.h"
#include "SDK/UIC_Login_ChangeServeButton_p_Package.h"
#include "SDK/Overlay_Package.h"
#include "SDK/JsonUtilities_Package.h"
#include "SDK/AN_CustomNotify_Package.h"
#include "SDK/Style_Text_ACA7B1_16_Package.h"
#include "SDK/Style_CommonBtnBig002_Package.h"
#include "SDK/BP_ProjectileCheckBox_Package.h"
#include "SDK/NiagaraCore_Package.h"
#include "SDK/NiagaraShader_Package.h"
#include "SDK/Niagara_Package.h"
#include "SDK/InteractiveToolsFramework_Package.h"
#include "SDK/MaterialShaderQualitySettings_Package.h"
#include "SDK/GeometryCollectionEngine_Package.h"
#include "SDK/WBP_Loading_p_Package.h"
#include "SDK/MagicLeapController_Package.h"
#include "SDK/Renderer_Package.h"
#include "SDK/BP_Character_Package.h"
#include "SDK/Style_Transaction_CkbButton_Package.h"
#include "SDK/WidgetCarousel_Package.h"
#include "SDK/GA_EquipWeapon_Package.h"
#include "SDK/MediaUtils_Package.h"
#include "SDK/MediaAssets_Package.h"
#include "SDK/ImgMedia_Package.h"
#include "SDK/ImgMediaEngine_Package.h"
#include "SDK/CableComponent_Package.h"
#include "SDK/WBP_BattleLoading_p_Package.h"
#include "SDK/UIC_CommonButton_Package.h"
#include "SDK/DmgTypeBP_Environmental_Package.h"
#include "SDK/ReplicationGraph_Package.h"
#include "SDK/OnlineSubsystem_Package.h"
#include "SDK/OnlineSubsystemUtils_Package.h"
#include "SDK/AppleImageUtils_Package.h"
#include "SDK/ArchVisCharacter_Package.h"
#include "SDK/CinematicCamera_Package.h"
#include "SDK/ClothingSystemRuntimeNv_Package.h"
#include "SDK/AN_PlaySoundHasEventName_Package.h"
#include "SDK/BP_EmptyGameMode_Package.h"
#include "SDK/WBP_Rotating_loading_p_Package.h"
#include "SDK/UIC_Login_StartButton_p_Package.h"
#include "SDK/UIC_Login_LandingButton_p_Package.h"
#include "SDK/Style_CommonBtnBig003_Package.h"
#include "SDK/GA_KnockedBack_Package.h"
#include "SDK/BP_EquipInfoBillboard_Package.h"
#include "SDK/MagicLeapHandMeshing_Package.h"
#include "SDK/MagicLeapLightEstimation_Package.h"
#include "SDK/BP_OliveTrap_ActorPlacement_Package.h"
#include "SDK/OnlineSubsystemSteam_Package.h"
#include "SDK/BP_TreasurepileBase_Package.h"
#include "SDK/Style_HintEmptyButton_Package.h"
#include "SDK/Style_CommonEmptyButton_Package.h"
#include "SDK/Style_Text_E3B489_14_Package.h"
#include "SDK/Mouse_Making_Package.h"
#include "SDK/Crosshair_p_Package.h"
#include "SDK/bp_ragdoll_component_Package.h"
#include "SDK/AnimGraphRuntime_Package.h"
#include "SDK/KawaiiPhysics_Package.h"
#include "SDK/ABP_man_Aiden_001_rig_Skeleton_Cloth_Package.h"
#include "SDK/VariantManagerContent_Package.h"
#include "SDK/ImageWriteQueue_Package.h"
#include "SDK/MovieSceneCapture_Package.h"
#include "SDK/LiveLinkMessageBusFramework_Package.h"
#include "SDK/UIC_Login_ServeChoose_p_Package.h"
#include "SDK/LevelSequence_Package.h"
#include "SDK/OculusInput_Package.h"
#include "SDK/GroundItem_Package.h"
#include "SDK/BP_WarpGateBase_Package.h"
#include "SDK/UdpMessaging_Package.h"
#include "SDK/ActorSequence_Package.h"
#include "SDK/Style_Map_MarkButton_Package.h"
#include "SDK/Style_CommonButton_Package.h"
#include "SDK/EmptyActor_Package.h"
#include "SDK/Style_Title_E3B489_23_Package.h"
#include "SDK/SignificanceManager_Package.h"
#include "SDK/GooglePAD_Package.h"
#include "SDK/StaticMeshDescription_Package.h"
#include "SDK/LuminRuntimeSettings_Package.h"
#include "SDK/MediaCompositing_Package.h"
#include "SDK/Serialization_Package.h"
#include "SDK/LocationServicesBPLibrary_Package.h"
#include "SDK/WBP_HeadInfo_m_Package.h"
#include "SDK/BP_MedicineActor_Base_Package.h"
#include "SDK/Style_Login_ServeChooseButton_Package.h"
#include "SDK/AudioExtensions_Package.h"
#include "SDK/SoundFields_Package.h"
#include "SDK/NiagaraAnimNotifies_Package.h"
#include "SDK/NiagaraUIRenderer_Package.h"
#include "SDK/ImgMediaFactory_Package.h"
#include "SDK/E_OverlayState_Package.h"
#include "SDK/Style_Map_ResetMaekButton_Package.h"
#include "SDK/UObjectPlugin_Package.h"
#include "SDK/UIC_CommonBigButton2_p_Package.h"
#include "SDK/WBP_ScrollAlertBox_p_Package.h"
#include "SDK/UnLua_Package.h"
#include "SDK/FieldSystemEngine_Package.h"
#include "SDK/AssetTags_Package.h"
#include "SDK/TemplateSequence_Package.h"
#include "SDK/Style_Map_UnmarkButton_Package.h"
#include "SDK/AudioCapture_Package.h"
#include "SDK/TakeMovieScene_Package.h"
#include "SDK/BPI_Combat_Package.h"
#include "SDK/BP_TreasureBase_Package.h"
#include "SDK/ActorLayerUtilities_Package.h"
#include "SDK/LiveLinkMovieScene_Package.h"
#include "SDK/WBP_MessageBox_p_Package.h"
#include "SDK/Style_CommonBtnBig001_Package.h"
#include "SDK/ControllerData_PC_Keyboard_Package.h"
#include "SDK/GLTFExporter_Package.h"
#include "SDK/Paper2D_Package.h"
#include "SDK/LiveLink_Package.h"
#include "SDK/TcpMessaging_Package.h"
#include "SDK/Mouse_Common_Package.h"
#include "SDK/AndroidPermission_Package.h"
#include "SDK/OpenXRHandTracking_Package.h"
#include "SDK/DatasmithContent_Package.h"
#include "SDK/MagicLeap_Package.h"
#include "SDK/AudioAnalyzer_Package.h"
#include "SDK/AudioSynesthesia_Package.h"
#include "SDK/Mouse_Trade_Package.h"
#include "SDK/InputData_DefaultClickCancel_Package.h"
#include "SDK/ABP_Character_Package.h"
#include "SDK/Style_Login_Agreement_Package.h"
#include "SDK/MobilePatchingUtils_Package.h"
#include "SDK/GE_KnockedBack_Package.h"
#include "SDK/BP_GroundItem_Package.h"
#include "SDK/WP_BearTrap_001_rig_Skeleton_AnimBlueprint_Package.h"
#include "SDK/WBP_DamageNum_p_Package.h"
#include "SDK/BP_OreBase_Package.h"
#include "SDK/WBP_NoticeBoard_p_Package.h"
#include "SDK/OodleNetworkHandlerComponent_Package.h"
#include "SDK/GeometryCache_Package.h"
#include "SDK/AIController_Base_Package.h"
#include "SDK/PhysXVehicles_Package.h"
#include "SDK/BuildPatchServices_Package.h"
#include "SDK/YouMeTalk_Package.h"
#include "SDK/Foliage_Package.h"
#include "SDK/DamageNumActor_Package.h"
#include "SDK/UIC_CommonEmptyButton_Package.h"
#include "SDK/ChaosNiagara_Package.h"
#include "SDK/MotoSynth_Package.h"
#include "SDK/GameplayCameras_Package.h"
#include "SDK/AnimationSharing_Package.h"
#include "SDK/LightPropagationVolumeRuntime_Package.h"
#include "SDK/CustomMeshComponent_Package.h"
#include "SDK/WBP_EmptyCanvas_Package.h"
#include "SDK/Style_CommonBtnBig002_Text_Package.h"

namespace skeleton
{
	enum bones
	{
		Root = 0,
		pelvis = 1,
		spine_01 = 2,
		spine_02 = 3,
		spine_03 = 4,
		clavicle_l = 5,
		upperarm_l = 6,
		lowerarm_l = 7,
		hand_l = 8,
		index_01_l = 9,
		index_02_l = 10,
		index_03_l = 11,
		middle_01_l = 12,
		middle_02_l = 13,
		middle_03_l = 14,
		thumb_01_l = 15,
		thumb_02_l = 16,
		thumb_03_l = 17,
		cup_l = 18,
		pinky_01_l = 19,
		pinky_02_l = 20,
		pinky_03_l = 21,
		ring_01_l = 22,
		ring_02_l = 23,
		ring_03_l = 24,
		weapon_l = 25,
		lowerarm_twist_01_l = 26,
		elbow_twist_l = 27,
		upperarm_twist_01_l = 28,
		clavicle_l_low = 29,
		upperarm_l_revamp = 30,
		clavicle_r = 31,
		upperarm_r = 32,
		lowerarm_r = 33,
		hand_r = 34,
		index_01_r = 35,
		index_02_r = 36,
		index_03_r = 37,
		middle_01_r = 38,
		middle_02_r = 39,
		middle_03_r = 40,
		thumb_01_r = 41,
		thumb_02_r = 42,
		thumb_03_r = 43,
		cup_r = 44,
		ring_01_r = 45,
		ring_02_r = 46,
		ring_03_r = 47,
		pinky_01_r = 48,
		pinky_02_r = 49,
		pinky_03_r = 50,
		weapon_r = 51,
		lowerarm_twist_01_r = 52,
		elbow_twist_r = 53,
		upperarm_twist_01_r = 54,
		clavicle_r_low = 55,
		upperarm_r_revamp = 56,
		neck_01 = 57,
		head = 58,
		unrealEye_R = 59,
		unrealJaw_M = 60,
		unrealEye_L = 61,
		first_person_camera = 62,
		thigh_l = 63,
		calf_l = 64,
		calf_twist_01_l = 65,
		foot_l = 66,
		ball_l = 67,
		thigh_twist_01_l = 68,
		knee_twist_l = 69,
		thigh_r = 70,
		calf_r = 71,
		calf_twist_01_r = 72,
		foot_r = 73,
		ball_r = 74,
		thigh_twist_01_r = 75,
		knee_twist_r = 76,
		putt_r = 77,
		putt_l = 78,
		ik_foot_root = 79,
		ik_foot_l = 80,
		ik_foot_r = 81,
		ik_hand_root = 82,
		ik_hand_gun = 83,
		ik_hand_l = 84,
		ik_hand_r = 85,
		None = 86,
	};
	inline std::vector<std::pair<int, int>> Connections = {
						{neck_01, head},
						{spine_02, neck_01},
						{spine_01, spine_02},
						{spine_03, spine_01},
						{pelvis, spine_03},
						{clavicle_r, spine_02},
						{upperarm_r, clavicle_r},
						{lowerarm_r, upperarm_r},
						{hand_r, lowerarm_r},
						{clavicle_l, spine_02},
						{upperarm_l, clavicle_l},
						{lowerarm_l, upperarm_l},
						{hand_l, lowerarm_l},
						{thigh_r, pelvis},
						{calf_r, thigh_r},
						{foot_r, calf_r},
						{thigh_l, pelvis},
						{calf_l, thigh_l},
						{foot_l, calf_l},
	};
};