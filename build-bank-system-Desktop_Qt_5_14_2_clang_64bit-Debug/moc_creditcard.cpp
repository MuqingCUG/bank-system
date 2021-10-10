/****************************************************************************
** Meta object code from reading C++ file 'creditcard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../bank-system/creditcard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'creditcard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreditCard_t {
    QByteArrayData data[11];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreditCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreditCard_t qt_meta_stringdata_CreditCard = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CreditCard"
QT_MOC_LITERAL(1, 11, 25), // "on_Cardnumber_textChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "on_Name_textChanged"
QT_MOC_LITERAL(4, 58, 17), // "on_ID_textChanged"
QT_MOC_LITERAL(5, 76, 22), // "on_Address_textChanged"
QT_MOC_LITERAL(6, 99, 25), // "on_Dialnumber_textChanged"
QT_MOC_LITERAL(7, 125, 21), // "on_Passwd_textChanged"
QT_MOC_LITERAL(8, 147, 24), // "on_overdraft_textChanged"
QT_MOC_LITERAL(9, 172, 15), // "on_save_clicked"
QT_MOC_LITERAL(10, 188, 15) // "on_exit_clicked"

    },
    "CreditCard\0on_Cardnumber_textChanged\0"
    "\0on_Name_textChanged\0on_ID_textChanged\0"
    "on_Address_textChanged\0on_Dialnumber_textChanged\0"
    "on_Passwd_textChanged\0on_overdraft_textChanged\0"
    "on_save_clicked\0on_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreditCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CreditCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreditCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Cardnumber_textChanged(); break;
        case 1: _t->on_Name_textChanged(); break;
        case 2: _t->on_ID_textChanged(); break;
        case 3: _t->on_Address_textChanged(); break;
        case 4: _t->on_Dialnumber_textChanged(); break;
        case 5: _t->on_Passwd_textChanged(); break;
        case 6: _t->on_overdraft_textChanged(); break;
        case 7: _t->on_save_clicked(); break;
        case 8: _t->on_exit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CreditCard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CreditCard.data,
    qt_meta_data_CreditCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreditCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreditCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreditCard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CreditCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
