# libjdk · java.desktop (C++)

libjdk 是一个用 C++ 实现的 JDK 组件集合，本仓库对应 JDK 的 `java.desktop` 模块（版本 17.35）。该模块涵盖 AWT/Swing、Image I/O、打印等桌面相关能力，目前主要实现集中在 Windows 平台。

## 功能概览
- AWT/Swing 组件与相关子系统（`java.awt.*`, `javax.swing.*`, `sun.awt.*`, `sun.swing.*` 等）
- 图像处理与编解码（`javax.imageio.*`，含 BMP/JPEG/TIFF 等插件）
- 打印服务（`javax.print.*`）
- 声音/媒体相关桥接（`javax.sound.*`）

提示：源码组织与模块名沿用 JDK 包结构，但实现语言为 C++，通过 CMake 构建为可复用的静态/动态库。

## 目录结构
```
├─ CMakeLists.txt           # 顶层构建脚本，定义项目与通用选项
├─ LICENSE                  # 项目许可证
├─ legal/                   # 第三方依赖的授权与声明
├─ main/
│  ├─ CMakeLists.txt        # java.desktop 主库构建逻辑
│  └─ windows/
│     ├─ classes/           # Windows 平台的“类”实现（按照包结构组织）
│     └─ native/            # Windows 平台的原生实现（如 AWT/2D/字体 等）
└─ test/
   ├─ CMakeLists.txt        # 测试可执行程序与用例注册
   └─ windows/              # Windows 平台测试用例
```

## 先决条件
- CMake ≥ 3.12
- C++17 编译器
  - Windows: MSVC (Visual Studio 2019/2022)
  - Linux/macOS: GCC 或 Clang（当前实现以 Windows 为主，其他平台构建目标有限）
- JCPP 仓库依赖（用于链接其它模块，版本均为 17.35）
  - 运行库依赖：`java.base`, `java.xml`, `java.datatransfer`, `java.prefs`
  - 测试额外依赖：`jdk.httpserver`, `java.logging` 等
- 环境变量（用于定位依赖与安装路径）
  - `JCPP_REPOSITORY_ROOT`：优先使用；若未设置则回退到 `JCPP_HOME/repository`
  - `JCPP_HOME`：未显式设置仓库根时用于推导

## 构建
建议在独立的构建目录中进行：

Windows（x64，Release，构建共享库并启用测试）：
```bash
cmake -S . -B build ^
  -G "Visual Studio 17 2022" -A x64 ^
  -DBUILD_SHARED_LIB=ON -DBUILD_TEST=ON ^
  -DJCPP_REPOSITORY_ROOT="C:/path/to/jcpp/repository"

cmake --build build --config Release --parallel
```

Linux/macOS（当前实现以 Windows 为主，如需验证可关闭测试）：
```bash
cmake -S . -B build \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_SHARED_LIB=ON \
  -DBUILD_TEST=OFF

cmake --build build -j
```

构建产物（示例）：
- 动态库：`java.desktop`（Windows: `java.desktop.dll`，Linux: `libjava.desktop.so`）
- 静态库：启用 `BUILD_STATIC_LIB` 时生成 `java.desktop` 静态库
- 测试可执行文件：`java.desktop-test`

## 运行测试
仅在 Windows 环境会注册大量 AWT/Swing 相关用例：
```bash
# 在 Windows 上
ctest --test-dir build --output-on-failure -C Release
```

也可以直接运行生成的 `java.desktop-test` 可执行文件（位于构建目录）。

## 安装与打包
不写入 JCPP 仓库（默认）：
```bash
cmake --install build --config Release --prefix dist
# dist/include, dist/lib, dist/bin
```

写入 JCPP 仓库（开启 INSTALL_TO_REPO）：
```bash
cmake -S . -B build -DINSTALL_TO_REPO=ON
cmake --build build --config Release
cmake --install build --config Release
# 将安装至：
#   {JCPP_REPOSITORY_ROOT}/java.desktop/17.35/
```

打包（CPack）：
```bash
# Windows 生成 ZIP，Linux/macOS 生成 TGZ
cpack -C Release -B build
```

## 关键 CMake 选项
- `BUILD_SHARED_LIB`：构建共享库（默认 ON）
- `BUILD_STATIC_LIB`：构建静态库（当 `BUILD_SHARED_LIB` 为 OFF 时启用）
- `BUILD_TEST`：构建测试（默认 ON；非 Windows 平台建议 OFF）
- `INSTALL_TO_REPO`：安装至 JCPP 仓库布局（默认 OFF）
- `ENABLE_NC`：启用空指针检查相关编译开关（默认 OFF）

## 常见问题
1. 找不到依赖库（链接失败）
   - 请确认已设置 `JCPP_REPOSITORY_ROOT`（或 `JCPP_HOME`），且依赖模块（如 `java.base:17.35` 等）已按照仓库布局就绪。
2. 非 Windows 平台没有测试用例/目标为空
   - 目前实现以 Windows 为主，其他平台的源码与测试尚不完整；可关闭 `BUILD_TEST` 验证基础构建流程。
3. 链接或编译非常慢/对象过大
   - 工程体量较大，CMake 已针对 MSVC/GCC/Clang 启用大对象编译选项；建议使用多核并行与较新的编译器。

## 许可证与第三方组件
- 本项目许可证见根目录 `LICENSE`
- 第三方依赖的授权信息位于 `legal/` 目录（如 freetype、harfbuzz、giflib、libpng、lcms 等）

## 贡献
欢迎提交 Issue 与 PR。请在变更前确保：
- 能在本地完成配置/构建
- 变更通过现有测试（如适用）
- 对新增/变更的模块补充必要的说明与用例

—— Happy hacking!
