#include "FunctionRegistration.h"

std::vector<std::function<void()>> regFuncs;

int regis(const std::function<void()>& f) {
  regFuncs.push_back(f);
  return regFuncs.size();
}
