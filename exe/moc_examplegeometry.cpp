/****************************************************************************
** Meta object code from reading C++ file 'examplegeometry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../laba_6/examplegeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'examplegeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExampleTriangleGeometry_t {
    const uint offsetsAndSize[10];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ExampleTriangleGeometry_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ExampleTriangleGeometry_t qt_meta_stringdata_ExampleTriangleGeometry = {
    {
QT_MOC_LITERAL(0, 23), // "ExampleTriangleGeometry"
QT_MOC_LITERAL(24, 11), // "QML.Element"
QT_MOC_LITERAL(36, 15), // "verticesChanged"
QT_MOC_LITERAL(52, 0), // ""
QT_MOC_LITERAL(53, 5) // "verts"

    },
    "ExampleTriangleGeometry\0QML.Element\0"
    "verticesChanged\0\0verts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExampleTriangleGeometry[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       1,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   22,    3, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QVariantList, 0x00015003, uint(0), 0,

       0        // eod
};

void ExampleTriangleGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExampleTriangleGeometry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->verticesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExampleTriangleGeometry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExampleTriangleGeometry::verticesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ExampleTriangleGeometry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->getVertices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ExampleTriangleGeometry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVertices(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject ExampleTriangleGeometry::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuick3DGeometry::staticMetaObject>(),
    qt_meta_stringdata_ExampleTriangleGeometry.offsetsAndSize,
    qt_meta_data_ExampleTriangleGeometry,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
QVariantList, ExampleTriangleGeometry, void



>,
    nullptr
} };


const QMetaObject *ExampleTriangleGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExampleTriangleGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleTriangleGeometry.stringdata0))
        return static_cast<void*>(this);
    return QQuick3DGeometry::qt_metacast(_clname);
}

int ExampleTriangleGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuick3DGeometry::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ExampleTriangleGeometry::verticesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
