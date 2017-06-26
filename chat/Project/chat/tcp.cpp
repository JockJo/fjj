#include "tcp.h"

tcp::tcp(QWidget *parent) : QDialog(parent)
{
     tcpApplication = new QTcpSocket(this);
     tcpServer = new QTcpServer(this);

     QObject::connect(tcpApplication, SIGNAL(bytesWritten(qint64)),
             this, SLOT(updateFileProgress(qint64)));

     QObject::connect(tcpApplication, SIGNAL(error(QAbstractSocket::SocketError)),
             this,  SLOT(displayError(QAbstractSocket::SocketError)));

     QObject::connect(tcpServer, SIGNAL(newConnection()),
                      this, SLOT(acceptConnection()));
}

//与某位用户建立建立TCP连接
void tcp::setConnection(const QString &address)
{
    QByteArray  out = address.toAscii();
    qDebug() << out << endl;
    tcpServer->close();

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

//跟新文件传输的数据
void tcp::updateFileProgress(qint64 numBytes)
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

//端口监听
void tcp::tcpListen()
{
    if( !tcpServer->listen(QHostAddress::Any,PORT) )
    {
        qDebug()<<tcpServer->errorString();
        close();
        return;
    }
    totalBytes = 0;
    bytesReceived = 0;
    fileNameSize = 0;
}

//接受连接
void tcp::acceptConnection()
{
    tcpApplication = tcpServer->nextPendingConnection();

    connect(tcpApplication, SIGNAL(readyRead()),
            this, SLOT(updateServerProgress()));
    connect(tcpApplication, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(displayError(QAbstractSocket::SocketError)));

    //关闭监听
    tcpServer->close();
}

//更新接收的数据
void tcp::updateServerProgress()
{
    QDataStream in(tcpApplication);
    in.setVersion(QDataStream::Qt_4_8);

    if(bytesReceived <= sizeof(qint64)*2)
    {
        //接收文件名字
        if((tcpApplication->bytesAvailable() >= sizeof(qint64)*2)
            && (fileNameSize == 0))
        {
            in >> totalBytes >> fileNameSize;
            bytesReceived += sizeof(qint64)*2;
        }

        //新建拟拷贝的文件
        if((tcpApplication->bytesAvailable() >= fileNameSize)
            && (fileNameSize != 0))
        {
            in >> fileName;
//            ui->serverStatusLabel->setText(tr("finish %1 ...").arg(fileName));
            bytesReceived += fileNameSize;

            localFile = new QFile(fileName);
            if(!localFile->open(QFile::WriteOnly))
            {
                qDebug()<<"server:open file error!";
                return ;
            }
        }
        else
        {
            return ;
        }
    }

    //拷贝接受到的数据到文件中
    if(bytesReceived < totalBytes)
    {
        bytesReceived += tcpApplication->bytesAvailable();
        inBlock = tcpApplication->readAll();
        localFile->write(inBlock);
        inBlock.resize(0);
    }
//    ui->serverProgressBar->setMaximum(totalBytes);
//    ui->serverProgressBar->setValue(bytesReceived);

    //断开TCP连接，关闭文件
    if(bytesReceived == totalBytes)
    {
//       tcpServer->Connection->close();
        localFile->close();
//        ui->startButton->setEnabled(true);
//        ui->serverStatusLabel->setText(tr("finish 1% success!").arg(fileName));
        totalBytes = 0;
        bytesReceived = 0;
        fileNameSize = 0;
//        ui->serverStatusLabel->setText(tr("listning"));
//        ui->serverProgressBar->reset();
    }
}

QString tcp::gotFilename()
{
    return fileName;
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
