cmake_minimum_required(VERSION 3.20.0)
project(Race)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

include_directories(Racing_headers)
include_directories(User_interconnection_headers)


add_library(Racing SHARED veachle.cpp air_veachle.cpp land_veachle.cpp all_road_shoes.cpp broom.cpp camel.cpp carpet_aircraft.cpp centaur.cpp eagle.cpp fast_camel.cpp racing_proccess.cpp)
add_executable(RacingUse RacingUse.cpp user_interconnection.cpp)
target_link_libraries(RacingUse Racing)
