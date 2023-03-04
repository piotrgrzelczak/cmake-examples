Directory structure:
::

    example-1
    ├── Application
    │   └── Sources
    │       └── Application
    │           ├── DummyClass.cpp
    │           └── DummyClass.hpp
    ├── FetchContent
    │   └── googletest.cmake
    ├── Tests
    │   ├── main.cpp
    │   └── UTDummyClass.cpp
    ├── CMakeLists.txt
    ├── main.cpp
    └── README.rst

    example-2
    ├── FetchContent
    │   └── googletest.cmake
    ├── Sources
    │   ├── Main
    │   |   ├── Sources
    │   |   |   └── main.cpp
    |   |   ├── CMakeLists.txt
    |   |   └── sources.cmake
    │   ├── ModuleX
    │   |   ├── Sources
    │   |   |   └── ModuleX
    │   |   |       ├── DummyClass.cpp
    │   |   |       └── DummyClass.hpp
    |   |   ├── CMakeLists.txt
    |   |   └── sources.cmake
    |   └── CMakeLists.txt
    ├── CMakeLists.txt
    └── README.rst
