// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Door.h"
#include "InteractInterface.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"



UCLASS()
class CHARACTERMOVECPP_API AMyCharacter : public ACharacter, public IInteractInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArmComp;
		
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UCameraComponent* CameraComp;
		
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComp;

	


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Interact();

	
};
