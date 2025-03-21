#include "libcpp/include/hello_time.hpp"
#include <gtest/gtest.h>

namespace mytemplate {
namespace libcpp {
namespace test {

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
  // Just a call
  print_localtime();
}

}  // namespace test
}  // namespace libcpp
}  // namespace mytemplate
