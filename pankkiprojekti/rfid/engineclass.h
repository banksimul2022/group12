#ifndef ENGINECLASS_H
#define ENGINECLASS_H
#include <QDebug>
#include <QRandomGenerator>
#include <QObject>
class engineclass : public QObject
{
    Q_OBJECT
public:
    engineclass(QObject * parent =nullptr);
    short returnValueTodDll_serialport();
    void open();
private:
    short number;
    QRandomGenerator gen;
signals:
   void sendNumberToInterface(short);

};

#endif // ENGINECLASS_H
