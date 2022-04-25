#include "pin_window.h"
#include "ui_pin_window.h"
#include "mainwindow.h"
#include <vector>
#include <QDebug>


// määritellään montako lukua käsitellään
#define MAX_SIZE 4
#define PIN_TIMEOUT 10000
#define PIN_CORRECT_TIMER 4000

pin_window::pin_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pin_window)
{
    // käytetään vector-tietotyyppiä pin-koodin tallentamiseen
    std::vector< int > pinArray;
    this->pinArray = pinArray;
    ui->setupUi(this);

    //aikakatkaisu
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(go_to_main_window()));
    timer->start(PIN_TIMEOUT);
    this->timer = timer;

    /*timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(go_to_main_window()));
    timer->start(PIN_CORRECT_TIMER);
    this->timer = timer;
    */

    this->failedPinAttempts = 0;
}

pin_window::~pin_window()
{
    delete ui;
}

void pin_window::go_to_main_window()
{
    qDebug() << "ajastin...";
    MainWindow *pw = new MainWindow();
    pw->show();
    this->close();
    delete this;
}


void pin_window::on_push1_clicked()
{
    this->update_pin(1);
}


void pin_window::on_push2_clicked()
{
    this->update_pin(2);
}


void pin_window::on_push3_clicked()
{
    this->update_pin(3);
}


void pin_window::on_push4_clicked()
{
    this->update_pin(4);
}


void pin_window::on_push5_clicked()
{
    this->update_pin(5);
}


void pin_window::on_push6_clicked()
{
    this->update_pin(6);
}


void pin_window::on_push7_clicked()
{
    this->update_pin(7);
}


void pin_window::on_push8_clicked()
{
    this->update_pin(8);
}


void pin_window::on_push9_clicked()
{
    this->update_pin(9);
}


void pin_window::on_push0_clicked()
{
    this->update_pin(0);
}

void pin_window::on_push_cancel_clicked()
{
    MainWindow *mw = new MainWindow();
    mw->show();
    this->hide();
}

void pin_window::on_push_ok_clicked()
{
    qDebug() << "Pressed OK...";
    this->check_pin();
}


// lisätään painikkeella valittu luku vektori-tietorakenteeseen ja
// päivitetään kaikki luvut label-elementtiin. Return kun lukuja on 4.
void pin_window::update_pin(int number) {
    //ajastin keskeytetään ja aloitetaan uudelleen aina kun pushbutton käytetty
    this->timer->stop();
    this->timer->start(PIN_TIMEOUT);
    if (this->pinArray.size() == MAX_SIZE) {
        return;
    }
    this->pinArray.push_back(number);
    this->refresh_pin_label();
}

// sijoitetaan vectorin alkiot label-elementtiin muuttamalla ne ensin merkkijonoksi
void pin_window::refresh_pin_label() {
    QString str;
    // käydään läpi vectorin alkiot yksi kerrallaan
    for (auto it = this->pinArray.begin(); it != this->pinArray.end(); ++it) {
        // luetaan index iteraattorin avulla eli käydään jokainen syötetty luku läpi
        int index = std::distance(this->pinArray.begin(), it);
        // sijoitetaan numeron paikalle tähtimerkki
        str[index] = QChar('*');
    }
    ui->label_2->setText(str);
}

void pin_window::check_pin() {

    // TO DO: pin-koodin tarkistaminen tähän!
    bool succeeded = false; //this->restClient.validatePIN();

    if (!succeeded) {
        qDebug() << this->failedPinAttempts;
        while (this->failedPinAttempts < 2)
        {
            ui->label->setText(ui->label->text()+"\nVäärä PIN-koodi");
            this->failedPinAttempts++;
            return;
        }

        if (this->failedPinAttempts == 2)
        {
            ui->label->setText(ui->label->text()+"\nPIN-koodi väärin kolme kertaa - kortti lukittu!");
            QWidget::setEnabled(false);
            this->timer->stop();
            this->timer->start(PIN_TIMEOUT);
        }
        return;
    }
    ui->label->setText(ui->label->text()+"\nPIN-koodi oikein!");
}
