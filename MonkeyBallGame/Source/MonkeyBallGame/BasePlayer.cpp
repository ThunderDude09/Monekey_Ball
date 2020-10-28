// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	RootComponent = Mesh;

	Mesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("ForwardInput", this, &ABasePlayer::MoveForward);
	InputComponent->BindAxis("HorizontalInput", this, &ABasePlayer::MoveHorizontal);
}

void ABasePlayer::MoveForward(float value)
{
	FRotator newRotation = FRotator(value * rotSpeed, 0, 0);

	Mesh->AddRelativeRotation(newRotation, false, 0, ETeleportType::None);
}

void ABasePlayer::MoveHorizontal(float value)
{
	FRotator newRotation = FRotator(0, 0, value * rotSpeed);

	Mesh->AddRelativeRotation(newRotation, false, 0, ETeleportType::None);
}

