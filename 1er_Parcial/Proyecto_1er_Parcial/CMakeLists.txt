cmake_minimum_required(VERSION 3.27)
project(Proyecto_1er_Parcial)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto_1er_Parcial main.cpp
        Entero.h
        Entero.cpp
        BooleanoCell.h
        BooleanoCell.cpp
        DoubleCell.h
        DoubleCell.cpp
        CharCell.h
        CharCell.cpp)
