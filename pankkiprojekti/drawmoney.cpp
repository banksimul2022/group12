#include "drawmoney.h"
#include "ui_drawmoney.h"

Drawmoney::Drawmoney(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Drawmoney)
{
    ui->setupUi(this);
    //objRestApi = new RestApi1;
    timer = new QTimer;
    timerWarning = new QTimer;

    /* connect(objRestApi,SIGNAL(saldoSignal(QString)),
             this,SLOT(receiveSaldo(QString)));*/

}

Drawmoney::~Drawmoney()
{
    delete ui;

    //delete objRestApi;
   // objRestApi =nullptr;

    delete timer;
    timer=nullptr;

    delete timerWarning;
    timerWarning=nullptr;
}

void Drawmoney::on_Draw_clicked()
{
    //objRestApi->saldo(clientID);
    qDebug()<<"nosta (acc_ID, client_ID, summa)"<< accountID <<":"<<clientID<<":"<<drawAmount;
    double num1 = drawAmount.toDouble();
    double num2 = saldo.toDouble();

    if(num1 > num2)
    {
        qDebug()<<"ei katetta: "<<num1<<">"<<num2;
        if(credit==true)
        {
            qDebug()<<"credit nosto"<<num1<<">"<<num2;
            //objRestApi->nosto(accountID, clientID, drawAmount);
            this->close();
        }
        else {
            ui->label->setText("Tilillä ei katetta\n""Saldo: "+saldo+"€\n"+"Nosta Summa: "+drawAmount+"€");
        }
    }
    else {
       // objRestApi->nosto(accountID, clientID, drawAmount);
        ui->label->setText("");

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

