#ifndef BILLINGTEST_H
#define BILLINGTEST_H

#include <QDialog>
#include "billing.h"

namespace Ui {
class BillingTest;
}

class BillingTest : public QDialog
{
    Q_OBJECT

public:
    explicit BillingTest(QWidget *parent = 0);
    ~BillingTest();

private slots:
    void setMsg();
    void sendMsg();
    void updateRspText();

private:
    Ui::BillingTest *ui;
    QString billingMessage;
    void createLayout();
    void createConnection();
    Billing *billing;
};

#endif // BILLINGTEST_H
