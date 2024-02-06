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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LuminRuntimeSettings.ELuminPrivilege
	 */
	enum class ELuminPrivilege : uint8_t
	{
		Invalid                        = 0,
		BatteryInfo                    = 1,
		CameraCapture                  = 2,
		ComputerVision                 = 3,
		WorldReconstruction            = 4,
		InAppPurchase                  = 5,
		AudioCaptureMic                = 6,
		DrmCertificates                = 7,
		Occlusion                      = 8,
		LowLatencyLightwear            = 9,
		Internet                       = 10,
		IdentityRead                   = 11,
		BackgroundDownload             = 12,
		BackgroundUpload               = 13,
		MediaDrm                       = 14,
		Media                          = 15,
		MediaMetadata                  = 16,
		PowerInfo                      = 17,
		LocalAreaNetwork               = 18,
		VoiceInput                     = 19,
		Documents                      = 20,
		ConnectBackgroundMusicService  = 21,
		RegisterBackgroundMusicService = 22,
		PcfRead                        = 23,
		PwFoundObjRead                 = 24,
		NormalNotificationsUsage       = 25,
		MusicService                   = 26,
		ControllerPose                 = 27,
		GesturesSubscribe              = 28,
		GesturesConfig                 = 29,
		AddressBookRead                = 30,
		AddressBookWrite               = 31,
		AddressBookBasicAccess         = 32,
		CoarseLocation                 = 33,
		FineLocation                   = 34,
		HandMesh                       = 35,
		WifiStatusRead                 = 36,
		SocialConnectionsInvitesAccess = 37,
		SocialConnectionsSelectAccess  = 38,
		SecureBrowserWindow            = 39,
		BluetoothAdapterExternalApp    = 40,
		BluetoothAdapterUser           = 41,
		BluetoothGattWrite             = 42,
		MAX                            = 43
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminFrameTimingHint
	 */
	enum class ELuminFrameTimingHint : uint8_t
	{
		Unspecified = 0,
		Maximum     = 1,
		FPS         = 2,
		FPS01       = 3,
		MAX         = 4
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminComponentType
	 */
	enum class ELuminComponentType : uint8_t
	{
		Universe       = 0,
		Fullscreen     = 1,
		SearchProvider = 2,
		MusicService   = 3,
		Console        = 4,
		SystemUI       = 5,
		MAX            = 6
	};

	/**
	 * Enum LuminRuntimeSettings.ELuminComponentSubElementType
	 */
	enum class ELuminComponentSubElementType : uint8_t
	{
		FileExtension  = 0,
		MimeType       = 1,
		Mode           = 2,
		MusicAttribute = 3,
		Schema         = 4,
		MAX            = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
	 * Size -> 0x0030
	 */
	struct FLocalizedIconInfo
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      IconModelPath;                                           // 0x0010(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      IconPortalPath;                                          // 0x0020(0x0010) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
	 * Size -> 0x0010
	 */
	struct FLocalizedIconInfos
	{
	public:
		TArray<struct FLocalizedIconInfo>                          IconData;                                                // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
	 * Size -> 0x0018
	 */
	struct FLuminComponentSubElement
	{
	public:
		ELuminComponentSubElementType                              ElementType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4O7O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LuminComponentElement
	 * Size -> 0x0048
	 */
	struct FLuminComponentElement
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibleName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutableName;                                          // 0x0020(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELuminComponentType                                        ComponentType;                                           // 0x0030(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJE3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLuminComponentSubElement>                   ExtraComponentSubElements;                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LuminRuntimeSettings.LocalizedAppName
	 * Size -> 0x0020
	 */
	struct FLocalizedAppName
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
