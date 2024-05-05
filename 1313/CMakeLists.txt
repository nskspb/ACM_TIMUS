cmake_minimum_required(VERSION 3.5)

project(Monitor)

add_executable(Monitor
main.cpp)
set_target_properties(Monitor PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)