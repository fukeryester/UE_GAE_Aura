// Copyright LeZhu Gaming

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURO_LEARN_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();

	/* Enemy Interface */
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;

protected:
	virtual void BeginPlay() override;
};
