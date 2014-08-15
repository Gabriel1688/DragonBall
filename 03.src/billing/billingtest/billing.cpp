#include "billing.h"

Billing::Billing(QObject *parent) :
    QObject(parent)
{
    m_connection=new BillingConnection();
    createState();
    createTransitions();
    createConnection();
    billingStateMachine->start();
}

void Billing::createState(){
    billingStateMachine=new QStateMachine(this);
    billingIdle=new QState(billingStateMachine);
    billing=new QState(billingStateMachine);
    billingConnection=new QState(billingStateMachine);
    billingRsp=new QState(billingStateMachine);
    billingFinal=new QFinalState(billingStateMachine);
    createBillingState();
    createBillingConnectionState();
    createIdleState();
    billingStateMachine->setInitialState(billingIdle);

}

void Billing::createBillingState(){

}

void Billing::createBillingConnectionState(){

}

void Billing::createIdleState(){
    //      billingIdle->assignProperty(this,"m_message","");
    m_message="";
    m_rspMessage="";
}

void Billing::createTransitions(){
    billingIdle->addTransition(this,SIGNAL(msgChanged()),billing);
//    billingIdle->addTransition(billingIdle,SIGNAL(propertiesAssigned()),billing);
    billing->addTransition(this,SIGNAL(msgSend()),billingConnection);
//    billing->addTransition(BillingConnection,SIGNAL(exit()),billing);
    billingConnection->addTransition(m_connection,SIGNAL(readyToRead()),billingRsp);
    billingRsp->addTransition(this,SIGNAL(msgRecieved()),billingIdle);
}

void Billing::createConnection(){
    connect(billingIdle,SIGNAL(entered()),this,SLOT(startIdle()));
    connect(billing,SIGNAL(entered()),this,SLOT(startBillingProcess()));
    connect(billingConnection,SIGNAL(entered()),this,SLOT(startBillingConnection()));
    connect(billingRsp,SIGNAL(entered()),this,SLOT(billingRspProcess()));
}

void Billing::startIdle(){
    qDebug()<<"enter idle state";
    billingIdle->assignProperty(this,"m_message","");
//    if(!m_message.isEmpty()) {
 //       emit msgChanged();}
}

void Billing::startBillingProcess(){
    qDebug()<<"enter bill state";
    processMsg();
    qDebug()<<m_message;
    sendMsg();
}

void Billing::billingRspProcess(){
    qDebug()<<"enter billing response state";
    m_rspMessage=m_connection->rece();
    emit msgRecieved();
    emit updateText();
}

void Billing::startBillingConnection(){
    qDebug()<<"enter connection state";
    m_connection->send(m_message);
}

void Billing::processMsg(){
    setMsg(m_message +"billing state");
}

void Billing::setMsg(const QString &string){
    this->m_message=string;
}

QString Billing::getMsg(){
    return m_rspMessage;
}

void Billing::sendMsg(){
    //    this->connection.send(this->message);
    emit msgSend();
}
