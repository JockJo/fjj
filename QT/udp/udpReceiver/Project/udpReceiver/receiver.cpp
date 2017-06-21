#include "receiver.h"
#include "ui_receiver.h"
#include <QtNetwork>
#include <QDebug>

Receiver::Receiver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receiver)
{
    ui->setupUi(this);
    receiver = new QUdpSocket(this);
    receiver->bind(45454, QUdpSocket::ShareAddress);
    signal = 0;

    //获取主机IPv4地址
    QString localHostName = QHostInfo::localHostName();
    QHostInfo info = QHostInfo::fromName(localHostName);
    foreach (QHostAddress address, info.addresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol)
            QHostAddressIPv4 =  address.toString();
    }

    connect(receiver, SIGNAL(readyRead()),
            this, SLOT(processPendingDatagram()));
}

Receiver::~Receiver()
{
    delete ui;
}

void Receiver::replay(QByteArray* datagram)
{
    //发送应答
    QHostAddress QHos;
    QHos.setAddress((*datagram).data());
    QByteArray datagram1 = QHostAddressIPv4.toAscii();
    qDebug() << datagram1 << endl;
    receiver->writeDatagram(datagram1.data(),datagram1.size(),
                          QHos,45454);
}


void Receiver::processPendingDatagram()
{
    QByteArray datagram;
    while(receiver->hasPendingDatagrams())
    {
        datagram.resize(receiver->pendingDatagramSize());
        receiver->readDatagram(datagram.data(),datagram.size());
        ui->label->setText(datagram);
        if(signal == 0)
        {
            signal = 1;
            replay(&datagram);
        }
    }
}
