
#include "engine.h"


engine::engine(QObject *parent):QObject(parent)
{
    qDebug()<<"dll engine constuctor funktio";

}

short engine::returnValueTodDll_serialport()
{
  return number;
}

void engine::open()
{
  qDebug()<<"dll engine open funktio";
  emit sendNumberToInterface(10);

}
