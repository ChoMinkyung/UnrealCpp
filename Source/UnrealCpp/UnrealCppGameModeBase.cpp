// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealCppGameModeBase.h"
#include "Global.h"

AUnrealCppGameModeBase::AUnrealCppGameModeBase()
{
	// blueprint 가져올 때 뒤에 ' 앞에 _C 붙이기
	/*ConstructorHelpers::FClassFinder<APawn> pawn(L"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");

	if (pawn.Succeeded())
	{

	}*/

	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}
