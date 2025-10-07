add_executable(smart_home
    src/main.cpp
)

target_link_libraries(smart_home PRIVATE core)

# Optional: enable warnings
target_compile_options(core PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)
