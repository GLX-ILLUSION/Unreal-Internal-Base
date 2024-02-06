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
	 * Class LiveLinkMovieScene.MovieSceneLiveLinkSection
	 * Size -> 0x0140 (FullSize[0x0228] - InheritedSize[0x00E8])
	 */
	class UMovieSceneLiveLinkSection : public UMovieSceneSection
	{
	public:
		struct FLiveLinkSubjectPreset                              SubjectPreset;                                           // 0x00E8(0x0038) NoDestructor, NativeAccessSpecifierPublic
		TArray<bool>                                               ChannelMask;                                             // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMovieSceneLiveLinkSubSection*>               SubSections;                                             // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ5D[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SubjectName;                                             // 0x0150(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLiveLinkFrameData                                  TemplateToPush;                                          // 0x0158(0x0090) Deprecated, NativeAccessSpecifierPublic
		struct FLiveLinkRefSkeleton                                RefSkeleton;                                             // 0x01E8(0x0020) Deprecated, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurveNames;                                              // 0x0208(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFloatChannel>                     PropertyFloatChannels;                                   // 0x0218(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMovieSceneLiveLinkSubSection : public UObject
	{
	public:
		struct FLiveLinkSubSectionData                             SubSectionData;                                          // 0x0028(0x0010) NativeAccessSpecifierPublic
		class UClass*                                              SubjectRole;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DL3U[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
	{
	public:
		unsigned char                                              UnknownData_IF01[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
	{
	public:
		unsigned char                                              UnknownData_E2Y8[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
	{
	public:
		unsigned char                                              UnknownData_OG5W[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_TDGJ[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TrackRole;                                               // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
