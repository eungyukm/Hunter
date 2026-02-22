# 05. 플러그인

## Game Feature 플러그인 (Lyra 샘플)

| 플러그인 | 설명 |
|----------|------|
| **ShooterCore** | 슈터 게임플레이 (Game1 / Shooter Game) |
| **ShooterMaps** | 슈터용 맵 |
| **TopDownArena** | 탑다운 아레나 경험 |
| **ShooterExplorer** | 슈터 탐색/테스트 |
| **ShooterTests** | 슈터 관련 테스트 |

## LyraExtTool (커스텀)

- **타입**: Editor 전용
- **위치**: `Plugins/LyraExtTool/`
- **기능**:
  - **UBPFunctionLibrary::ChangeMeshMaterials**: 스태틱 메시 배열에 머티리얼 일괄 적용 (블루프린트에서 호출)
- 프로젝트 전용 확장/헬퍼 용도

## 기타 활성 플러그인 (요지)

- **온라인**: OnlineFramework, PlayFabParty, OnlineSubsystemSteam, SocketSubsystemSteamIP 등
- **입력**: EnhancedInput
- **UI/공통**: CommonUI, CommonGame, CommonUser, GameSettings
- **게임플레이**: GameplayAbilities, ModularGameplay, GameFeatures, GameplayMessageRouter, AsyncMixin
- **오디오**: Niagara, AudioModulation, AudioGameplay, SoundUtilities 등
- **기타**: PocketWorlds, GameplayStateTree, SmartObjects, ContextualAnimation, UIExtension 등

## 비활성 플러그인 예시

- MagicLeap, OpenXR 관련, SteamVR, GearVR, MLSDK, ResonanceAudio, RuntimePhysXCooking 등 (플랫폼/옵션에 따라 비활성)
