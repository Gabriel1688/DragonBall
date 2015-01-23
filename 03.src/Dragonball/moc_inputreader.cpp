/****************************************************************************
** Meta object code from reading C++ file 'inputreader.h'
**
** Created: Wed Jul 30 10:32:07 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputreader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputReader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      28,   12,   12,   12, 0x08,
      47,   12,   12,   12, 0x08,
      55,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputReader[] = {
    "InputReader\0\0digitClicked()\0"
    "backspaceClicked()\0clear()\0pointClicked()\0"
};

void InputReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InputReader *_t = static_cast<InputReader *>(_o);
        switch (_id) {
        case 0: _t->digitClicked(); break;
        case 1: _t->backspaceClicked(); break;
        case 2: _t->clear(); break;
        case 3: _t->pointClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData InputReader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InputReader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputReader,
      qt_meta_data_InputReader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputReader))
        return static_cast<void*>(const_cast< InputReader*>(this));
    return QWidget::qt_metacast(_clname);
}

int InputReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
