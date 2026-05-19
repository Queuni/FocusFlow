#include "ComponentActions/OpenLevelAction.h"
#include "UINavComponent.h"
#include "UINavWidget.h"
#include "Kismet/GameplayStatics.h"

void UOpenLevelAction::ExecuteAction_Implementation(UUINavComponent* Component)
{
	if (!IsValid(Component))
	{
		return;
	}

	UGameplayStatics::OpenLevel(Component, LevelName);
}
