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
	 * Class MagicLeapSecureStorage.MagicLeapSecureStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
	{
	public:
		bool PutSecureVector(const class FString& Key, const struct FVector& DataToStore);
		bool PutSecureTransform(const class FString& Key, const struct FTransform& DataToStore);
		bool PutSecureString(const class FString& Key, const class FString& DataToStore);
		bool PutSecureSaveGame(const class FString& Key, class USaveGame* ObjectToStore);
		bool PutSecureRotator(const class FString& Key, const struct FRotator& DataToStore);
		bool PutSecureInt64(const class FString& Key, int64_t DataToStore);
		bool PutSecureInt(const class FString& Key, int32_t DataToStore);
		bool PutSecureFloat(const class FString& Key, float DataToStore);
		bool PutSecureByte(const class FString& Key, unsigned char DataToStore);
		bool PutSecureBool(const class FString& Key, bool DataToStore);
		bool PutSecureArray(const class FString& Key, TArray<int32_t> DataToStore);
		bool GetSecureVector(const class FString& Key, struct FVector* DataToRetrieve);
		bool GetSecureTransform(const class FString& Key, struct FTransform* DataToRetrieve);
		bool GetSecureString(const class FString& Key, class FString* DataToRetrieve);
		bool GetSecureSaveGame(const class FString& Key, class USaveGame** ObjectToRetrieve);
		bool GetSecureRotator(const class FString& Key, struct FRotator* DataToRetrieve);
		bool GetSecureInt64(const class FString& Key, int64_t* DataToRetrieve);
		bool GetSecureInt(const class FString& Key, int32_t* DataToRetrieve);
		bool GetSecureFloat(const class FString& Key, float* DataToRetrieve);
		bool GetSecureByte(const class FString& Key, unsigned char* DataToRetrieve);
		bool GetSecureBool(const class FString& Key, bool* DataToRetrieve);
		bool GetSecureArray(const class FString& Key, TArray<int32_t>* DataToRetrieve);
		bool DeleteSecureData(const class FString& Key);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
