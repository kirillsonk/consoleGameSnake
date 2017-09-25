cmake_minimum_required(VERSION 3.8)
project(Snake)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES game.cpp)
add_executable(Snake ${SOURCE_FILES})