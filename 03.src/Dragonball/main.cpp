
#include <QApplication>
#include <QDebug>
#include <QObject>
#include "mainuser.h"

int main (int argc, char ** argv)
{
    QApplication app(argc,argv);
    MainUser mainDialog;
    mainDialog.show();

    return app.exec();

}
