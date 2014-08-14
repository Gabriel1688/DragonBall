/****************************************************************************
** Meta object code from reading C++ file 'opt_base_widget.h'
**
** Created: Wed Aug 13 09:54:33 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/widgets/opt_base_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opt_base_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,
      49,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   73,   13,   13, 0x09,
      99,   73,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OptionWidget[] = {
    "OptionWidget\0\0,\0valueChanged(bool,OptionWidget*)\0"
    "editDone(OptionWidget*)\0txt\0"
    "setCurrValue(QString)\0update(QString)\0"
};

void OptionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionWidget *_t = static_cast<OptionWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< OptionWidget*(*)>(_a[2]))); break;
        case 1: _t->editDone((*reinterpret_cast< OptionWidget*(*)>(_a[1]))); break;
        case 2: _t->setCurrValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OptionWidget,
      qt_meta_data_OptionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionWidget))
        return static_cast<void*>(const_cast< OptionWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int OptionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OptionWidget::valueChanged(bool _t1, OptionWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionWidget::editDone(OptionWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
