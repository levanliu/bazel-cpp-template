#include <iostream>
#include <string>
#include "libcpp/include/hello_time.hpp"
#include "maincpp/include/foo.hpp"
#include "maincpp/include/hello_greet.hpp"
int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];  // NOLINT
  }
  std::cout << mytemplate::maincpp::get_greet(who) << '\n';
  const int a = 5;
  const int b = 6;
  int c = foo(a, b);
  std::cout << c << '\n';
  mytemplate::libcpp::print_localtime();
  return 0;
}
