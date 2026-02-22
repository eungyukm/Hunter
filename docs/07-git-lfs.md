# 07. Git LFS 설정

대용량·바이너리 파일을 Git LFS로 관리하기 위한 설정입니다.

## 1. Git LFS 설치 (최초 1회)

macOS (Homebrew):

```bash
brew install git-lfs
git lfs install
```

다른 환경: [Git LFS 설치 가이드](https://git-lfs.com/)

## 2. 이 저장소에서 사용 중인 LFS 대상

`.gitattributes`에 아래 확장자가 LFS로 등록되어 있습니다.

| 분류 | 확장자 |
|------|--------|
| Unreal 에셋 | `*.uasset`, `*.umap` |
| 이미지 | `*.png`, `*.tga`, `*.tif`, `*.tiff`, `*.exr`, `*.hdr`, `*.dds`, `*.psd`, `*.psb` |
| 3D | `*.fbx`, `*.obj`, `*.blend` |
| 오디오 | `*.wav`, `*.mp3`, `*.ogg`, `*.flac`, `*.aiff` |
| 비디오 | `*.mov`, `*.mp4`, `*.avi`, `*.webm` |
| 바이너리 | `*.dll`, `*.dylib`, `*.so`, `*.pak` |
| 폰트 | `*.ttf`, `*.otf` |

이후 `git add` / `git commit` 하는 해당 확장자 파일은 자동으로 LFS로 추적됩니다.

## 3. 저장소에서 LFS 초기화 (설치 후 1회)

프로젝트 클론 또는 LFS 설치 후 이 저장소에서 한 번 실행:

```bash
cd /path/to/Hunter
git lfs install
```

## 4. 이미 커밋된 대용량 파일을 LFS로 옮기기

이미 히스토리에 큰 파일이 있다면, LFS로 이전할 수 있습니다.

```bash
# 예: .uasset, .umap 을 LFS로 이전 (히스토리 다시 쓰기)
git lfs migrate import --include="*.uasset,*.umap" --everything
```

주의: `--everything`은 모든 브랜치 히스토리를 변경합니다. 공유 브랜치면 팀과 조율 후 진행하세요.

## 5. LFS 상태 확인

```bash
git lfs status
git lfs ls-files
```

현재는 커밋된 파일이 `.gitignore` 등 소수라서, Content/Plugins 등을 처음 추가할 때부터 위 확장자들은 자동으로 LFS로 올라갑니다.
