#include "dll_serialport.h"

Dll_serialport::Dll_serialport()
{
    qDebug()<<"DLL luotu";
    pengineclass = new engine;
    connect(pengineclass,SIGNAL(sendNumberToInterface(short)),
            this,SLOT(slotfunktio(short)));
}

Dll_serialport::~Dll_serialport()
{
    qDebug()<<"DLL tuhottu";
    delete pengineclass;
    pengineclass = nullptr;
}

void Dll_serialport::openReader()
{
    qDebug()<<"dll open reader funktio";
    pengineclass->open();
}

short Dll_serialport::getRandomNumber()
{
  return pengineclass->returnValueTodDll_serialport();

}

void Dll_serialport::slotfunktio(short num)
{
    qDebug()<<"slot funktio";
    emit toexe(num);
}
