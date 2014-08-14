/****************************************************************************
** Meta object code from reading C++ file 'help_handbook.h'
**
** Created: Wed Aug 13 09:54:23 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../help/help_handbook.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'help_handbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HandBook[] = {

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
      14,   10,    9,    9, 0x0a,
      31,    9,    9,    9, 0x0a,
      46,   10,    9,    9, 0x08,
      66,    9,    9,    9, 0x08,
      81,   77,    9,    9, 0x08,
     105,   77,    9,    9, 0x08,
     130,   77,    9,    9, 0x08,
     160,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HandBook[] = {
    "HandBook\0\0url\0openUrl(QString)\0"
    "showYourself()\0sourceChanged(QUrl)\0"
    "openFile()\0act\0historyChosen(QAction*)\0"
    "bookmarkChosen(QAction*)\0"
    "bookmarkHighlighted(QAction*)\0"
    "addBookmark()\0"
};

void HandBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HandBook *_t = static_cast<HandBook *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showYourself(); break;
        case 2: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->openFile(); break;
        case 4: _t->historyChosen((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->bookmarkChosen((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->bookmarkHighlighted((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->addBookmark(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HandBook::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HandBook::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HandBook,
      qt_meta_data_HandBook, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HandBook::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HandBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HandBook::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HandBook))
        return static_cast<void*>(const_cast< HandBook*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HandBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
