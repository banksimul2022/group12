#ifndef DRAWMONEY_H
#define DRAWMONEY_H

#include <QDialog>
#include <QDebug>
#include <QTimer>
//#include "restapi1.h"


namespace Ui {
class Drawmoney;
}

class Drawmoney : public QDialog
{
    Q_OBJECT

public:
    explicit Drawmoney(QWidget *parent = nullptr);
    ~Drawmoney();

private slots:
    void on_Draw_clicked();

    void on_Close_clicked();

    void on_Draw20_clicked();

    void on_Draw40_clicked();

    void on_Draw60_clicked();

    void on_Draw100_clicked();

    void on_Draw200_clicked();

    void on_Draw500_clicked();

private:
    Ui::Drawmoney *ui;
    QString drawAmount;
  //  RestApi1 *objRestApi;
    QString clientID;
    QString clientName;
    QString accountID;
    QString saldo;
    bool credit = false;
    QTimer *timer;
    QTimer *timerWarning;
};

#endif // DRAWMONEY_H
