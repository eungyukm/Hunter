# 06. 설정 (Config)

## DefaultGame.ini 요약

### 프로젝트

- **ProjectName**: Lyra
- **Description**: Sample starter game for Unreal Engine 5

### LyraPlayerController

- InputYawScale, InputPitchScale, InputRollScale, ForceFeedbackScale

### GameplayAbilities (AbilitySystemGlobals)

- **AbilitySystemGlobalsClassName**: LyraAbilitySystemGlobals
- **GlobalGameplayCueManagerClass**: LyraGameplayCueManager
- **GameplayCueNotifyPaths**: /Game/GameplayCueNotifies, /Game/GameplayCues
- ActivateFail 태그 (Cooldown, Cost, Networking, TagsBlocked, TagsMissing 등)

### GameFeatures

- **GameFeaturesManagerClassName**: LyraGameFeaturePolicy

### LyraAssetManager

- **LyraGameDataPath**: /Game/DefaultGameData.DefaultGameData
- **DefaultPawnData**: /Game/Characters/Heroes/EmptyPawnData/DefaultPawnData_EmptyPawn

### AssetManagerSettings (Primary Asset)

- **Map**: /Game/Maps, 프론트엔드/에디터 맵 포함
- **LyraGameData**: DefaultGameData
- **LyraExperienceDefinition**: /Game/System/Experiences, B_LyraFrontEnd_Experience
- **LyraUserFacingExperienceDefinition**: /Game/UI/Temp, /Game/System/Playlists
- **LyraLobbyBackground**, **LyraExperienceActionSet**, **GameFeatureData** 등

### LyraUIManagerSubsystem

- **DefaultUIPolicyClass**: /Game/UI/B_LyraUIPolicy

### LyraUIMessaging

- **ConfirmationDialogClass**: /Game/UI/Foundation/Dialogs/W_ConfirmationDefault

### GameNetworkManager

- TotalNetBandwidth, MaxDynamicBandwidth, MinDynamicBandwidth (네트워크 대역)

---

설정 전체 내용은 프로젝트 루트의 `Config/DefaultGame.ini` 및 `Config/DefaultEngine.ini` 를 참고하세요.
