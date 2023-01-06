// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryInterface.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

UCLASS()
class INVENTORY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	bool AddObjectToInventory(UObject* Object);

	bool RemoveObjectFromInventory(UObject* Object);

	TArray<IInventoryInterface*> FindObjectInInventoryByVolume(float VolumeMin, float VolumeMax);

private:
	TArray<IInventoryInterface*> InventoryObjects;
};
