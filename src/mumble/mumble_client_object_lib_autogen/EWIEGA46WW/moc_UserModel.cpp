/****************************************************************************
** Meta object code from reading C++ file 'UserModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UserModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserModel_t {
    QByteArrayData data[19];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserModel_t qt_meta_stringdata_UserModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UserModel"
QT_MOC_LITERAL(1, 10, 9), // "userAdded"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "userSessionID"
QT_MOC_LITERAL(4, 35, 11), // "userRemoved"
QT_MOC_LITERAL(5, 47, 12), // "channelAdded"
QT_MOC_LITERAL(6, 60, 9), // "channelID"
QT_MOC_LITERAL(7, 70, 14), // "channelRemoved"
QT_MOC_LITERAL(8, 85, 14), // "channelRenamed"
QT_MOC_LITERAL(9, 100, 16), // "userStateChanged"
QT_MOC_LITERAL(10, 117, 46), // "on_channelListenerLocalVolume..."
QT_MOC_LITERAL(11, 164, 8), // "oldValue"
QT_MOC_LITERAL(12, 173, 8), // "newValue"
QT_MOC_LITERAL(13, 182, 17), // "ensureSelfVisible"
QT_MOC_LITERAL(14, 200, 12), // "recheckLinks"
QT_MOC_LITERAL(15, 213, 13), // "updateOverlay"
QT_MOC_LITERAL(16, 227, 17), // "forceVisualUpdate"
QT_MOC_LITERAL(17, 245, 8), // "Channel*"
QT_MOC_LITERAL(18, 254, 1) // "c"

    },
    "UserModel\0userAdded\0\0userSessionID\0"
    "userRemoved\0channelAdded\0channelID\0"
    "channelRemoved\0channelRenamed\0"
    "userStateChanged\0"
    "on_channelListenerLocalVolumeAdjustmentChanged\0"
    "oldValue\0newValue\0ensureSelfVisible\0"
    "recheckLinks\0updateOverlay\0forceVisualUpdate\0"
    "Channel*\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,
       8,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   89,    2, 0x0a /* Public */,
      10,    3,   90,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,
      14,    0,   98,    2, 0x0a /* Public */,
      15,    0,   99,    2, 0x0a /* Public */,
      16,    1,  100,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float,    6,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void UserModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userAdded((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->userRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->channelAdded((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->channelRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->channelRenamed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->userStateChanged(); break;
        case 6: _t->on_channelListenerLocalVolumeAdjustmentChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->ensureSelfVisible(); break;
        case 8: _t->recheckLinks(); break;
        case 9: _t->updateOverlay(); break;
        case 10: _t->forceVisualUpdate((*reinterpret_cast< Channel*(*)>(_a[1]))); break;
        case 11: _t->forceVisualUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserModel::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::userAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserModel::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::userRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserModel::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::channelAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserModel::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::channelRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserModel::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserModel::channelRenamed)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserModel::staticMetaObject = { {
    &QAbstractItemModel::staticMetaObject,
    qt_meta_stringdata_UserModel.data,
    qt_meta_data_UserModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int UserModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UserModel::userAdded(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserModel::userRemoved(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserModel::channelAdded(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UserModel::channelRemoved(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UserModel::channelRenamed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
