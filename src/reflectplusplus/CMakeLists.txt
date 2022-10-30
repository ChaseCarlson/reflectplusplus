# CMakeList.txt : CMake project for reflectplusplus, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(reflectplusplus)

set(rpp_include "property.h" "registration.h" "type.h" "detail/string_util.h")
set(rpp_src "detail/string_util.cpp" "type.cpp")

# Add source to this project's executable.
add_library (reflectplusplus OBJECT ${rpp_src} ${rpp_include})

# TODO: Add tests and install targets if needed.
