/****************************************************************************
** Meta object code from reading C++ file 'drawmoney.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../drawmoney.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawmoney.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Drawmoney_t {
    QByteArrayData data[20];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Drawmoney_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Drawmoney_t qt_meta_stringdata_Drawmoney = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Drawmoney"
QT_MOC_LITERAL(1, 10, 11), // "updateSaldo"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "mainTimerSignal"
QT_MOC_LITERAL(4, 39, 15), // "on_Draw_clicked"
QT_MOC_LITERAL(5, 55, 16), // "on_Close_clicked"
QT_MOC_LITERAL(6, 72, 17), // "on_Draw20_clicked"
QT_MOC_LITERAL(7, 90, 17), // "on_Draw40_clicked"
QT_MOC_LITERAL(8, 108, 17), // "on_Draw60_clicked"
QT_MOC_LITERAL(9, 126, 18), // "on_Draw100_clicked"
QT_MOC_LITERAL(10, 145, 18), // "on_Draw200_clicked"
QT_MOC_LITERAL(11, 164, 18), // "on_Draw500_clicked"
QT_MOC_LITERAL(12, 183, 24), // "recvIdAsiakasInDrawMoney"
QT_MOC_LITERAL(13, 208, 19), // "recvWithdrawalReady"
QT_MOC_LITERAL(14, 228, 9), // "recvSaldo"
QT_MOC_LITERAL(15, 238, 21), // "recvIdTiliInDrawMoney"
QT_MOC_LITERAL(16, 260, 19), // "startDrawMoneyTimer"
QT_MOC_LITERAL(17, 280, 17), // "drawMoneyIdleSlot"
QT_MOC_LITERAL(18, 298, 12), // "clearWarning"
QT_MOC_LITERAL(19, 311, 12) // "recvCardMode"

    },
    "Drawmoney\0updateSaldo\0\0mainTimerSignal\0"
    "on_Draw_clicked\0on_Close_clicked\0"
    "on_Draw20_clicked\0on_Draw40_clicked\0"
    "on_Draw60_clicked\0on_Draw100_clicked\0"
    "on_Draw200_clicked\0on_Draw500_clicked\0"
    "recvIdAsiakasInDrawMoney\0recvWithdrawalReady\0"
    "recvSaldo\0recvIdTiliInDrawMoney\0"
    "startDrawMoneyTimer\0drawMoneyIdleSlot\0"
    "clearWarning\0recvCardMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drawmoney[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    1,  114,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    1,  118,    2, 0x0a /* Public */,
      15,    1,  121,    2, 0x0a /* Public */,
      16,    0,  124,    2, 0x0a /* Public */,
      17,    0,  125,    2, 0x0a /* Public */,
      18,    0,  126,    2, 0x0a /* Public */,
      19,    1,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Drawmoney::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Drawmoney *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSaldo(); break;
        case 1: _t->mainTimerSignal(); break;
        case 2: _t->on_Draw_clicked(); break;
        case 3: _t->on_Close_clicked(); break;
        case 4: _t->on_Draw20_clicked(); break;
        case 5: _t->on_Draw40_clicked(); break;
        case 6: _t->on_Draw60_clicked(); break;
        case 7: _t->on_Draw100_clicked(); break;
        case 8: _t->on_Draw200_clicked(); break;
        case 9: _t->on_Draw500_clicked(); break;
        case 10: _t->recvIdAsiakasInDrawMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->recvWithdrawalReady(); break;
        case 12: _t->recvSaldo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->recvIdTiliInDrawMoney((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->startDrawMoneyTimer(); break;
        case 15: _t->drawMoneyIdleSlot(); break;
        case 16: _t->clearWarning(); break;
        case 17: _t->recvCardMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Drawmoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drawmoney::updateSaldo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Drawmoney::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Drawmoney::mainTimerSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Drawmoney::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Drawmoney.data,
    qt_meta_data_Drawmoney,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Drawmoney::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Drawmoney::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Drawmoney.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Drawmoney::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Drawmoney::updateSaldo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Drawmoney::mainTimerSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
