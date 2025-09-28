cmake_minimum_required(VERSION 3.0)
project(test_window)

set(CMAKE_CXX_STANDARD 20)

# Enable warnings as errors
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_executable(test_window main.cpp resources.cpp test_window.cpp draw_window.cpp fps.cpp resources.h)

# Tell CMake where raylib is
target_include_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_SOURCE_DIR}/../../raylib_linux/include
        )

target_link_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_SOURCE_DIR}/../../raylib_linux/lib
        )


# Link against raylib + required system libs (Linux)
target_link_libraries(${PROJECT_NAME}
        raylib
        m
        pthread
        dl
        rt
        )