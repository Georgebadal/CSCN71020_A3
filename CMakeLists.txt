
cmake_minimum_required(VERSION 3.20)

project(CSCN71020_A3 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download Google Test
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(googletest)

# Find the C source file
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/functions.c")
    set(GAME_SOURCE functions.c)
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/functions.c")
    set(GAME_SOURCE src/functions.c)
else()
    message(FATAL_ERROR "Cannot find functions.c")
endif()

# Application code
add_library(game STATIC ${GAME_SOURCE})

target_include_directories(game PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Unit tests
enable_testing()

add_executable(unit_tests
    tests/test_functions.cpp
)

target_link_libraries(unit_tests
    PRIVATE game GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)

# Interactive Rock, Paper, Scissors game
add_executable(RPS_Game main.c)

target_link_libraries(RPS_Game PRIVATE game)
