
add_executable(smart_home
    src/main.cpp
    src/CLI.cpp
)

target_link_libraries(smart_home PRIVATE core factory engine)

# make the ui include directory available to the target so #include "CLI.hpp" works
target_include_directories(smart_home PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


# Optional: enable warnings
target_compile_options(core PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)
