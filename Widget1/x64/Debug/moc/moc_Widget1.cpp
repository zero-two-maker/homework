/****************************************************************************
** Meta object code from reading C++ file 'Widget1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Widget1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widget1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget1_t {
    QByteArrayData data[8];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget1_t qt_meta_stringdata_Widget1 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Widget1"
QT_MOC_LITERAL(1, 8, 14), // "show_mainManue"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "on_exitbtn_clicked"
QT_MOC_LITERAL(4, 43, 20), // "on_lessonbtn_clicked"
QT_MOC_LITERAL(5, 64, 12), // "my_show_slot"
QT_MOC_LITERAL(6, 77, 22), // "on_homeworkbtn_clicked"
QT_MOC_LITERAL(7, 100, 23) // "on_showscorebtn_clicked"

    },
    "Widget1\0show_mainManue\0\0on_exitbtn_clicked\0"
    "on_lessonbtn_clicked\0my_show_slot\0"
    "on_homeworkbtn_clicked\0on_showscorebtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_mainManue(); break;
        case 1: _t->on_exitbtn_clicked(); break;
        case 2: _t->on_lessonbtn_clicked(); break;
        case 3: _t->my_show_slot(); break;
        case 4: _t->on_homeworkbtn_clicked(); break;
        case 5: _t->on_showscorebtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget1::show_mainManue)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Widget1::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget1.data,
    qt_meta_data_Widget1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Widget1::show_mainManue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
