add_subdirectory(Main)
add_subdirectory(ModuleX)

add_executable(my_app)

target_link_libraries(my_app
    PRIVATE
        Main
        ModuleX
)
