cmake_minimum_required(VERSION 3.15)
project(TEST)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(test main.cc)
target_link_libraries(test pthread)
