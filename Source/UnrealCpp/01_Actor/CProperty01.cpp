// Fill out your copyright notice in the Description page of Project Settings.


#include "CProperty01.h"

// Sets default values
ACProperty01::ACProperty01()
{
	C = 55;
}

// Called when the game starts or when spawned
void ACProperty01::BeginPlay()
{
	Super::BeginPlay();

	FString str;
	str.Append("A:"); //str += "A:";
	str.Append(FString::FromInt(A));
	str.Append(", B:");
	str.Append(FString::FromInt(B));
	str.Append(", C:");
	str.Append(FString::FromInt(C));
	str.Append(", D:");
	str.Append(FString::FromInt(D));

	GLog->Log(str);
}

