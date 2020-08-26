cmake_minimum_required(VERSION 3.13)
project(Archiver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Archiver main.cpp Directory.cpp Directory.h File.cpp File.h)
