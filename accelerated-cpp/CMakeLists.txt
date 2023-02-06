cmake_minimum_required(VERSION 3.24)
project(accelerated_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        accelerated_cpp
        main.cpp
        chp4/Student_info.cpp
        chp4/grade.cpp
        chp4/grade.h
        chp4/median.cpp
        chp4/4-1.cpp
)
