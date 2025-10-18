# libjdk · java.desktop (C++)

libjdk is a collection of JDK components implemented in C++. This repository corresponds to the `java.desktop` module (version 17.35). It covers AWT/Swing, Image I/O, printing, and other desktop capabilities. The current implementation focuses primarily on Windows.

## Highlights
- AWT/Swing components and related subsystems (`java.awt.*`, `javax.swing.*`, `sun.awt.*`, `sun.swing.*`, etc.)
- Image processing and codecs (`javax.imageio.*` with BMP/JPEG/TIFF plugins)
- Printing services (`javax.print.*`)
- Sound/media related bridges (`javax.sound.*`)

Note: The source layout follows the JDK package structure, while the implementation is in C++ and built via CMake into static/shared libraries.

## Repository layout
```
├─ CMakeLists.txt           # Top-level build script, project and common options
├─ LICENSE                  # Project license
├─ legal/                   # Notices of third-party dependencies
├─ main/
│  ├─ CMakeLists.txt        # Core build logic for java.desktop
│  └─ windows/
│     ├─ classes/           # Windows-specific "classes" (organized by package)
│     └─ native/            # Windows-specific native implementations (AWT/2D/font, etc.)
└─ test/
   ├─ CMakeLists.txt        # Test executable and test registrations
   └─ windows/              # Windows test cases
```

## Prerequisites
- CMake ≥ 3.12
- C++17 compiler
  - Windows: MSVC (Visual Studio 2019/2022)
  - Linux/macOS: GCC or Clang (Windows is the primary target; other platforms are limited)
- JCPP repository dependencies (to link other modules, all at version 17.35)
  - Runtime deps: `java.base`, `java.xml`, `java.datatransfer`, `java.prefs`
  - Extra for tests: `jdk.httpserver`, `java.logging`, etc.
- Environment variables (to locate deps and install path)
  - `JCPP_REPOSITORY_ROOT`: preferred; falls back to `{JCPP_HOME}/repository` if unset
  - `JCPP_HOME`: used to derive default repository root

## Build
It’s recommended to build out-of-source.

Windows (x64, Release, shared lib and tests enabled):
```bash
cmake -S . -B build ^
  -G "Visual Studio 17 2022" -A x64 ^
  -DBUILD_SHARED_LIB=ON -DBUILD_TEST=ON ^
  -DJCPP_REPOSITORY_ROOT="C:/path/to/jcpp/repository"

cmake --build build --config Release --parallel
```

Linux/macOS (Windows is the primary implementation; turn off tests if needed):
```bash
cmake -S . -B build \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_SHARED_LIB=ON \
  -DBUILD_TEST=OFF

cmake --build build -j
```

Artifacts (examples):
- Shared library: `java.desktop` (Windows: `java.desktop.dll`, Linux: `libjava.desktop.so`)
- Static library: when `BUILD_STATIC_LIB` is enabled
- Test executable: `java.desktop-test`

## Run tests
A large number of AWT/Swing tests are registered on Windows:
```bash
# On Windows
ctest --test-dir build --output-on-failure -C Release
```

You can also run the produced `java.desktop-test` executable directly from the build directory.

## Install and package
Without writing into JCPP repository layout (default):
```bash
cmake --install build --config Release --prefix dist
# dist/include, dist/lib, dist/bin
```

Install into JCPP repository (enable INSTALL_TO_REPO):
```bash
cmake -S . -B build -DINSTALL_TO_REPO=ON
cmake --build build --config Release
cmake --install build --config Release
# Will install under:
#   {JCPP_REPOSITORY_ROOT}/java.desktop/17.35/
```

Package with CPack:
```bash
# ZIP on Windows, TGZ on Linux/macOS
cpack -C Release -B build
```

## Key CMake options
- `BUILD_SHARED_LIB`: build shared library (default ON)
- `BUILD_STATIC_LIB`: build static library (enabled when `BUILD_SHARED_LIB` is OFF)
- `BUILD_TEST`: build tests (default ON; consider OFF on non-Windows platforms)
- `INSTALL_TO_REPO`: install into JCPP repository layout (default OFF)
- `ENABLE_NC`: enable null-check related compiler definitions (default OFF)

## Troubleshooting
1. Missing dependency libraries (link errors)
   - Ensure `JCPP_REPOSITORY_ROOT` (or `JCPP_HOME`) is set and required modules (e.g., `java.base:17.35`) exist in the repository layout.
2. No tests/targets on non-Windows platforms
   - The current implementation focuses on Windows; other platforms are incomplete. You can disable `BUILD_TEST` to validate the base build.
3. Very slow builds or very large objects
   - The project is large. Big object options are enabled for MSVC/GCC/Clang. Use parallel builds and a recent compiler.

## License and third-party components
- Project license: see `LICENSE`
- Third-party notices in `legal/` (e.g., freetype, harfbuzz, giflib, libpng, lcms)

## Contributing
Contributions are welcome. Before submitting changes please ensure:
- You can configure and build locally
- Changes pass existing tests (when applicable)
- New/changed modules include appropriate docs and tests

— Happy hacking!
