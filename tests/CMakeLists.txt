cmake_minimum_required(VERSION 3.25)
project(graphQLOL)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the 'include' directory for header files
include_directories(include)

# Add your main.cpp as an executable
add_executable(test test_main.cpp test_error_handler.cpp)

# Link your library and other dependencies to the executable
target_link_libraries(test include/graphQLOL)
