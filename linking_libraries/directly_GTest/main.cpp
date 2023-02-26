#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Test, ExampleTest)
{
    EXPECT_EQ(123, 123);
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
