cmake_minimum_required(VERSION 3.15)
project(ccc)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ccc
    large_int.h
    larger_int.cpp
    linked_list.cpp
    linked_list.h
    main.cpp
    node.h
    test.txt)
