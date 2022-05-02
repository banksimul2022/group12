#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../pinui/pinui.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showPinMessage(bool);
public slots:
    void receivePinGivenSignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    pinui *pPinui;
    int failedPinAttempts;
};
#endif // MAINWINDOW_H
