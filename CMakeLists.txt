cmake_minimum_required(VERSION 3.20)
project(relearningC)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(section1)

add_executable(relearningC
        section1/example-files/hello-world/main.c
        README.md)
