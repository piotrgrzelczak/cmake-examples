add_library(Module1 STATIC)

target_include_directories(Module1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Sources
)

include(sources.cmake)
