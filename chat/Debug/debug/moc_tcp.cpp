/****************************************************************************
** Meta object code from reading C++ file 'tcp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project/chat/tcp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tcp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x08,
      32,    4,    4,    4, 0x08,
      75,    4,    4,    4, 0x08,
      94,    4,    4,    4, 0x08,
     108,    4,    4,    4, 0x08,
     131,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tcp[] = {
    "tcp\0\0updateFileProgress(qint64)\0"
    "displayError(QAbstractSocket::SocketError)\0"
    "acceptConnection()\0showSuccess()\0"
    "updateServerProgress()\0slotTcpListen()\0"
};

void tcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tcp *_t = static_cast<tcp *>(_o);
        switch (_id) {
        case 0: _t->updateFileProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->acceptConnection(); break;
        case 3: _t->showSuccess(); break;
        case 4: _t->updateServerProgress(); break;
        case 5: _t->slotTcpListen(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tcp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tcp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tcp,
      qt_meta_data_tcp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tcp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tcp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tcp))
        return static_cast<void*>(const_cast< tcp*>(this));
    return QDialog::qt_metacast(_clname);
}

int tcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
