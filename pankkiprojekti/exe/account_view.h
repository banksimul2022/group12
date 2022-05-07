#ifndef ACCOUNT_VIEW_H
#define ACCOUNT_VIEW_H

#include <QDialog>
#include <QTimer>

#include "restapidll.h"
#include "drawmoney.h"
#include <QDebug>


namespace Ui {
class account_view;
}

class account_view : public QDialog
{
    Q_OBJECT

public:
    explicit account_view(QWidget *parent = nullptr);
    ~account_view();

private slots:

    void on_push_info_clicked();

    void on_push_logout_clicked();
    
    void on_push_transactions_clicked();

    void on_push_withdraw_clicked();
    

   // void on_push_transactions_clicked();

    //void on_push_withdraw_clicked();

private:
    Ui::account_view *ui;
    QTimer *timer;
    QString nimi;
    Restapidll *objRestApi;
public slots:
    void recvName(QString);
};

#endif // ACCOUNT_VIEW_H
