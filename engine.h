
#ifndef ENGINE_H
#define ENGINE_H
#include <QDebug>
#include <QObject>
class engine : public QObject
{
    Q_OBJECT
public:
    engine(QObject * parent =nullptr);
    short returnValueTodDll_serialport();
    void open();
private:
    short number;
signals:
   void sendNumberToInterface(short);

};

#endif // ENGINECLASS_H

