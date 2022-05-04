/****************************************************************************
** Meta object code from reading C++ file 'restapi1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../restapi1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restapi1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RestApi1_t {
    QByteArrayData data[18];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RestApi1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RestApi1_t qt_meta_stringdata_RestApi1 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RestApi1"
QT_MOC_LITERAL(1, 9, 11), // "saldoSignal"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 20), // "tilitapahtumatSignal"
QT_MOC_LITERAL(4, 43, 15), // "sendNostoSignal"
QT_MOC_LITERAL(5, 59, 11), // "loginSignal"
QT_MOC_LITERAL(6, 71, 7), // "nimiEXE"
QT_MOC_LITERAL(7, 79, 10), // "nostoReady"
QT_MOC_LITERAL(8, 90, 9), // "nostoSlot"
QT_MOC_LITERAL(9, 100, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 115, 5), // "reply"
QT_MOC_LITERAL(11, 121, 9), // "saldoSlot"
QT_MOC_LITERAL(12, 131, 18), // "tilitapahtumatSlot"
QT_MOC_LITERAL(13, 150, 13), // "tenActionSlot"
QT_MOC_LITERAL(14, 164, 12), // "cardInfoSlot"
QT_MOC_LITERAL(15, 177, 10), // "cardIdSlot"
QT_MOC_LITERAL(16, 188, 13), // "accountIdSlot"
QT_MOC_LITERAL(17, 202, 11) // "lukittuSlot"

    },
    "RestApi1\0saldoSignal\0\0tilitapahtumatSignal\0"
    "sendNostoSignal\0loginSignal\0nimiEXE\0"
    "nostoReady\0nostoSlot\0QNetworkReply*\0"
    "reply\0saldoSlot\0tilitapahtumatSlot\0"
    "tenActionSlot\0cardInfoSlot\0cardIdSlot\0"
    "accountIdSlot\0lukittuSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RestApi1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    0,   90,    2, 0x06 /* Public */,
       5,    1,   91,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       7,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      15,    1,  113,    2, 0x08 /* Private */,
      16,    1,  116,    2, 0x08 /* Private */,
      17,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void RestApi1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RestApi1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saldoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->tilitapahtumatSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendNostoSignal(); break;
        case 3: _t->loginSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->nimiEXE((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->nostoReady(); break;
        case 6: _t->nostoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->saldoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->tilitapahtumatSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->tenActionSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->cardInfoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->cardIdSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->accountIdSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->lukittuSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RestApi1::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestApi1::saldoSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RestApi1::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestApi1::tilitapahtumatSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RestApi1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestApi1::sendNostoSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RestApi1::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestApi1::loginSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RestApi1::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestApi1::nimiEXE)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RestApi1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RestApi1::nostoReady)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RestApi1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RestApi1.data,
    qt_meta_data_RestApi1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RestApi1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RestApi1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RestApi1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RestApi1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void RestApi1::saldoSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RestApi1::tilitapahtumatSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RestApi1::sendNostoSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RestApi1::loginSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RestApi1::nimiEXE(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RestApi1::nostoReady()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
