cmake_minimum_required(VERSION 3.16)

project (VanJamSPE)

set(CMAKE_CXX_STANDARD 20)

link_directories(build)
include_directories(src)

add_library(VanJamSPE STATIC src/Operator.cpp src/Engine.cpp)

add_executable(simple_test apps/simple_test.cpp)
target_link_libraries(simple_test VanJamSPE)

