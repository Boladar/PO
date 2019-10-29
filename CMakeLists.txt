cmake_minimum_required(VERSION 3.15)
project(PO)

set(CMAKE_CXX_STANDARD 17)

add_executable(PO main.cpp DatabaseElement.cpp DatabaseElement.h Person.cpp Person.h VIP.cpp VIP.h Worker.cpp Worker.h)