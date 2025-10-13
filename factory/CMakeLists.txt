# Create a library named 'factory'
file(GLOB FACTORY_SRC "src/*.cpp")
add_library(factory STATIC ${FACTORY_SRC})
set_target_properties(factory PROPERTIES OUTPUT_NAME "factory")

# factory depends on core (device types are defined there)
target_link_libraries(factory PUBLIC core)

# Include directories for the factory library
target_include_directories(factory PUBLIC 

    ${CMAKE_CURRENT_SOURCE_DIR}/include  # factory headers
    ${CMAKE_SOURCE_DIR}/core/include      # core headers
    
)


# Optional: enable warnings
target_compile_options(factory PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)
