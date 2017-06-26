#include "udp.h"

udp::udp(QWidget *parent) : QDialog(parent)
{
    udpApplication = new QUdpSocket(this);

    //获取主机IPv4地址
    QString localHostName = QHostInfo::localHostName();
    QHostInfo info = QHostInfo::fromName(localHostName);
    foreach (QHostAddress address, info.addresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol)
            QHostAddressIPv4 =  address.toString();
    }

    udpApplication->bind(3333,QUdpSocket::ShareAddress);

    connect(udpApplication, SIGNAL(readyRead()),
              this, SLOT(processPendingDatagram()));
}

udp::~udp()
{

}

//进行广播
void udp::send()
{
    QByteArray datagram = QHostAddressIPv4.toAscii();
    udpApplication->writeDatagram(datagram.data(),datagram.size(),
                          QHostAddress::Broadcast,3333);
}

//读取收到的信息
void udp::processPendingDatagram()
{
    QByteArray datagram;
    QByteArray checkReplay = QByteArray("REPLAY");

    while(udpApplication->hasPendingDatagrams())
    {
        datagram.resize(udpApplication->pendingDatagramSize());
        udpApplication->readDatagram(datagram.data(),datagram.size());
        if( datagram.contains(QHostAddressIPv4.toAscii()))
        {
            ;
        }
        else if( datagram.contains(checkReplay))
        {
            datagram.remove(0,6);
            //存储应答
            DebugIpAddress = datagram;
            qDebug() << datagram << endl;
        }
        else
        {
            /*存储IP地址*/
            DebugIpAddress = datagram;
            replay(&datagram);
        }
    }
}

//发送应答
void udp::replay(QByteArray* datagram)
{
    QHostAddress QHos;
    QHos.setAddress((*datagram).data());
    QByteArray datagram1 = QByteArray("REPLAY");
    datagram1.append(QHostAddressIPv4.toAscii());
    qDebug() << datagram1 << endl;
    udpApplication->writeDatagram(datagram1.data(),datagram1.size(),
                          QHos,3333);
}

//获取IP地址
QByteArray udp::gotDebugIp()
{
    return DebugIpAddress;
}
