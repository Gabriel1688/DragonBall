/****************************************************************************
** Meta object code from reading C++ file 'opt_cb_widget.h'
**
** Created: Wed Aug 13 09:54:34 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/widgets/opt_cb_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opt_cb_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CbWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CbWidget[] = {
    "CbWidget\0\0txt\0update(QString)\0"
};

void CbWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CbWidget *_t = static_cast<CbWidget *>(_o);
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CbWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CbWidget::staticMetaObject = {
    { &OptionWidget::staticMetaObject, qt_meta_stringdata_CbWidget,
      qt_meta_data_CbWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CbWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CbWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CbWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CbWidget))
        return static_cast<void*>(const_cast< CbWidget*>(this));
    return OptionWidget::qt_metacast(_clname);
}

int CbWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OptionWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
