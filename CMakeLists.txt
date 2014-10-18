cmake_minimum_required(VERSION 2.8.4)
project(AudioVisualizer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp audioloader.cpp audio.cpp)
add_executable(AudioVisualizer ${SOURCE_FILES})

add_compile_options(-std=c++1y)
