
#include "engine.h"


engine::engine(QObject *parent):QObject(parent)
{
    //qDebug()<<"dll engine constuctor funktio";

    connect(serialPort, SIGNAL(readyRead()),
            this, SLOT(getnumber()));
}

engine::~engine()
{
    serialPort->close();
    delete serialPort;
}

short engine::returnValueTodDll_serialport()
{
  return number;
}

void engine::open()
{
    qDebug("engine open");
  serialPort->setPortName("COM7");
  serialPort->setParity(QSerialPort::NoParity);
  serialPort->setBaudRate(QSerialPort::Baud9600, QSerialPort::AllDirections);
  serialPort->setStopBits(QSerialPort::OneStop);
  serialPort->setFlowControl(QSerialPort::NoFlowControl);

  QByteArray datas;

  if(serialPort->open(QIODevice::ReadOnly)){
      //datas = 0;
      qDebug()<<"open";
      while(datas.size() <= 14){

        serialPort->waitForReadyRead(100);
        datas = serialPort->readAll();
        if (datas.size() != 0){
            break;
        }
      }

      for (int i = 14; i >= 0; i--){
          qDebug()<< datas[i];
      }

      qDebug("success");

      serialPort->close();



  }
}

  void engine::getnumber()
  {
      qDebug()<<"merkkejä sarjaporista";
  }
