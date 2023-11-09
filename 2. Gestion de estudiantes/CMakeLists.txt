cmake_minimum_required(VERSION 3.26)
project(2__Gestion_de_estudiantes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(estudiantes estudiantes.cpp estudiantes.h)
