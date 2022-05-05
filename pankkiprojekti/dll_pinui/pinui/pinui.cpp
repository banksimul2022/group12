#include "pinui.h"
#include "ui_pinui.h"
#include <vector>
#include <QDebug>
#include <QDialog>

#define MAX_SIZE 4
#define PIN_TIMEOUT 10000
#define PIN_WRONG_TIMER 6000
#define PIN_CORRECT_TIMER 6000

pinui::pinui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinui)
{
    ui->setupUi(this);

    // käytetään vector-tietotyyppiä pin-koodin tallentamiseen
    std::vector< int > pinArray;
    this->pinArray = pinArray;

    //aikakatkaisu
    this->timer = new QTimer(this);
    this->timer->start(PIN_TIMEOUT);

    // ???
    connect(this->timer, SIGNAL(timeout()), this, SLOT(close()));
    /*
     * connect(ui->push1,SIGNAL(clicked()),this,SLOT(on_push1_clicked()));
    connect(ui->push2,SIGNAL(clicked()),this,SLOT(on_push2_clicked()));
    connect(ui->push3,SIGNAL(clicked()),this,SLOT(on_push3_clicked()));
    connect(ui->push4,SIGNAL(clicked()),this,SLOT(on_push4_clicked()));
    connect(ui->push5,SIGNAL(clicked()),this,SLOT(on_push5_clicked()));
    connect(ui->push6,SIGNAL(clicked()),this,SLOT(on_push6_clicked()));
    connect(ui->push7,SIGNAL(clicked()),this,SLOT(on_push7_clicked()));
    connect(ui->push8,SIGNAL(clicked()),this,SLOT(on_push8_clicked()));
    connect(ui->push9,SIGNAL(clicked()),this,SLOT(on_push9_clicked()));
    connect(ui->push0,SIGNAL(clicked()),this,SLOT(on_push0_clicked()));
    connect(ui->push_cancel,SIGNAL(clicked()),this,SLOT(on_push_cancel_clicked()));
*/
  //  connect(ui->push_ok,SIGNAL(clicked()),this,SLOT(on_push_ok_clicked()));

    /*timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(go_to_main_window()));
    timer->start(PIN_CORRECT_TIMER);
    this->timer = timer;
    */
}


pinui::~pinui()
{
    delete ui;
    this->close();
}

void pinui::setText(QString str)
{
    ui->label->setText(str);
}

int pinui::getPin()
{
    // int vektori integeriksi, esim: [1,4,5,6] => 1456
    // ei hajua miten ja miksi tämä toimii
    auto v = this->pinArray;
    int total = 0;
    if (v.empty()) {
        return total;
    }

    reverse(v.begin(), v.end());
    int decimal = 1;

    for (auto& it : v)
    {
        total += it * decimal;
        decimal *= 10;
    }
    return total;
}

void pinui::disableUI()
{
   QWidget::setEnabled(false);
}

void pinui::close()
{
    qDebug() << "ajastin...";
    this->timer->stop();
    this->hide();
    this->ui->label->setText("Anna PIN-koodi");
    this->ui->label_2->setText("");
    this->pinArray.clear();
    QWidget::setEnabled(true);
}


void pinui::on_push1_clicked()
{
    this->update_pin(1);
}


void pinui::on_push2_clicked()
{
    this->update_pin(2);
}


void pinui::on_push3_clicked()
{
    this->update_pin(3);
}


void pinui::on_push4_clicked()
{
    this->update_pin(4);
}


void pinui::on_push5_clicked()
{
    this->update_pin(5);
}


void pinui::on_push6_clicked()
{
    this->update_pin(6);
}


void pinui::on_push7_clicked()
{
    this->update_pin(7);
}


void pinui::on_push8_clicked()
{
    this->update_pin(8);
}


void pinui::on_push9_clicked()
{
    this->update_pin(9);
}


void pinui::on_push0_clicked()
{
    this->update_pin(0);
}

void pinui::on_push_cancel_clicked()
{
    this->hide();
    this->ui->label_2->setText("");
    this->pinArray.clear();
}

void pinui::on_push_ok_clicked()
{
    qDebug() << "Pressed OK!";
    // jos pin arrayssä ei ole neljää lukua, ei lähetetä signaalia mainiin
    // tai tyhjennetä labelia
    if (this->pinArray.size() != MAX_SIZE) {
        return;
    }
    emit pinGivenSignal();
}


// lisätään painikkeella valittu luku vektori-tietorakenteeseen ja
// päivitetään kaikki luvut label-elementtiin. Return kun lukuja on 4.
void pinui::update_pin(int number) {
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
void pinui::refresh_pin_label() {
    QString str;
    // käydään läpi vectorin alkiot yksi kerrallaan
    for (auto it = this->pinArray.begin(); it != this->pinArray.end(); ++it) {
        // luetaan index iteraattorin avulla eli käydään jokainen syötetty luku läpi
        int index = std::distance(this->pinArray.begin(), it);
        // sijoitetaan numeron paikalle tähtimerkki
        str[index] = QChar('*');
    }
    this->ui->label_2->setText(str);
}
