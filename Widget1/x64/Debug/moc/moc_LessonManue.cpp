/****************************************************************************
** Meta object code from reading C++ file 'LessonManue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../LessonManue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LessonManue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LessonManue_t {
    QByteArrayData data[11];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LessonManue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LessonManue_t qt_meta_stringdata_LessonManue = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LessonManue"
QT_MOC_LITERAL(1, 12, 17), // "show_teacherManue"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "my_show_slot"
QT_MOC_LITERAL(4, 44, 18), // "on_exitbtn_clicked"
QT_MOC_LITERAL(5, 63, 20), // "on_insertbtn_clicked"
QT_MOC_LITERAL(6, 84, 18), // "on_delebtn_clicked"
QT_MOC_LITERAL(7, 103, 18), // "on_surebtn_clicked"
QT_MOC_LITERAL(8, 122, 20), // "on_cancelbtn_clicked"
QT_MOC_LITERAL(9, 143, 18), // "on_findbtn_clicked"
QT_MOC_LITERAL(10, 162, 21) // "on_showallbtn_clicked"

    },
    "LessonManue\0show_teacherManue\0\0"
    "my_show_slot\0on_exitbtn_clicked\0"
    "on_insertbtn_clicked\0on_delebtn_clicked\0"
    "on_surebtn_clicked\0on_cancelbtn_clicked\0"
    "on_findbtn_clicked\0on_showallbtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LessonManue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LessonManue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LessonManue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_teacherManue(); break;
        case 1: _t->my_show_slot(); break;
        case 2: _t->on_exitbtn_clicked(); break;
        case 3: _t->on_insertbtn_clicked(); break;
        case 4: _t->on_delebtn_clicked(); break;
        case 5: _t->on_surebtn_clicked(); break;
        case 6: _t->on_cancelbtn_clicked(); break;
        case 7: _t->on_findbtn_clicked(); break;
        case 8: _t->on_showallbtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LessonManue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LessonManue::show_teacherManue)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LessonManue::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_LessonManue.data,
    qt_meta_data_LessonManue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LessonManue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LessonManue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LessonManue.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LessonManue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LessonManue::show_teacherManue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE