#include "pin_window.h"
#include "ui_pin_window.h"


pin_window::pin_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pin_window)
{
    ui->setupUi(this);
}

pin_window::~pin_window()
{
    delete ui;
}


void pin_window::on_push1_clicked()
{

}


void pin_window::on_push2_clicked()
{

}


void pin_window::on_push3_clicked()
{

}


void pin_window::on_buttonBox_accepted()
{

}

