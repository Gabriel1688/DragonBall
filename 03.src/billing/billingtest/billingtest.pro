#-------------------------------------------------
#
# Project created by QtCreator 2014-08-14T10:24:14
#
#-------------------------------------------------

QT += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = billingtest
TEMPLATE = app


SOURCES += main.cpp\
        billingtest.cpp \
    billing.cpp \
    billingconnection.cpp

HEADERS  += billingtest.h \
    billing.h \
    billingconnection.h

FORMS    += billingtest.ui
