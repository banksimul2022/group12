#include "transactions_window.h"
#include "ui_transactions_window.h"
#include "mainwindow.h"
#include <QDebug>
#include "account_view.h"

#define ACC_TIMEOUT 30000

transactions_window::transactions_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transactions_window)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(go_to_main_window()));
    timer->start(ACC_TIMEOUT);
    this->timer = timer;
}

transactions_window::~transactions_window()
{
    delete ui;
}

void transactions_window::on_push_back_clicked()
{
    account_view *av = new account_view();
    av->show();
    this->close();
}

