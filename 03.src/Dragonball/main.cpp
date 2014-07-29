
#include <QApplication>
#include <QDebug>
#include <QObject>
#include "mainuser.h"
#include "inputreader.h"

int main (int argc, char ** argv)
{
    QApplication app(argc,argv);
    //MainUser mainDialog;
    //mainDialog.show();
    InputReader inputDialog;
    inputDialog.show();

    return app.exec();

}
