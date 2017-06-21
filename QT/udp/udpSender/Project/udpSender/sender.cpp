#include "sender.h"
#include "ui_sender.h"
#include <QtNetwork>
#include <QDebug>

Sender::Sender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sender)
{
    ui->setupUi(this);
    sender = new QUdpSocket(this);
    sender->bind(45454,QUdpSocket::ShareAddress);

    //获取主机IPv4地址
    QString localHostName = QHostInfo::localHostName();
    QHostInfo info = QHostInfo::fromName(localHostName);
    foreach (QHostAddress address, info.addresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol)
            QHostAddressIPv4 =  address.toString();
    }

    connect(sender, SIGNAL(readyRead()),
            this, SLOT(processPendingDatagram()));

}

Sender::~Sender()
{
    delete ui;
}

void Sender::on_pushButton_clicked()
{
    QByteArray datagram = QHostAddressIPv4.toAscii();
    sender->writeDatagram(datagram.data(),datagram.size(),
                          QHostAddress::Broadcast,45454);
}


void Sender::processPendingDatagram()
{
    QByteArray datagram;
    while(sender->hasPendingDatagrams())
    {
        datagram.resize(sender->pendingDatagramSize());
        sender->readDatagram(datagram.data(),datagram.size());
        ui->label->setText(datagram);
        qDebug() << datagram << endl;
    }
}
