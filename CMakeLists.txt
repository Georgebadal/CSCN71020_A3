cmake_minimum_required(VERSION 4.3)
project(CSCN71020_A3 C)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set(CMAKE_C_STANDARD 11)

file(GLOB ALL_MAINS "src/*.c")

foreach (FILE_PATH ${ALL_MAINS})
    get_filename_component(FILENAME ${FILEPATH} NAME)

    # EXCLUDE rule: Skip any file that starts with an underscore or is named "template.c"
    if (FILENAME MATCHES "^" OR FILENAME STREQUAL "template.c")
        continue() # Skip this iteration
    endif ()

    # Create the executable for valid main files
    get_filename_component(TARGET_NAME ${FILE_PATH} NAME_WE)
    add_executable(${TARGET_NAME} ${FILE_PATH})
endforeach ()