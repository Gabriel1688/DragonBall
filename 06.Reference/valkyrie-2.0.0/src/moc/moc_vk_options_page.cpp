/****************************************************************************
** Meta object code from reading C++ file 'vk_options_page.h'
**
** Created: Wed Aug 13 09:54:31 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/vk_options_page.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vk_options_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VkOptionsPage[] = {

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
      15,   14,   14,   14, 0x05,
      26,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   34,   14,   14, 0x09,
      80,   76,   71,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VkOptionsPage[] = {
    "VkOptionsPage\0\0modified()\0apply()\0,\0"
    "updateEditList(bool,OptionWidget*)\0"
    "bool\0opt\0checkOption(OptionWidget*)\0"
};

void VkOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VkOptionsPage *_t = static_cast<VkOptionsPage *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->apply(); break;
        case 2: _t->updateEditList((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< OptionWidget*(*)>(_a[2]))); break;
        case 3: { bool _r = _t->checkOption((*reinterpret_cast< OptionWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VkOptionsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VkOptionsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VkOptionsPage,
      qt_meta_data_VkOptionsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VkOptionsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VkOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VkOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VkOptionsPage))
        return static_cast<void*>(const_cast< VkOptionsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int VkOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void VkOptionsPage::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VkOptionsPage::apply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
