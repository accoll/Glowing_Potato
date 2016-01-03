cmake_minimum_required(VERSION 2.8.11)

project(tutorial)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

file(GLOB SOURCE src/*.cpp src/*.hpp)

set(CMAKE_CXX_FLAGS "-std=c++14")
add_definitions(${CMAKE_CXX_FLAGS})

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})