// ModuleAndPluginCharacter.cpp


#include "ModuleAndPluginCharacter.h"
#include "Test/TestActor.h"
#include "Temporary/Public/TemporaryActor.h"


void AModuleAndPluginCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->SpawnActor(ATestActor::StaticClass());
	GetWorld()->SpawnActor(ATemporaryActor::StaticClass());
	
}


