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
	 * ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
	 * Size -> 0x0058
	 */
	struct FLiveLinkPropertyData
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFloatChannel>                     FloatChannel;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneStringChannel>                    StringChannel;                                           // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneIntegerChannel>                   IntegerChannel;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneBoolChannel>                      BoolChannel;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneByteChannel>                      ByteChannel;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
	 * Size -> 0x0010
	 */
	struct FLiveLinkSubSectionData
	{
	public:
		TArray<struct FLiveLinkPropertyData>                       Properties;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
	{
	public:
		struct FLiveLinkSubjectPreset                              SubjectPreset;                                           // 0x0038(0x0038) NoDestructor, NativeAccessSpecifierPublic
		TArray<bool>                                               ChannelMask;                                             // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLiveLinkSubSectionData>                     SubSectionsData;                                         // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08CY[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
