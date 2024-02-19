// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IRifle.h"
#include "CPlayer.generated.h"

UCLASS()
class UNREALCPP_API ACPlayer : public ACharacter, public IIRifle
{
	GENERATED_BODY()

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<class UCUserWidget_CrossHair> CrossHairClass;

protected:
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
		class UCameraComponent* Camera;

private:
	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);
	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);

	void OnRunning();
	void OffRunning();

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

public:
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);
	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomIn();
	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomOut();

private:
	class ACRifle* Rifle;
	class UCUserWidget_CrossHair* CrossHair;

private:
	void OnRifle();
	void OnAim();
	void OffAim();

	void OnFire();
	void OffFire();

public:
	FORCEINLINE class ACRifle* GetRifle() override { return Rifle; }

public:
	void GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection) override;
	void OnFocus() override;
	void OffFocus() override;
};