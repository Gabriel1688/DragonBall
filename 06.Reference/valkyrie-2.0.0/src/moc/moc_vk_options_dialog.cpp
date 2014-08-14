/****************************************************************************
** Meta object code from reading C++ file 'vk_options_dialog.h'
**
** Created: Wed Aug 13 09:54:30 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/vk_options_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vk_options_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VkOptionsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   16,   32,   16, 0x08,
      45,   16,   16,   16, 0x08,
      54,   16,   16,   16, 0x08,
      63,   16,   16,   16, 0x08,
      74,   16,   16,   16, 0x08,
      89,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VkOptionsDialog[] = {
    "VkOptionsDialog\0\0flagsChanged()\0bool\0"
    "apply()\0accept()\0reject()\0showPage()\0"
    "pageModified()\0overwriteDefaultConfig()\0"
};

void VkOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VkOptionsDialog *_t = static_cast<VkOptionsDialog *>(_o);
        switch (_id) {
        case 0: _t->flagsChanged(); break;
        case 1: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->showPage(); break;
        case 5: _t->pageModified(); break;
        case 6: _t->overwriteDefaultConfig(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VkOptionsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VkOptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VkOptionsDialog,
      qt_meta_data_VkOptionsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VkOptionsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VkOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VkOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VkOptionsDialog))
        return static_cast<void*>(const_cast< VkOptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int VkOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VkOptionsDialog::flagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
