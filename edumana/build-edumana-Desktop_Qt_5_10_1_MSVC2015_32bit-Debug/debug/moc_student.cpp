/****************************************************************************
** Meta object code from reading C++ file 'student.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../edumana/inc/student.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_student_t {
    QByteArrayData data[12];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_student_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_student_t qt_meta_stringdata_student = {
    {
QT_MOC_LITERAL(0, 0, 7), // "student"
QT_MOC_LITERAL(1, 8, 30), // "on_button_infor_search_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 30), // "on_button_grade_search_clicked"
QT_MOC_LITERAL(4, 71, 29), // "on_button_roll_search_clicked"
QT_MOC_LITERAL(5, 101, 14), // "familyinfoSlot"
QT_MOC_LITERAL(6, 116, 14), // "schoolinfoSlot"
QT_MOC_LITERAL(7, 131, 11), // "rollallSlot"
QT_MOC_LITERAL(8, 143, 11), // "srcinfoSlot"
QT_MOC_LITERAL(9, 155, 15), // "applyInnovation"
QT_MOC_LITERAL(10, 171, 20), // "searchInnovationSlot"
QT_MOC_LITERAL(11, 192, 20) // "updateInnovationSlot"

    },
    "student\0on_button_infor_search_clicked\0"
    "\0on_button_grade_search_clicked\0"
    "on_button_roll_search_clicked\0"
    "familyinfoSlot\0schoolinfoSlot\0rollallSlot\0"
    "srcinfoSlot\0applyInnovation\0"
    "searchInnovationSlot\0updateInnovationSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_student[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x09 /* Protected */,
       6,    0,   68,    2, 0x09 /* Protected */,
       7,    0,   69,    2, 0x09 /* Protected */,
       8,    0,   70,    2, 0x09 /* Protected */,
       9,    0,   71,    2, 0x09 /* Protected */,
      10,    0,   72,    2, 0x09 /* Protected */,
      11,    0,   73,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        student *_t = static_cast<student *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_infor_search_clicked(); break;
        case 1: _t->on_button_grade_search_clicked(); break;
        case 2: _t->on_button_roll_search_clicked(); break;
        case 3: _t->familyinfoSlot(); break;
        case 4: _t->schoolinfoSlot(); break;
        case 5: _t->rollallSlot(); break;
        case 6: _t->srcinfoSlot(); break;
        case 7: _t->applyInnovation(); break;
        case 8: _t->searchInnovationSlot(); break;
        case 9: _t->updateInnovationSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject student::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_student.data,
      qt_meta_data_student,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *student::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_student.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE