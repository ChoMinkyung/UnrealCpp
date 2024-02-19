#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLight.generated.h"

UCLASS()
class UNREALCPP_API ACLight : public AActor
{
	GENERATED_BODY()
	
public:	
	ACLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene;
	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;
	UPROPERTY(VisibleDefaultsOnly)
		class UPointLightComponent* Light;
	UPROPERTY(VisibleDefaultsOnly)
		class UPointLightComponent* Light2;

private:
	UFUNCTION()
		void OnLight();
	UFUNCTION()
		void OffLight();
	UFUNCTION()
		FString OnRandomLight(FLinearColor InColor);

};
