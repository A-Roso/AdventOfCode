cmake_minimum_required(VERSION 3.27)
project(2023)

set(CMAKE_CXX_STANDARD 23)

add_executable(2023 main.cpp
        day01.cpp
        day01.h
        utils.cpp
        utils.h
        constants.cpp
        constants.h)
