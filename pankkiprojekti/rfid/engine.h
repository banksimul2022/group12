
#ifndef ENGINE_H
#define ENGINE_H
#include <QDebug>
#include <QObject>
#include <QSerialPort>
class engine : public QObject
{
    Q_OBJECT
public:
    QSerialPort * serialPort = new QSerialPort();
    engine(QObject * parent =nullptr);
    ~engine();
    short returnValueTodDll_serialport();
    void open();
private:
    short number;
    //QSerialPort * serialPort;
signals:
   void sendNumberToInterface(short);
public slots:
   void getnumber();

};

#endif // ENGINECLASS_H





