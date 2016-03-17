cmake_minimum_required(VERSION 2.8.7)
project(function-registration)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

add_executable(Example
  src/FunctionRegistration.cpp
  src/Example.cpp
)
