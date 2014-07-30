
#include <QApplication>
#include <QDebug>
#include <QObject>
#include "mainuser.h"
#include "inputreader.h"
#include "choosemonth.h"

int main (int argc, char ** argv)
{
    QApplication app(argc,argv);
    //MainUser mainDialog;
    //mainDialog.show();
    //InputReader inputDialog;
    //inputDialog.show();
    ChooseMonth monthDialog;
    monthDialog.show();
    return app.exec();

}
