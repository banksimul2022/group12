/********************************************************************************
** Form generated from reading UI file 'transactions_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONS_WINDOW_H
#define UI_TRANSACTIONS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transactions_window
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listView_transactions;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *push_back;

    void setupUi(QDialog *transactions_window)
    {
        if (transactions_window->objectName().isEmpty())
            transactions_window->setObjectName(QString::fromUtf8("transactions_window"));
        transactions_window->resize(700, 532);
        verticalLayoutWidget = new QWidget(transactions_window);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 110, 341, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listView_transactions = new QListView(verticalLayoutWidget);
        listView_transactions->setObjectName(QString::fromUtf8("listView_transactions"));

        verticalLayout->addWidget(listView_transactions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        push_back = new QPushButton(verticalLayoutWidget);
        push_back->setObjectName(QString::fromUtf8("push_back"));

        verticalLayout->addWidget(push_back);


        retranslateUi(transactions_window);

        QMetaObject::connectSlotsByName(transactions_window);
    } // setupUi

    void retranslateUi(QDialog *transactions_window)
    {
        transactions_window->setWindowTitle(QCoreApplication::translate("transactions_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("transactions_window", "Viimeisimm\303\244t tilitapahtumat", nullptr));
        pushButton->setText(QCoreApplication::translate("transactions_window", "<- siirry taaksep\303\244in", nullptr));
        pushButton_2->setText(QCoreApplication::translate("transactions_window", "siirry eteenp\303\244in ->", nullptr));
        push_back->setText(QCoreApplication::translate("transactions_window", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transactions_window: public Ui_transactions_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONS_WINDOW_H
