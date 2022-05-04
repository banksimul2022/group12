#ifndef RESTAPIDLL_H
#define RESTAPIDLL_H

#include "restapidll_global.h"
#include <QObject>
#include <QJsonArray>
#include <QString>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QtNetwork>
class RESTAPIDLL_EXPORT Restapidll : public QObject
{
        Q_OBJECT

public:
    Restapidll(QObject * parent = nullptr);
    ~Restapidll();
    void nosto(QString, QString, QString);
    void saldo(QString id);
    void tilitapahtumat(QString);
    void tenActions(QString);
    void cardInfo(QString);
    void idAsiakas(QString);
    void idTili(QString);
    void lukittu(QString);
    void getCardInfo(QString);
    QString returnResponseData();

private:
    QNetworkAccessManager *ManageNosto;
    QNetworkAccessManager *ManageSaldo;
    QNetworkAccessManager *ManageTilitapahtumat;
    QNetworkAccessManager *ManageTenActions;
    QNetworkAccessManager *ManageCardInfo;
    QNetworkAccessManager *ManageIdTili;
    QNetworkAccessManager *ManageIdAsiakas;
    QNetworkAccessManager *ManageLukittu;

    QNetworkReply *reply;
    QByteArray response_data;

private slots:
    void nostoSlot (QNetworkReply *reply);
    void saldoSlot (QNetworkReply *reply);
    void tilitapahtumatSlot (QNetworkReply *reply);
    void idAsiakasSlot(QNetworkReply *reply);
    void idTiliSlot(QNetworkReply *reply);
    void cardInfoSlot(QNetworkReply *reply);
    void lukittuSlot(QNetworkReply *reply);




signals:
    void saldoSignal(QString);
    void tilitapahtumatSignal(QString);
    void sendNostoSignal();
    void nimiEXE(QString);
    void nostoReady();
    void idAsiakasSignaltoExe(QString);
    void idTiliSignalToExe(QString);
    void cardInfoSignalToExe(QString);
    void lukittuReady();
};

#endif // RESTAPIDLL_H

