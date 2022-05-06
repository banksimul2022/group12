#include "drawmoney.h"
#include "ui_drawmoney.h"
#include <QDebug>
#include <QDialog>

Drawmoney::Drawmoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Drawmoney)
{
    ui->setupUi(this);
    objRestApi = new Restapidll;
    timer = new QTimer;
    timerWarning = new QTimer;

    connect(objRestApi, SIGNAL(nostoReady()),
            this, SLOT(recvWithdrawalReady()));

    connect(objRestApi, SIGNAL(saldoSignal(QString)),
            this, SLOT(recvSaldo(QString)));

    connect(ui->Draw, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->Draw20, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->Draw40, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->Draw60, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->Draw100, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->Draw200, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(ui->Draw500, SIGNAL(clicked()),
            this, SLOT(startDrawMoneyTimer()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(drawMoneyIdleSlot()));


}

Drawmoney::~Drawmoney()
{
    delete ui;

    delete objRestApi;
    objRestApi = nullptr;

    delete timer;
    timer=nullptr;

    delete timerWarning;
    timerWarning=nullptr;
}

void Drawmoney::on_Draw_clicked()
{
    objRestApi->saldo(idAsiakas);
    qDebug()<<"nosta: "<< idTili <<":"<<idAsiakas<<":"<<drawAmount;
    double num1 = drawAmount.toDouble();
    double num2 = saldo.toDouble();

    if(num1 > num2)
    {
        qDebug()<<"ei katetta: "<<num1<<">"<<num2;
        if(credit==true)
        {
            qDebug()<<"credit nosto"<<num1<<">"<<num2;
            objRestApi->nosto(idTili, idAsiakas, drawAmount);
            this->close();
        }
        else {
            ui->label->setText("Tilillä ei katetta\n""Saldo: "+saldo+"€\n"+"Nosta Summa: "+drawAmount+"€");
        }
    }
    else {
        objRestApi->nosto(idTili, idAsiakas, drawAmount);
        ui->label->setText("");

    }
}

void Drawmoney::recvIdAsiakasInDrawMoney(QString id)
{
    idAsiakas = id;
    qDebug()<< "receiveClientIDinDrawMoney"<< idAsiakas;
    objRestApi->saldo(idAsiakas);
    ui->label->setText(saldo);
}
void Drawmoney::recvWithdrawalReady()
{
    qDebug()<< "receiveWithdrawalReady in EXE";
    objRestApi->saldo(idAsiakas);
    emit updateSaldo();
}
void Drawmoney::recvSaldo(QString bal)
{
    saldo = bal;
    qDebug()<< "receiveBalance in drawmoney"<<nimi <<" " << saldo;
}

void Drawmoney::recvIdTiliInDrawMoney(QString id)
{
    idTili = id;
    qDebug()<< "receiveAccountIDinDrawMoney id:" <<idTili;
}
void Drawmoney::startDrawMoneyTimer()
{
    qDebug()<< "startDrawMoneyTimer()";
    timer->start(10000);
}

void Drawmoney::drawMoneyIdleSlot()
{
    qDebug()<< "drawMoneyIdleSlot()";

    if(this->isActiveWindow() == false)
    {
        qDebug()<< "drawMoneyIdleSlot() isActiveWindow() == false) restarting timer 10sec";
        timer->start(10000);
    }
    else {
        qDebug()<< "drawMoneyIdleSlot() close";
        emit mainTimerSignal();
        this->close();
    }
}
#include "account_view.h"

void Drawmoney::on_Close_clicked()
{
    account_view *av = new account_view();
    av->show();
    this->close();
}



void Drawmoney::on_Draw20_clicked()
{
    drawAmount = "20";
}


void Drawmoney::on_Draw40_clicked()
{
    drawAmount = "40";
}


void Drawmoney::on_Draw60_clicked()
{
    drawAmount = "60";
}


void Drawmoney::on_Draw100_clicked()
{
    drawAmount = "100";
}


void Drawmoney::on_Draw200_clicked()
{
    drawAmount = "200";
}


void Drawmoney::on_Draw500_clicked()
{
    drawAmount = "500";
}

void Drawmoney::clearWarning()
{
    ui->label->setText("");
}

void Drawmoney::recvCardMode(bool mode)
{
    credit = mode;
    qDebug()<< "recvCardMode in drawmoney"<< mode;
    if(credit == true)
    {
        ui->label->setText("     CREDIT");
    }
    else{
        ui->label->setText("     DEBIT");
    }
}