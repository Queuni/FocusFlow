#pragma once
#include "InputType.generated.h"

UENUM(BlueprintType, meta = (ScriptName = "UINavInputType"))
enum class EInputType : uint8
{
	None UMETA(DisplayName = "None"),
	Keyboard UMETA(DisplayName = "Keyboard"),
	Mouse UMETA(DisplayName = "Mouse"),
	Gamepad UMETA(DisplayName = "Gamepad")
};
