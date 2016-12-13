/****************************************************************************
** Meta object code from reading C++ file 'camera_control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "camera_control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_camera_control_t {
    QByteArrayData data[21];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_camera_control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_camera_control_t qt_meta_stringdata_camera_control = {
    {
QT_MOC_LITERAL(0, 0, 14), // "camera_control"
QT_MOC_LITERAL(1, 15, 12), // "change_theta"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "change_theta_s"
QT_MOC_LITERAL(4, 44, 9), // "set_theta"
QT_MOC_LITERAL(5, 54, 10), // "change_phi"
QT_MOC_LITERAL(6, 65, 12), // "change_phi_s"
QT_MOC_LITERAL(7, 78, 7), // "set_phi"
QT_MOC_LITERAL(8, 86, 13), // "update_angles"
QT_MOC_LITERAL(9, 100, 5), // "slice"
QT_MOC_LITERAL(10, 106, 10), // "clearSlice"
QT_MOC_LITERAL(11, 117, 7), // "explode"
QT_MOC_LITERAL(12, 125, 8), // "printPNG"
QT_MOC_LITERAL(13, 134, 8), // "printEPS"
QT_MOC_LITERAL(14, 143, 8), // "printPDF"
QT_MOC_LITERAL(15, 152, 15), // "set_perspective"
QT_MOC_LITERAL(16, 168, 19), // "switch_antialiasing"
QT_MOC_LITERAL(17, 188, 22), // "switch_auxiliary_edges"
QT_MOC_LITERAL(18, 211, 23), // "switch_sides_per_circle"
QT_MOC_LITERAL(19, 235, 15), // "addFieldsArrows"
QT_MOC_LITERAL(20, 251, 8) // "addScale"

    },
    "camera_control\0change_theta\0\0"
    "change_theta_s\0set_theta\0change_phi\0"
    "change_phi_s\0set_phi\0update_angles\0"
    "slice\0clearSlice\0explode\0printPNG\0"
    "printEPS\0printPDF\0set_perspective\0"
    "switch_antialiasing\0switch_auxiliary_edges\0"
    "switch_sides_per_circle\0addFieldsArrows\0"
    "addScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_camera_control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x08 /* Private */,
       3,    1,  112,    2, 0x08 /* Private */,
       4,    1,  115,    2, 0x08 /* Private */,
       5,    1,  118,    2, 0x08 /* Private */,
       6,    1,  121,    2, 0x08 /* Private */,
       7,    1,  124,    2, 0x08 /* Private */,
       8,    0,  127,    2, 0x08 /* Private */,
       9,    0,  128,    2, 0x08 /* Private */,
      10,    0,  129,    2, 0x08 /* Private */,
      11,    1,  130,    2, 0x08 /* Private */,
      12,    0,  133,    2, 0x08 /* Private */,
      13,    0,  134,    2, 0x08 /* Private */,
      14,    0,  135,    2, 0x08 /* Private */,
      15,    1,  136,    2, 0x08 /* Private */,
      16,    1,  139,    2, 0x08 /* Private */,
      17,    1,  142,    2, 0x08 /* Private */,
      18,    1,  145,    2, 0x08 /* Private */,
      19,    0,  148,    2, 0x08 /* Private */,
      20,    0,  149,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void camera_control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        camera_control *_t = static_cast<camera_control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->change_theta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->change_theta_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_theta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->change_phi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->change_phi_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_phi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->update_angles(); break;
        case 7: _t->slice(); break;
        case 8: _t->clearSlice(); break;
        case 9: _t->explode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->printPNG(); break;
        case 11: _t->printEPS(); break;
        case 12: _t->printPDF(); break;
        case 13: _t->set_perspective((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->switch_antialiasing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->switch_auxiliary_edges((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->switch_sides_per_circle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->addFieldsArrows(); break;
        case 18: _t->addScale(); break;
        default: ;
        }
    }
}

const QMetaObject camera_control::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_camera_control.data,
      qt_meta_data_camera_control,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *camera_control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *camera_control::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_camera_control.stringdata0))
        return static_cast<void*>(const_cast< camera_control*>(this));
    return QWidget::qt_metacast(_clname);
}

int camera_control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
