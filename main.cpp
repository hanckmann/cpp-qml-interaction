#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QList>

#include <QDebug>

#include "testobject.h"

// http://stackoverflow.com/questions/22605257/qt-signals-and-slots-nothing-happens

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    TestObject to;

    // Load the QML and set the Context
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("testObject",&to);

//  Signal-Slots test (to be continued)
//    QList<QObject *> items = engine.rootObjects();
//    for (int i = 0; i < items.size(); ++i) {
//        qDebug() << i+1;
//        QObject::connect(items.at(i), SIGNAL(someQmlSignal(QString)), &to, SLOT(someSlot(QString)));
//    }

    return app.exec();
}
