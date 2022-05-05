#include "restapidll.h"

#include <QDebug>
#include <QJsonObject>

Restapidll::Restapidll(QObject *parent) : QObject(parent)
{
    qDebug() <<"restapi muodostin";
}

Restapidll::~Restapidll()
{
    qDebug() << "restapi tuhoajassa";
}


void Restapidll::saldo(QString id)
{
    QString site_url="http://localhost:3000/tili/saldo";
    site_url.append(id);
    qDebug()<<site_url;
    QNetworkRequest request((site_url));
    ManageSaldo = new QNetworkAccessManager(this);
    connect(ManageSaldo,SIGNAL(finished(QNetworkReply*)),
            this,SLOT(saldoSlot(QNetworkReply*)));
    reply = ManageSaldo->get(request);
}

void Restapidll::saldoSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<"readDATA:"+response_data;
    QJsonDocument json_doc=QJsonDocument::fromJson(response_data);
    QJsonArray json_array=json_doc.array();
    QString saldo;
    foreach(const QJsonValue &value,json_array){
        QJsonObject json_obj =value.toObject();
        saldo+=QString::number(json_obj["saldo"].toDouble());
        emit saldoSignal(saldo);
    }
    QString Enimi;
    foreach(const QJsonValue &value,json_array){
        QJsonObject json_obj=value.toObject();
        Enimi+=json_obj["nimi"].toString();
        emit nimiEXE(Enimi);
    }
    reply->deleteLater();
    ManageSaldo->deleteLater();
}
void Restapidll::tilitapahtumat(QString id)
{
    QString site_url="http://localhost:3000/tilitapahtumat/";
    site_url.append(id);
    qDebug()<<site_url;
    QNetworkRequest request((site_url));
    ManageTilitapahtumat = new QNetworkAccessManager(this);
    connect(ManageTilitapahtumat, SIGNAL(finished(QNetworkReply*)),
            this,SLOT(tilitapahtumatSlot(QNetworkReply*)));
    reply = ManageTilitapahtumat->get(request);

}
void Restapidll::tilitapahtumatSlot(QNetworkReply *reply)
{
    qDebug()<< "tilitapahtumatSlot()+DATA";
    response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString tilitapahtumat;
    foreach (const QJsonValue &value, json_array){
        QJsonObject json_obj =value.toObject();
        tilitapahtumat+=QString::number((json_obj["idAsiakas"].toInt()))+json_obj["tilitapahtuma"].toString()+" "+QString::number(json_obj["summa"].toDouble())+"€ "+json_obj["tilitapahtuma_aika"].toString().remove(20,25)+"\r";
        emit tilitapahtumatSignal(tilitapahtumat);
    }
    reply->deleteLater();
    ManageTilitapahtumat->deleteLater();
}

void Restapidll::nosto(QString idTili, QString idAsiakas, QString summa)
{
    qDebug()<<"nosto in DLL tili->"<<idTili<<":asiakas->"<<idAsiakas<<"summa:"<<summa;
    QJsonObject jsonObj;
    jsonObj.insert("Tili", idTili);
    jsonObj.insert("asiakas", idAsiakas);
    jsonObj.insert("summa",summa); //nosto summa
    QString site_url="http://localhost:3000/tilitapahtumat/";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/json");
    ManageNosto =new QNetworkAccessManager(this);
    connect(ManageNosto, SIGNAL(finished(QNetworkReply*)),
            this,SLOT(nostoSlot(QNetworkReply*)));
    reply = ManageNosto->post(request,QJsonDocument(jsonObj).toJson());
}

void Restapidll::nostoSlot(QNetworkReply *reply)
{
    qDebug()<<"nostoSlot()";
    emit nostoReady();
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    ManageNosto->deleteLater();
}

void Restapidll::idAsiakas(QString kortti)
{
    qDebug()<< "idAsiakas()";
    QString site_url="http://localhost:3000/tilitapahtumat/";
    site_url.append(kortti);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    ManageIdAsiakas = new QNetworkAccessManager(this);
    connect(ManageIdAsiakas, SIGNAL(finished (QNetworkReply*)), this, SLOT(idAsiakasSlot(QNetworkReply*)));
    reply = ManageIdAsiakas->get(request);
}

void Restapidll::idAsiakasSlot(QNetworkReply *reply)
{
    qDebug()<< "idAsiakasSlot()";
    response_data=reply->readAll();
     qDebug()<<"DATA idAsiakasSlot: "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString clientID;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        clientID+= QString::number((json_obj["idAsiakas"].toInt()));
        emit idAsiakasSignaltoExe(clientID);
     }
     reply->deleteLater();
     ManageIdAsiakas->deleteLater();
}


QString Restapidll::returnResponseData()
{
    return response_data;
}

void Restapidll::idTili(QString kortti)
{
    qDebug()<< "idTili()";
    QString site_url="http://localhost:3000/actions/tili_idTili/";
    site_url.append(kortti);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    ManageIdTili = new QNetworkAccessManager(this);
    connect(ManageIdTili, SIGNAL(finished (QNetworkReply*)), this, SLOT(idTiliSlot(QNetworkReply*)));
    reply = ManageIdTili->get(request);
}

void Restapidll::idTiliSlot(QNetworkReply *reply)
{
    qDebug()<< "idTiliSlot()";
    response_data=reply->readAll();
     qDebug()<<"DATA idTiliSlot: "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString accountID;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        accountID+= QString::number((json_obj["tili"].toInt()));
        emit idTiliSignalToExe(accountID);
     }
     reply->deleteLater();
     ManageIdTili->deleteLater();
}

void Restapidll::getCardInfo(QString kortti)
{
    qDebug()<< "getCardInfo()";
    QString site_url="http://localhost:3000/kortti/kortinnumero/";
    site_url.append(kortti);
    qDebug() << site_url;
    QNetworkRequest request((site_url));
    ManageCardInfo = new QNetworkAccessManager(this);
    connect(ManageCardInfo, SIGNAL(finished (QNetworkReply*)), this, SLOT(cardInfoSlot(QNetworkReply*)));
    reply = ManageCardInfo->get(request);
}

void Restapidll::cardInfoSlot(QNetworkReply *reply)
{
     qDebug()<< "cardInfoSlot() in DLL";
     response_data=reply->readAll();
     qDebug()<<"DATA: "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString card;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        card+= QString::number((json_obj["lukittu"].toInt()));
        qDebug()<< "cardInfoSlot() in DLL INFO:->" << card;
        emit cardInfoSignalToExe(card);
     }
     reply->deleteLater();
     ManageCardInfo->deleteLater();
}

void Restapidll::lukittu(QString kortinnumero)
{
    qDebug()<< "cardLock in DLL cardnumber->" <<kortinnumero;
    QJsonObject jsonObj;
    jsonObj.insert("lukittu", "1");
    jsonObj.insert("kortinnumero", kortinnumero);
    QString site_url="http://localhost:3000/kortti/lukittu";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    ManageLukittu = new QNetworkAccessManager(this);
    connect(ManageLukittu, SIGNAL(finished (QNetworkReply*)),
            this, SLOT(cardLockSlot(QNetworkReply*)));
    reply = ManageLukittu->post(request, QJsonDocument(jsonObj).toJson());
}

void Restapidll::lukittuSlot(QNetworkReply *reply)
{
    qDebug()<< "cardLockSlot()";
    emit lukittuReady();
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    ManageLukittu->deleteLater();
}
