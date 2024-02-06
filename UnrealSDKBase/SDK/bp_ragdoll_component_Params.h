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
	 * LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.CheckStop
	 */
	struct Ubp_ragdoll_component_C_CheckStop_Params
	{	};

	/**
	 * LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.ChangeBodyInstanceDamping
	 */
	struct Ubp_ragdoll_component_C_ChangeBodyInstanceDamping_Params
	{
	public:
		bool                                                       bStart;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.ReceiveEndPlay
	 */
	struct Ubp_ragdoll_component_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction bp_ragdoll_component.bp_ragdoll_component_C.check_reference
	 */
	struct Ubp_ragdoll_component_C_check_reference_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.GetModuleName
	 */
	struct Ubp_ragdoll_component_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.ChangeBodyInstanceDamping__Overridden
	 */
	struct Ubp_ragdoll_component_C_ChangeBodyInstanceDamping__Overridden_Params
	{
	public:
		bool                                                       bStart;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.CheckStop__Overridden
	 */
	struct Ubp_ragdoll_component_C_CheckStop__Overridden_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.SetRagdollCollision
	 */
	struct Ubp_ragdoll_component_C_SetRagdollCollision_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_BakeBonesTransform
	 */
	struct Ubp_ragdoll_component_C_OnRep_BakeBonesTransform_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.snapshot_client_build
	 */
	struct Ubp_ragdoll_component_C_snapshot_client_build_Params
	{
	public:
		TArray<struct FTransform>                                  bones_transform;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                snapshot_name;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPoseSnapshot                                       PoseSnapshot;                                            // 0x0018(0x0038)  (Parm, OutParm)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.check_reference__Overridden
	 */
	struct Ubp_ragdoll_component_C_check_reference__Overridden_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.server_disable_prediction
	 */
	struct Ubp_ragdoll_component_C_server_disable_prediction_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.server_refresh_ragdolls
	 */
	struct Ubp_ragdoll_component_C_server_refresh_ragdolls_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.server_auto_reset
	 */
	struct Ubp_ragdoll_component_C_server_auto_reset_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_location
	 */
	struct Ubp_ragdoll_component_C_tick_update_location_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.tick_ragdoll_blend
	 */
	struct Ubp_ragdoll_component_C_tick_ragdoll_blend_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.tick_update_rotation
	 */
	struct Ubp_ragdoll_component_C_tick_update_rotation_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.OnRep_character_reference
	 */
	struct Ubp_ragdoll_component_C_OnRep_character_reference_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.recover_ragdoll
	 */
	struct Ubp_ragdoll_component_C_recover_ragdoll_Params
	{
	public:
		bool                                                       disable_no_anim;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XWXD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Pose;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             recover_velocity;                                        // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      reset_time;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.init_ragdoll
	 */
	struct Ubp_ragdoll_component_C_init_ragdoll_Params
	{
	public:
		bool                                                       is_fatal;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E941[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             init_velocity;                                           // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.Snapshot Server Build
	 */
	struct Ubp_ragdoll_component_C_SnapshotServerBuild_Params
	{
	public:
		class FName                                                snapshot_name;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPoseSnapshot                                       PoseSnapshot;                                            // 0x0008(0x0038)  (Parm, OutParm)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.get_character_velocity
	 */
	struct Ubp_ragdoll_component_C_get_character_velocity_Params
	{
	public:
		bool                                                       ragdoll_velocity;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GILF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Velocity;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.tick_capsule_location
	 */
	struct Ubp_ragdoll_component_C_tick_capsule_location_Params
	{
	public:
		struct FVector                                             pelvis_location;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             capsule_location;                                        // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             trace_hit_location;                                      // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       trace_hit_ground;                                        // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       pelvis_fully_grounded;                                   // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       pelvis_distance_grounded;                                // 0x0026(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A0UT[0x1];                                   // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      pelvis_distance_to_ground;                               // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.get_pelvis_rotation
	 */
	struct Ubp_ragdoll_component_C_get_pelvis_rotation_Params
	{
	public:
		int32_t                                                    pose_id;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      pelvis_yaw;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.server_find_pelvis_offset
	 */
	struct Ubp_ragdoll_component_C_server_find_pelvis_offset_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_bake
	 */
	struct Ubp_ragdoll_component_C_multicast_ragdoll_bake_Params
	{
	public:
		TArray<struct FTransform>                                  bones_transform;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_bake
	 */
	struct Ubp_ragdoll_component_C_rpc_ragdoll_bake_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveTick
	 */
	struct Ubp_ragdoll_component_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.ReceiveBeginPlay
	 */
	struct Ubp_ragdoll_component_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_rotation
	 */
	struct Ubp_ragdoll_component_C_multicast_rotation_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_start
	 */
	struct Ubp_ragdoll_component_C_rpc_ragdoll_start_Params
	{
	public:
		bool                                                       is_fatal;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.client_refresh_ragdolls
	 */
	struct Ubp_ragdoll_component_C_client_refresh_ragdolls_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_bake
	 */
	struct Ubp_ragdoll_component_C_client_ragdoll_bake_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_location
	 */
	struct Ubp_ragdoll_component_C_multicast_location_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_start
	 */
	struct Ubp_ragdoll_component_C_multicast_ragdoll_start_Params
	{
	public:
		bool                                                       is_fatal;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0TH6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             init_velocity;                                           // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.rpc_ragdoll_recover
	 */
	struct Ubp_ragdoll_component_C_rpc_ragdoll_recover_Params
	{
	public:
		bool                                                       disable_no_anim;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0GB8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    pose_id;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      pose_yaw;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_start
	 */
	struct Ubp_ragdoll_component_C_multicast_ragdoll_recover_start_Params
	{
	public:
		bool                                                       disable_no_anim;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_71TW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    pose_id;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      pose_yaw;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             recover_velocity;                                        // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_recover
	 */
	struct Ubp_ragdoll_component_C_client_ragdoll_recover_Params
	{
	public:
		bool                                                       disable_no_anim;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_start
	 */
	struct Ubp_ragdoll_component_C_client_ragdoll_start_Params
	{
	public:
		bool                                                       is_fatal;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.client_ragdoll_notify
	 */
	struct Ubp_ragdoll_component_C_client_ragdoll_notify_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       is_fatal;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_start;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_end;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.server_ragdoll_notify
	 */
	struct Ubp_ragdoll_component_C_server_ragdoll_notify_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       is_fatal;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_start;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_end;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_ragdoll_recover_end
	 */
	struct Ubp_ragdoll_component_C_multicast_ragdoll_recover_end_Params
	{	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.multicast_pose
	 */
	struct Ubp_ragdoll_component_C_multicast_pose_Params
	{
	public:
		TArray<struct FTransform>                                  bones_transform;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.DoRagdollBake
	 */
	struct Ubp_ragdoll_component_C_DoRagdollBake_Params
	{
	public:
		TArray<struct FTransform>                                  Trans;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.ExecuteUbergraph_bp_ragdoll_component
	 */
	struct Ubp_ragdoll_component_C_ExecuteUbergraph_bp_ragdoll_component_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LMUM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_server__DelegateSignature
	 */
	struct Ubp_ragdoll_component_C_ragdoll_updated_server__DelegateSignature_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       is_fatal;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_start;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_end;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function bp_ragdoll_component.bp_ragdoll_component_C.ragdoll_updated_client__DelegateSignature
	 */
	struct Ubp_ragdoll_component_C_ragdoll_updated_client__DelegateSignature_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       is_fatal;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_start;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       recover_end;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
