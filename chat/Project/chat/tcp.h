#ifndef TCP_H
#define TCP_H

#include <QObject>
#include <QWidget>
#include <QtNetwork>
#include <QFile>
#include <QDialog>
#include <QFileDialog>
#include <QTcpServer>
#include <main.h>
#include <QDebug>

#define PORT 3333

class  QTcpSocket;

class tcp : public QDialog
{
    Q_OBJECT
public:
    explicit tcp(QWidget *parent = 0);
    ~tcp();

    qint64 gotTotal();
    qint64 gotBytesWritten();
    bool openFile();
    QString gotFilename();
    void setConnection(const QString &address);
    void startSendFile();
    void tcpListen();
    void updateServerProgress();


private:
       QTcpSocket* tcpApplication;
       QTcpServer* tcpServer;
       QFile* localFile;
       qint64 totalBytes;
       qint64 bytesReceived;
       qint64 fileNameSize;
       qint64 bytesWritten;
       qint64 bytesToWrite;
       qint64 payloadSize;
       QString fileName;
       QByteArray outBlock;
       QByteArray inBlock;

private slots:
       void updateFileProgress(qint64);
       void displayError(QAbstractSocket::SocketError);
       void acceptConnection();
};

#endif // TCP_H
