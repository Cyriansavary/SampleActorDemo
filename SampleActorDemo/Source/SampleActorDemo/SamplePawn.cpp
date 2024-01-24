 // Fill out your copyright notice in the Description page of Project Settings.


#include "SamplePawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Bullet.h"

// Sets default values
ASamplePawn::ASamplePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMesh);

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(StaticMesh);
	SpringArm->TargetArmLength = 500.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;

}

// Called when the game starts or when spawned
void ASamplePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASamplePawn::MoveForward(float Value)
{
	PawnMovement->AddInputVector(GetActorForwardVector() * Value);
}

void ASamplePawn::MoveRight(float Value)
{
	PawnMovement->AddInputVector(GetActorRightVector() * Value);
}

void ASamplePawn::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ASamplePawn::lookUp(float Value)
{
		AddControllerPitchInput(Value);
}

void ASamplePawn::Shoot()
{
	if (!BulletClass) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = this;
	SpawnParams.bNoFail = true;

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(GetActorForwardVector() * BulletSpawnOffset	+ GetActorLocation());
	SpawnTransform.SetRotation(GetActorRotation().Quaternion());
	SpawnTransform.SetScale3D(FVector(1.0f));

	GetWorld()->SpawnActor<ABullet>(BulletClass, SpawnTransform, SpawnParams);
}

// Called every frame
void ASamplePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASamplePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASamplePawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASamplePawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ASamplePawn::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ASamplePawn::lookUp);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ASamplePawn::Shoot);

}

