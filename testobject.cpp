#include "testobject.h"
#include <QString>

#include <QDebug>

TestObject::TestObject(QObject *parent) :
    QObject(parent)
{
}

void TestObject::someSlot(const QString &text)
{
    QString nText = text + ".cpp";
    emit someSignal(nText);

    qDebug() << nText;
}

