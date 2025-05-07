#include "libcpp/include/hello_time.hpp"
#include <ctime>
#include <iostream>

namespace mytemplate {
namespace libcpp {

void print_localtime() {
  std::time_t result = std::time(nullptr);
  char buf[256];                                                                      // NOLINT
  std::cout << std::strftime(buf, sizeof(buf), "%x %X %z", std::localtime(&result));  // NOLINT
}

}  // namespace libcpp
}  // namespace mytemplate
