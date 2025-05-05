// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include <rapidjson/document.h>

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create our components
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComp->SetupAttachment(GetCapsuleComponent()); // Attach to the capsule

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp->SetupAttachment(GetCapsuleComponent());  // Attach to capsule too

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);


	//Assign SpringArm class variables.
	SpringArmComp->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	SpringArmComp->TargetArmLength = 400.f;
	SpringArmComp->bEnableCameraLag = false;
	SpringArmComp->CameraLagSpeed = 3.0f;


	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 250.0f, 0.0f); // Adjust turn speed here


	SpringArmComp->bUsePawnControlRotation = true;
	CameraComp->bUsePawnControlRotation = false; // Let spring arm handle the rotation
	bUseControllerRotationYaw = false;           // Let the controller rotate the whole pawn


	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyCharacter::Interact()
{
	TArray<AActor*> OverlappingActors;
	GetCapsuleComponent()->GetOverlappingActors(OverlappingActors);
	UE_LOG(LogTemp, Log, TEXT("Number of overlapping actors: %d"), OverlappingActors.Num());
	for (AActor* Actor : OverlappingActors)
	{
		if (!Actor)
			continue;
		if (Actor->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
		{
			UE_LOG(LogTemp, Log, TEXT("Interacting with: %s"), *Actor->GetName());
			UE_LOG(LogTemp, Log, TEXT("Interact called by: %s"), *GetName());
			UE_LOG(LogTemp, Warning, TEXT("Interact() called on %s at frame %d"), *GetName(), GFrameCounter);
			UE_LOG(LogTemp, Warning, TEXT("Did This call Twice? Owning Actor: %s | Component Name: %s"), *GetOwner()->GetName(),*GetName());
			IInteractInterface::Execute_OpenDoor(Actor, this);
			break;
		}
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}



