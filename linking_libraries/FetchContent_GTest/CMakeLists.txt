cmake_minimum_required(VERSION 3.16)
project(ProjectName)

include(FetchContent/googletest.cmake)

add_executable(a.out main.cpp)

target_link_libraries(a.out
  PRIVATE
    gmock
    gtest
)
