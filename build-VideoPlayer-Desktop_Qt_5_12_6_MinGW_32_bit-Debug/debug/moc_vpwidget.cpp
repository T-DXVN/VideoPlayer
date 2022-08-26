/****************************************************************************
** Meta object code from reading C++ file 'vpwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VideoPlayer/vpwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vpwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VPWidget_t {
    QByteArrayData data[10];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VPWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VPWidget_t qt_meta_stringdata_VPWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "VPWidget"
QT_MOC_LITERAL(1, 9, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 33), // "on_pushButton_start_pause_cli..."
QT_MOC_LITERAL(4, 71, 26), // "on_pushButton_stop_clicked"
QT_MOC_LITERAL(5, 98, 25), // "on_pushButton_pre_clicked"
QT_MOC_LITERAL(6, 124, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(7, 151, 38), // "on_horizontalSlider_vedio_val..."
QT_MOC_LITERAL(8, 190, 5), // "value"
QT_MOC_LITERAL(9, 196, 32) // "on_horizontalSlider_valueChanged"

    },
    "VPWidget\0on_pushButton_open_clicked\0"
    "\0on_pushButton_start_pause_clicked\0"
    "on_pushButton_stop_clicked\0"
    "on_pushButton_pre_clicked\0"
    "on_pushButton_next_clicked\0"
    "on_horizontalSlider_vedio_valueChanged\0"
    "value\0on_horizontalSlider_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VPWidget[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void VPWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VPWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_open_clicked(); break;
        case 1: _t->on_pushButton_start_pause_clicked(); break;
        case 2: _t->on_pushButton_stop_clicked(); break;
        case 3: _t->on_pushButton_pre_clicked(); break;
        case 4: _t->on_pushButton_next_clicked(); break;
        case 5: _t->on_horizontalSlider_vedio_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VPWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_VPWidget.data,
    qt_meta_data_VPWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VPWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VPWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VPWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VPWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
