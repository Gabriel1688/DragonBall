#include "billingtest.h"
#include "ui_billingtest.h"

BillingTest::BillingTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BillingTest)
{
    setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
    billing=new Billing();
    createLayout();
    createConnection();

}
void BillingTest::createLayout(){
    ui->messageLabel->setBuddy(ui->messageText);
    ui->responseLabel->setBuddy(ui->responseText);
    ui->stateLabel->setBuddy(ui->stateText);
}

void BillingTest::createConnection(){
    connect(ui->messageText,SIGNAL(textChanged(QString)),this, SLOT(setMsg()));
    connect(ui->billingButton, SIGNAL(clicked()), this, SLOT(sendMsg()));
    connect(billing,SIGNAL(updateText()),this,SLOT(updateRspText()));
}

BillingTest::~BillingTest()
{
    delete ui;
}

void BillingTest::setMsg(){
    this->billingMessage=ui->messageText->text();
}

void BillingTest::sendMsg(){
    if(billingMessage.isEmpty()) return;
    else {
//        ui->responseText->insertPlainText(billingMessage);
        billing->setMsg(ui->messageText->text());
        emit billing->request();
    }
}

void BillingTest::updateRspText(){
    ui->responseText->setText(billing->getMsg());
}
