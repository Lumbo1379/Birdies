// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using PlayerChracter."));

	UCharacterMovementComponent* CharacterMovementComponent = GetCharacterMovement();

	if (CharacterMovementComponent)
	{
		CharacterMovementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
		CharacterMovementComponent->BrakingDecelerationFlying = 1000.0f;

		FString MovementMode = CharacterMovementComponent->GetMovementName();
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Movement mode: " + MovementMode + " with a deceleration of " + (FString::SanitizeFloat(CharacterMovementComponent->BrakingDecelerationFlying) + ".")));
	}


	// Find bird spawner in level
	ABirdSpawnerActor* BirdSpawner;
	MyUtils::FindActor(GetWorld(), BirdSpawner);

	if (BirdSpawner)
	{
		BirdSpawnerActorClass = BirdSpawner;
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement bindings
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	// Look bindings
	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::AddControllerPitchInput);

	// Action bindings
	PlayerInputComponent->BindAction("SpawnBird", IE_Pressed, this, &APlayerCharacter::SpawnBird);
}

void APlayerCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(direction, Value);
}

void APlayerCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(direction, Value);
}

void APlayerCharacter::SpawnBird()
{
	if (BirdSpawnerActorClass)
	{
		BirdSpawnerActorClass->SpawnBird();
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Attempting to spawn a bird..."));
	}
}

