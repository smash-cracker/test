/****************************************************************************
** Meta object code from reading C++ file 'ChannelListenerManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ChannelListenerManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChannelListenerManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChannelListenerManager_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChannelListenerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChannelListenerManager_t qt_meta_stringdata_ChannelListenerManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ChannelListenerManager"
QT_MOC_LITERAL(1, 23, 29), // "localVolumeAdjustmentsChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 9), // "channelID"
QT_MOC_LITERAL(4, 64, 13), // "newAdjustment"
QT_MOC_LITERAL(5, 78, 13) // "oldAdjustment"

    },
    "ChannelListenerManager\0"
    "localVolumeAdjustmentsChanged\0\0channelID\0"
    "newAdjustment\0oldAdjustment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelListenerManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float,    3,    4,    5,

       0        // eod
};

void ChannelListenerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelListenerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localVolumeAdjustmentsChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelListenerManager::*)(unsigned int , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelListenerManager::localVolumeAdjustmentsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChannelListenerManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ChannelListenerManager.data,
    qt_meta_data_ChannelListenerManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChannelListenerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelListenerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelListenerManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChannelListenerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ChannelListenerManager::localVolumeAdjustmentsChanged(unsigned int _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
