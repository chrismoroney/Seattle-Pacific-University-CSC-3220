/****************************************************************************
** Meta object code from reading C++ file 'connect4app.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Connect4App/connect4app.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connect4app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_connect4App_t {
    QByteArrayData data[10];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_connect4App_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_connect4App_t qt_meta_stringdata_connect4App = {
    {
QT_MOC_LITERAL(0, 0, 11), // "connect4App"
QT_MOC_LITERAL(1, 12, 29), // "on_instructionsButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "on_firstColButton_clicked"
QT_MOC_LITERAL(4, 69, 26), // "on_secondColButton_clicked"
QT_MOC_LITERAL(5, 96, 25), // "on_thirdColButton_clicked"
QT_MOC_LITERAL(6, 122, 26), // "on_fourthColButton_clicked"
QT_MOC_LITERAL(7, 149, 25), // "on_fifthColButton_clicked"
QT_MOC_LITERAL(8, 175, 25), // "on_sixthButtonCol_clicked"
QT_MOC_LITERAL(9, 201, 27) // "on_seventhColButton_clicked"

    },
    "connect4App\0on_instructionsButton_clicked\0"
    "\0on_firstColButton_clicked\0"
    "on_secondColButton_clicked\0"
    "on_thirdColButton_clicked\0"
    "on_fourthColButton_clicked\0"
    "on_fifthColButton_clicked\0"
    "on_sixthButtonCol_clicked\0"
    "on_seventhColButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_connect4App[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void connect4App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<connect4App *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_instructionsButton_clicked(); break;
        case 1: _t->on_firstColButton_clicked(); break;
        case 2: _t->on_secondColButton_clicked(); break;
        case 3: _t->on_thirdColButton_clicked(); break;
        case 4: _t->on_fourthColButton_clicked(); break;
        case 5: _t->on_fifthColButton_clicked(); break;
        case 6: _t->on_sixthButtonCol_clicked(); break;
        case 7: _t->on_seventhColButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject connect4App::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_connect4App.data,
    qt_meta_data_connect4App,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *connect4App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *connect4App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_connect4App.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int connect4App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
