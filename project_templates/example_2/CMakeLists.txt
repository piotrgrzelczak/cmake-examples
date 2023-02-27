cmake_minimum_required(VERSION 3.18.4)

project(my_app)

# add comment about boost
find_package(Boost 1.74.0 REQUIRED COMPONENTS filesystem regex)
find_package(Python3 REQUIRED COMPONENTS Interpreter)


# option(BUILD_TESTING "" OFF)
# message(STATUS "Using BUILD_TESTING set to \"${BUILD_TESTING}\"")

# Add BUILD_TESTING flag
include(FetchContent/googletest.cmake)

add_subdirectory(Sources)
