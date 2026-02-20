cmake_minimum_required(VERSION 4.1)
project(Learning)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall -pedantic-errors")

add_executable(Learning main.cpp
        add.cpp)
