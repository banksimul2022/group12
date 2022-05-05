#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "dll_serialport.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pDll_serialport = new Dll_serialport();
    connect(pDll_serialport, SIGNAL(toexe(short)),
            this,SLOT(funktio1(short)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pDll_serialport;
    pDll_serialport = nullptr;
}

void MainWindow::funktio1(short num)
{
    QString luku=QString::number(num);
    ui->lineEdit->setText("luku= "+luku);
}


void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"on button click";
    pDll_serialport->openReader();
    //short numero = pDll_serialport->getRandomNumber();
   // QString numeroStr =QString::number(numero);
   // ui->listWidget->addItem(numeroStr);
}

