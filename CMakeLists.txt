cmake_minimum_required(VERSION 3.0)

SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
SET(CMAKE_C_COMPILER "/usr/bin/gcc")

project(CMAKETEST)

SET(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/output")
SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/output")

add_library(hello SHARED "./src/hello.c")

target_include_directories(hello 
    PRIVATE "./include"
    PRIVATE "./src"       
)

# add_subdirectory("./utils")