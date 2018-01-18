/****************************************************************************
** Meta object code from reading C++ file 'teacher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../edumana/teacher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_teacher_t {
    QByteArrayData data[12];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teacher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teacher_t qt_meta_stringdata_teacher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "teacher"
QT_MOC_LITERAL(1, 8, 30), // "on_button_infor_search_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "classCourseSlot"
QT_MOC_LITERAL(4, 56, 13), // "gradeTestSlot"
QT_MOC_LITERAL(5, 70, 15), // "gradeCourseSlot"
QT_MOC_LITERAL(6, 86, 14), // "innovationSlot"
QT_MOC_LITERAL(7, 101, 13), // "studyTaskSlot"
QT_MOC_LITERAL(8, 115, 14), // "courseTaskSlot"
QT_MOC_LITERAL(9, 130, 14), // "testSchemeSlot"
QT_MOC_LITERAL(10, 145, 8), // "cardSlot"
QT_MOC_LITERAL(11, 154, 18) // "trainingSchemeSlot"

    },
    "teacher\0on_button_infor_search_clicked\0"
    "\0classCourseSlot\0gradeTestSlot\0"
    "gradeCourseSlot\0innovationSlot\0"
    "studyTaskSlot\0courseTaskSlot\0"
    "testSchemeSlot\0cardSlot\0trainingSchemeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teacher[] = {

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
       3,    0,   65,    2, 0x09 /* Protected */,
       4,    0,   66,    2, 0x09 /* Protected */,
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

void teacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        teacher *_t = static_cast<teacher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_infor_search_clicked(); break;
        case 1: _t->classCourseSlot(); break;
        case 2: _t->gradeTestSlot(); break;
        case 3: _t->gradeCourseSlot(); break;
        case 4: _t->innovationSlot(); break;
        case 5: _t->studyTaskSlot(); break;
        case 6: _t->courseTaskSlot(); break;
        case 7: _t->testSchemeSlot(); break;
        case 8: _t->cardSlot(); break;
        case 9: _t->trainingSchemeSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject teacher::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_teacher.data,
      qt_meta_data_teacher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *teacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teacher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_teacher.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int teacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
