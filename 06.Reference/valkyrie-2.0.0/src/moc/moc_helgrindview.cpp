/****************************************************************************
** Meta object code from reading C++ file 'helgrindview.h'
**
** Created: Wed Aug 13 09:54:37 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../toolview/helgrindview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helgrindview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelgrindView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x0a,
      33,   13,   13,   13, 0x08,
      47,   13,   13,   13, 0x08,
      67,   13,   13,   13, 0x08,
      86,   13,   13,   13, 0x08,
     105,  100,   13,   13, 0x08,
     136,  100,   13,   13, 0x08,
     167,  100,   13,   13, 0x08,
     199,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HelgrindView[] = {
    "HelgrindView\0\0run\0setState(bool)\0"
    "openLogFile()\0opencloseAllItems()\0"
    "opencloseOneItem()\0showSrcPath()\0item\0"
    "launchEditor(QTreeWidgetItem*)\0"
    "itemExpanded(QTreeWidgetItem*)\0"
    "itemCollapsed(QTreeWidgetItem*)\0"
    "updateItemActions()\0"
};

void HelgrindView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelgrindView *_t = static_cast<HelgrindView *>(_o);
        switch (_id) {
        case 0: _t->setState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->openLogFile(); break;
        case 2: _t->opencloseAllItems(); break;
        case 3: _t->opencloseOneItem(); break;
        case 4: _t->showSrcPath(); break;
        case 5: _t->launchEditor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->itemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->itemCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->updateItemActions(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HelgrindView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelgrindView::staticMetaObject = {
    { &ToolView::staticMetaObject, qt_meta_stringdata_HelgrindView,
      qt_meta_data_HelgrindView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelgrindView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelgrindView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelgrindView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelgrindView))
        return static_cast<void*>(const_cast< HelgrindView*>(this));
    return ToolView::qt_metacast(_clname);
}

int HelgrindView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
