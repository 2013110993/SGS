/****************************************************************************
** Meta object code from reading C++ file 'activate_deactivateuser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SGS-FINAL-PROJECT/activate_deactivateuser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activate_deactivateuser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Activate_DeactivateUser_t {
    QByteArrayData data[6];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Activate_DeactivateUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Activate_DeactivateUser_t qt_meta_stringdata_Activate_DeactivateUser = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Activate_DeactivateUser"
QT_MOC_LITERAL(1, 24, 33), // "on_accountLostResetButton_cli..."
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 30), // "on_lectureSearchButton_clicked"
QT_MOC_LITERAL(4, 90, 30), // "on_activateResetButton_clicked"
QT_MOC_LITERAL(5, 121, 33) // "on_disactivateResetButton_cli..."

    },
    "Activate_DeactivateUser\0"
    "on_accountLostResetButton_clicked\0\0"
    "on_lectureSearchButton_clicked\0"
    "on_activateResetButton_clicked\0"
    "on_disactivateResetButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Activate_DeactivateUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Activate_DeactivateUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Activate_DeactivateUser *_t = static_cast<Activate_DeactivateUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_accountLostResetButton_clicked(); break;
        case 1: _t->on_lectureSearchButton_clicked(); break;
        case 2: _t->on_activateResetButton_clicked(); break;
        case 3: _t->on_disactivateResetButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Activate_DeactivateUser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Activate_DeactivateUser.data,
      qt_meta_data_Activate_DeactivateUser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Activate_DeactivateUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Activate_DeactivateUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Activate_DeactivateUser.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Activate_DeactivateUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
