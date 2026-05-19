#pragma once
#include "InputHoldBehavior.generated.h"

UENUM(BlueprintType)
enum class EInputHoldBehavior : uint8
{
	DontAllow,
	AllowIfHeld,
	Force
};
