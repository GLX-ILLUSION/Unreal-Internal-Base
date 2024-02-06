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
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
	 * Size -> 0x0090
	 */
	struct FLiveLinkSubjectFrameMessage
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLiveLinkCurveElement>                       Curves;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLiveLinkMetaData                                   MetaData;                                                // 0x0028(0x0060) NativeAccessSpecifierPublic
		double                                                     Time;                                                    // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
	 * Size -> 0x0028
	 */
	struct FLiveLinkSubjectDataMessage
	{
	public:
		struct FLiveLinkRefSkeleton                                RefSkeleton;                                             // 0x0000(0x0020) NativeAccessSpecifierPublic
		class FName                                                SubjectName;                                             // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
	 * Size -> 0x0008
	 */
	struct FLiveLinkClearSubject
	{
	public:
		class FName                                                SubjectName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
	 * Size -> 0x0001
	 */
	struct FLiveLinkHeartbeatMessage
	{
	public:
		unsigned char                                              UnknownData_5LPS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
	 * Size -> 0x0004
	 */
	struct FLiveLinkConnectMessage
	{
	public:
		int32_t                                                    LiveLinkVersion;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
	 * Size -> 0x0040
	 */
	struct FLiveLinkPongMessage
	{
	public:
		class FString                                              ProviderName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MachineName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PollRequest;                                             // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LiveLinkVersion;                                         // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB4E[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CreationPlatformTime;                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
	 * Size -> 0x0014
	 */
	struct FLiveLinkPingMessage
	{
	public:
		struct FGuid                                               PollRequest;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LiveLinkVersion;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
