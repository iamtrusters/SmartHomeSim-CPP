# Create a library named 'core'
file(GLOB CORE_SRC "src/*.cpp")
add_library(core STATIC ${CORE_SRC})
set_target_properties(core PROPERTIES OUTPUT_NAME "core")

# Include directories for the core library
target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


# Optional: enable warnings
target_compile_options(core PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)
