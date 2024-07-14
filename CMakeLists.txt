cmake_minimum_required(VERSION 3.16)
project(Project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
   add_compile_options(/W4 /WX)
else()
   add_compile_options(-Wall -Wextra)
endif()

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

add_executable(Project program.cpp)

set(CMAKE_VERBOSE_MAKEFILE ON)
