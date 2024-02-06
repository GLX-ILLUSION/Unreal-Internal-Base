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
	 * 		Name   -> LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.CheckStop
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::CheckStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.CheckStop");
		
		Ubp_ragdoll_component_C_CheckStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.ChangeBodyInstanceDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStart                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::ChangeBodyInstanceDamping(bool bStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.ChangeBodyInstanceDamping");
		
		Ubp_ragdoll_component_C_ChangeBodyInstanceDamping_Params params {};
		params.bStart = bStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Ubp_ragdoll_component_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.ReceiveEndPlay");
		
		Ubp_ragdoll_component_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.check_reference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::check_reference(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.check_reference");
		
		Ubp_ragdoll_component_C_check_reference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString Ubp_ragdoll_component_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.GetModuleName");
		
		Ubp_ragdoll_component_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.ChangeBodyInstanceDamping__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStart                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::ChangeBodyInstanceDamping__Overridden(bool bStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ChangeBodyInstanceDamping__Overridden");
		
		Ubp_ragdoll_component_C_ChangeBodyInstanceDamping__Overridden_Params params {};
		params.bStart = bStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.CheckStop__Overridden
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::CheckStop__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.CheckStop__Overridden");
		
		Ubp_ragdoll_component_C_CheckStop__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.SetRagdollCollision
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::SetRagdollCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.SetRagdollCollision");
		
		Ubp_ragdoll_component_C_SetRagdollCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_BakeBonesTransform
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::OnRep_BakeBonesTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_BakeBonesTransform");
		
		Ubp_ragdoll_component_C_OnRep_BakeBonesTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_client_build
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTransform>                          bones_transform                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        snapshot_name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPoseSnapshot                               PoseSnapshot                                               (Parm, OutParm)
	 */
	void Ubp_ragdoll_component_C::snapshot_client_build(TArray<struct FTransform>* bones_transform, const class FName& snapshot_name, struct FPoseSnapshot* PoseSnapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_client_build");
		
		Ubp_ragdoll_component_C_snapshot_client_build_Params params {};
		params.snapshot_name = snapshot_name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bones_transform != nullptr)
			*bones_transform = params.bones_transform;
		if (PoseSnapshot != nullptr)
			*PoseSnapshot = params.PoseSnapshot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.check_reference__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::check_reference__Overridden(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.check_reference__Overridden");
		
		Ubp_ragdoll_component_C_check_reference__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.server_disable_prediction
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::server_disable_prediction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_disable_prediction");
		
		Ubp_ragdoll_component_C_server_disable_prediction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.server_refresh_ragdolls
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::server_refresh_ragdolls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_refresh_ragdolls");
		
		Ubp_ragdoll_component_C_server_refresh_ragdolls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.server_auto_reset
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::server_auto_reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_auto_reset");
		
		Ubp_ragdoll_component_C_server_auto_reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_location
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::tick_update_location()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_location");
		
		Ubp_ragdoll_component_C_tick_update_location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.tick_ragdoll_blend
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::tick_ragdoll_blend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_ragdoll_blend");
		
		Ubp_ragdoll_component_C_tick_ragdoll_blend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_rotation
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::tick_update_rotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_rotation");
		
		Ubp_ragdoll_component_C_tick_update_rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_character_reference
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::OnRep_character_reference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_character_reference");
		
		Ubp_ragdoll_component_C_OnRep_character_reference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.recover_ragdoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               disable_no_anim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Pose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     recover_velocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              reset_time                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::recover_ragdoll(bool disable_no_anim, int32_t Pose, float Yaw, const struct FVector& recover_velocity, float* reset_time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.recover_ragdoll");
		
		Ubp_ragdoll_component_C_recover_ragdoll_Params params {};
		params.disable_no_anim = disable_no_anim;
		params.Pose = Pose;
		params.Yaw = Yaw;
		params.recover_velocity = recover_velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (reset_time != nullptr)
			*reset_time = params.reset_time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.init_ragdoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     init_velocity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::init_ragdoll(bool is_fatal, const struct FVector& init_velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.init_ragdoll");
		
		Ubp_ragdoll_component_C_init_ragdoll_Params params {};
		params.is_fatal = is_fatal;
		params.init_velocity = init_velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.Snapshot Server Build
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        snapshot_name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPoseSnapshot                               PoseSnapshot                                               (Parm, OutParm)
	 */
	void Ubp_ragdoll_component_C::SnapshotServerBuild(const class FName& snapshot_name, struct FPoseSnapshot* PoseSnapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.Snapshot Server Build");
		
		Ubp_ragdoll_component_C_SnapshotServerBuild_Params params {};
		params.snapshot_name = snapshot_name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PoseSnapshot != nullptr)
			*PoseSnapshot = params.PoseSnapshot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.get_character_velocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ragdoll_velocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::get_character_velocity(bool ragdoll_velocity, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.get_character_velocity");
		
		Ubp_ragdoll_component_C_get_character_velocity_Params params {};
		params.ragdoll_velocity = ragdoll_velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.tick_capsule_location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     pelvis_location                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     capsule_location                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     trace_hit_location                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               trace_hit_ground                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               pelvis_fully_grounded                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               pelvis_distance_grounded                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              pelvis_distance_to_ground                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::tick_capsule_location(struct FVector* pelvis_location, struct FVector* capsule_location, struct FVector* trace_hit_location, bool* trace_hit_ground, bool* pelvis_fully_grounded, bool* pelvis_distance_grounded, float* pelvis_distance_to_ground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.tick_capsule_location");
		
		Ubp_ragdoll_component_C_tick_capsule_location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pelvis_location != nullptr)
			*pelvis_location = params.pelvis_location;
		if (capsule_location != nullptr)
			*capsule_location = params.capsule_location;
		if (trace_hit_location != nullptr)
			*trace_hit_location = params.trace_hit_location;
		if (trace_hit_ground != nullptr)
			*trace_hit_ground = params.trace_hit_ground;
		if (pelvis_fully_grounded != nullptr)
			*pelvis_fully_grounded = params.pelvis_fully_grounded;
		if (pelvis_distance_grounded != nullptr)
			*pelvis_distance_grounded = params.pelvis_distance_grounded;
		if (pelvis_distance_to_ground != nullptr)
			*pelvis_distance_to_ground = params.pelvis_distance_to_ground;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.get_pelvis_rotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pose_id                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              pelvis_yaw                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::get_pelvis_rotation(int32_t* pose_id, float* pelvis_yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.get_pelvis_rotation");
		
		Ubp_ragdoll_component_C_get_pelvis_rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pose_id != nullptr)
			*pose_id = params.pose_id;
		if (pelvis_yaw != nullptr)
			*pelvis_yaw = params.pelvis_yaw;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.server_find_pelvis_offset
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::server_find_pelvis_offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_find_pelvis_offset");
		
		Ubp_ragdoll_component_C_server_find_pelvis_offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_bake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTransform>                          bones_transform                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void Ubp_ragdoll_component_C::multicast_ragdoll_bake(TArray<struct FTransform> bones_transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_bake");
		
		Ubp_ragdoll_component_C_multicast_ragdoll_bake_Params params {};
		params.bones_transform = bones_transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_bake
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::rpc_ragdoll_bake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_bake");
		
		Ubp_ragdoll_component_C_rpc_ragdoll_bake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveTick");
		
		Ubp_ragdoll_component_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveBeginPlay");
		
		Ubp_ragdoll_component_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_rotation
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::multicast_rotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_rotation");
		
		Ubp_ragdoll_component_C_multicast_rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::rpc_ragdoll_start(bool is_fatal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_start");
		
		Ubp_ragdoll_component_C_rpc_ragdoll_start_Params params {};
		params.is_fatal = is_fatal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.client_refresh_ragdolls
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::client_refresh_ragdolls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_refresh_ragdolls");
		
		Ubp_ragdoll_component_C_client_refresh_ragdolls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_bake
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::client_ragdoll_bake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_bake");
		
		Ubp_ragdoll_component_C_client_ragdoll_bake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_location
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::multicast_location()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_location");
		
		Ubp_ragdoll_component_C_multicast_location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     init_velocity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::multicast_ragdoll_start(bool is_fatal, const struct FVector& init_velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_start");
		
		Ubp_ragdoll_component_C_multicast_ragdoll_start_Params params {};
		params.is_fatal = is_fatal;
		params.init_velocity = init_velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_recover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               disable_no_anim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            pose_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              pose_yaw                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::rpc_ragdoll_recover(bool disable_no_anim, int32_t pose_id, float pose_yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_recover");
		
		Ubp_ragdoll_component_C_rpc_ragdoll_recover_Params params {};
		params.disable_no_anim = disable_no_anim;
		params.pose_id = pose_id;
		params.pose_yaw = pose_yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               disable_no_anim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            pose_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              pose_yaw                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     recover_velocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::multicast_ragdoll_recover_start(bool disable_no_anim, int32_t pose_id, float pose_yaw, const struct FVector& recover_velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_start");
		
		Ubp_ragdoll_component_C_multicast_ragdoll_recover_start_Params params {};
		params.disable_no_anim = disable_no_anim;
		params.pose_id = pose_id;
		params.pose_yaw = pose_yaw;
		params.recover_velocity = recover_velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_recover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               disable_no_anim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::client_ragdoll_recover(bool disable_no_anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_recover");
		
		Ubp_ragdoll_component_C_client_ragdoll_recover_Params params {};
		params.disable_no_anim = disable_no_anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::client_ragdoll_start(bool is_fatal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_start");
		
		Ubp_ragdoll_component_C_client_ragdoll_start_Params params {};
		params.is_fatal = is_fatal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_start                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_end                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::client_ragdoll_notify(bool Init, bool is_fatal, bool recover_start, bool recover_end)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_notify");
		
		Ubp_ragdoll_component_C_client_ragdoll_notify_Params params {};
		params.Init = Init;
		params.is_fatal = is_fatal;
		params.recover_start = recover_start;
		params.recover_end = recover_end;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.server_ragdoll_notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_start                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_end                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::server_ragdoll_notify(bool Init, bool is_fatal, bool recover_start, bool recover_end)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.server_ragdoll_notify");
		
		Ubp_ragdoll_component_C_server_ragdoll_notify_Params params {};
		params.Init = Init;
		params.is_fatal = is_fatal;
		params.recover_start = recover_start;
		params.recover_end = recover_end;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_end
	 * 		Flags  -> ()
	 */
	void Ubp_ragdoll_component_C::multicast_ragdoll_recover_end()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_end");
		
		Ubp_ragdoll_component_C_multicast_ragdoll_recover_end_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_pose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTransform>                          bones_transform                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void Ubp_ragdoll_component_C::multicast_pose(TArray<struct FTransform> bones_transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_pose");
		
		Ubp_ragdoll_component_C_multicast_pose_Params params {};
		params.bones_transform = bones_transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.DoRagdollBake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTransform>                          Trans                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void Ubp_ragdoll_component_C::DoRagdollBake(TArray<struct FTransform> Trans)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.DoRagdollBake");
		
		Ubp_ragdoll_component_C_DoRagdollBake_Params params {};
		params.Trans = Trans;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.ExecuteUbergraph_bp_ragdoll_component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Ubp_ragdoll_component_C::ExecuteUbergraph_bp_ragdoll_component(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ExecuteUbergraph_bp_ragdoll_component");
		
		Ubp_ragdoll_component_C_ExecuteUbergraph_bp_ragdoll_component_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_server__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_start                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_end                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::ragdoll_updated_server__DelegateSignature(bool Init, bool is_fatal, bool recover_start, bool recover_end)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_server__DelegateSignature");
		
		Ubp_ragdoll_component_C_ragdoll_updated_server__DelegateSignature_Params params {};
		params.Init = Init;
		params.is_fatal = is_fatal;
		params.recover_start = recover_start;
		params.recover_end = recover_end;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_client__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               is_fatal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_start                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               recover_end                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ubp_ragdoll_component_C::ragdoll_updated_client__DelegateSignature(bool Init, bool is_fatal, bool recover_start, bool recover_end)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_client__DelegateSignature");
		
		Ubp_ragdoll_component_C_ragdoll_updated_client__DelegateSignature_Params params {};
		params.Init = Init;
		params.is_fatal = is_fatal;
		params.recover_start = recover_start;
		params.recover_end = recover_end;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ubp_ragdoll_component_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ubp_ragdoll_component_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass bp_ragdoll_component.bp_ragdoll_component_C");
		return ptr;
	}

}


