#include "tcp.h"

tcp::tcp(QWidget *parent) : QDialog(parent)
{
    tcpApplication = new QTcpSocket(this);
     QObject::connect(tcpApplication, SIGNAL(connected()),
             this, SLOT(startSendFile()));

     QObject::connect(tcpApplication, SIGNAL(bytesWritten(qint64)),
             this, SLOT(updateClientProgress(qint64)));

     QObject::connect(tcpApplication, SIGNAL(error(QAbstractSocket::SocketError)),
             this,  SLOT(displayError(QAbstractSocket::SocketError)));
}


//与某位用户建立建立TCP连接
void tcp::setConnection(const QHostAddress &address)
{
    //取消已有连接，建立新的连接
    tcpApplication->abort();
    tcpApplication->connectToHost(address, PORT);

}

//开始进行文件传输
void tcp::startSendFile()
{
    localFile = new QFile(fileName);
    if(!localFile->open(QFile::ReadOnly))
    {
        qDebug()<<"client:open file error!";
        return ;
    }
    totalBytes = localFile->size();

    QDataStream sendOut(&outBlock, QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_4_8);
    QString currentFileName = fileName.right(fileName.size()
                                             - fileName.lastIndexOf('/')-1);
    sendOut << qint64(0) << qint64(0) << currentFileName;

    totalBytes += outBlock.size();
    sendOut.device()->seek(0);

    sendOut << totalBytes << qint64((outBlock.size() - sizeof(qint64)*2));
    bytesToWrite = totalBytes - tcpApplication->write(outBlock);

    outBlock.resize(0);
}

void tcp::updateClientProgress(qint64 numBytes)
{
    bytesWritten += (int)numBytes;

    if(bytesToWrite > 0)
    {
        outBlock = localFile->read(qMin(bytesToWrite, payloadSize));
        bytesToWrite -= (int)tcpApplication->write(outBlock);
        outBlock.resize(0);
    }
    else
    {
        localFile->close();
    }
//    parent->sendProgressBar->setMaximum(totalBytes);
//    parent->clientProgressBar->setValue(bytesWritten);

    if(bytesWritten == totalBytes)
    {
//        ui->clientStatusLabel->setText(tr("finish 1% success").arg(fileName));
        localFile->close();
    }
}

//打开文件
bool tcp::openFile()
{
    fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
    {
        return true;
    }
    return false;
}

qint64 tcp::gotTotal()
{
    return totalBytes;
}

qint64 tcp::gotBytesWritten()
{
    return bytesWritten;
}

void tcp::displayError(QAbstractSocket::SocketError)
{
    //出现错误关闭TCP连接
    qDebug()<< tcpApplication->errorString();
    tcpApplication->close();
}

tcp::~tcp()
{

}

