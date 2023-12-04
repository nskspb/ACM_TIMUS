cmake_minimum_required(VERSION 3.5)

project(beefsteak)

add_executable(beefsteak
main.cpp)
set_target_properties(beefsteak PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)