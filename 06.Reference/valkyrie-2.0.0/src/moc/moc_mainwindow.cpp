/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Aug 13 09:54:21 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x0a,
      42,   35,   11,   11, 0x0a,
      78,   71,   11,   11, 0x0a,
     109,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x08,
     152,   11,   11,   11, 0x08,
     171,   11,   11,   11, 0x08,
     185,   11,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,
     221,   11,   11,   11, 0x08,
     237,   11,   11,   11, 0x08,
     251,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,
     277,   11,   11,   11, 0x08,
     291,   11,   11,   11, 0x08,
     310,   11,   11,   11, 0x08,
     337,  329,   11,   11, 0x08,
     359,   11,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,
     387,   11,   11,   11, 0x08,
     400,   11,   11,   11, 0x08,
     414,   11,   11,   11, 0x08,
     439,  427,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0msg\0setStatus(QString)\0"
    "toolId\0showToolView(VGTOOL::ToolID)\0"
    "procId\0runTool(VGTOOL::ToolProcessId)\0"
    "openOptions()\0toolGroupTriggered(QAction*)\0"
    "createNewProject()\0openProject()\0"
    "openRecentProject()\0saveAsProject()\0"
    "closeToolView()\0runValgrind()\0stopTool()\0"
    "openHandBook()\0openAboutVk()\0"
    "openAboutLicense()\0openAboutSupport()\0"
    "running\0updateVgButtons(bool)\0"
    "showLabels()\0showToolTips()\0setGenFont()\0"
    "setToolFont()\0setPalette()\0logFilename\0"
    "setLogFile(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->setStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->showToolView((*reinterpret_cast< VGTOOL::ToolID(*)>(_a[1]))); break;
        case 2: _t->runTool((*reinterpret_cast< VGTOOL::ToolProcessId(*)>(_a[1]))); break;
        case 3: _t->openOptions(); break;
        case 4: _t->toolGroupTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->createNewProject(); break;
        case 6: _t->openProject(); break;
        case 7: _t->openRecentProject(); break;
        case 8: _t->saveAsProject(); break;
        case 9: _t->closeToolView(); break;
        case 10: _t->runValgrind(); break;
        case 11: _t->stopTool(); break;
        case 12: _t->openHandBook(); break;
        case 13: _t->openAboutVk(); break;
        case 14: _t->openAboutLicense(); break;
        case 15: _t->openAboutSupport(); break;
        case 16: _t->updateVgButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->showLabels(); break;
        case 18: _t->showToolTips(); break;
        case 19: _t->setGenFont(); break;
        case 20: _t->setToolFont(); break;
        case 21: _t->setPalette(); break;
        case 22: _t->setLogFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
