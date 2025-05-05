// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMyCharacterController::AMyCharacterController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMyCharacterController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	UE_LOG(LogTemp, Warning, TEXT("OnPossess called on %s (Pawn: %s) at frame %d"), *GetName(), *aPawn->GetName(), GFrameCounter);

	if (bHasBoundInput)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input already bound, skipping binding for %s"), *GetName());
		return;
	}
	
	//Reference to the player pawn
	PlayerCharacter = Cast<AMyCharacter>(aPawn);

	// Get a reference to the EnhancedInputComponent
	EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);

	if (EnhancedInputComponent)
	{
		EnhancedInputComponent->ClearActionBindings();
	}

	// Get the local player subsystem
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	
	InputSubsystem->ClearAllMappings();
	InputSubsystem->AddMappingContext(InputMappingContent, 0);

	if (ActionMove)
		EnhancedInputComponent->BindAction(ActionMove, ETriggerEvent::Triggered, this,
										   &AMyCharacterController::HandleMove);
	if (ActionJump)
		EnhancedInputComponent->BindAction(ActionJump, ETriggerEvent::Triggered, this,
										   &AMyCharacterController::HandleJump);
	if (ActionLook)
		EnhancedInputComponent->BindAction(ActionLook, ETriggerEvent::Triggered, this,
										   &AMyCharacterController::HandleLook);
	if (ActionInteract)
	{
		EnhancedInputComponent->BindAction(ActionInteract, ETriggerEvent::Started,this ,
											&AMyCharacterController::HandleInteract);
		UE_LOG(LogTemp, Warning, TEXT("Binding Interact in %s"), *GetName());
	}
	
	
}

void AMyCharacterController::OnUnPossess()
{
	Super::OnUnPossess();
}


// Called when the game starts or when spawned
void AMyCharacterController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyCharacterController::HandleMove(const FInputActionValue& InputActionValue)
{
	if (!PlayerCharacter) return;
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	if (MovementVector.IsNearlyZero()) return;

	// Get control rotation and zero out pitch/roll
	const FRotator ControlRot = GetControlRotation();
	const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);

	// Get forward and right directions from controller
	const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector Right = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
	
	// Apply movement input
	PlayerCharacter->AddMovementInput(Forward, MovementVector.Y);
	PlayerCharacter->AddMovementInput(Right, MovementVector.X);
}

void AMyCharacterController::HandleJump()
{
	if (PlayerCharacter)
	{
		PlayerCharacter->UnCrouch();
		PlayerCharacter->Jump();
	}
}

void AMyCharacterController::HandleLook(const FInputActionValue& InputActionValue)
{
	// Input is a Vector2D
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	// Add yaw and pitch input to controller
	
	PlayerCharacter->AddControllerYawInput(LookAxisVector.X);
	PlayerCharacter->AddControllerPitchInput(LookAxisVector.Y);
}

void AMyCharacterController::HandleInteract()
{
	PlayerCharacter->Interact();
}

