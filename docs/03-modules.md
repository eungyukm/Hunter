# 03. 모듈

## LyraGame (런타임)

- **역할**: 메인 게임 로직
- **빌드 파일**: `Source/LyraGame/LyraGame.Build.cs`

### 주요 의존성

- **Public**: Core, Engine, GameplayAbilities, ModularGameplay, ModularGameplayActors, DataRegistry, ReplicationGraph, GameFeatures, SignificanceManager, CommonLoadingScreen, Niagara, AsyncMixin, ControlFlows 등
- **Private**: InputCore, Slate, EnhancedInput, UMG, CommonUI, CommonGame, CommonUser, GameSettings, GameplayMessageRuntime, UIExtension, AudioModulation 등

### 특이 사항

- **SHIPPING_DRAW_DEBUG_ERROR=1**: Shipping 빌드에서 `DrawDebug` 사용 시 컴파일 에러
- **External RPC / HTTPServer**: 비-Shipping 에서만 활성화; Shipping 에서는 `WITH_RPC_REGISTRY=0`, `WITH_HTTPSERVER_LISTENERS=0`

---

## LyraEditor

- **역할**: 에디터 전용 (Gameplay Abilities 에디터 연동, 데이터 검증 등)
- **빌드 파일**: `Source/LyraEditor/LyraEditor.Build.cs`

### 주요 의존성

- **Public**: LyraGame, GameplayAbilities, GameplayAbilitiesEditor, StudioTelemetry 등
- **Private**: ToolMenus, EditorStyle, DataValidation, SourceControl 등

### 특이 사항

- LyraGame 과 동일하게 Shipping 시 RPC/HTTPServer 비활성화, DrawDebug 에러 정의
