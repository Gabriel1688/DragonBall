#include "billingconnection.h"
#include <assert.h>

BillingConnection::BillingConnection(QObject *parent) :
    QTcpSocket(parent)
{
    testString="test billing state";
    rspOk="response ok";
    rspErr="response error";
}

void BillingConnection::send(const QString &string){
 //   Q_ASSERT(string==testString);
    rspMsg=(string==testString)? rspOk:rspErr;
    dataReady=true;
    emit readyToRead();
}

QString BillingConnection::rece(){
    return rspMsg;
}
