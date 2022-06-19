// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SGameplayInterface.h"
#include "GameFramework/Actor.h"
#include "SItemChest.generated.h"
class UStaticMeshComponent;
UCLASS()
class ACTIONROGUELIKE_API ASItemChest : public AActor, public ISGameplayInterface
{
	GENERATED_BODY()


protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(Visibleanywhere)
	UStaticMeshComponent* LidMesh;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void Interact_Implementation(APawn* InstigatorPawn);
	UPROPERTY(EditAnywhere)
	float TargetPitch;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Sets default values for this actor's properties
	ASItemChest();
};
