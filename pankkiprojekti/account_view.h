#ifndef ACCOUNT_VIEW_H
#define ACCOUNT_VIEW_H

#include <QDialog>
#include <QTimer>

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
    void on_pushButton_clicked();

    void on_push_info_clicked();

    void on_push_logout_clicked();

private:
    Ui::account_view *ui;
    QTimer *timer;
};

#endif // ACCOUNT_VIEW_H
