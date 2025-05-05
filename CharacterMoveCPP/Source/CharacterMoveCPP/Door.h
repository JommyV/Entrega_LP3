// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "Components/BoxComponent.h"
#include "Components/TimelineComponent.h"
#include "Door.generated.h"

UCLASS()
class CHARACTERMOVECPP_API ADoor : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoor();

	virtual void OpenDoor_Implementation(AActor* Interactor) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	/*
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorFrame;
	*/

	UPROPERTY(EditAnywhere)
	USceneComponent* Anchor;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComp;
	

	FTimeline Timeline;
	UPROPERTY(EditAnywhere)
	UCurveFloat* FloatCurve;

	bool bIsDoorClosed = true;

	UPROPERTY(EditAnywhere)
	float DoorRotateAngle = 90.f;

	UFUNCTION()
	void NewOpenDoor(float Value);
	
	
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
