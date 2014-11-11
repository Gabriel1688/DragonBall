#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./soap/soapmessage.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    SoapMessage soapMessage;
    Data data;
    data.a=ui->suma->toPlainText().toDouble();
    data.b=ui->sumb->toPlainText().toDouble();
    double ret;
    ret=soapMessage.send(data);
    ui->result->setText(QString::number(ret));

}
