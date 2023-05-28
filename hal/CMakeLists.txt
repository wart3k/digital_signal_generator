set(HAL_LIBRARY_SOURCES
        "uart.cc")

set(HAL_LIBRARY_INCLUDES
        "./")

add_library(${HAL_LIBRARY_NAME}
        ${HAL_LIBRARY_SOURCES})

target_include_directories(${HAL_LIBRARY_NAME} PUBLIC
        ${HAL_LIBRARY_INCLUDES})