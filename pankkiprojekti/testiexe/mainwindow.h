#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dll_serialport.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
   void funktio1(short num);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Dll_serialport * pDll_serialport;
};
#endif // MAINWINDOW_H
