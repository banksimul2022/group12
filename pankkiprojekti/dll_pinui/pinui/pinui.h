#ifndef PINUI_H
#define PINUI_H

#include <vector>
#include <QDialog>
#include <QTimer>

namespace Ui {
class pinui;
}

class pinui : public QDialog
{
    Q_OBJECT

public:
    explicit pinui(QWidget *parent = nullptr);
    ~pinui();
    void setText(QString);
    int getPin();
    void disableUI();

public slots:
    void close();

private slots:
    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_push4_clicked();

    void on_push5_clicked();

    void on_push6_clicked();

    void on_push7_clicked();

    void on_push8_clicked();

    void on_push9_clicked();

    void on_push0_clicked();

    void refresh_pin_label();

    void update_pin(int);

    void on_push_cancel_clicked();

    void on_push_ok_clicked();

signals:
    void pinGivenSignal();

private:
    Ui::pinui *ui;
    std::vector< int > pinArray;
    QTimer *timer;
};

#endif // PINUI_H
