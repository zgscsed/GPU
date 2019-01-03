/****************************************************************************
** Meta object code from reading C++ file 'renderingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../renderingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RenderingWidget_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderingWidget_t qt_meta_stringdata_RenderingWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RenderingWidget"
QT_MOC_LITERAL(1, 16, 4), // "Open"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "Save"
QT_MOC_LITERAL(4, 27, 5), // "Clear"
QT_MOC_LITERAL(5, 33, 16), // "SetInfluceFactor"
QT_MOC_LITERAL(6, 50, 9), // "infFactor"
QT_MOC_LITERAL(7, 60, 13), // "SetSimpleMode"
QT_MOC_LITERAL(8, 74, 14), // "SetDenoisyMode"
QT_MOC_LITERAL(9, 89, 16), // "SetNormalMapMode"
QT_MOC_LITERAL(10, 106, 17) // "ChangeDenoiseMode"

    },
    "RenderingWidget\0Open\0\0Save\0Clear\0"
    "SetInfluceFactor\0infFactor\0SetSimpleMode\0"
    "SetDenoisyMode\0SetNormalMapMode\0"
    "ChangeDenoiseMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RenderingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderingWidget *_t = static_cast<RenderingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Open(); break;
        case 1: _t->Save(); break;
        case 2: _t->Clear(); break;
        case 3: _t->SetInfluceFactor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetSimpleMode(); break;
        case 5: _t->SetDenoisyMode(); break;
        case 6: _t->SetNormalMapMode(); break;
        case 7: _t->ChangeDenoiseMode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RenderingWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_RenderingWidget.data,
      qt_meta_data_RenderingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RenderingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenderingWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int RenderingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
