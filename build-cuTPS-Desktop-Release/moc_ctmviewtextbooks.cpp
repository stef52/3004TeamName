/****************************************************************************
** Meta object code from reading C++ file 'ctmviewtextbooks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cuTPS/ctmviewtextbooks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctmviewtextbooks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CTMViewTextbooks_t {
    QByteArrayData data[6];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CTMViewTextbooks_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CTMViewTextbooks_t qt_meta_stringdata_CTMViewTextbooks = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 24),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 11),
QT_MOC_LITERAL(4, 55, 23),
QT_MOC_LITERAL(5, 79, 21)
    },
    "CTMViewTextbooks\0on_pushButton_16_clicked\0"
    "\0showDetails\0on_pushButton_3_clicked\0"
    "on_pushButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTMViewTextbooks[] = {

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
       1,    0,   34,    2, 0x08,
       3,    1,   35,    2, 0x08,
       4,    0,   38,    2, 0x08,
       5,    0,   39,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CTMViewTextbooks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CTMViewTextbooks *_t = static_cast<CTMViewTextbooks *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_16_clicked(); break;
        case 1: _t->showDetails((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CTMViewTextbooks::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CTMViewTextbooks.data,
      qt_meta_data_CTMViewTextbooks,  qt_static_metacall, 0, 0}
};


const QMetaObject *CTMViewTextbooks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTMViewTextbooks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTMViewTextbooks.stringdata))
        return static_cast<void*>(const_cast< CTMViewTextbooks*>(this));
    return QWidget::qt_metacast(_clname);
}

int CTMViewTextbooks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
