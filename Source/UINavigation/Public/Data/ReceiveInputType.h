#pragma once
#include "ReceiveInputType.generated.h"

UENUM(BlueprintType, meta = (ScriptName = "UINavReceiveInputType"))
enum class EReceiveInputType : uint8
{
	None UMETA(DisplayName = "None"),
	Action UMETA(DisplayName = "Action"),
	Axis UMETA(DisplayName = "Axis")
};
