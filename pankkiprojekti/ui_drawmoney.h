/********************************************************************************
** Form generated from reading UI file 'drawmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWMONEY_H
#define UI_DRAWMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drawmoney
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *Draw;
    QPushButton *Draw20;
    QPushButton *Draw40;
    QPushButton *Draw60;
    QPushButton *Close;
    QPushButton *Draw100;
    QPushButton *Draw200;
    QPushButton *Draw500;

    void setupUi(QDialog *Drawmoney)
    {
        if (Drawmoney->objectName().isEmpty())
            Drawmoney->setObjectName(QString::fromUtf8("Drawmoney"));
        Drawmoney->resize(363, 301);
        label = new QLabel(Drawmoney);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(188, 5, 161, 291));
        formLayoutWidget = new QWidget(Drawmoney);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, 0, 181, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Draw = new QPushButton(formLayoutWidget);
        Draw->setObjectName(QString::fromUtf8("Draw"));
        QFont font;
        font.setPointSize(11);
        Draw->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, Draw);

        Draw20 = new QPushButton(formLayoutWidget);
        Draw20->setObjectName(QString::fromUtf8("Draw20"));
        Draw20->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, Draw20);

        Draw40 = new QPushButton(formLayoutWidget);
        Draw40->setObjectName(QString::fromUtf8("Draw40"));
        Draw40->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, Draw40);

        Draw60 = new QPushButton(formLayoutWidget);
        Draw60->setObjectName(QString::fromUtf8("Draw60"));
        Draw60->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, Draw60);

        Close = new QPushButton(formLayoutWidget);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, Close);

        Draw100 = new QPushButton(formLayoutWidget);
        Draw100->setObjectName(QString::fromUtf8("Draw100"));
        Draw100->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, Draw100);

        Draw200 = new QPushButton(formLayoutWidget);
        Draw200->setObjectName(QString::fromUtf8("Draw200"));
        Draw200->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, Draw200);

        Draw500 = new QPushButton(formLayoutWidget);
        Draw500->setObjectName(QString::fromUtf8("Draw500"));
        Draw500->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, Draw500);


        retranslateUi(Drawmoney);

        QMetaObject::connectSlotsByName(Drawmoney);
    } // setupUi

    void retranslateUi(QDialog *Drawmoney)
    {
        Drawmoney->setWindowTitle(QCoreApplication::translate("Drawmoney", "Dialog", nullptr));
        label->setText(QString());
        Draw->setText(QCoreApplication::translate("Drawmoney", "Nosta", nullptr));
        Draw20->setText(QCoreApplication::translate("Drawmoney", "20", nullptr));
        Draw40->setText(QCoreApplication::translate("Drawmoney", "40", nullptr));
        Draw60->setText(QCoreApplication::translate("Drawmoney", "60", nullptr));
        Close->setText(QCoreApplication::translate("Drawmoney", "Peruuta", nullptr));
        Draw100->setText(QCoreApplication::translate("Drawmoney", "100", nullptr));
        Draw200->setText(QCoreApplication::translate("Drawmoney", "200", nullptr));
        Draw500->setText(QCoreApplication::translate("Drawmoney", "500", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Drawmoney: public Ui_Drawmoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWMONEY_H
