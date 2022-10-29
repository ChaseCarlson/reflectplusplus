# CMakeList.txt : CMake project for reflectplusplus, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(demo)

# Add source to this project's executable.
add_executable (demo "demo.cpp" "A.h" "B.h")

target_link_libraries(demo PRIVATE reflectplusplus)
target_include_directories(demo PUBLIC
	"${PROJECT_BINARY_DIR}"
	"../"
)

# TODO: Add tests and install targets if needed.
