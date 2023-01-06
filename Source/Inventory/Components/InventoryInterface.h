#pragma once

#include "CoreMinimal.h"
#include "InventoryInterface.generated.h"

UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
class UInventoryInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IInventoryInterface
{
	GENERATED_IINTERFACE_BODY()
	virtual float GetInventoryVolume() const { return 0.0f; }
};
