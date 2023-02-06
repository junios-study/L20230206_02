// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"


#include "MyPawn.h"
#include "MyPlayerController.h"

//CDO 초기화 
AMyGameModeBase::AMyGameModeBase()
{
	UE_LOG(LogTemp, Warning, TEXT("안녕하세요.") );

	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}
