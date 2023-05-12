cmake_minimum_required(VERSION 3.25)

project(
        digital_signal_generator
        VERSION 0.0.1
        LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD              23)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            OFF)

set(CMAKE_C_STANDARD                11)
set(CMAKE_C_STANDARD_REQUIRED       ON)
set(CMAKE_C_EXTENSIONS              OFF)

set(HAL_LIBRARY_NAME hal_libraries)

include(FetchContent)

FetchContent_Declare(
        termiWin
        GIT_REPOSITORY https://github.com/veeso/termiWin
        GIT_TAG v1.2.1
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(termiWin)

add_executable(digital_signal_generator main.cpp)

add_subdirectory(hal)
