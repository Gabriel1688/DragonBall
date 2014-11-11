#ifndef BILLING_H
#define BILLING_H

#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QFinalState>
#include "billingconnection.h"

class Billing : public QObject
{
    Q_OBJECT
public:
    explicit Billing(QObject *parent = 0);
    void sendMsg();
    void setMsg(const QString&);
    QString getMsg();
    void request(){emit msgChanged();}

signals:
    void msgChanged();
    void msgSend();
    void msgRecieved();
    void updateText();

public slots:
    void startBillingConnection();
    void startBillingProcess();
    void billingRspProcess();
    void startIdle();

private:
    QString m_message;
    QString m_rspMessage;
    BillingConnection *m_connection;

    QStateMachine *billingStateMachine;
    QState *billingIdle;
    QState *billing;
    QState *billingConnection;
    QState *billingRsp;
    QFinalState *billingFinal;

    void createState();
    void createBillingState();
    void createBillingConnectionState();
    void createIdleState();

    void createTransitions();
    void createConnection();
    void processMsg();

};

#endif // BILLING_H
