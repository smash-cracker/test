/****************************************************************************
** Meta object code from reading C++ file 'Overlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Overlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Overlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverlayPrivate_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverlayPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverlayPrivate_t qt_meta_stringdata_OverlayPrivate = {
    {
QT_MOC_LITERAL(0, 0, 14) // "OverlayPrivate"

    },
    "OverlayPrivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverlayPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OverlayPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OverlayPrivate::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OverlayPrivate.data,
    qt_meta_data_OverlayPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverlayPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverlayPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OverlayPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Overlay_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Overlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Overlay_t qt_meta_stringdata_Overlay = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Overlay"
QT_MOC_LITERAL(1, 8, 12), // "disconnected"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "error"
QT_MOC_LITERAL(4, 28, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(5, 59, 13), // "newConnection"
QT_MOC_LITERAL(6, 73, 13), // "updateOverlay"
QT_MOC_LITERAL(7, 87, 9), // "setActive"
QT_MOC_LITERAL(8, 97, 3), // "act"
QT_MOC_LITERAL(9, 101, 10), // "toggleShow"
QT_MOC_LITERAL(10, 112, 13) // "forceSettings"

    },
    "Overlay\0disconnected\0\0error\0"
    "QLocalSocket::LocalSocketError\0"
    "newConnection\0updateOverlay\0setActive\0"
    "act\0toggleShow\0forceSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Overlay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    1,   50,    2, 0x09 /* Protected */,
       5,    0,   53,    2, 0x09 /* Protected */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Overlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Overlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disconnected(); break;
        case 1: _t->error((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 2: _t->newConnection(); break;
        case 3: _t->updateOverlay(); break;
        case 4: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleShow(); break;
        case 6: _t->forceSettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Overlay::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Overlay.data,
    qt_meta_data_Overlay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Overlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Overlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Overlay.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Overlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
