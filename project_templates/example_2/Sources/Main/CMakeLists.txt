add_library(Main STATIC)

include(sources.cmake)

target_link_libraries(Main
    PRIVATE
        Module1
)
