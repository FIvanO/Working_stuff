/****************************************************************************
** Meta object code from reading C++ file 'ballobj.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Ball/ballobj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ballobj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BallObj_t {
    QByteArrayData data[10];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BallObj_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BallObj_t qt_meta_stringdata_BallObj = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BallObj"
QT_MOC_LITERAL(1, 8, 8), // "finished"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "condChanged"
QT_MOC_LITERAL(4, 30, 4), // "cond"
QT_MOC_LITERAL(5, 35, 13), // "centerChanged"
QT_MOC_LITERAL(6, 49, 6), // "center"
QT_MOC_LITERAL(7, 56, 3), // "run"
QT_MOC_LITERAL(8, 60, 7), // "setCond"
QT_MOC_LITERAL(9, 68, 9) // "setCenter"

    },
    "BallObj\0finished\0\0condChanged\0cond\0"
    "centerChanged\0center\0run\0setCond\0"
    "setCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BallObj[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QPoint,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QPoint,    6,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495103,
       6, QMetaType::QPoint, 0x00495103,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void BallObj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BallObj *_t = static_cast<BallObj *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->condChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->centerChanged((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->run(); break;
        case 4: _t->setCond((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setCenter((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BallObj::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BallObj::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BallObj::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BallObj::condChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BallObj::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BallObj::centerChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BallObj *_t = static_cast<BallObj *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->cond(); break;
        case 1: *reinterpret_cast< QPoint*>(_v) = _t->center(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BallObj *_t = static_cast<BallObj *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCond(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCenter(*reinterpret_cast< QPoint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BallObj::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BallObj.data,
      qt_meta_data_BallObj,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BallObj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BallObj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BallObj.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BallObj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BallObj::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BallObj::condChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BallObj::centerChanged(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
