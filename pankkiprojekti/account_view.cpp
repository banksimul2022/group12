#include "account_view.h"
#include "ui_account_view.h"
#include "mainwindow.h"
#include <QDebug>
#include "drawmoney.h"
#include "transactions_window.h"



#define ACC_TIMEOUT 30000



account_view::account_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::account_view)
{
    ui->setupUi(this);
    objRestApi = new Restapidll;
    //aikakatkaisu
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(go_to_main_window()));
    timer->start(ACC_TIMEOUT);
    this->timer = timer;

    connect(objRestApi, SIGNAL(nimiExe(QString)),
            this, SLOT(recvName(QString)));

}

account_view::~account_view()
{
    delete ui;
    delete objRestApi;
    objRestApi = nullptr;
}


void account_view::recvName(QString Enimi)
{
    nimi = Enimi;
    ui->label_accountview->setText(nimi+": ");
    qDebug()<< "receiveClientName in account_view" << Enimi;
}

void account_view::on_push_info_clicked()
{

    ui->label_accountview->setText(ui->label_accountview->text()+" hep");
}


void account_view::on_push_logout_clicked()
{
    MainWindow *mw = new MainWindow();
    mw->show();
    this->hide();
}


void account_view::on_push_transactions_clicked()
{
    transactions_window *tw = new transactions_window();
    tw->show();
    this->hide();
}


void account_view::on_push_withdraw_clicked()
{
    Drawmoney *dm = new Drawmoney();
    dm->show();
    this->hide();
}

