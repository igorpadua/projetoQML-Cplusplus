project(aula-1)

cmake_minimum_required(VERSION 2.8)

find_package(Qt5 REQUIRED 
    Widgets
    Core
    Qml
    Quick
)

add_subdirectory(src)

