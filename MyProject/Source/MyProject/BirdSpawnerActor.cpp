// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdSpawnerActor.h"

// Sets default values
ABirdSpawnerActor::ABirdSpawnerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABirdSpawnerActor::BeginPlay()
{
	Super::BeginPlay();


	SpawnBird(650);
}

// Called every frame
void ABirdSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABirdSpawnerActor::SpawnBird()
{
	// Attempt to spawn a bird
	if (BirdActorClass)
	{
		FVector SpawnLocation = { 0.0f, 0.0f, 300.0f };
		FRotator SpawnRotation = FRotator();

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			// Spawn bird at SpawnLocation
			ABirdActor* Bird = World->SpawnActor<ABirdActor>(BirdActorClass, SpawnLocation, SpawnRotation, SpawnParams);

			if (Bird)
			{
				Birds.Add(Bird);
				Bird->SetBirdContainer(&Birds);
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Bird created."));
			}
		}
	}
}

void ABirdSpawnerActor::SpawnBird(int amount)
{
	for (int i = 0; i < amount; i++)
		SpawnBird();
}

