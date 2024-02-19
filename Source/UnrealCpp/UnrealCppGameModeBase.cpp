// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealCppGameModeBase.h"
#include "Global.h"

AUnrealCppGameModeBase::AUnrealCppGameModeBase()
{
	// blueprint ������ �� �ڿ� ' �տ� _C ���̱�
	/*ConstructorHelpers::FClassFinder<APawn> pawn(L"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");

	if (pawn.Succeeded())
	{

	}*/

	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}
