// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

#include <rapidjson/document.h>

#include "Components/SceneComponent.h"


// Sets default values
ADoor::ADoor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Thought of doing components in c++, but its easier in bps I guess.
	
	//Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Anchor = CreateDefaultSubobject<USceneComponent>(TEXT("Anchor"));
	Anchor->SetupAttachment(RootComponent);
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComp->SetupAttachment(RootComponent);
	
	//DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	//DoorFrame->SetupAttachment(Anchor);
	
}

/*void ADoor::OpenDoor()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("DoorOpened"));	
}*/

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	if (FloatCurve){
		FOnTimelineFloat TimelineProgress;
		TimelineProgress.BindDynamic(this, &ADoor::NewOpenDoor);
		Timeline.AddInterpFloat(FloatCurve, TimelineProgress);

	}
}
\
// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timeline.TickTimeline(DeltaTime);
}

void ADoor::NewOpenDoor(float Value)
{
	FRotator Rot = FRotator(0.0f, DoorRotateAngle * Value, 0.0f);
	Anchor->SetRelativeRotation(Rot);
	
}

void ADoor::OpenDoor_Implementation(AActor* Interactor)
{

	if (bIsDoorClosed)
	{
		Timeline.Play();
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Silver,
	 *(FString::Printf(
	TEXT("Forward"))));
	}else
	{
		Timeline.Reverse();
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Silver,
	 *(FString::Printf(
	TEXT("Reverse"))));
	}
	bIsDoorClosed = !bIsDoorClosed;
	

}
	