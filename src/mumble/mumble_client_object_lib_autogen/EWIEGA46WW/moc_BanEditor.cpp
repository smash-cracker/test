/****************************************************************************
** Meta object code from reading C++ file 'BanEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BanEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BanEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BanEditor_t {
    QByteArrayData data[16];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BanEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BanEditor_t qt_meta_stringdata_BanEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BanEditor"
QT_MOC_LITERAL(1, 10, 6), // "accept"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 28), // "on_qlwBans_currentRowChanged"
QT_MOC_LITERAL(4, 47, 17), // "on_qpbAdd_clicked"
QT_MOC_LITERAL(5, 65, 20), // "on_qpbUpdate_clicked"
QT_MOC_LITERAL(6, 86, 20), // "on_qpbRemove_clicked"
QT_MOC_LITERAL(7, 107, 14), // "refreshBanList"
QT_MOC_LITERAL(8, 122, 26), // "on_qdteEnd_editingFinished"
QT_MOC_LITERAL(9, 149, 19), // "on_qpbClear_clicked"
QT_MOC_LITERAL(10, 169, 22), // "on_qleHash_textChanged"
QT_MOC_LITERAL(11, 192, 24), // "on_qleSearch_textChanged"
QT_MOC_LITERAL(12, 217, 5), // "match"
QT_MOC_LITERAL(13, 223, 24), // "on_qleReason_textChanged"
QT_MOC_LITERAL(14, 248, 20), // "on_qleIP_textChanged"
QT_MOC_LITERAL(15, 269, 22) // "on_qleUser_textChanged"

    },
    "BanEditor\0accept\0\0on_qlwBans_currentRowChanged\0"
    "on_qpbAdd_clicked\0on_qpbUpdate_clicked\0"
    "on_qpbRemove_clicked\0refreshBanList\0"
    "on_qdteEnd_editingFinished\0"
    "on_qpbClear_clicked\0on_qleHash_textChanged\0"
    "on_qleSearch_textChanged\0match\0"
    "on_qleReason_textChanged\0on_qleIP_textChanged\0"
    "on_qleUser_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BanEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void BanEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BanEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_qlwBans_currentRowChanged(); break;
        case 2: _t->on_qpbAdd_clicked(); break;
        case 3: _t->on_qpbUpdate_clicked(); break;
        case 4: _t->on_qpbRemove_clicked(); break;
        case 5: _t->refreshBanList(); break;
        case 6: _t->on_qdteEnd_editingFinished(); break;
        case 7: _t->on_qpbClear_clicked(); break;
        case 8: _t->on_qleHash_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_qleSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_qleReason_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->on_qleIP_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_qleUser_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BanEditor::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_BanEditor.data,
    qt_meta_data_BanEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BanEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BanEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BanEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::BanEditor"))
        return static_cast< Ui::BanEditor*>(this);
    return QDialog::qt_metacast(_clname);
}

int BanEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
