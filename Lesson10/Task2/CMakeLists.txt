cmake_minimum_required(VERSION 3.20.0)
project(Figures)

include_directories(inc)

add_executable(figures Task2.cpp figure.cpp triangle.cpp recttriangle.cpp equaltriangle.cpp equalsidetriangle.cpp parallelogram.cpp quadrilateral.cpp quadro.cpp rectang.cpp rhomb.cpp)