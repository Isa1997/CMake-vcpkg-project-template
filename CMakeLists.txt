# Set CMake required verison
cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

# Set vcpkg toolchain
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/vcpkg/scripts/buildsystems/vcpkg.cmake"
  CACHE STRING "Vcpkg toolchain file")

# Project info
project(Tests LANGUAGES CXX VERSION 1.0.0)

# Subdirectory projects with CMakeLists.txt file
add_subdirectory("app")
add_subdirectory ("tests")
