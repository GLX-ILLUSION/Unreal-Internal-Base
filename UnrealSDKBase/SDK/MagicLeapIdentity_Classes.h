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
	 * Class MagicLeapIdentity.MagicLeapIdentity
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMagicLeapIdentity : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZPHX[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue);
		EMagicLeapIdentityError RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey> RequestedAttributeList, const class FScriptDelegate& ResultDelegate);
		EMagicLeapIdentityError RequestAttributeValue(TArray<EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues);
		void ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully);
		void GetAllAvailableAttributesAsync(const class FScriptDelegate& ResultDelegate);
		EMagicLeapIdentityError GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>* AvailableAttributes);
		void AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AvailableAttributes);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
