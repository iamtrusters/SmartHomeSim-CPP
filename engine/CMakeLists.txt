# Create a library named 'engine'
file(GLOB ENGINE_SRC "src/*.cpp")
add_library(engine STATIC ${ENGINE_SRC})
set_target_properties(engine PROPERTIES OUTPUT_NAME "engine")

# Include directories for the engine library
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


# Optional: enable warnings
target_compile_options(engine PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)
