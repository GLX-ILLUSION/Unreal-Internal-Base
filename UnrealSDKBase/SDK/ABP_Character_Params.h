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
	 * LuaFunction ABP_Character.ABP_Character_C.AnimNotify_StartToStand
	 */
	struct UABP_Character_C_AnimNotify_StartToStand_Params
	{	};

	/**
	 * LuaFunction ABP_Character.ABP_Character_C.AnimNotify_StartToCrouch
	 */
	struct UABP_Character_C_AnimNotify_StartToCrouch_Params
	{	};

	/**
	 * LuaFunction ABP_Character.ABP_Character_C.BlueprintBeginPlay
	 */
	struct UABP_Character_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * LuaFunction ABP_Character.ABP_Character_C.BlueprintInitializeAnimation
	 */
	struct UABP_Character_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * LuaFunction ABP_Character.ABP_Character_C.BlueprintUpdateAnimation
	 */
	struct UABP_Character_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.GetModuleName
	 */
	struct UABP_Character_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.OverlayLayer
	 */
	struct UABP_Character_C_OverlayLayer_Params
	{
	public:
		struct FPoseLink                                           OverlayLayer;                                            // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.LayerBlending
	 */
	struct UABP_Character_C_LayerBlending_Params
	{
	public:
		struct FPoseLink                                           BaseLayer;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           OverlayLayer;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           BasePose;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LayerBlending;                                           // 0x0030(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.BasePose
	 */
	struct UABP_Character_C_BasePose_Params
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.BaseLayer
	 */
	struct UABP_Character_C_BaseLayer_Params
	{
	public:
		struct FPoseLink                                           BaseLayer;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.AnimGraph
	 */
	struct UABP_Character_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.UpdateRagdollValue
	 */
	struct UABP_Character_C_UpdateRagdollValue_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.BPI_SetMovementState
	 */
	struct UABP_Character_C_BPI_SetMovementState_Params
	{
	public:
		E_MovementState                                            State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_522F458D489C595F972E2BA48D4CE6F6
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_522F458D489C595F972E2BA48D4CE6F6_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_EC929F19492181135C1BDFAB08E49B84
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_EC929F19492181135C1BDFAB08E49B84_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_4C338C744FD849B17C44B0BCD4AB22A5
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_4C338C744FD849B17C44B0BCD4AB22A5_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_EF0850154C7F05AA8E53BDB4EFE0A480
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_EF0850154C7F05AA8E53BDB4EFE0A480_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_84827B344CBDC67FD96D4DB51E1A5132
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_84827B344CBDC67FD96D4DB51E1A5132_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_CF71E786487CEB162C62A39713D160B7
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_CF71E786487CEB162C62A39713D160B7_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_7E2E3A71485E1AFF2404D2823B1A0EE2
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_7E2E3A71485E1AFF2404D2823B1A0EE2_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_F449B3D0413ED7F6BC670ABE1074AFCB
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_F449B3D0413ED7F6BC670ABE1074AFCB_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_82B7CFDC4C1E38965A3A23AEB46E8F98
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_82B7CFDC4C1E38965A3A23AEB46E8F98_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A9E03426483313DC30E46B9503F1FFE6
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A9E03426483313DC30E46B9503F1FFE6_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_875B50354920DDEBA2B1C1A34EC06C30
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_875B50354920DDEBA2B1C1A34EC06C30_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_EFD81D744D14A58AC94B19B51AC661F6
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_EFD81D744D14A58AC94B19B51AC661F6_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_C97F0BFA4A05C53F5FFB0DBB2D97324A
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_C97F0BFA4A05C53F5FFB0DBB2D97324A_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B93A627D4F01108FE8CA7D90C19EB3CE
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B93A627D4F01108FE8CA7D90C19EB3CE_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_6F7F508048ADE5D82B17A0A8E14F6E52
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_6F7F508048ADE5D82B17A0A8E14F6E52_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2E3F95FC48C56280A6700F893838DA85
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2E3F95FC48C56280A6700F893838DA85_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_86FADC834A5A717E03254294BC5AACB7
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_86FADC834A5A717E03254294BC5AACB7_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_43D135B7467ACD0C79881CA692B23C81
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_43D135B7467ACD0C79881CA692B23C81_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_636CD3204BCBD6FF25697081911EA59C
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_636CD3204BCBD6FF25697081911EA59C_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_D58AF9EF49E04952D3CFDB99A1339F18
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_D58AF9EF49E04952D3CFDB99A1339F18_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4E34AD884C7CECC4933BEF91A16A5064
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4E34AD884C7CECC4933BEF91A16A5064_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0AA6DD234A8A6586BEFB5EBF9AAE9D31
	 */
	struct UABP_Character_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0AA6DD234A8A6586BEFB5EBF9AAE9D31_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.BlueprintUpdateAnimation__Overridden
	 */
	struct UABP_Character_C_BlueprintUpdateAnimation__Overridden_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Character.ABP_Character_C.BPI_Jumped
	 */
	struct UABP_Character_C_BPI_Jumped_Params
	{	};

	/**
	 * Function ABP_Character.ABP_Character_C.ExecuteUbergraph_ABP_Character
	 */
	struct UABP_Character_C_ExecuteUbergraph_ABP_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
