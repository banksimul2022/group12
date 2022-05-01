#ifndef DLL_SERIALPORT_H
#define DLL_SERIALPORT_H

#include "dll_serialport_global.h"
#include <QDebug>
#include <QSerialPort>
#include "engine.h"
#include <QObject>


class DLL_SERIALPORT_EXPORT Dll_serialport: public QObject
{
    Q_OBJECT
public:
    Dll_serialport();
    ~Dll_serialport ();
    void openReader();
    short getRandomNumber();
public slots:
    void slotfunktio(short);
signals:
    void toexe(short);
private:
    engine * pengineclass;


};

#endif // DLL_SERIALPORT_H
