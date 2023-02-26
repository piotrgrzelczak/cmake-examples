cmake_minimum_required(VERSION 3.16)
project(ProjectName)

add_subdirectory(googletest)

add_executable(a.out main.cpp)

target_link_libraries(a.out
  PRIVATE
    gmock
    gtest
)
