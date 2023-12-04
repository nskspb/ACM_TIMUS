cmake_minimum_required(VERSION 3.5)

project(Chocolate)

add_executable(Chocolate
main.cpp)
set_target_properties(Chocolate PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)