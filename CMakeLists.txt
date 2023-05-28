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

set(EXECUTABLE_NAME digital_signal_generator)
set(HAL_LIBRARY_NAME hal_libraries)
set(FUNCTIONS_LIBRARY_NAME functions_libraries)

include(FetchContent)

FetchContent_Declare(
        termiWin
        GIT_REPOSITORY https://github.com/veeso/termiWin
        GIT_TAG v1.2.1
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(termiWin)

add_subdirectory(hal)
add_subdirectory(app)
add_subdirectory(functions)