// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDecorador.h"
#include "GameFramework/Actor.h"
#include "DecoradorBase.generated.h"
UCLASS()
class DECORATORPATTERN_API ADecoradorBase : public AActor, public IIDecorador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoradorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	IIDecorador* Jugador;

	void SetJugador(AActor* _Jugador);
	void Empezar() override;
	float Duracion() override;

};
