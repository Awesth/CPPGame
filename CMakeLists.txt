cmake_minimum_required(VERSION 3.7)
project(CPPGame)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        Game/main.cpp Game/world.cpp Game/world.h)

add_executable(CPPGame ${SOURCE_FILES} Game/world.cpp Game/world.h)