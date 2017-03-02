cmake_minimum_required(VERSION 3.6)
project(Inlamningsuppgift_A)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CarRegister.cpp CarRegister.h Car.cpp Car.h)
add_executable(Inlamningsuppgift_A ${SOURCE_FILES})