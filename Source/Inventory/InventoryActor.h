// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InventoryInterface.h"
#include "GameFramework/Actor.h"
#include "InventoryActor.generated.h"

UCLASS()
class INVENTORY_API AInventoryActor : public AActor, public IInventoryInterface
{
	GENERATED_BODY()

public:
	virtual float GetInventoryVolume() const override
	{
		return  Volume;
	}

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float Volume = 10.0f;
};
