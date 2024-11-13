// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorBase.h"

// Sets default values
ADecoradorBase::ADecoradorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

