cmake_minimum_required(VERSION 3.20)
project(Chapter_1 LANGUAGES CXX)
set(CMAKE_VERBOSE_MAKEFILE ON)


# Use C++23 standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Strict warning and error flags
add_compile_options(
        -Wall
        -Werror
        -pedantic-errors
        -Weffc++
        -Wconversion
        -Wsign-conversion
)

# Add your executable (list all .cpp files here)
add_executable(Chapter_1
        main.cpp
)

# Static linking for standalone executables
if(MINGW OR WIN32)
    target_link_options(Chapter_1 PRIVATE
            -static
            -static-libgcc
            -static-libstdc++
    )
endif()
