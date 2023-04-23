cmake_minimum_required(VERSION 3.24)
project(industrial_programment_practic)

set(CMAKE_CXX_STANDARD 14)

add_executable(first_practice_first_task
        2/1/main.cpp 2/1/triangle.h 2/1/triangle.cpp)

add_executable(first_practice_second_task
        2/2/circle.h 2/2/circle.cpp 2/2/main.cpp)

add_executable(first_practice_third_task
        2/3/figure.cpp 2/3/figure.h 2/3/main.cpp)

add_executable(third_practice_first_task
        3/1/eq2.cpp 3/1/eq2.h 3/1/main.cpp)

add_executable(third_practice_second_task
        3/2/rational.cpp 3/2/rational.h 3/2/main.cpp)

add_executable(third_practice_third_task
        3/3/main.cpp 3/3/rational.cpp 3/3/rational.h)

add_executable(sixth_practice_first_task
        6/1/main.cpp)

add_executable(sixth_practice_second_task
        6/2/main.cpp 6/2/cone.cpp 6/2/cone.h)

add_executable(sixth_practice_third_task
        6/3/main.cpp 6/3/bay.cpp 6/3/bay.h 6/3/ocean.cpp 6/3/ocean.h 6/3/sea.cpp 6/3/sea.h)

add_executable(seventh_practice
        7/main.cpp 7/type1.cpp 7/type1.h 7/type2.cpp 7/type2.h 7/sensor.cpp 7/sensor.h)

add_executable(eighth_practice
        8/main.cpp 8/type3.h 8/type3.cpp 8/type4.h 8/type4.cpp)