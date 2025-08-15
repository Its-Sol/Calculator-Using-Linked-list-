cmake_minimum_required (VERSION 3.10)

project(Calculator.c)

add_executable(Calculator Main.c)

target_include_directories(Calculator PRIVATE Headers)
