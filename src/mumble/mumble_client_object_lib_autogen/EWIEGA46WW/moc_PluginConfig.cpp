/****************************************************************************
** Meta object code from reading C++ file 'PluginConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PluginConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginConfig_t {
    QByteArrayData data[18];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginConfig_t qt_meta_stringdata_PluginConfig = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PluginConfig"
QT_MOC_LITERAL(1, 13, 4), // "save"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "load"
QT_MOC_LITERAL(4, 24, 8), // "Settings"
QT_MOC_LITERAL(5, 33, 1), // "r"
QT_MOC_LITERAL(6, 35, 27), // "on_qpbInstallPlugin_clicked"
QT_MOC_LITERAL(7, 63, 20), // "on_qpbConfig_clicked"
QT_MOC_LITERAL(8, 84, 19), // "on_qpbAbout_clicked"
QT_MOC_LITERAL(9, 104, 20), // "on_qpbReload_clicked"
QT_MOC_LITERAL(10, 125, 20), // "on_qpbUnload_clicked"
QT_MOC_LITERAL(11, 146, 32), // "on_qtwPlugins_currentItemChanged"
QT_MOC_LITERAL(12, 179, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 196, 7), // "current"
QT_MOC_LITERAL(14, 204, 3), // "old"
QT_MOC_LITERAL(15, 208, 25), // "on_qtwPlugins_itemChanged"
QT_MOC_LITERAL(16, 234, 4), // "item"
QT_MOC_LITERAL(17, 239, 6) // "column"

    },
    "PluginConfig\0save\0\0load\0Settings\0r\0"
    "on_qpbInstallPlugin_clicked\0"
    "on_qpbConfig_clicked\0on_qpbAbout_clicked\0"
    "on_qpbReload_clicked\0on_qpbUnload_clicked\0"
    "on_qtwPlugins_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0old\0"
    "on_qtwPlugins_itemChanged\0item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,
      11,    2,   68,    2, 0x0a /* Public */,
      15,    2,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   16,   17,

       0        // eod
};

void PluginConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->load((*reinterpret_cast< const Settings(*)>(_a[1]))); break;
        case 2: _t->on_qpbInstallPlugin_clicked(); break;
        case 3: _t->on_qpbConfig_clicked(); break;
        case 4: _t->on_qpbAbout_clicked(); break;
        case 5: _t->on_qpbReload_clicked(); break;
        case 6: _t->on_qpbUnload_clicked(); break;
        case 7: _t->on_qtwPlugins_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->on_qtwPlugins_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PluginConfig::staticMetaObject = { {
    &ConfigWidget::staticMetaObject,
    qt_meta_stringdata_PluginConfig.data,
    qt_meta_data_PluginConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PluginConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginConfig.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PluginConfig"))
        return static_cast< Ui::PluginConfig*>(this);
    return ConfigWidget::qt_metacast(_clname);
}

int PluginConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
