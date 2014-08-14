/****************************************************************************
** Meta object code from reading C++ file 'valkyrie_options_page.h'
**
** Created: Wed Aug 13 09:54:32 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/valkyrie_options_page.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valkyrie_options_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ValkyrieOptionsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      37,   20,   20,   20, 0x08,
      54,   20,   20,   20, 0x08,
      66,   20,   20,   20, 0x08,
      78,   20,   20,   20, 0x08,
      91,   20,   20,   20, 0x08,
     107,   20,   20,   20, 0x08,
     123,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ValkyrieOptionsPage[] = {
    "ValkyrieOptionsPage\0\0chooseGenFont()\0"
    "chooseToolFont()\0getEditor()\0getBinary()\0"
    "getBrowser()\0getDfltLogDir()\0"
    "getWorkingDir()\0getVgExec()\0"
};

void ValkyrieOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ValkyrieOptionsPage *_t = static_cast<ValkyrieOptionsPage *>(_o);
        switch (_id) {
        case 0: _t->chooseGenFont(); break;
        case 1: _t->chooseToolFont(); break;
        case 2: _t->getEditor(); break;
        case 3: _t->getBinary(); break;
        case 4: _t->getBrowser(); break;
        case 5: _t->getDfltLogDir(); break;
        case 6: _t->getWorkingDir(); break;
        case 7: _t->getVgExec(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ValkyrieOptionsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ValkyrieOptionsPage::staticMetaObject = {
    { &VkOptionsPage::staticMetaObject, qt_meta_stringdata_ValkyrieOptionsPage,
      qt_meta_data_ValkyrieOptionsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ValkyrieOptionsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ValkyrieOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ValkyrieOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ValkyrieOptionsPage))
        return static_cast<void*>(const_cast< ValkyrieOptionsPage*>(this));
    return VkOptionsPage::qt_metacast(_clname);
}

int ValkyrieOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VkOptionsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
