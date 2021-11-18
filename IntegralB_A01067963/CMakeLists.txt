cmake_minimum_required(VERSION 3.20)
project(IntegralB_A01067963)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(IntegralB_A01067963
        data.txt
        Graph.h
        main.cpp)
