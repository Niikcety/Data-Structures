cmake_minimum_required(VERSION 3.15)
project(DirectoryArchiver)

set(CMAKE_CXX_STANDARD 14)

add_executable(DirectoryArchiver main.cpp Directory.cpp Directory.h)