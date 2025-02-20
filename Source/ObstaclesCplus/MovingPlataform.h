// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlataform.generated.h"

UCLASS()
class OBSTACLESCPLUS_API AMovingPlataform : public AActor
{
	GENERATED_BODY()
	
public:	
	AMovingPlataform();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector (-13420.000000,-580.000000,4000.000000);
};
