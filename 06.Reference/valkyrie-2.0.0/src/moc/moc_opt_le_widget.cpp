/****************************************************************************
** Meta object code from reading C++ file 'opt_le_widget.h'
**
** Created: Wed Aug 13 09:54:35 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/widgets/opt_le_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opt_le_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x0a,
      36,    9,    9,    9, 0x08,
      58,   54,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LeWidget[] = {
    "LeWidget\0\0disable\0setDisabled(bool)\0"
    "editingFinished()\0txt\0update(QString)\0"
};

void LeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LeWidget *_t = static_cast<LeWidget *>(_o);
        switch (_id) {
        case 0: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LeWidget::staticMetaObject = {
    { &OptionWidget::staticMetaObject, qt_meta_stringdata_LeWidget,
      qt_meta_data_LeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LeWidget))
        return static_cast<void*>(const_cast< LeWidget*>(this));
    return OptionWidget::qt_metacast(_clname);
}

int LeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OptionWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
