// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */

class ATank;
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
private:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void OnTankDeath();

protected:
    UPROPERTY(EditAnywhere , Category = "Setup")
    float AcceptanceRadius = 8000.f;

public:
    virtual void SetPawn(APawn* InPawn) override;
};
