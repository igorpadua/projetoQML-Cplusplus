#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {
	QGuiApplication app(argc, argv);	
	QQmlApplicationEngine appEngine("qrc:/main.qml");

	return app.exec();
} 
