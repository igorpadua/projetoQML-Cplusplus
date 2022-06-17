set(SRCS
    main.cpp
)

qt5_add_resources(RESOURCES ../resources.qrc)

add_executable(aula-1 ${SRCS} ${RESOURCES})

target_link_libraries(aula-1
    Qt5::Widgets
    Qt5::Core
    Qt5::Qml
    Qt5::Quick
)
