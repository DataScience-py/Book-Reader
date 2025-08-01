cmake_minimum_required(VERSION 3.14)

project(MyReader LANGUAGES CXX)

set(CMAKE_AUTOUIC ON) # Автоматическая обработка UI-файлов
set(CMAKE_AUTORCC ON) # Автоматическая обработка QRC-файлов (файлы ресурсов)
set(CMAKE_AUTOMOC ON) # Автоматическая обработка MOC-файлов (файлы с кодом C++)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(MyReader 
    src/main.cpp
    src/dynamicheader.cpp)

target_link_libraries(MyReader PRIVATE Qt6::Widgets)
