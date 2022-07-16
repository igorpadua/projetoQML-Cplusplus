#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickStyle>

#include "mylogger.h"
#include "myrectangle.h"

int main(int argc, char* argv[])
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QQuickStyle::setStyle("Material");

    qInstallMessageHandler(MyLogger::self()->messageHandler);

    qmlRegisterType<MyRectangle>("MyRectangle", 1, 0, "MyRectangle");

    qmlRegisterUncreatableMetaObject(MyRectangleNamespace::staticMetaObject, "MyRectangleNamespace",
        1, 0, "MyRectangleNamespace", "Aulas KDE Brasil");

    MyLogger::self()->sayMyName();

    qmlRegisterSingletonType<MyLogger>("MyLogger", 1, 0, "MyLogger", MyLogger::self()->provider);

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine appEngine("qrc:/main.qml");

    return app.exec();
}
