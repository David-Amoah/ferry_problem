cmake_minimum_required(VERSION 3.27)
project(ferry_problem C)

set(CMAKE_C_STANDARD 99)

add_executable(ferry_problem main.c
        Queue.h
        Queue.c)
