cmake_minimum_required(VERSION 3.6)
project(InlemningA)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Housing.cpp Housing.h HousingRegister.cpp HousingRegister.h)
add_executable(InlemningA ${SOURCE_FILES})