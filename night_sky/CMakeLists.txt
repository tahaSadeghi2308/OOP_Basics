cmake_minimum_required(VERSION 3.15)
project(night_sky)

find_package(raylib 3.0 REQUIRED)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} main.cpp sky.cpp star.cpp)

target_link_libraries(${PROJECT_NAME} raylib)