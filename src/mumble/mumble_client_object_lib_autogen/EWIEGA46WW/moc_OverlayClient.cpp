/****************************************************************************
** Meta object code from reading C++ file 'OverlayClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OverlayClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OverlayClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverlayClient_t {
    QByteArrayData data[14];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverlayClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverlayClient_t qt_meta_stringdata_OverlayClient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OverlayClient"
QT_MOC_LITERAL(1, 14, 9), // "readyRead"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "changed"
QT_MOC_LITERAL(4, 33, 13), // "QList<QRectF>"
QT_MOC_LITERAL(5, 47, 6), // "render"
QT_MOC_LITERAL(6, 54, 7), // "showGui"
QT_MOC_LITERAL(7, 62, 7), // "hideGui"
QT_MOC_LITERAL(8, 70, 14), // "scheduleDelete"
QT_MOC_LITERAL(9, 85, 11), // "updateMouse"
QT_MOC_LITERAL(10, 97, 9), // "updateFPS"
QT_MOC_LITERAL(11, 107, 10), // "updateTime"
QT_MOC_LITERAL(12, 118, 6), // "update"
QT_MOC_LITERAL(13, 125, 10) // "openEditor"

    },
    "OverlayClient\0readyRead\0\0changed\0"
    "QList<QRectF>\0render\0showGui\0hideGui\0"
    "scheduleDelete\0updateMouse\0updateFPS\0"
    "updateTime\0update\0openEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverlayClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    1,   70,    2, 0x09 /* Protected */,
       5,    0,   73,    2, 0x09 /* Protected */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void OverlayClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverlayClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->changed((*reinterpret_cast< const QList<QRectF>(*)>(_a[1]))); break;
        case 2: _t->render(); break;
        case 3: _t->showGui(); break;
        case 4: _t->hideGui(); break;
        case 5: _t->scheduleDelete(); break;
        case 6: _t->updateMouse(); break;
        case 7: _t->updateFPS(); break;
        case 8: _t->updateTime(); break;
        case 9: { bool _r = _t->update();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->openEditor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRectF> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverlayClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OverlayClient.data,
    qt_meta_data_OverlayClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverlayClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverlayClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OverlayClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
