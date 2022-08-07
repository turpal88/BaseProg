cmake_minimum_required(VERSION 3.22.0)
project(GoodbyeMan)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOL ON)
add_library(Leaver SHARED leaver.h leaver.cpp)
add_executable(GoodbyeMan GoodbyeMan.cpp)
target_link_libraries(GoodbyeMan Leaver)