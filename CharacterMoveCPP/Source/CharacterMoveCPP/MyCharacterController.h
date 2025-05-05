// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "MyCharacterController.generated.h"

// Forward Declarations
class ADoor;
class UEnhancedInputComponent;
class UInputMappingContext;
class AMyCharacter;


UCLASS()
class AMyCharacterController : public APlayerController
{
	

public:

	// The Input Action to map to movement.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionMove = nullptr;

	// The Input Action to map to jumping.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionJump = nullptr;

	// The Input Action to map to looking
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionLook = nullptr;

	//OpenDoorButton
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionInteract = nullptr;
	
	// The Input Mapping Context to use.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputMappingContext> InputMappingContent = nullptr;


	// Sets default values for this actor's properties
	AMyCharacterController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void         HandleMove(const FInputActionValue& InputActionValue);
	void         HandleJump();
	void         HandleLook(const FInputActionValue& InputActionValue);
	void		 HandleInteract();
	bool		 bHasBoundInput = false;

	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

private:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Used to store a reference to the InputComponent cast to an EnhancedInputComponent.
	UPROPERTY()
	TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent = nullptr;

	// Used to store a reference to the pawn we are controlling.
	UPROPERTY()
	TObjectPtr<AMyCharacter> PlayerCharacter = nullptr;
	
	
	
	GENERATED_BODY()
};
