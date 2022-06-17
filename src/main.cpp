#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickStyle>

int main(int argc, char *argv[]) {
	QGuiApplication app(argc, argv);	
	QQuickStyle::setStyle("Material");

	QQmlApplicationEngine appEngine("qrc:/main.qml");


	return app.exec();
} 
