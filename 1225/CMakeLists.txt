cmake_minimum_required(VERSION 3.5)

project(flags)

add_executable(flags
main.cpp)
set_target_properties(flags PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)