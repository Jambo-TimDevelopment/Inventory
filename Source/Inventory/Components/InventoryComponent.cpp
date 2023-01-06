// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"

bool UInventoryComponent::AddObjectToInventory(UObject* Object)
{
	if (IInventoryInterface* InventoryObject = Cast<IInventoryInterface>(Object))
	{
		InventoryObjects.Add(InventoryObject);
		return true;
	}

	return false;
}

bool UInventoryComponent::RemoveObjectFromInventory(UObject* Object)
{
	if (IInventoryInterface* InventoryObject = Cast<IInventoryInterface>(Object))
	{
		InventoryObjects.Remove(InventoryObject);
		return true;
	}

	return false;
}

TArray<IInventoryInterface*> UInventoryComponent::FindObjectInInventoryByVolume(float VolumeMin, float VolumeMax)
{
	/*TArray<IInventoryInterface*> OutResult;
	for (IInventoryInterface* InventoryObject : InventoryObjects)
	{
		if (InventoryObject != nullptr && InventoryObject->GetInventoryVolume() > VolumeMin && InventoryObject->GetInventoryVolume() < VolumeMax)
		{
			OutResult.Add(InventoryObject);
		}
	}*/
	//FilterByPredicate
	return InventoryObjects.FilterByPredicate([ VolumeMin, VolumeMax](const IInventoryInterface* InventoryObject) { return InventoryObject->GetInventoryVolume() > VolumeMin && InventoryObject->GetInventoryVolume() < VolumeMax; });
	/*TArray<UObject*> OutResult;
	for (IInventoryInterface* InventoryObj : FoundObjects)
	{
		if (UObject* FoundObject = Cast<UObject>(InventoryObj))
		{
			OutResult.Add(FoundObject);
		}
	}

	return OutResult;*/
}
