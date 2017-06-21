#include "client.h"
#include "ui_client.h"
#include <QtNetwork>
#include <QFileDialog>

Client::Client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    payloadSize = 64*1024;
    totalBytes = 0;
    bytesWritten = 0;
    bytesToWrite = 0;
    tcpClient = new QTcpSocket(this);

    connect(tcpClient, SIGNAL(connected()),
            this, SLOT(startTransfer()));

    connect(tcpClient, SIGNAL(bytesWritten(qint64)),
            this, SLOT(updateClientProgress(qint64)));

    connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)),
            this,  SLOT(displayError(QAbstractSocket::SocketError)));

    ui->sendButton->setEnabled(false);
}


Client::~Client()
{
    delete ui;
}


void Client::openFile()
{
    fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
    {
        ui->sendButton->setEnabled(true);
        ui->clientStatusLabel->setText(tr("open file %1 success!").arg(fileName));
    }
}


void Client::send()
{
    ui->sendButton->setEnabled(false);
    bytesWritten = 0;
    ui->clientStatusLabel->setText(tr("receiving..."));
    tcpClient->connectToHost(ui->hostLineEdit->text(),
                             ui->portLineEdit->text().toInt());
}


void Client::startTransfer()
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
    bytesToWrite = totalBytes - tcpClient->write(outBlock);

    ui->clientStatusLabel->setText(tr("received"));
    outBlock.resize(0);
}

void Client::updateClientProgress(qint64 numBytes)
{
    bytesWritten += (int)numBytes;

    if(bytesToWrite > 0)
    {
        outBlock = localFile->read(qMin(bytesToWrite, payloadSize));
        bytesToWrite -= (int)tcpClient->write(outBlock);
        outBlock.resize(0);
    }
    else
    {
        localFile->close();
    }
    ui->clientProgressBar->setMaximum(totalBytes);
    ui->clientProgressBar->setValue(bytesWritten);

    if(bytesWritten == totalBytes)
    {
        ui->clientStatusLabel->setText(tr("finish 1% success").arg(fileName));
        localFile->close();
        tcpClient->close();
    }
}


void Client::displayError(QAbstractSocket::SocketError)
{
    qDebug()<< tcpClient->errorString();
    tcpClient->close();
    ui->clientProgressBar->reset();
    ui->clientStatusLabel->setText(tr("on client"));
    ui->sendButton->setEnabled(true);
}


void Client::on_openButton_clicked()
{
    ui->clientProgressBar->reset();
    ui->clientStatusLabel->setText(tr("waiting for opening file!"));
    openFile();
}

void Client::on_sendButton_clicked()
{
    send();
}
