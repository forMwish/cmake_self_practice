cmake_minimum_required(VERSION 3.0)

SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
SET(CMAKE_C_COMPILER "/usr/bin/gcc")

SET(CMAKE_BUILD_TYPE "DEBUG")

project(CMAKETEST)

# SET(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/output")
# SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/output")

add_library(hello SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/hello.c)

target_include_directories(hello 
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src       
)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/utils)