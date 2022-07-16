project(aula-2)

cmake_minimum_required(VERSION 2.8)

find_package(Qt5 REQUIRED 
    QuickControls2
    Widgets
    Core
    Qml
    Quick
)

add_subdirectory(src)

