#include "engineclass.h"


engineclass::engineclass(QObject *parent):QObject(parent)
{
    qDebug()<<"dll engine constuctor funktio";

}

short engineclass::returnValueTodDll_serialport()
{
  return number;
}

void engineclass::open()
{
  qDebug()<<"dll engine open funktio";
  emit sendNumberToInterface(10);

}
