cmake_minimum_required(VERSION 4.0)
project(Project_2)
set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 23)

# Strict warning and error flags
add_compile_options(
        -Wall
        -Werror
        -pedantic-errors
        -Weffc++
        -Wconversion
        -Wsign-conversion
)

add_executable(Project_2 main.cpp)