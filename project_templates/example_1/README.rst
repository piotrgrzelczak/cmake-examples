Exemplary build instructions:

.. code-block:: bash

   $ mkdir build
   $ cd build
   $ cmake ..
   $ make
   $ ./app
   $ ./tests

Directory structure
::

    example-1
    ├── Application
    │   └── Sources
    │       └── Application
    │           └── DummyClass.cpp
    │           └── DummyClass.hpp
    ├── FetchContent
    │   └── googletest.cmake
    ├── Tests
    │   └── main.cpp
    │   └── UTDummyClass.cpp
    ├── CMakeLists.txt
    ├── main.cpp
    └── README.rst
