// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyUtils.h"
#include "BirdActor.generated.h"

UCLASS()
class MYPROJECT_API ABirdActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABirdActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Bird mesh
	UPROPERTY(EditAnywhere, Category = Mesh)
		USkeletalMeshComponent* BirdMeshComponent;

	// Bird material
	UPROPERTY(EditAnywhere, Category = Mesh)
		UMaterialInstanceDynamic* BirdMaterialInstance;

	UPROPERTY(EditAnywhere, Category = Boids)
		float MaxVelocity;

	UPROPERTY(EditAnywhere, Category = Boids)
		FVector Velocity;

	UPROPERTY(EditAnywhere, Category = Boids)
		float Radius;

	UPROPERTY(EditAnywhere, Category = Boids)
		float SeparationRadius;

	UPROPERTY(EditAnywhere, Category = Boids)
		float SeparationScalar;

	UPROPERTY(EditAnywhere, Category = Boids)
		float AlignmentScalar;

	UPROPERTY(EditAnywhere, Category = Boids)
		float CohesionScalar;

	UPROPERTY(EditAnywhere, Category = Boids)
		float SpeedScalar;

	UPROPERTY(EditAnywhere, Category = Boids)
		float Speed;

	UPROPERTY(EditAnywhere, Category = Boids)
		float RotationScalar;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetBirdContainer(TArray<ABirdActor*>* BirdsContainer);

private:
	TArray<ABirdActor*>* Birds;

	TArray<ABirdActor*> GetBirdsInRadius(float R);
	FVector Cohesion(TArray<ABirdActor*> BirdsInRadius);
	FVector Alignment(TArray<ABirdActor*> BirdsInRadius);
	FVector Separation(TArray<ABirdActor*> BirdsInRadius);
};
