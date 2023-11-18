cmake_minimum_required(VERSION 3.5)

project(svadebny_obed)

add_executable(svadebny_obed
main.cpp)
set_target_properties(svadebny_obed PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)