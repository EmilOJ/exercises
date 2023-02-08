cmake_minimum_required(VERSION 3.24)
project(accelerated_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        accelerated_cpp
        main.cpp
        chp5/Student_info.cpp
        chp5/grade.cpp
        chp5/grade.h
        chp5/median.cpp
        chp5/5-2.cpp)
