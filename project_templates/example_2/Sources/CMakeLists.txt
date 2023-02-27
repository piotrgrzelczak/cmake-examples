add_subdirectory(Main)
add_subdirectory(Module1)

add_executable(my_app)
target_link_libraries(my_app
    PRIVATE
        Main
)

# add_executable(my_app main.cpp)

# target_sources(my_app
#     PRIVATE
#         main.cpp
# )

# target_link_libraries(my_app
#     PRIVATE
#         Module1
# )

# message(STATUS "Using CMAKE_INSTALL_FULL_BINDIR set to \"${CMAKE_INSTALL_FULL_BINDIR}\"")

# install(
#     TARGETS
#         my_app
#     RUNTIME
#         DESTINATION .
#     COMPONENT
#         my_app
# )

# add_custom_target(install-my_app)
