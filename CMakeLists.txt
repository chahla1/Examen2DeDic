cmake_minimum_required(VERSION 3.26)
project(Examen2EnC CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(Examen2EnC main.c main.cpp)


set_source_files_properties(main.c PROPERTIES LANGUAGE C)
set_source_files_properties(main.cpp PROPERTIES LANGUAGE CXX)

