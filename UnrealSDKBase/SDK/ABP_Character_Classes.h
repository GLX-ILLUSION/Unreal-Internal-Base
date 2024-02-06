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
	 * AnimBlueprintGeneratedClass ABP_Character.ABP_Character_C
	 * Size -> 0xAB7B (FullSize[0xAE33] - InheritedSize[0x02B8])
	 */
	class UABP_Character_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_TQ7Z[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_22;                         // 0x02C8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_51;                          // 0x0420(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root_5;                                    // 0x0448(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_3;                         // 0x0478(0x0118)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0x0590(0x0118)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x06A8(0x0118)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_50;                          // 0x07C0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_21;                         // 0x07E8(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_20;                         // 0x0940(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_19;                         // 0x0A98(0x0158)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x0BF0(0x0038)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_18;                         // 0x0C28(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_49;                          // 0x0D80(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_48;                          // 0x0DA8(0x0028)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x0DD0(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_47;                          // 0x0E08(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_46;                          // 0x0E30(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_45;                            // 0x0E58(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_17;                         // 0x0F20(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_44;                            // 0x1078(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x1140(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_45;                          // 0x1298(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_44;                          // 0x12C0(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_3;                  // 0x12E8(0x00D0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_19;                                   // 0x13B8(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_43;                            // 0x1400(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_18;                                   // 0x14C8(0x0048)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve;                               // 0x1510(0x0058)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_42;                            // 0x1568(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_17;                                   // 0x1630(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_43;                          // 0x1678(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_42;                          // 0x16A0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_41;                          // 0x16C8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x16F0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_40;                          // 0x1848(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_39;                          // 0x1870(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_41;                            // 0x1898(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x1960(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x1AB8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_38;                          // 0x1C10(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x1C38(0x0158)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_2;                  // 0x1D90(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_37;                          // 0x1E60(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive;                    // 0x1E88(0x00D0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_16;                                   // 0x1F58(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_36;                          // 0x1FA0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35;                          // 0x1FC8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x1FF0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x2018(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_40;                            // 0x2040(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x2108(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_39;                            // 0x2260(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x2328(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_38;                            // 0x2480(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x2548(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x2610(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x2638(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_15;                                   // 0x2700(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_14;                                   // 0x2748(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x2790(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x27B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x27E0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x2808(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x2830(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_13;                                   // 0x2858(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x28A0(0x00C0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x2960(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x2988(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x29B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x29D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x2A00(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_68;                      // 0x2A28(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_67;                      // 0x2A78(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x2AC8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_66;                      // 0x2B88(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_65;                      // 0x2BD8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_64;                      // 0x2C28(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_12;                        // 0x2C78(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_63;                      // 0x2D28(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_62;                      // 0x2D78(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x2DC8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_61;                      // 0x2E88(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_60;                      // 0x2ED8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_59;                      // 0x2F28(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_11;                        // 0x2F78(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_58;                      // 0x3028(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_57;                      // 0x3078(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x30C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_56;                      // 0x3188(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_55;                      // 0x31D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_54;                      // 0x3228(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_10;                        // 0x3278(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_53;                      // 0x3328(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_52;                      // 0x3378(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x33C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_51;                      // 0x3488(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_50;                      // 0x34D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_49;                      // 0x3528(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9;                         // 0x3578(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_48;                      // 0x3628(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_47;                      // 0x3678(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x36C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_46;                      // 0x3788(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_45;                      // 0x37D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_44;                      // 0x3828(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8;                         // 0x3878(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_43;                      // 0x3928(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_42;                      // 0x3978(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x39C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_41;                      // 0x3A88(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_40;                      // 0x3AD8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_39;                      // 0x3B28(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_7;                         // 0x3B78(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_38;                      // 0x3C28(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_37;                      // 0x3C78(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x3CC8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_36;                      // 0x3D88(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_35;                      // 0x3DD8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_34;                      // 0x3E28(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_6;                         // 0x3E78(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_33;                      // 0x3F28(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_32;                      // 0x3F78(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x3FC8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_31;                      // 0x4088(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_30;                      // 0x40D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_29;                      // 0x4128(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_5;                         // 0x4178(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_28;                      // 0x4228(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_27;                      // 0x4278(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x42C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_26;                      // 0x4388(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_25;                      // 0x43D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_24;                      // 0x4428(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x4478(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_23;                      // 0x4528(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_22;                      // 0x4578(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x45C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21;                      // 0x4688(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_20;                      // 0x46D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19;                      // 0x4728(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x4778(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_18;                      // 0x4828(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0x4878(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x48C8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0x4988(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0x49D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x4A28(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x4A78(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x4B28(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x4B78(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x4BC8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x4C88(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x4CD8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x4D28(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x4D78(0x00B0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_37;                            // 0x4E28(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_36;                            // 0x4EF0(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_35;                            // 0x4FB8(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_34;                            // 0x5080(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_33;                            // 0x5148(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_32;                            // 0x5210(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_31;                            // 0x52D8(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_30;                            // 0x53A0(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_29;                            // 0x5468(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_28;                            // 0x5530(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_27;                            // 0x55F8(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x56C0(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x56F0(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_26;                            // 0x5740(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x5808(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_25;                            // 0x5858(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x5920(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_24;                            // 0x5970(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x5A38(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x5A88(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x5AB8(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x5B68(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root_4;                                    // 0x5B90(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x5BC0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x5BE8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_12;                                   // 0x5C10(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x5C58(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x5D18(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x5D40(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x5E00(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x5E28(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x5E50(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x5FA8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x6068(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x6090(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x6150(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x6178(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x61A0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x6260(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x6288(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_23;                            // 0x62B0(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_22;                            // 0x6378(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_21;                            // 0x6440(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_11;                                   // 0x6508(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x6550(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x6598(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x65E0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x6628(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x6670(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x6730(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x67F0(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x6838(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x6990(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x69B8(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_20;                            // 0x69E0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x6AA8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x6AD0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x6C28(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x6C50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x6C78(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x6CA0(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_19;                            // 0x6CC8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x6D90(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x6DB8(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_18;                            // 0x6E00(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x6EC8(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_17;                            // 0x6F10(0x00C8)
		struct FAnimNode_Root                                      AnimGraphNode_Root_3;                                    // 0x6FD8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x7008(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_16;                            // 0x7058(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x7120(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_15;                            // 0x7170(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x7238(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_14;                            // 0x7288(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x7350(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x73A0(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x73D0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x7418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x7440(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x7468(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x7550(0x00E8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_13;                            // 0x7638(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_12;                            // 0x7700(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x77C8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x78B0(0x00E8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_11;                            // 0x7998(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x7A60(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x7A90(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x7B10(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_10;                            // 0x7B90(0x00C8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x7C58(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x7C88(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x7D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x7D60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x7D88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x7DB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x7DD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x7E00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x7E28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x7E50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x7E78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x7EA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x7EC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x7EF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x7F18(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x7F40(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_9;                             // 0x7FC0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x8088(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x8108(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x81D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x8250(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x8280(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x82A8(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x8328(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x83F0(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x8470(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x8538(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x85B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x85E8(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x8668(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x8730(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x87B0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x8878(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x88F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x8928(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x8950(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x8978(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x89A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x89D0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x8A80(0x0158)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x8BD8(0x00E8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x8CC0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x8D88(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x8E70(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x8EA0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x8F50(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x90A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x90D0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x90F8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x9120(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x9150(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x9178(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x91A8(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x9258(0x0158)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x93B0(0x0030)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_4;                         // 0x93E0(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_3;                         // 0x9490(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_2;                         // 0x9540(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x95F0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x96A0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x96E8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x9708(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x9728(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x9880(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x98A8(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x9A00(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x9A48(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x9B10(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x9B38(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x9B60(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x9B80(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x9BA0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x9CF8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x9D20(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x9DA0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x9E40(0x00A0)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot_2;                            // 0x9EE0(0x0090)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x9F70(0x0090)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0xA000(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0xA0A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0xA0D0(0x00B0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0xA180(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0xA248(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0xA350(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0xA458(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0xA560(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0xA668(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0xA770(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0xA878(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0xA980(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0xAA88(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0xAB08(0x00C8)
		E_MovementState                                            MovementStateType;                                       // 0xABD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Jumped;                                                  // 0xABD1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PJA3[0x6];                                   // 0xABD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Character_C*                                     BPCharacter;                                             // 0xABD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0xABE0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0xABEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0xABF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMan;                                                    // 0xABF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7KF9[0x3];                                   // 0xABF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnderBodyAdd;                                            // 0xABF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpineAdd;                                                // 0xABFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadAdd;                                                 // 0xAC00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmRAdd;                                                 // 0xAC04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmLAdd;                                                 // 0xAC08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmLLS;                                                  // 0xAC0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmRLS;                                                  // 0xAC10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmLMS;                                                  // 0xAC14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmRMS;                                                  // 0xAC18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCrouch;                                                 // 0xAC1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFPS;                                                    // 0xAC1D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_104K[0x2];                                   // 0xAC1E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         BL_Stand;                                                // 0xAC20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BL_Crouch;                                               // 0xAC28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   BasePoseAnim;                                            // 0xAC30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdlePose;                                                // 0xAC38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpStartAnim;                                           // 0xAC40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpLoopAnim;                                            // 0xAC48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpLandAnim;                                            // 0xAC50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpRunStartAnim;                                        // 0xAC58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpRunLoopAnim;                                         // 0xAC60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpRunLandAnim;                                         // 0xAC68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SweepAnim;                                               // 0xAC70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_OverlayState                                             OverlayState;                                            // 0xAC78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MUCG[0x7];                                   // 0xAC79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FST_WeaponAnimData                                  WeaponAnimData1;                                         // 0xAC80(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimSweep;                                                // 0xACA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAir;                                                    // 0xACA4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMN8[0x3];                                   // 0xACA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight_Gait;                                             // 0xACA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAGS[0x4];                                   // 0xACAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FST_WeaponAnimData                                  WeaponAnimData2;                                         // 0xACB0(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseWeaponData1;                                         // 0xACD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FDYX[0x3];                                   // 0xACD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AimingAngle;                                             // 0xACD4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine1Pitch;                                             // 0xACDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BL_Stand_FPP;                                            // 0xACE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         BL_Crouch_FPP;                                           // 0xACE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   BasePoseAnim_FPP;                                        // 0xACF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AddOffsetCameraZ;                                        // 0xACF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_WeaponHoldType                                           WeaponHoldType;                                          // 0xACFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3Q3J[0x3];                                   // 0xACFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandMoveAnimPlayRate;                                   // 0xAD00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BUOA[0x4];                                   // 0xAD04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   IdleAnim_Stand;                                          // 0xAD08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleAnim_Stand_FPP;                                      // 0xAD10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       BL_Stand_1D;                                             // 0xAD18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       BL_Stand_1D_FPP;                                         // 0xAD20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSlowMove;                                               // 0xAD28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MU2C[0x7];                                   // 0xAD29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace1D*                                       BL_Stand_SlowMove_1D;                                    // 0xAD30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       BL_Stand_SlowMove_1D_FPP;                                // 0xAD38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpStartAnim_FPP;                                       // 0xAD40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpLoopAnim_FPP;                                        // 0xAD48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   JumpLandAnim_FPP;                                        // 0xAD50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNeedHideUnderBody;                                      // 0xAD58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1HK[0x7];                                   // 0xAD59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   EyeMove;                                                 // 0xAD60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine2Pitch;                                             // 0xAD68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine3Pitch;                                             // 0xAD6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPoseSnapshot                                       baked_pose;                                              // 0xAD70(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       is_ragdoll_baked;                                        // 0xADA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_20ZY[0x7];                                   // 0xADA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       updatePose2;                                             // 0xADB0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPoseSnapshot                                       UpdatePose1;                                             // 0xADE8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       is_ragdoll;                                              // 0xAE20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is_ragdoll_recovering;                                   // 0xAE21(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bServer;                                                 // 0xAE22(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IQAK[0x5];                                   // 0xAE23(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class Ubp_ragdoll_component_C*                             RagdollSystem;                                           // 0xAE28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UpdatePoseFlag;                                          // 0xAE30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LastUpdatePoseFlag;                                      // 0xAE31(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRagdollState;                                           // 0xAE32(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimNotify_StartToStand();
		void AnimNotify_StartToCrouch();
		void BlueprintBeginPlay();
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		class FString GetModuleName();
		void OverlayLayer(struct FPoseLink* OverlayLayer);
		void LayerBlending(const struct FPoseLink& BaseLayer, const struct FPoseLink& OverlayLayer, const struct FPoseLink& BasePose, struct FPoseLink* LayerBlending);
		void BasePose(struct FPoseLink* BasePose);
		void BaseLayer(struct FPoseLink* BaseLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void UpdateRagdollValue();
		void BPI_SetMovementState(E_MovementState State);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_522F458D489C595F972E2BA48D4CE6F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_EC929F19492181135C1BDFAB08E49B84();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_4C338C744FD849B17C44B0BCD4AB22A5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_EF0850154C7F05AA8E53BDB4EFE0A480();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_84827B344CBDC67FD96D4DB51E1A5132();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_CF71E786487CEB162C62A39713D160B7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_7E2E3A71485E1AFF2404D2823B1A0EE2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_F449B3D0413ED7F6BC670ABE1074AFCB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_82B7CFDC4C1E38965A3A23AEB46E8F98();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A9E03426483313DC30E46B9503F1FFE6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_875B50354920DDEBA2B1C1A34EC06C30();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_EFD81D744D14A58AC94B19B51AC661F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_C97F0BFA4A05C53F5FFB0DBB2D97324A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B93A627D4F01108FE8CA7D90C19EB3CE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_6F7F508048ADE5D82B17A0A8E14F6E52();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2E3F95FC48C56280A6700F893838DA85();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_86FADC834A5A717E03254294BC5AACB7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_43D135B7467ACD0C79881CA692B23C81();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_636CD3204BCBD6FF25697081911EA59C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_D58AF9EF49E04952D3CFDB99A1339F18();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4E34AD884C7CECC4933BEF91A16A5064();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0AA6DD234A8A6586BEFB5EBF9AAE9D31();
		void BlueprintUpdateAnimation__Overridden(float DeltaTimeX);
		void BPI_Jumped();
		void ExecuteUbergraph_ABP_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
