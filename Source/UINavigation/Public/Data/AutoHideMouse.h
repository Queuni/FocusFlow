#pragma once
#include "AutoHideMouse.generated.h"

UENUM(BlueprintType)
enum class EAutoHideMouse : uint8
{
	Never,
	Gamepad,
	GamepadAndKeyboard
};
