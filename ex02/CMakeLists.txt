cmake_minimum_required(VERSION 3.22)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02 main.cpp Base.cpp Base.h A.cpp A.h #[[B.cpp B.h C.cpp C.h]])
