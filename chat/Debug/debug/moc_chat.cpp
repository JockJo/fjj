/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project/chat/chat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_chat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      30,    5,    5,    5, 0x08,
      57,    5,    5,    5, 0x08,
      85,    5,    5,    5, 0x08,
     109,    5,    5,    5, 0x08,
     138,    5,    5,    5, 0x08,
     168,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_chat[] = {
    "chat\0\0on_exitButton_clicked()\0"
    "on_maxSizeButton_clicked()\0"
    "on_sendFileButton_clicked()\0"
    "on_sendButton_clicked()\0"
    "on_addfriendButton_clicked()\0"
    "on_collectionButton_clicked()\0"
    "on_tolkingButton_clicked()\0"
};

void chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        chat *_t = static_cast<chat *>(_o);
        switch (_id) {
        case 0: _t->on_exitButton_clicked(); break;
        case 1: _t->on_maxSizeButton_clicked(); break;
        case 2: _t->on_sendFileButton_clicked(); break;
        case 3: _t->on_sendButton_clicked(); break;
        case 4: _t->on_addfriendButton_clicked(); break;
        case 5: _t->on_collectionButton_clicked(); break;
        case 6: _t->on_tolkingButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData chat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject chat::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_chat,
      qt_meta_data_chat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &chat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *chat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_chat))
        return static_cast<void*>(const_cast< chat*>(this));
    return QWidget::qt_metacast(_clname);
}

int chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
