/********************************************************************************
** Form generated from reading UI file 'pin_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIN_WINDOW_H
#define UI_PIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pin_window
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *push5;
    QPushButton *push0;
    QPushButton *push4;
    QPushButton *push7;
    QPushButton *push2;
    QPushButton *push1;
    QPushButton *push3;
    QPushButton *push6;
    QPushButton *push9;
    QPushButton *push8;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *push_ok;
    QPushButton *push_cancel;

    void setupUi(QDialog *pin_window)
    {
        if (pin_window->objectName().isEmpty())
            pin_window->setObjectName(QString::fromUtf8("pin_window"));
        pin_window->resize(521, 435);
        gridLayout_2 = new QGridLayout(pin_window);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        push5 = new QPushButton(pin_window);
        push5->setObjectName(QString::fromUtf8("push5"));

        gridLayout->addWidget(push5, 1, 1, 1, 1);

        push0 = new QPushButton(pin_window);
        push0->setObjectName(QString::fromUtf8("push0"));

        gridLayout->addWidget(push0, 3, 1, 1, 1);

        push4 = new QPushButton(pin_window);
        push4->setObjectName(QString::fromUtf8("push4"));

        gridLayout->addWidget(push4, 1, 0, 1, 1);

        push7 = new QPushButton(pin_window);
        push7->setObjectName(QString::fromUtf8("push7"));

        gridLayout->addWidget(push7, 2, 0, 1, 1);

        push2 = new QPushButton(pin_window);
        push2->setObjectName(QString::fromUtf8("push2"));

        gridLayout->addWidget(push2, 0, 1, 1, 1);

        push1 = new QPushButton(pin_window);
        push1->setObjectName(QString::fromUtf8("push1"));

        gridLayout->addWidget(push1, 0, 0, 1, 1);

        push3 = new QPushButton(pin_window);
        push3->setObjectName(QString::fromUtf8("push3"));

        gridLayout->addWidget(push3, 0, 2, 1, 1);

        push6 = new QPushButton(pin_window);
        push6->setObjectName(QString::fromUtf8("push6"));

        gridLayout->addWidget(push6, 1, 2, 1, 1);

        push9 = new QPushButton(pin_window);
        push9->setObjectName(QString::fromUtf8("push9"));

        gridLayout->addWidget(push9, 2, 2, 1, 1);

        push8 = new QPushButton(pin_window);
        push8->setObjectName(QString::fromUtf8("push8"));

        gridLayout->addWidget(push8, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        label_2 = new QLabel(pin_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(pin_window);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        push_ok = new QPushButton(pin_window);
        push_ok->setObjectName(QString::fromUtf8("push_ok"));

        horizontalLayout->addWidget(push_ok);

        push_cancel = new QPushButton(pin_window);
        push_cancel->setObjectName(QString::fromUtf8("push_cancel"));

        horizontalLayout->addWidget(push_cancel);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(pin_window);

        QMetaObject::connectSlotsByName(pin_window);
    } // setupUi

    void retranslateUi(QDialog *pin_window)
    {
        pin_window->setWindowTitle(QCoreApplication::translate("pin_window", "Dialog", nullptr));
        push5->setText(QCoreApplication::translate("pin_window", "5", nullptr));
        push0->setText(QCoreApplication::translate("pin_window", "0", nullptr));
        push4->setText(QCoreApplication::translate("pin_window", "4", nullptr));
        push7->setText(QCoreApplication::translate("pin_window", "7", nullptr));
        push2->setText(QCoreApplication::translate("pin_window", "2", nullptr));
        push1->setText(QCoreApplication::translate("pin_window", "1", nullptr));
        push3->setText(QCoreApplication::translate("pin_window", "3", nullptr));
        push6->setText(QCoreApplication::translate("pin_window", "6", nullptr));
        push9->setText(QCoreApplication::translate("pin_window", "9", nullptr));
        push8->setText(QCoreApplication::translate("pin_window", "8", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("pin_window", "Anna PIN-koodi", nullptr));
        push_ok->setText(QCoreApplication::translate("pin_window", "OK", nullptr));
        push_cancel->setText(QCoreApplication::translate("pin_window", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pin_window: public Ui_pin_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIN_WINDOW_H
