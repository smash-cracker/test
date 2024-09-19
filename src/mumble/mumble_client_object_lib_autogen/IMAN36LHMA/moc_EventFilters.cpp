/****************************************************************************
** Meta object code from reading C++ file 'EventFilters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/EventFilters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventFilters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeyEventObserver_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyEventObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyEventObserver_t qt_meta_stringdata_KeyEventObserver = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KeyEventObserver"
QT_MOC_LITERAL(1, 17, 16), // "keyEventObserved"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "KeyEventObserver\0keyEventObserved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyEventObserver[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void KeyEventObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyEventObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyEventObserved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyEventObserver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyEventObserver::keyEventObserved)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KeyEventObserver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_KeyEventObserver.data,
    qt_meta_data_KeyEventObserver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KeyEventObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyEventObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeyEventObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyEventObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KeyEventObserver::keyEventObserved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MouseWheelEventObserver_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MouseWheelEventObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MouseWheelEventObserver_t qt_meta_stringdata_MouseWheelEventObserver = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MouseWheelEventObserver"
QT_MOC_LITERAL(1, 24, 18), // "wheelEventObserved"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5) // "delta"

    },
    "MouseWheelEventObserver\0wheelEventObserved\0"
    "\0delta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseWheelEventObserver[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,

       0        // eod
};

void MouseWheelEventObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MouseWheelEventObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wheelEventObserved((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MouseWheelEventObserver::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MouseWheelEventObserver::wheelEventObserved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MouseWheelEventObserver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MouseWheelEventObserver.data,
    qt_meta_data_MouseWheelEventObserver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MouseWheelEventObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseWheelEventObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MouseWheelEventObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MouseWheelEventObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MouseWheelEventObserver::wheelEventObserved(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MouseClickEventObserver_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MouseClickEventObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MouseClickEventObserver_t qt_meta_stringdata_MouseClickEventObserver = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MouseClickEventObserver"
QT_MOC_LITERAL(1, 24, 18), // "clickEventObserved"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(4, 61, 7) // "buttons"

    },
    "MouseClickEventObserver\0clickEventObserved\0"
    "\0Qt::MouseButtons\0buttons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseClickEventObserver[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MouseClickEventObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MouseClickEventObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickEventObserved((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MouseClickEventObserver::*)(Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MouseClickEventObserver::clickEventObserved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MouseClickEventObserver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MouseClickEventObserver.data,
    qt_meta_data_MouseClickEventObserver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MouseClickEventObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseClickEventObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MouseClickEventObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MouseClickEventObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MouseClickEventObserver::clickEventObserved(Qt::MouseButtons _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_UpDownKeyEventFilter_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpDownKeyEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpDownKeyEventFilter_t qt_meta_stringdata_UpDownKeyEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 20) // "UpDownKeyEventFilter"

    },
    "UpDownKeyEventFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpDownKeyEventFilter[] = {

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

void UpDownKeyEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UpDownKeyEventFilter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UpDownKeyEventFilter.data,
    qt_meta_data_UpDownKeyEventFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpDownKeyEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpDownKeyEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpDownKeyEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpDownKeyEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_OverrideTabOrderFilter_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverrideTabOrderFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverrideTabOrderFilter_t qt_meta_stringdata_OverrideTabOrderFilter = {
    {
QT_MOC_LITERAL(0, 0, 22) // "OverrideTabOrderFilter"

    },
    "OverrideTabOrderFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverrideTabOrderFilter[] = {

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

void OverrideTabOrderFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OverrideTabOrderFilter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_OverrideTabOrderFilter.data,
    qt_meta_data_OverrideTabOrderFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverrideTabOrderFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverrideTabOrderFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverrideTabOrderFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OverrideTabOrderFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SkipFocusEventFilter_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SkipFocusEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SkipFocusEventFilter_t qt_meta_stringdata_SkipFocusEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 20) // "SkipFocusEventFilter"

    },
    "SkipFocusEventFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SkipFocusEventFilter[] = {

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

void SkipFocusEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SkipFocusEventFilter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SkipFocusEventFilter.data,
    qt_meta_data_SkipFocusEventFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SkipFocusEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SkipFocusEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SkipFocusEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SkipFocusEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FocusEventObserver_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FocusEventObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FocusEventObserver_t qt_meta_stringdata_FocusEventObserver = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FocusEventObserver"
QT_MOC_LITERAL(1, 19, 15), // "focusInObserved"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "Qt::FocusReason"
QT_MOC_LITERAL(4, 52, 6), // "reason"
QT_MOC_LITERAL(5, 59, 16) // "focusOutObserved"

    },
    "FocusEventObserver\0focusInObserved\0\0"
    "Qt::FocusReason\0reason\0focusOutObserved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FocusEventObserver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void FocusEventObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FocusEventObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->focusInObserved((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        case 1: _t->focusOutObserved((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FocusEventObserver::*)(Qt::FocusReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FocusEventObserver::focusInObserved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FocusEventObserver::*)(Qt::FocusReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FocusEventObserver::focusOutObserved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FocusEventObserver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FocusEventObserver.data,
    qt_meta_data_FocusEventObserver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FocusEventObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FocusEventObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FocusEventObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FocusEventObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FocusEventObserver::focusInObserved(Qt::FocusReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FocusEventObserver::focusOutObserved(Qt::FocusReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
