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
	 * Enum MagicLeapIdentity.EMagicLeapIdentityKey
	 */
	enum class EMagicLeapIdentityKey : uint8_t
	{
		GivenName   = 0,
		FamilyName  = 1,
		Email       = 2,
		Bio         = 3,
		PhoneNumber = 4,
		Avatar2D    = 5,
		Avatar3D    = 6,
		Unknown     = 7,
		MAX         = 8
	};

	/**
	 * Enum MagicLeapIdentity.EMagicLeapIdentityError
	 */
	enum class EMagicLeapIdentityError : uint8_t
	{
		Ok                            = 0,
		InvalidParam                  = 1,
		AllocFailed                   = 2,
		PrivilegeDenied               = 3,
		FailedToConnectToLocalService = 4,
		FailedToConnectToCloudService = 5,
		CloudAuthentication           = 6,
		InvalidInformationFromCloud   = 7,
		NotLoggedIn                   = 8,
		ExpiredCredentials            = 9,
		FailedToGetUserProfile        = 10,
		Unauthorized                  = 11,
		CertificateError              = 12,
		RejectedByCloud               = 13,
		AlreadyLoggedIn               = 14,
		ModifyIsNotSupported          = 15,
		NetworkError                  = 16,
		UnspecifiedFailure            = 17,
		MAX                           = 18
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
	 * Size -> 0x0018
	 */
	struct FMagicLeapIdentityAttribute
	{
	public:
		EMagicLeapIdentityKey                                      Attribute;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9BQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
