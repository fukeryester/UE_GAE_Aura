// Copyright LeZhu Gaming

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

class UAttributeSet;
class UAbilitySystemComponent;

UCLASS(Abstract)
class AURO_LEARN_API AAuraCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const {return AttributeSet;}

protected:
	virtual void BeginPlay() override;

	//武器组件
	UPROPERTY(EditAnywhere, Category="Combat");
	TObjectPtr<USkeletalMeshComponent> Weapon;

	//ASC组件（主角只在PlayerState上挂载，敌人直接在敌人蓝图上挂载）
	UPROPERTY()	
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	//属性集组件（主角只在PlayerState上挂载，敌人直接在敌人蓝图上挂载）
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
