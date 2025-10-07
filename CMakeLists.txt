# =========================================================
# Top-level CMake configuration for Smart Home Project
# Author: Murat
# Date: 2025-10-07
# Description:
#   This file defines the main project structure and adds
#   all submodules (core, engine, factory, ui).
# =========================================================

# Minimum required version of CMake
cmake_minimum_required(VERSION 3.16)

# Project metadata
project(SmartHome VERSION 1.0 LANGUAGES CXX)

# Global compiler settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#ensure that the bin and lib directories exist
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
# =========================================================
# Set output directories for binaries and libraries
# =========================================================
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

# Optional: Global warning flags
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# =========================================================
# Add Subdirectories
# =========================================================
# Each subdirectory has its own CMakeLists.txt
add_subdirectory(core)
add_subdirectory(engine)
add_subdirectory(factory)
add_subdirectory(ui)


# =========================================================
# (Optional) Enable Tests if you have a 'tests' folder
# =========================================================
# enable_testing()
# add_subdirectory(tests)

# =========================================================
# Print project summary
# =========================================================
message(STATUS "SmartHome Project configured successfully!")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
