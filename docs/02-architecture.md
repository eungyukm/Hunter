# 02. 아키텍처

## Experience 기반 모듈 게임플레이

게임의 핵심 설계는 **Experience** 단위로 게임플레이를 구성하는 방식입니다.

### Experience 정의 (`ULyraExperienceDefinition`)

- **경험(모드/플레이타입)** 하나의 데이터 에셋
- 포함 내용:
  - **GameFeaturesToEnable**: 이 경험에서 활성화할 Game Feature 플러그인 목록
  - **DefaultPawnData**: 기본 Pawn 데이터
  - **Actions**: 로드/활성화/비활성화 시 실행할 `UGameFeatureAction` 인스턴스 배열
  - **ActionSets**: 추가로 합성할 `ULyraExperienceActionSet` 배열

### Experience 로드 흐름

1. **ULyraExperienceManagerComponent** (GameState 소속)
   - `SetCurrentExperience(ExperienceId)` 로 현재 경험 설정
   - 로드 단계: Unloaded → Loading → LoadingGameFeatures → ExecutingActions → Loaded
2. 로드 완료 시 **OnExperienceLoaded** 델리게이트 (우선순위: High / Normal / Low)
3. **ALyraGameMode** 가 Experience 로드 완료 후 스폰/Pawn 데이터 등과 연동

### Game Mode

- **ALyraGameMode** (ModularGameModeBase 상속)
  - Experience 로드 후 `OnExperienceLoaded` 처리
  - 컨트롤러별 Pawn 데이터: `GetPawnDataForController()`
  - 플레이어 초기화 완료 시 `OnGameModePlayerInitialized` 브로드캐스트

## Pawn / 캐릭터 데이터

- **ULyraPawnData**: Pawn 클래스, Ability Set, Input 설정, 기본 카메라 모드 등 **비가변 데이터**
- **LyraPawnExtensionComponent**: Pawn 확장·초기화 (Ability 부여 등과 연동)
- **ULyraHeroComponent**: 플레이어/봇 입력·카메라; `IGameFrameworkInitStateInterface` 로 초기화 단계 관리

## 에셋/데이터 로딩

- **ULyraAssetManager**: Primary Asset 로딩 (LyraGameData, LyraPawnData, Experience 등)
- Config 에서 `LyraGameDataPath`, `DefaultPawnData` 등 지정

## 요약

- **맵/플레이타입별로 “Experience” 하나가 정해지고**, 그 Experience 가 Game Feature + Pawn + Actions 를 한꺼번에 구성합니다.
- 게임플레이 확장은 **새 Game Feature 플러그인** 또는 **Experience 정의 수정**으로 이루어집니다.
