include(FetchContent)

FetchContent_Declare(
    Boost
    GIT_REPOSITORY "https://github.com/boostorg/boost.git"
    GIT_TAG boost-1.74.0
)

FetchContent_MakeAvailable(Boost)
