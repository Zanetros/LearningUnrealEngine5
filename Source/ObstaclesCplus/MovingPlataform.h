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

	UPROPERTY(EditAnywhere, Category= "Moving Platform")
	FVector PlatformVelocity = FVector(0, 0, 0);

 	UPROPERTY(EDITANYWHERE, Category= "Moving Platform")
  	float MoveDistance = 100;
	
	FVector StartLocation;
};
