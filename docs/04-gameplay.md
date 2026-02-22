# 04. 게임플레이 시스템

## Ability System (GAS)

- **LyraGameplayAbility**, **LyraGameplayAbility_Death**, **LyraGameplayAbility_Jump**, **LyraGameplayAbility_Interact**, **LyraGameplayAbility_Reset**
- **LyraAttributeSet**, **LyraHealthSet**, **LyraCombatSet**
- **LyraDamageExecution**, **LyraHealExecution**
- **LyraAbilitySystemGlobals**, **LyraGameplayCueManager**, **LyraGameplayEffectContext**
- 비용: **LyraAbilityCost_InventoryItem**, **LyraAbilityCost_ItemTagStack**, **LyraAbilityCost_PlayerTagStack**

## Equipment / QuickBar

- **LyraEquipmentDefinition**, **LyraQuickBarComponent**
- **LyraPickupDefinition**

## Interaction

- **LyraGameplayAbility_Interact**, **GameplayAbilityTargetActor_Interact**
- **AbilityTask_WaitForInteractableTargets**, **AbilityTask_GrantNearbyInteraction**
- **InteractionStatics**, **InteractionQuery**, **IInteractionInstigator**

## Player

- **LyraPlayerController**, **LyraLocalPlayer**
- **LyraPlayerState**, **LyraPlayerSpawningManagerComponent**
- **LyraPlayerStart**, **LyraCheatManager**
- **LyraPlayerBotController**, **LyraDebugCameraController**

## Character / Pawn

- **LyraPawnData**: Pawn 클래스, Ability Set, Input 설정, 기본 카메라
- **LyraPawnExtensionComponent**: Pawn 확장·초기화
- **LyraHeroComponent**: 입력·카메라 (플레이어/봇)
- **LyraCharacter**: 캐릭터 베이스

## UI

- **LyraUIManagerSubsystem**, **LyraUIMessaging**
- 프론트엔드: **LyraFrontendStateComponent**, **LyraLobbyBackground**
- 공통: **LyraWidgetFactory**, **LyraTabListWidgetBase**, **LyraBoundActionButton**, **LyraActionWidget**, **LyraButtonBase**
- 무기/전투: **LyraWeaponUserInterface**, **LyraReticleWidgetBase**, **HitMarkerConfirmationWidget**, **CircumferenceMarkerWidget**
- 기타: **LyraConfirmationScreen**, **LyraControllerDisconnectedScreen**, **LyraLoadingScreenSubsystem**
- 인디케이터: **LyraIndicatorManagerComponent**, **IndicatorLayer**, **IndicatorDescriptor**

## Feedback

- **Context Effects**: LyraContextEffectsSubsystem, LyraContextEffectComponent, AnimNotify_LyraContextEffects
- **Number Pop**: LyraNumberPopComponent, LyraDamagePopStyle (데미지 등 숫자 표시)

## Game Features (액션)

- **GameFeatureAction_AddAbilities**, **GameFeatureAction_AddInputBinding**, **GameFeatureAction_AddInputContextMapping**
- **GameFeatureAction_AddWidget**, **GameFeatureAction_AddGameplayCuePath**
- **GameFeatureAction_SplitscreenConfig**, **GameFeatureAction_WorldActionBase**
- **LyraGameFeaturePolicy**: Game Feature 정책 클래스

## 기타

- **Teams**: LyraTeamCreationComponent
- **Settings**: LyraSettingKeyboardInput, LyraSettingValueDiscrete_*(해상도/언어/품질/퍼포스탯 등), LyraSafeZoneEditor, LyraBrightnessEditor
- **Phases**: LyraGamePhaseAbility, LyraGamePhaseSubsystem
