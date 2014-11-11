#-------------------------------------------------
#
# Project created by QtCreator 2014-08-06T15:20:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = soapmessage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    soap/soapC.cpp \
    soap/soapcalcProxy.cpp \
    soap/soapmessage.cpp \
    soap/stdsoap2.cpp

HEADERS  += mainwindow.h \
    soap/soapcalcProxy.h \
    soap/soapH.h \
    soap/soapmessage.h \
    soap/soapStub.h \
    soap/stdsoap2.h

FORMS    += mainwindow.ui

unix:!macx: LIBS += -L$$PWD/soap/ -lgsoap++

INCLUDEPATH += $$PWD/soap
DEPENDPATH += $$PWD/soap

unix:!macx: PRE_TARGETDEPS += $$PWD/soap/libgsoap++.a
