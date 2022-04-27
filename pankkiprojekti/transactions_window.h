#ifndef TRANSACTIONS_WINDOW_H
#define TRANSACTIONS_WINDOW_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class transactions_window;
}

class transactions_window : public QDialog
{
    Q_OBJECT

public:
    explicit transactions_window(QWidget *parent = nullptr);
    ~transactions_window();

private slots:
    void on_push_back_clicked();

private:
    Ui::transactions_window *ui;
     QTimer *timer;
};

#endif // TRANSACTIONS_WINDOW_H
