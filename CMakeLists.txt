cmake_minimum_required(VERSION 3.22)

project(algo-solutions)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O3 -g -march=native -Wall -Wpedantic -Wextra -Werror  -Wcast-align -Wunused -Wshadow -Wold-style-cast -Wpointer-arith -Wcast-qual -Wno-missing-braces")

find_package (Threads REQUIRED)
set(THREADS_PREFER_PTHREAD_FLAG ON)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
include_directories(codewars)
include_directories(leetcode)
include_directories(dynamic_programming)

add_subdirectory(codewars)
add_subdirectory(leetcode)
add_subdirectory(dynamic_programming)
