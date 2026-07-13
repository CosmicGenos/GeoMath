cmake_minimum_required(VERSION 4.2)
project(GeoMath)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(headers)
include_directories(src)

add_executable(GeoMath
        src/main.cpp
        src/Point.cpp
        headers/Point.h
)
