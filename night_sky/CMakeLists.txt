cmake_minimum_required(VERSION 3.10)
project(night_sky)

# Find Raylib
find_package(raylib REQUIRED)

# Create executable
add_executable(night_sky main.cpp sky.cpp star.cpp)

# Link Raylib
target_link_libraries(night_sky raylib)