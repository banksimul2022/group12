#ifndef DRAWMONEY_H
#define DRAWMONEY_H

#include <QDialog>
#include <QDebug>
#include <QTimer>
#include "restapidll.h"
#include "ui_drawmoney.h"


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

signals:
    void updateSaldo();
    void mainTimerSignal();

public slots:
    void recvIdAsiakasInDrawMoney(QString);
    void recvWithdrawalReady();
    void recvSaldo(QString);
    void recvIdTiliInDrawMoney(QString);
    void startDrawMoneyTimer();
    void drawMoneyIdleSlot();
    void clearWarning();
    void recvCardMode(bool);

private:
    Ui::Drawmoney *ui;
    QString drawAmount;
    Restapidll *objRestApi;
    QString idAsiakas;
    QString nimi;
    QString idTili;
    QString saldo;
    bool credit = false;
    QTimer *timer;
    QTimer *timerWarning;
};

#endif // DRAWMONEY_H