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
	 * BlueprintGeneratedClass bp_ragdoll_component.bp_ragdoll_component_C
	 * Size -> 0x021C (FullSize[0x02CC] - InheritedSize[0x00B0])
	 */
	class Ubp_ragdoll_component_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACharacter*                                          character_reference;                                     // 0x00B8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              skeletal_mesh;                                           // 0x00C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       is_world_owner;                                          // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_world_server;                                         // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_pelvis_found;                                         // 0x00CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll;                                              // 0x00CB(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll_grounded;                                     // 0x00CC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll_recovering;                                   // 0x00CD(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll_baked;                                        // 0x00CE(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll_fatal;                                        // 0x00CF(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll_animated;                                     // 0x00D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H2OT[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             pelvis_offset;                                           // 0x00D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             capsule_location;                                        // 0x00E0(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_07X4[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       server_ragdoll_pose;                                     // 0x00F0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPoseSnapshot                                       server_baked_pose;                                       // 0x0128(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPoseSnapshot                                       client_ragdoll_pose;                                     // 0x0160(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPoseSnapshot                                       client_baked_pose;                                       // 0x0198(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                pelvis_name;                                             // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       enable_auto_recover;                                     // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       client_sided_pose_check;                                 // 0x01D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4GSL[0x2];                                   // 0x01DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      auto_recover_time;                                       // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      auto_recover_velocity;                                   // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ragdoll_blend;                                           // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recover_alpha;                                           // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recover_yaw;                                             // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      pelvis_ground_distance;                                  // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      animation_spring_power;                                  // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      capsule_interp;                                          // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6AZ5[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ragdoll_updated_client;                                  // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      current_anim_duration;                                   // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ragdoll_blend_in;                                        // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ragdoll_blend_out;                                       // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      disable_prediction_speed;                                // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      net_min_fps;                                             // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      net_max_fps;                                             // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        recover_backward;                                        // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        recover_forward;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ragdoll_reset_timer;                                     // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      server_recover_timer;                                    // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recover_backward_apex;                                   // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recover_forward_apex;                                    // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EObjectTypeQuery>                                   trace_hit_collision;                                     // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		EDrawDebugTrace                                            debug_trace_mode;                                        // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JOOF[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ragdoll_updated_server;                                  // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FTransform>                                  BakeBonesTransform;                                      // 0x0270(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
		class FName                                                DeadCollisionProfileName;                                // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CollisionProfileName;                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UpdatePoseFlag;                                          // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O4YQ[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastCapsule_location;                                    // 0x0294(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClientSimulate;                                         // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3CSH[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             mesh_location_pelvis;                                    // 0x02A4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanCheckStop;                                           // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIgnoreClientError;                                      // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W5C4[0x2];                                   // 0x02B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            mesh_rotation_rel;                                       // 0x02B4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             mesh_location;                                           // 0x02C0(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckStop();
		void ChangeBodyInstanceDamping(bool bStart);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void check_reference(bool* Success);
		class FString GetModuleName();
		void ChangeBodyInstanceDamping__Overridden(bool bStart);
		void CheckStop__Overridden();
		void SetRagdollCollision();
		void OnRep_BakeBonesTransform();
		void snapshot_client_build(TArray<struct FTransform>* bones_transform, const class FName& snapshot_name, struct FPoseSnapshot* PoseSnapshot);
		void check_reference__Overridden(bool* Success);
		void server_disable_prediction();
		void server_refresh_ragdolls();
		void server_auto_reset();
		void tick_update_location();
		void tick_ragdoll_blend();
		void tick_update_rotation();
		void OnRep_character_reference();
		void recover_ragdoll(bool disable_no_anim, int32_t Pose, float Yaw, const struct FVector& recover_velocity, float* reset_time);
		void init_ragdoll(bool is_fatal, const struct FVector& init_velocity);
		void SnapshotServerBuild(const class FName& snapshot_name, struct FPoseSnapshot* PoseSnapshot);
		void get_character_velocity(bool ragdoll_velocity, struct FVector* Velocity);
		void tick_capsule_location(struct FVector* pelvis_location, struct FVector* capsule_location, struct FVector* trace_hit_location, bool* trace_hit_ground, bool* pelvis_fully_grounded, bool* pelvis_distance_grounded, float* pelvis_distance_to_ground);
		void get_pelvis_rotation(int32_t* pose_id, float* pelvis_yaw);
		void server_find_pelvis_offset();
		void multicast_ragdoll_bake(TArray<struct FTransform> bones_transform);
		void rpc_ragdoll_bake();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void multicast_rotation();
		void rpc_ragdoll_start(bool is_fatal);
		void client_refresh_ragdolls();
		void client_ragdoll_bake();
		void multicast_location();
		void multicast_ragdoll_start(bool is_fatal, const struct FVector& init_velocity);
		void rpc_ragdoll_recover(bool disable_no_anim, int32_t pose_id, float pose_yaw);
		void multicast_ragdoll_recover_start(bool disable_no_anim, int32_t pose_id, float pose_yaw, const struct FVector& recover_velocity);
		void client_ragdoll_recover(bool disable_no_anim);
		void client_ragdoll_start(bool is_fatal);
		void client_ragdoll_notify(bool Init, bool is_fatal, bool recover_start, bool recover_end);
		void server_ragdoll_notify(bool Init, bool is_fatal, bool recover_start, bool recover_end);
		void multicast_ragdoll_recover_end();
		void multicast_pose(TArray<struct FTransform> bones_transform);
		void DoRagdollBake(TArray<struct FTransform> Trans);
		void ExecuteUbergraph_bp_ragdoll_component(int32_t EntryPoint);
		void ragdoll_updated_server__DelegateSignature(bool Init, bool is_fatal, bool recover_start, bool recover_end);
		void ragdoll_updated_client__DelegateSignature(bool Init, bool is_fatal, bool recover_start, bool recover_end);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
