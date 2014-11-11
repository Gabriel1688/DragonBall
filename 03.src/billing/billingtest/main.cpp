#include "billingtest.h"
#include <QApplication>
#include "billingtest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BillingTest w;
    w.show();

    return a.exec();
}
