cmake_minimum_required(VERSION 3.23)
project(ProjHeron C)

set(CMAKE_C_STANDARD 90)

add_executable(ProjHeron main.c)

target_link_libraries(ProjHeron m)