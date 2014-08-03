
#include <QApplication>
#include <QDebug>
#include <QObject>
#include "mainuser.h"
#include "inputreader.h"
#include "showmonthes.h"
#include "displayinfo.h"

int main (int argc, char ** argv)
{
    QApplication app(argc,argv);
    //MainUser mainDialog;
    //mainDialog.show();
    //InputReader inputDialog;
    //inputDialog.show();
    /*QList<QString> text;
    text.append("2014-02");
    text.append("2014-03");
    text.append("2014-04");
     ShowMonthes monthdialog(text);
    */
    QString text = "Attention\nPlease read this agreement carefully,\notherwise you will lose month!\n";
    DisplayInfo infoDialog(text);
    infoDialog.show();


    //monthdialog.show();

    return app.exec();

}
