cmake_minimum_required(VERSION 3.10)
project(code_sample)
add_executable(test_min src/test_min.c)
target_include_directories(test_min PUBLIC
            "./inc")