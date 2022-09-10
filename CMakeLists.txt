cmake_minimum_required(VERSION 3.23)
project(physprocmodelling)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(physprocmodelling
        10.09_7.cpp)

add_executable(10.09_3 10.09_7.cpp)
add_executable(10.09_8 10.09_8.cpp)
add_executable(10.09_9 10.09_9.cpp)
add_executable(segfaultGenerator segfaultGenerator.cpp)