#include "FunctionRegistration.h"

#include <iostream>

REGISTER_FUNCTION(hello) {
  std::cout << "Hello ";
}

REGISTER_FUNCTION(world) {
  std::cout << "World!";
}

REGISTER_FUNCTION(newline) {
  std::cout << "\n";
}

int main(int argc, char* argv[]) {
  for (auto itr = regFuncs.begin(); itr != regFuncs.end(); ++itr)
    (*itr)();
  return 0;
}
