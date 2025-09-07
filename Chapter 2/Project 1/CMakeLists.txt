cmake_minimum_required(VERSION 4.0)
project(Project1)
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

add_executable(Project1 main.cpp)

# Static linking for standalone executables
if(MINGW OR WIN32)
    target_link_options(Chapter_1 PRIVATE
            -static
            -static-libgcc
            -static-libstdc++
    )
endif()
