#include <Application/DummyClass.hpp>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace ::testing;

class DummyTestFixture: public Test
{
protected:
    DummyClass uut;
};

TEST_F(DummyTestFixture, TestName1)
{
    const auto result = uut.foo();
    EXPECT_EQ(result, 10);
}
