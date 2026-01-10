cmake_minimum_required(VERSION 4.1)
project(Game_Of_Life)

set(CMAKE_CXX_STANDARD 23)
find_package(raylib CONFIG REQUIRED)
add_executable(Game_Of_Life
        main.cpp
        helpers.cpp
)
target_link_libraries(Game_Of_Life PRIVATE raylib)
