#include "server.h"
#include "ui_server.h"
#include <QtNetwork>

Server::Server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Server)
{
    connect(&tcpServer,SIGNAL(newConnection()),
            this, SLOT(acceptConnection()));
    ui->setupUi(this);
}

Server::~Server()
{
    delete ui;
}


//开始监听<所有主机，6666>
void Server::start()
{
    if(! tcpServer.listen(QHostAddress::Any,6666))
    {
        qDebug()<<tcpServer.errorString();
        close();
        return;
    }
    ui->startButton->setEnabled(false);
    totalBytes = 0;
    bytesReceived = 0;
    fileNameSize = 0;
    ui->serverStatusLabel->setText(tr("listning"));
    ui->serverProgressBar->reset();
}

//建立连接及其关闭
void Server::acceptConnection()
{
    //记录下一个等待的连接,nextPendingConnection返回类型为QTcpSocket
    tcpServerConnection = tcpServer.nextPendingConnection();

    connect(tcpServerConnection, SIGNAL(readyRead()),
            this, SLOT(updateServerProgress()));    
    connect(tcpServerConnection, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(displayError(QAbstractSocket::SocketError)));

    ui->serverStatusLabel->setText(tr("status: receiving"));
    tcpServer.close();
}


void Server::updateServerProgress()
{
    QDataStream in(tcpServerConnection);
    in.setVersion(QDataStream::Qt_4_8);

    if(bytesReceived <= sizeof(qint64)*2)
    {
        //接收文件名字
        if((tcpServerConnection->bytesAvailable() >= sizeof(qint64)*2)
                && (fileNameSize == 0))
        {
            in >> totalBytes >> fileNameSize;
            bytesReceived += sizeof(qint64)*2;
        }

        //新建拟拷贝的文件
        if((tcpServerConnection->bytesAvailable() >= fileNameSize)
                && (fileNameSize != 0))
        {
            in >> fileName;
            ui->serverStatusLabel->setText(tr("finish %1 ...").arg(fileName));
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
        bytesReceived += tcpServerConnection->bytesAvailable();
        inBlock = tcpServerConnection->readAll();
        localFile->write(inBlock);
        inBlock.resize(0);
    }
    ui->serverProgressBar->setMaximum(totalBytes);
    ui->serverProgressBar->setValue(bytesReceived);

    //断开TCP连接，关闭文件
    if(bytesReceived == totalBytes)
    {
        tcpServerConnection->close();
        localFile->close();
        ui->startButton->setEnabled(true);
        ui->serverStatusLabel->setText(tr("finish 1% success!").arg(fileName));
    }
}


void Server::displayError(QAbstractSocket::SocketError socketError)
{
    qDebug()<<tcpServerConnection->errorString();
    tcpServerConnection->close();
    ui->serverProgressBar->reset();
    ui->serverStatusLabel->setText(tr("on server"));
    ui->startButton->setEnabled(true);
}


void Server::on_startButton_clicked()
{
    start();
}

