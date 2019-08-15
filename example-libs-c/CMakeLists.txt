cmake_minimum_required(VERSION 3.13)
project(example_libs_strings C)

set(CMAKE_C_STANDARD 99)

add_executable(example_libs_strings example-string-lib.c)
add_executable(example_libs_math example-math-lib.c)
target_link_libraries(example_libs_math m)