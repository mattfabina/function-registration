#ifndef FUNCTION_REGISTRATION_H
#define FUNCTION_REGISTRATION_H

#include <vector>
#include <functional>

extern std::vector<std::function<void()>> regFuncs;

int regis(const std::function<void()>& f);

#define FUNCTION_NAME(name) name##_rf
#define TOKEN_NAME(name) name##_token

#define REGISTER_FUNCTION(name)\
  void FUNCTION_NAME(name)();\
  namespace { int TOKEN_NAME(name) = regis(FUNCTION_NAME(name)); }\
  void FUNCTION_NAME(name)()

#endif // FUNCTION_REGISTRATION_H
