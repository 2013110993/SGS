/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SGS-FINAL-PROJECT/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[16];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 27), // "on_signUpNextButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "on_backSignUpButton_clicked"
QT_MOC_LITERAL(4, 66, 29), // "on_cancelSignUpButton_clicked"
QT_MOC_LITERAL(5, 96, 29), // "on_studentRadioButton_clicked"
QT_MOC_LITERAL(6, 126, 30), // "on_lecturerRadioButton_clicked"
QT_MOC_LITERAL(7, 157, 34), // "on_middleNamecheckBox_stateCh..."
QT_MOC_LITERAL(8, 192, 4), // "arg1"
QT_MOC_LITERAL(9, 197, 23), // "on_signUpButton_clicked"
QT_MOC_LITERAL(10, 221, 15), // "recieveQuestion"
QT_MOC_LITERAL(11, 237, 9), // "QSqlQuery"
QT_MOC_LITERAL(12, 247, 43), // "on_registerTableWidget_Progra..."
QT_MOC_LITERAL(13, 291, 55), // "on_programSequenceTable_regis..."
QT_MOC_LITERAL(14, 347, 3), // "row"
QT_MOC_LITERAL(15, 351, 6) // "column"

    },
    "Register\0on_signUpNextButton_clicked\0"
    "\0on_backSignUpButton_clicked\0"
    "on_cancelSignUpButton_clicked\0"
    "on_studentRadioButton_clicked\0"
    "on_lecturerRadioButton_clicked\0"
    "on_middleNamecheckBox_stateChanged\0"
    "arg1\0on_signUpButton_clicked\0"
    "recieveQuestion\0QSqlQuery\0"
    "on_registerTableWidget_ProgramSequenceTable\0"
    "on_programSequenceTable_registerTableWidget_cellClicked\0"
    "row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    2,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Register *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_signUpNextButton_clicked(); break;
        case 1: _t->on_backSignUpButton_clicked(); break;
        case 2: _t->on_cancelSignUpButton_clicked(); break;
        case 3: _t->on_studentRadioButton_clicked(); break;
        case 4: _t->on_lecturerRadioButton_clicked(); break;
        case 5: _t->on_middleNamecheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_signUpButton_clicked(); break;
        case 7: _t->recieveQuestion((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 8: _t->on_registerTableWidget_ProgramSequenceTable(); break;
        case 9: _t->on_programSequenceTable_registerTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Register::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Register.data,
      qt_meta_data_Register,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
