#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>

using namespace ::testing;

class Interface
{
public:
  virtual ~Interface() {};
  virtual int getScore() = 0;
};

class InterfaceMock: public Interface
{
public:
  MOCK_METHOD(int, getScore, (), (override));
};

TEST(Test, PointerToInterface)
{
  //  StrictMock<InterfaceMock> mock{};
  //  Interface& ptr = &mock;
  // Interface* ptr{new InterfaceMock()};
  std::unique_ptr<Interface> ptr{std::make_unique<StrictMock<InterfaceMock>>()};
  EXPECT_CALL(
    *dynamic_cast<InterfaceMock*>(ptr.get()), getScore()
  );
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
