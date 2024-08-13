# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(cli-utils VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(cli-utils 
    src/main.cpp
    src/clear.cpp
    src/print_help.cpp
    src/grep.cpp 
    src/cat.cpp
)

# Include directories
target_include_directories(cli-utils PUBLIC "${PROJECT_SOURCE_DIR}/include")