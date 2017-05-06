message("Starting CMakeLists.txt")

cmake_minimum_required(VERSION 3.2)

# Either of the 2 lines below will enable c++11 compilation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#add_definitions(-std=c++11)

set(PROJECT_NAME "ConceptsInCode")
project(${PROJECT_NAME})

set(CMAKE_BUILD_TYPE Debug)
set(SRC_DIR src)
set(PROJECT_BINARY_NAME "${PROJECT_NAME}_binary")

file(GLOB SRC_FILES ${SRC_DIR}/*.cpp)
include_directories(${SRC_DIR})

add_executable(${PROJECT_BINARY_NAME} main.cpp ${SRC_FILES})
