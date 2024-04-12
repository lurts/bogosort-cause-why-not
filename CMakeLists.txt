cmake_minimum_required(VERSION 3.23)
project(bogosort)

set(CMAKE_CXX_STANDARD 14)

add_executable(bogosort main.cpp
        bogosort.cpp
        bogosort.h)
