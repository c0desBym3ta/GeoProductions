cmake_minimum_required(VERSION 3.7)
project(GeoPro)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Book.cpp Book.h header.h)
add_executable(GeoPro ${SOURCE_FILES})