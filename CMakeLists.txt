cmake_minimum_required(VERSION 3.20)
project(Integral_A01067963)

set(CMAKE_CXX_STANDARD 14)

include_directories(IntegralA_Algoritmos-de-Ordenamiento)

add_executable(Integral_A01067963
        IntegralA_Algoritmos-de-Ordenamiento/main.cpp
        IntegralA_Algoritmos-de-Ordenamiento/search.h
        IntegralA_Algoritmos-de-Ordenamiento/sort.h
        IntegralA_Estructura-Lineal/main.cpp)
