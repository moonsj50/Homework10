// ModuleAndPluginCharacter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ModuleAndPluginCharacter.generated.h"

UCLASS()
class MODULEANDPLUGIN_API AModuleAndPluginCharacter : public ACharacter
{
	GENERATED_BODY()


public:
	virtual void BeginPlay() override;

};
