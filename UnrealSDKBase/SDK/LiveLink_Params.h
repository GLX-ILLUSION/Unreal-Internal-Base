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
	 * Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
	 */
	struct ULiveLinkBlueprintLibrary_TransformNames_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        TransformNames;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.TransformName
	 */
	struct ULiveLinkBlueprintLibrary_TransformName_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	 */
	struct ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params
	{
	public:
		struct FLiveLinkSubjectKey                                 SubjectKey;                                              // 0x0000(0x0018)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	 */
	struct ULiveLinkBlueprintLibrary_RemoveSource_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	 */
	struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	 */
	struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	 */
	struct ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params
	{
	public:
		struct FLiveLinkSubjectKey                                 SubjectKey;                                              // 0x0000(0x0018)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForThisFrame;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	 */
	struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	 */
	struct ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.HasParent
	 */
	struct ULiveLinkBlueprintLibrary_HasParent_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	 */
	struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                TransformName;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	 */
	struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    TransformIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q61A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	 */
	struct ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params
	{
	public:
		struct FLiveLinkSubjectKey                                 SubjectKey;                                              // 0x0000(0x0018)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	 */
	struct ULiveLinkBlueprintLibrary_GetSourceType_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	 */
	struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	 */
	struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
	{
	public:
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	 */
	struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0018(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	 */
	struct ULiveLinkBlueprintLibrary_GetPropertyValue_Params
	{
	public:
		struct FLiveLinkBasicBlueprintData                         BasicData;                                               // 0x0000(0x00B8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                PropertyName;                                            // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x00C0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetParent
	 */
	struct ULiveLinkBlueprintLibrary_GetParent_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkTransform                                  Parent;                                                  // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	 */
	struct ULiveLinkBlueprintLibrary_GetMetadata_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSubjectMetadata                                    MetaData;                                                // 0x0018(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	 */
	struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params
	{
	public:
		bool                                                       bIncludeDisabledSubject;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeVirtualSubject;                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DHH6[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLiveLinkSubjectKey>                         ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	 */
	struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	 */
	struct ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params
	{
	public:
		bool                                                       bIncludeVirtualSubject;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PG3V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLiveLinkSubjectName>                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
	 */
	struct ULiveLinkBlueprintLibrary_GetCurves_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FName, float>                                   Curves;                                                  // 0x0018(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
	 */
	struct ULiveLinkBlueprintLibrary_GetChildren_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FLiveLinkTransform>                          Children;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	 */
	struct ULiveLinkBlueprintLibrary_GetBasicData_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkBasicBlueprintData                         BasicBlueprintData;                                      // 0x0018(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	 */
	struct ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkSkeletonStaticData                         AnimationStaticData;                                     // 0x0018(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	 */
	struct ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkAnimationFrameData                         AnimationFrameData;                                      // 0x0018(0x00B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	 */
	struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Role;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLiveLinkBaseBlueprintData                          OutBlueprintData;                                        // 0x0010(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	 */
	struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Role;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WorldTimeOffset;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OMIZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLiveLinkBaseBlueprintData                          OutBlueprintData;                                        // 0x0018(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	 */
	struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Role;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimecode                                           SceneTime;                                               // 0x0010(0x0014)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YSY6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLiveLinkBaseBlueprintData                          OutBlueprintData;                                        // 0x0028(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	 */
	struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params
	{
	public:
		struct FLiveLinkSubjectRepresentation                      SubjectRepresentation;                                   // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FLiveLinkBaseBlueprintData                          OutBlueprintData;                                        // 0x0010(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	 */
	struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
	 */
	struct ULiveLinkBlueprintLibrary_ChildCount_Params
	{
	public:
		struct FLiveLinkTransform                                  LiveLinkTransform;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	 */
	struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params
	{
	public:
		struct FLiveLinkBaseStaticData                             InStruct;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	 */
	struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params
	{
	public:
		struct FLiveLinkBaseFrameData                              InStruct;                                                // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bInShouldStampCurrentTime;                               // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	 */
	struct ULiveLinkBlueprintVirtualSubject_OnUpdate_Params
	{	};

	/**
	 * Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	 */
	struct ULiveLinkBlueprintVirtualSubject_OnInitialize_Params
	{	};

	/**
	 * Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	 */
	struct ULiveLinkComponent_GetSubjectDataAtWorldTime_Params
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WorldTime;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2PQG[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	 */
	struct ULiveLinkComponent_GetSubjectDataAtSceneTime_Params
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimecode                                           SceneTime;                                               // 0x0008(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_540M[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkComponent.GetSubjectData
	 */
	struct ULiveLinkComponent_GetSubjectData_Params
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5UHZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSubjectFrameHandle                                 SubjectFrameHandle;                                      // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	 */
	struct ULiveLinkComponent_GetAvailableSubjectNames_Params
	{
	public:
		TArray<class FName>                                        SubjectNames;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkInstance.SetSubject
	 */
	struct ULiveLinkInstance_SetSubject_Params
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkInstance.SetRetargetAsset
	 */
	struct ULiveLinkInstance_SetRetargetAsset_Params
	{
	public:
		class UClass*                                              RetargetAsset;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	 */
	struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4JFG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FProviderPollResult>                         AvailableProviders;                                      // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	 */
	struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
	{
	public:
		class ULiveLinkMessageBusFinder*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	 */
	struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
	{
	public:
		struct FProviderPollResult                                 Provider;                                                // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLiveLinkSourceHandle                               SourceHandle;                                            // 0x0038(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkPreset.BuildFromClient
	 */
	struct ULiveLinkPreset_BuildFromClient_Params
	{	};

	/**
	 * Function LiveLink.LiveLinkPreset.ApplyToClient
	 */
	struct ULiveLinkPreset_ApplyToClient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkPreset.AddToClient
	 */
	struct ULiveLinkPreset_AddToClient_Params
	{
	public:
		bool                                                       bRecreatePresets;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
	 */
	struct ULiveLinkRemapAsset_RemapCurveElements_Params
	{
	public:
		TMap<class FName, float>                                   CurveItems;                                              // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	 */
	struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
	 */
	struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
