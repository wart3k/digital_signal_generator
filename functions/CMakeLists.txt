set(FUNCTIONS_LIBRARY_SOURCES
        "triangle.cc"
        "sinus.cc"
        "rectangle.cc")

set(FUNCTIONS_LIBRARY_INCLUDES
        "./")

add_library(${FUNCTIONS_LIBRARY_NAME}
        ${FUNCTIONS_LIBRARY_SOURCES})

target_include_directories(${FUNCTIONS_LIBRARY_NAME} PUBLIC
        ${FUNCTIONS_LIBRARY_INCLUDES})