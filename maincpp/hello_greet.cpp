#include "maincpp/include/hello_greet.hpp"
#include <string>

namespace mytemplate {
namespace maincpp {

std::string get_greet(const std::string& who) {
  return "Hello " + who;
}

}  // namespace maincpp
}  // namespace mytemplate
