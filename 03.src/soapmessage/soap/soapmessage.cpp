#include "soapmessage.h"
#include "calc.nsmap"

SoapMessage::SoapMessage(Data data){ //data initial
    //todo, sth with the data initial
 //   a=data.a;
  //  b=data.b;
}

SoapMessage::~SoapMessage(){
        service.destroy();
}

double SoapMessage::send(Data &data){
    if(service.add(data.a,data.b,ret)==SOAP_OK){
        std::cout<<"The sum is "<<ret<<std::endl;
        return ret;
    }
    else{
        service.soap_stream_fault(std::cerr);
        return -1;//std::cerr;
    }
}
