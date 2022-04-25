#include "account_view.h"
#include "ui_account_view.h"
#include "mainwindow.h"
#include <QDebug>


#define ACC_TIMEOUT 30000



account_view::account_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::account_view)
{
    ui->setupUi(this);

    //aikakatkaisu
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(go_to_main_window()));
    timer->start(ACC_TIMEOUT);
    this->timer = timer;

}

account_view::~account_view()
{
    delete ui;
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

