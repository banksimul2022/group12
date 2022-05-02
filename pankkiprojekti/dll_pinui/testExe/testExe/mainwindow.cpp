#include "mainwindow.h"
#include <QLibrary>
#include "ui_mainwindow.h"
#include "../../pinui/pinui.h"
#include "qdebug.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pPinui = new pinui;

    // kun pinGivenSignal triggeröityy pin UI DLL:ssä, receivePinGivenSignal triggeröityy
    // MainWindows metodissa
    connect(pPinui,SIGNAL(pinGivenSignal()),
            this,SLOT(receivePinGivenSignal()));

    this->failedPinAttempts = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pPinui;
    pPinui = nullptr;
}

// kun on_push_ok_clickediä painetaan pin ui DLL:ssä signaali lähetetään tähän metodiin
void MainWindow::receivePinGivenSignal()
{
    int pin = pPinui->getPin();
    qDebug() << "pin koodi: " << pin;
    // Todo: lähetä rest apille pin
    bool success = false; //this->restClient->validatePin();
    this->showPinMessage(success);
}

void MainWindow::showPinMessage(bool success)
{
    if (success) {
        return;
    }

    this->failedPinAttempts++;
    qDebug() << this->failedPinAttempts;
    while (this->failedPinAttempts < 3)
    {

        this->pPinui->setText("Väärä PIN-koodi!");
        return;
    }

    if (this->failedPinAttempts == 3)
    {
        this->pPinui->setText("PIN-koodi väärin kolme kertaa\nKortti lukittu!");
        this->failedPinAttempts = 0;
        this->pPinui->disableUI();
    }

    return;
}

//näytetään debug pin-ikkuna
void MainWindow::on_pushButton_clicked()
{
    pPinui->show();

}

