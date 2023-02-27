#include <Module1/DummyClass.hpp>

#include <iostream>

int main()
{
    DummyClass dummyClass;
    const auto dummyValue = dummyClass.foo();
    std::cout << "main " << dummyValue << std::endl;
}
