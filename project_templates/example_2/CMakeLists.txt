cmake_minimum_required(VERSION 3.18.4)

project(ProjectName)

# add comment about boost
find_package(Boost 1.74.0 REQUIRED COMPONENTS filesystem regex)
find_package(Python3 REQUIRED COMPONENTS Interpreter)


option(BUILD_TESTING "" OFF)
# option(MY_OPT "" OFF)
include(CTest)
message(STATUS "Using BUILD_TESTING set to \"${BUILD_TESTING}\"")

if(BUILD_TESTING)
    include(FetchContent/googletest.cmake)
endif()

add_subdirectory(Sources)

# add_executable(my_app)
# target_link_libraries(my_app
#     PRIVATE
#         Main
#         ModuleX
# )
