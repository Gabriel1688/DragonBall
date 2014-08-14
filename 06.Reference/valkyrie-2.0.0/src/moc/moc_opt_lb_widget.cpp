/****************************************************************************
** Meta object code from reading C++ file 'opt_lb_widget.h'
**
** Created: Wed Aug 13 09:54:36 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/widgets/opt_lb_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opt_lb_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LbWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      32,   28,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LbWidget[] = {
    "LbWidget\0\0popupMenu(QPoint)\0txt\0"
    "update(QString)\0"
};

void LbWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LbWidget *_t = static_cast<LbWidget *>(_o);
        switch (_id) {
        case 0: _t->popupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LbWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LbWidget::staticMetaObject = {
    { &OptionWidget::staticMetaObject, qt_meta_stringdata_LbWidget,
      qt_meta_data_LbWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LbWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LbWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LbWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LbWidget))
        return static_cast<void*>(const_cast< LbWidget*>(this));
    return OptionWidget::qt_metacast(_clname);
}

int LbWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OptionWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
