cmake_minimum_required(VERSION 3.16)

project (VanJamSPE)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_TYPE Debug)

link_directories(build)
include_directories(src)


set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
#target_link_libraries(my_app PRIVATE Threads::Threads)

add_library(VanJamSPE STATIC src/Operator.cpp src/InputOperator.cpp src/GenericOperator.cpp src/Engine.cpp)

add_executable(output_test apps/output_test.cpp)
target_link_libraries(output_test VanJamSPE Threads::Threads)
