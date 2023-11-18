cmake_minimum_required(VERSION 3.5)

project(simple)

add_executable(simple
main.cpp)
set_target_properties(simple PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)