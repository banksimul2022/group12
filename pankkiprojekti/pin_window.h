#ifndef PIN_WINDOW_H
#define PIN_WINDOW_H

#include <QDialog>

namespace Ui {
class pin_window;
}

class pin_window : public QDialog
{
    Q_OBJECT

public:
    explicit pin_window(QWidget *parent = nullptr);
    ~pin_window();

private slots:
    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_buttonBox_accepted();

private:
    Ui::pin_window *ui;
};

#endif // PIN_WINDOW_H
