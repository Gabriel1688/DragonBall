/****************************************************************************
** Meta object code from reading C++ file 'opt_ck_widget.h'
**
** Created: Wed Aug 13 09:54:34 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/widgets/opt_ck_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opt_ck_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CkWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,    9,    9,    9, 0x08,
      44,   40,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CkWidget[] = {
    "CkWidget\0\0changed(bool)\0ckChanged(bool)\0"
    "txt\0update(QString)\0"
};

void CkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CkWidget *_t = static_cast<CkWidget *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CkWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CkWidget::staticMetaObject = {
    { &OptionWidget::staticMetaObject, qt_meta_stringdata_CkWidget,
      qt_meta_data_CkWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CkWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CkWidget))
        return static_cast<void*>(const_cast< CkWidget*>(this));
    return OptionWidget::qt_metacast(_clname);
}

int CkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CkWidget::changed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
