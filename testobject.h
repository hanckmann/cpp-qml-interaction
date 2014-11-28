#ifndef TESTOBJECT_H
#define TESTOBJECT_H

#include <QObject>

class TestObject : public QObject
{
    Q_OBJECT
public:
    explicit TestObject(QObject *parent = 0);

signals:
    void someSignal(const QString &text);

public slots:
    void someSlot(const QString &text);

};

#endif // TESTOBJECT_H
