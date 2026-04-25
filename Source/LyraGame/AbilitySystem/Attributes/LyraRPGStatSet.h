// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "LyraAttributeSet.h"
#include "NativeGameplayTags.h"
#include "LyraRPGStatSet.generated.h"
#define UE_API LYRAGAME_API

class UObject;
struct FFrame;

LYRAGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_Damage);
LYRAGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_DamageImmunity);
LYRAGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_DamageSelfDestruct);
LYRAGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_FellOutOfWorld);
LYRAGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Lyra_Damage_Message);

struct FGameplayEffectModCallbackData;
/**
 *
 */
UCLASS(MinimalAPI, BlueprintType)
class ULyraRPGStatSet : public ULyraAttributeSet
{
	GENERATED_BODY()

public:
	UE_API ULyraRPGStatSet();

	ATTRIBUTE_ACCESSORS(ULyraRPGStatSet, Health);
	ATTRIBUTE_ACCESSORS(ULyraRPGStatSet, MaxHealth);
	ATTRIBUTE_ACCESSORS(ULyraRPGStatSet, Stamina);
	ATTRIBUTE_ACCESSORS(ULyraRPGStatSet, MaxStamina);



	UPROPERTY(BlueprintReadOnly, Category = "Lyra|RPGStats")
	FGameplayAttributeData Health;


	UPROPERTY(BlueprintReadOnly, Category = "Lyra|RPGStats")
	FGameplayAttributeData MaxHealth;


	UPROPERTY(BlueprintReadOnly, Category = "Lyra|RPGStats")
	FGameplayAttributeData Stamina;


	UPROPERTY(BlueprintReadOnly, Category = "Lyra|RPGStats")
	FGameplayAttributeData MaxStamina;

	mutable FLyraAttributeEvent OnHealthChanged;
	mutable FLyraAttributeEvent OnStaminaChanged;
	mutable FLyraAttributeEvent OnMaxHealthChanged;
	mutable FLyraAttributeEvent OnMaxStaminaChanged;
	// Delegate to broadcast when the health attribute reaches zero
	mutable FLyraAttributeEvent OnOutOfHealth;

	// Used to track when the health reaches 0.
	bool bOutOfHealth;

	// Store the health before any changes 
	float MaxHealthBeforeAttributeChange;
	float HealthBeforeAttributeChange;

	// Store the health before any changes 
	float MaxStaminaBeforeAttributeChange;
	float StaminaBeforeAttributeChange;

protected:
	UE_API virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
	UE_API virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

};

#undef UE_API