#ifndef UDP_H
#define UDP_H

#include <QWidget>
#include <QDialog>
#include <QtNetwork>
#include <main.h>
#include <QDebug>

class QUdpSocket;

class udp : public QDialog
{
    Q_OBJECT
public:
    explicit udp(QWidget *parent = 0);
    ~udp();
    void send();
    QByteArray gotDebugIp();

private:
    QUdpSocket* udpApplication;
    QString QHostAddressIPv4;
    void replay(QByteArray* );
    QByteArray DebugIpAddress;


signals:

private slots:
    void processPendingDatagram();

};

#endif // UDP_H
