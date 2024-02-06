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
	 * Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
		bool SetConfiguration(TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
		bool IsHoldingControl(EControllerHand Hand);
		float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
		bool GetMotionSourceForHandKeypoint(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource);
		bool GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
		bool GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary);
		bool GetHandKeypointForMotionSource(const class FName& MotionSource, EMagicLeapHandTrackingKeypoint* OutKeyPoint);
		bool GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
		bool GetHandCenterNormalized(EControllerHand Hand, struct FVector* HandCenterNormalized);
		bool GetHandCenter(EControllerHand Hand, struct FTransform* HandCenter);
		bool GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
		bool GetGestureKeypoints(EControllerHand Hand, TArray<struct FTransform>* Keypoints);
		bool GetCurrentGestureConfidence(EControllerHand Hand, float* Confidence);
		bool GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture* Gesture);
		bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
