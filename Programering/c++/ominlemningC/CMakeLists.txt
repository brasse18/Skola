cmake_minimum_required(VERSION 3.6)
project(InlemningC)

set(EXECUTABLE_NAME "InlemningC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic")
set(SOURCE_FILES main.cpp Competitor.cpp Competitor.h)
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})