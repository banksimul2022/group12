#ifndef PIN_WINDOW_H
#define PIN_WINDOW_H

#include <vector>
#include <QDialog>
#include <QTimer>

namespace Ui {
class pin_window;
}

class pin_window : public QDialog
{
    Q_OBJECT

public:
    explicit pin_window(QWidget *parent = nullptr);
    ~pin_window();
public slots:
    void go_to_main_window();

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

    void check_pin();

    void on_push_cancel_clicked();

    void on_push_ok_clicked();

private:
    Ui::pin_window *ui;
    std::vector< int > pinArray;
    QTimer *timer;
    int failedPinAttempts;
};

#endif // PIN_WINDOW_H
