using namespace CG;

class cheat_manager {
private:
	UWorld** _UWorld;
	UWorld* gWorld;
	APlayerController* PlayerController;
	ULocalPlayer* LocalPlayer;
	UGameInstance* OwningGameInstance;
	UGameViewportClient* GameViewportClient;
	AGameStateBase* GameState;
	AActor* obj;
	UGameplayStatics* UGStatics;
	UKismetSystemLibrary* KismetSystemLib;
	APawn* MyPlayer;
	AMyShootCharacter* BaseClass; //change a class for each game
	UKismetMathLibrary* MathLib;
	int x, y = 0;
public:
	void cheat_thread();
	void dump_bones();
};