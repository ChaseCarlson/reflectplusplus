﻿# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("reflectplusplus")

# Include sub-projects.
add_subdirectory ("src/reflectplusplus")
add_subdirectory ("src/demo")
