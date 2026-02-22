# 01. 프로젝트 개요

## 기본 정보

| 항목 | 내용 |
|------|------|
| **엔진** | Unreal Engine **5.7** |
| **기반** | Epic Games **Lyra Sample Game** |
| **프로젝트 타입** | Samples (스타터 게임) |
| **프로젝트 이름** | Lyra (Config), 워크스페이스 폴더명 Hunter |

## Content 안내

Git 저장소에는 **소스 코드만** 포함되어 있습니다. **Content 폴더는 포함되지 않습니다.**

Lyra 소스를 사용하려면:

1. **Unreal Marketplace**(Epic Games Launcher)에서 Lyra Content 다운로드
2. 마켓플레이스 프로젝트의 `Content` 폴더(및 기타 `Content` 폴더)를 이 솔루션의 프로젝트로 복사

자세한 내용: [Unreal Engine Lyra documentation](https://docs.unrealengine.com/5.0/en-US/lyra-sample-game-in-unreal-engine/)

## 디렉터리 구조

| 경로 | 설명 |
|------|------|
| `Source/` | C++ 게임/에디터 모듈 (LyraGame, LyraEditor) |
| `LyraStarterGame/` | Lyra 관련 추가 소스/에셋 |
| `Plugins/` | 플러그인 (GameFeatures, LyraExtTool 등) |
| `Config/` | DefaultGame.ini, DefaultEngine.ini 등 |
| `Content/` | 에셋 (마켓플레이스에서 별도 다운로드) |
| `Build/`, `Binaries/` | 빌드 산출물 |

## 프로젝트 파일

- **LyraStarterGame.uproject**: 엔진 5.7 연동, LyraGame / LyraEditor 모듈 및 다수 플러그인 정의
