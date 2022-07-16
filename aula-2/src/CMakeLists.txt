set(CMAKE_AUTOMOC ON)

set(SRCS
    main.cpp
    myrectangle.cpp
    mylogger.cpp
)

qt5_add_resources(RESOURCES ../resources.qrc)

add_executable(aula-2 ${SRCS} ${RESOURCES})

target_link_libraries(aula-2
    Qt5::QuickControls2
    Qt5::Widgets
    Qt5::Core
    Qt5::Qml
    Qt5::Quick
)
