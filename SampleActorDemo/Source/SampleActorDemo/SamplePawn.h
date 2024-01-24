// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SamplePawn.generated.h"

UCLASS()
class SAMPLEACTORDEMO_API ASamplePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASamplePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	class UFloatingPawnMovement* PawnMovement;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnyWhere)
	class TSubclassOf<class ABullet> BulletClass;

	UPROPERTY(EditAnyWhere)
	float BulletSpawnOffset = 100.f;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void lookUp(float Value);
	void Shoot();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
