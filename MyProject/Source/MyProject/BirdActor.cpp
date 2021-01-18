// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdActor.h"

// Sets default values
ABirdActor::ABirdActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BirdSceneComponent"));
	}

	if (!BirdMeshComponent)
	{
		BirdMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BirdMeshComponent"));
		//static ConstructorHelpers::FObjectFinder<USkeletalMesh>Mesh(TEXT("'/Game/Models/Bird/Bird.Bird'"));
		static ConstructorHelpers::FObjectFinder<USkeletalMesh>Mesh(TEXT("'/Game/Models/Bird_SkeletalMesh.Bird_SkeletalMesh'"));
		if (Mesh.Succeeded())
		{
			BirdMeshComponent->SetSkeletalMesh(Mesh.Object);
		}

		//static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/Models/Bird/BirdMaterial.BirdMaterial'"));
		static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("Material'/Game/Models/Bird_Material.Bird_Material'"));
		if (Material.Succeeded())
		{
			BirdMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, BirdMeshComponent);
		}

		//static ConstructorHelpers::FObjectFinder<UAnimBlueprint>AnimBlueprint(TEXT("'/Game/Animation/Bird/Birds_AnimBP.Birds_AnimBP'"));
		static ConstructorHelpers::FObjectFinder<UAnimBlueprint>AnimBlueprint(TEXT("AnimBlueprint'/Game/Animation/BP_BirdAnimation.BP_BirdAnimation'"));
		if (AnimBlueprint.Succeeded())
		{
			BirdMeshComponent->SetAnimInstanceClass(AnimBlueprint.Object->GeneratedClass);
		}

		BirdMeshComponent->SetMaterial(0, BirdMaterialInstance);
		BirdMeshComponent->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
		BirdMeshComponent->SetupAttachment(RootComponent);
	}

	MaxVelocity = 200;
	Velocity = { 50, 100, 25 };
	Radius = 500;
	SeparationRadius = 200;
	CohesionScalar = 1;
	AlignmentScalar = 1;
	SeparationScalar = 2;
	AvoidanceLength = 50.0f;
	SpeedScalar = 300;
	RotationScalar = 3;
}

// Called when the game starts or when spawned
void ABirdActor::BeginPlay()
{
	Super::BeginPlay();

	// Make bird larger
	SetActorScale3D({ 100.0f, 100.0f, 100.0f });
}

// Called every frame
void ABirdActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<ABirdActor*> birdsInRadius;

	FVector newVelocityDirection = Velocity.GetSafeNormal();

	TArray<FVector> collisionPoints = Raycast();

	if (collisionPoints.Num() > 0)
	{
		birdsInRadius = GetBirdsInRadius(AvoidanceLength);
		newVelocityDirection += Separation(GetBirdsInRadius(AvoidanceLength), collisionPoints);
	}
	else
	{
		birdsInRadius = GetBirdsInRadius(Radius);
		newVelocityDirection += Separation(GetBirdsInRadius(SeparationRadius), collisionPoints);
	}

	newVelocityDirection += Alignment(birdsInRadius);
	newVelocityDirection += Cohesion(birdsInRadius);

	Raycast();

	FQuat newRotation = FQuat::Slerp(Velocity.ToOrientationQuat(), newVelocityDirection.ToOrientationQuat(), RotationScalar * DeltaTime);
	Speed = FMath::Clamp<float>(Speed + SpeedScalar, 0, MaxVelocity);
	Velocity = newRotation * FVector::ForwardVector * Speed;

	SetActorLocationAndRotation(GetActorLocation() + Velocity * DeltaTime, FRotationMatrix::MakeFromY(Velocity).Rotator().Quaternion() * FRotator(270, 0, 0).Quaternion());
}

void ABirdActor::SetBirdContainer(TArray<ABirdActor*>* BirdsContainer)
{
	this->Birds = BirdsContainer;

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("There were " + FString::FromInt(Birds->Num() - 1) + " other birds when I was created"));
}

