/********************************************************************************
** Form generated from reading UI file 'account_view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_VIEW_H
#define UI_ACCOUNT_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_account_view
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_accountview;
    QPushButton *push_info;
    QVBoxLayout *verticalLayout_2;
    QPushButton *push_withdraw;
    QPushButton *push_transactions;
    QPushButton *push_logout;

    void setupUi(QDialog *account_view)
    {
        if (account_view->objectName().isEmpty())
            account_view->setObjectName(QString::fromUtf8("account_view"));
        account_view->resize(487, 431);
        horizontalLayout_2 = new QHBoxLayout(account_view);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_accountview = new QLabel(account_view);
        label_accountview->setObjectName(QString::fromUtf8("label_accountview"));

        verticalLayout->addWidget(label_accountview);

        push_info = new QPushButton(account_view);
        push_info->setObjectName(QString::fromUtf8("push_info"));

        verticalLayout->addWidget(push_info);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        push_withdraw = new QPushButton(account_view);
        push_withdraw->setObjectName(QString::fromUtf8("push_withdraw"));

        verticalLayout_2->addWidget(push_withdraw);

        push_transactions = new QPushButton(account_view);
        push_transactions->setObjectName(QString::fromUtf8("push_transactions"));

        verticalLayout_2->addWidget(push_transactions);

        push_logout = new QPushButton(account_view);
        push_logout->setObjectName(QString::fromUtf8("push_logout"));

        verticalLayout_2->addWidget(push_logout);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(account_view);

        QMetaObject::connectSlotsByName(account_view);
    } // setupUi

    void retranslateUi(QDialog *account_view)
    {
        account_view->setWindowTitle(QCoreApplication::translate("account_view", "Dialog", nullptr));
        label_accountview->setText(QCoreApplication::translate("account_view", "Olet kirjautuneena sis\303\244\303\244n nimell\303\244:", nullptr));
        push_info->setText(QCoreApplication::translate("account_view", "N\303\244yt\303\244 omat tiedot", nullptr));
        push_withdraw->setText(QCoreApplication::translate("account_view", "Nosta rahaa", nullptr));
        push_transactions->setText(QCoreApplication::translate("account_view", "N\303\244yt\303\244 tilitapahtumat", nullptr));
        push_logout->setText(QCoreApplication::translate("account_view", "Kirjaudu ulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account_view: public Ui_account_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_VIEW_H
