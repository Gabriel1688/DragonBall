#ifndef BILLINGCONNECTION_H
#define BILLINGCONNECTION_H

#include <QTcpSocket>

class BillingConnection : public QTcpSocket
{
    Q_OBJECT
public:
    explicit BillingConnection(QObject *parent = 0);

    void send(const QString &);
    QString rece();
    bool dataReady;

signals:
    void readyToRead();

public slots:

private:
    QString testString;
    QString rspOk;
    QString rspErr;
    QString rspMsg;
};

#endif // BILLINGCONNECTION_H
