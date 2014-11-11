#ifndef SOAPMESSAGE_H
#define SOAPMESSAGE_H

#include "soapcalcProxy.h"
#include "soapH.h"
#include "soapStub.h"

class Data{
public:
    double a;
    double b;
};

class SoapMessage{
public:
    SoapMessage(Data data);
    SoapMessage(){}
    ~SoapMessage();
    int send();
    double send(Data &data);
    //   Data recieve();
private:
    calcProxy service;
    double ret;
 //   double a;
 //   double b;
};

#endif // SOAPMESSAGE_H
