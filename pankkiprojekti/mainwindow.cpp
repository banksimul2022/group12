#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pin_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->label->setText(ui->label->text()+" hep");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    pin_window *pw = new pin_window();
    pw->show();
    this->close();
}

