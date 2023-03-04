add_library(ModuleX STATIC)

include(sources.cmake)

target_include_directories(ModuleX
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Sources
)
