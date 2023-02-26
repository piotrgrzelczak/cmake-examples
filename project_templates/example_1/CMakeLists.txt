cmake_minimum_required(VERSION 3.16)
project(ProjectName)

include(FetchContent/googletest.cmake)

add_executable(app main.cpp)

target_link_libraries(app
    PRIVATE
        Application
)

add_executable(tests)

target_sources(tests
    PRIVATE
        Tests/main.cpp
        Tests/Tests.cpp
)

target_link_libraries(tests
    PRIVATE
        Application
        gmock
        gtest
)

add_subdirectory(Application)
