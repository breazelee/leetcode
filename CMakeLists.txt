cmake_minimum_required(VERSION 3.5)

project(leetcode)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModules" ${CMAKE_MODULE_PATH})

# set C++ 11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include(${PROJECT_SOURCE_DIR}/CMakeModules/common.cmake)

add_subdirectory(problems)