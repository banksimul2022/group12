#include "pin_window.h"
#include "ui_pin_window.h"
#include <vector>

// määritellään montako lukua käsitellään
#define MAX_SIZE 4

pin_window::pin_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pin_window)
{
    // käytetään vector-tietotyyppiä pin-koodin tallentamiseen
    std::vector< int > pinArray;
    this->pinArray = pinArray;
    ui->setupUi(this);
}

pin_window::~pin_window()
{
    delete ui;
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


void pin_window::on_buttonBox_accepted()
{

}

// lisätään painikkeella valittu luku vektori-tietorakenteeseen ja
// päivitetään kaikki luvut label-elementtiin. Return kun lukuja on 4.
void pin_window::update_pin(int number) {
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
        // indexin avulla luetaan alkion arvo
        int pinNumber = this->pinArray[index];
        // muutetaan int->char tietotyypiksi
        std::string tmp = std::to_string(pinNumber);
        // sijoitetaan char QString-tietotyyppiin
        str[index] = QChar(*tmp.c_str());
    }
    ui->label_2->setText(str);
}


