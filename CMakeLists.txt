cmake_minimum_required(VERSION 3.14)

project(MyReader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(MyReader src/main.cpp)

target_link_libraries(MyReader Qt6::Widgets)
