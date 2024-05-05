cmake_minimum_required(VERSION 3.5)

project(summa)

add_executable(summa
main.cpp)
set_target_properties(summa PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)