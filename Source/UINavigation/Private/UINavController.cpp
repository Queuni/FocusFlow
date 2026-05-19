#include "UINavController.h"
#include "UINavPCComponent.h"

AUINavController::AUINavController()
{
	UINavPCComp = CreateDefaultSubobject<UUINavPCComponent>(TEXT("UINav PC Component"));
}