TArray<ABirdActor*> ABirdActor::GetBirdsInRadius(float R)
{
	TArray<ABirdActor*> birdsInRadius;

	for (auto& bird : *Birds)
	{
		if (bird == this) continue;
		//if (!IsValidMemberOfGroup(bird->GetActorLocation())) continue;

		FVector difference = bird->GetActorLocation() - GetActorLocation();

		if (difference.Size() <= R)
			birdsInRadius.Add(bird);
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("There are " + FString::FromInt(birdsInRadius.Num()) + " other birds in my radius"));

	return birdsInRadius;
}


FVector ABirdActor::Cohesion(TArray<ABirdActor*> BirdsInRadius)
{
	FVector average = { 0, 0, 0 };

	if (BirdsInRadius.Num() < 1)
		return average;

	for (const ABirdActor* bird : BirdsInRadius)
	{
		FVector difference = bird->GetActorLocation() - GetActorLocation();

		average += difference;
	}

	average /= BirdsInRadius.Num();

	return average.GetSafeNormal() * CohesionScalar;
}

FVector ABirdActor::Alignment(TArray<ABirdActor*> BirdsInRadius)
{
	FVector average = { 0, 0, 0 };

	for (const ABirdActor* bird : BirdsInRadius)
	{
		FVector difference = bird->GetActorLocation() - GetActorLocation();
		float weight = 1 - FMath::Clamp<float>((difference.Size() / Radius), 0, 1); // Align with those closer first than those further away

		average += bird->Velocity * weight;
	}

	return average.GetSafeNormal() * AlignmentScalar;
}

FVector ABirdActor::Separation(TArray<ABirdActor*> BirdsInRadius, TArray<FVector> collisionPoints)
{
	FVector velocityChange = { 0, 0, 0 };

	for (const ABirdActor* bird : BirdsInRadius)
	{
		FVector difference = bird->GetActorLocation() - GetActorLocation();
		float weight = FMath::Clamp<float>(1 - (difference.Size() / SeparationRadius), 0, 1); // Move quicker away from those closer than from those further

		velocityChange -= (difference.GetSafeNormal() * weight);
	}

	for (const FVector point : collisionPoints)
	{
		FVector difference = point - GetActorLocation();
		float weight = FMath::Clamp<float>(1 - (difference.Size() / SeparationRadius), 0, 1); // Move quicker away from those closer than from those further

		velocityChange -= (difference.GetSafeNormal() * weight);
	}

	return velocityChange.GetSafeNormal() * SeparationScalar;
}

TArray<FVector> ABirdActor::Raycast()
{
	FHitResult hit;
	FVector origin = GetActorLocation();
	FVector forward = GetActorForwardVector();
	FVector right = GetActorRightVector();
	FVector up = GetActorUpVector();
	FVector end1 = origin + forward * AvoidanceLength;
	FVector end2 = origin - forward * AvoidanceLength;
	FVector end3 = origin + right * AvoidanceLength;
	FVector end4 = origin - right * AvoidanceLength;
	FVector end5 = origin + up * AvoidanceLength;
	FVector end6 = origin - up * AvoidanceLength;

	TArray<FVector> collisionPoints;

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(GetOwner());
	
	//DrawDebugLine(GetWorld(), origin, end1, FColor::Green, false, 0.1f, 0, 1);
	//DrawDebugLine(GetWorld(), origin, end2, FColor::Green, false, 0.1f, 0, 1);

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, end1, ECC_Visibility, collisionParams))
	{
		collisionPoints.Add(hit.ImpactPoint);
	}

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, end2, ECC_Visibility, collisionParams))
	{
		collisionPoints.Add(hit.ImpactPoint);
	}

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, end3, ECC_Visibility, collisionParams))
	{
		collisionPoints.Add(hit.ImpactPoint);
	}

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, end4, ECC_Visibility, collisionParams))
	{
		collisionPoints.Add(hit.ImpactPoint);
	}

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, end5, ECC_Visibility, collisionParams))
	{
		collisionPoints.Add(hit.ImpactPoint);
	}

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, end6, ECC_Visibility, collisionParams))
	{
		collisionPoints.Add(hit.ImpactPoint);
	}

	return collisionPoints;
}

bool ABirdActor::IsValidMemberOfGroup(FVector otherMember) // Unused due to performance, not optimal approach
{
	FVector origin = GetActorLocation();
	FHitResult hit;

	if (GetWorld()->LineTraceSingleByChannel(hit, origin, otherMember, ECC_Visibility))
		return false;

	return true;
}

