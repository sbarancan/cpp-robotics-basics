cmake_minimum_required(VERSION 3.16)

project(amr_core_cpp VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(amr_core
    src/pose2d.cpp
    src/angles.cpp
)

target_include_directories(amr_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_compile_options(amr_core PRIVATE -Wall -Wextra)



add_executable(01_pose2d
    examples/01_pose2d.cpp
)
add_executable(02_angles
    examples/02_angles.cpp
)

target_link_libraries(01_pose2d
    PRIVATE
        amr_core
)
target_link_libraries(02_angles
    PRIVATE
        amr_core
)

enable_testing()

find_package(GTest REQUIRED)

add_executable(test_pose2d
    tests/test_pose2d.cpp
)

target_link_libraries(test_pose2d
    PRIVATE
        amr_core
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_pose2d)