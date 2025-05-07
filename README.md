# Bazel Cpp Template

Prerequisites:
- Bazelisk
- ClangFormat
- Clang-Tidy

And this repo includes
- Bazel
- C++ with cc_library and cc_binary
- Clang-Tidy alias
- ClangFormat config file

Bazel installation
```
bazelisk
```

Build and Test
```
bazel build //...
bazel build //... --config clang-tidy
bazel test //...
```
