/****************************************************************************
** Meta object code from reading C++ file 'AudioInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AudioInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioInput_t {
    QByteArrayData data[13];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioInput_t qt_meta_stringdata_AudioInput = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AudioInput"
QT_MOC_LITERAL(1, 11, 6), // "doDeaf"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "doMute"
QT_MOC_LITERAL(4, 26, 9), // "doMuteCue"
QT_MOC_LITERAL(5, 36, 21), // "audioInputEncountered"
QT_MOC_LITERAL(6, 58, 6), // "short*"
QT_MOC_LITERAL(7, 65, 8), // "inputPCM"
QT_MOC_LITERAL(8, 74, 11), // "sampleCount"
QT_MOC_LITERAL(9, 86, 12), // "channelCount"
QT_MOC_LITERAL(10, 99, 10), // "sampleRate"
QT_MOC_LITERAL(11, 110, 8), // "isSpeech"
QT_MOC_LITERAL(12, 119, 26) // "onUserMuteDeafStateChanged"

    },
    "AudioInput\0doDeaf\0\0doMute\0doMuteCue\0"
    "audioInputEncountered\0short*\0inputPCM\0"
    "sampleCount\0channelCount\0sampleRate\0"
    "isSpeech\0onUserMuteDeafStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioInput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    5,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool,    7,    8,    9,   10,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AudioInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doDeaf(); break;
        case 1: _t->doMute(); break;
        case 2: _t->doMuteCue(); break;
        case 3: _t->audioInputEncountered((*reinterpret_cast< short*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 4: _t->onUserMuteDeafStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioInput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInput::doDeaf)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioInput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInput::doMute)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioInput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInput::doMuteCue)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioInput::*)(short * , unsigned int , unsigned int , unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInput::audioInputEncountered)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioInput::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_AudioInput.data,
    qt_meta_data_AudioInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioInput.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int AudioInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AudioInput::doDeaf()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioInput::doMute()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AudioInput::doMuteCue()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AudioInput::audioInputEncountered(short * _t1, unsigned int _t2, unsigned int _t3, unsigned int _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
