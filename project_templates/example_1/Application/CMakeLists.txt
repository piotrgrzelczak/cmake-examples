add_library(Application)

target_include_directories(Application
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Sources
)

include(sources.cmake)
