#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "testobject.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    TestObject to;

    // Load the QML and set the Context
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("testObject",&to);

    return app.exec();
}
