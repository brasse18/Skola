cmake_minimum_required(VERSION 3.6)
project(DV1537_Restinlemningsuppgift_B)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp InstrumentHandler.cpp InstrumentHandler.h Instrument.cpp Instrument.h WindInstrument.cpp WindInstrument.h StringedInstruments.cpp StringedInstruments.h Menu.cpp TestHandler.cpp)
add_executable(DV1537_Restinlemningsuppgift_B ${SOURCE_FILES})