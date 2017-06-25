#ifndef TCP_H
#define TCP_H

#include <QObject>
#include <QWidget>
#include <QtNetwork>
#include <QFile>
#include <QDialog>
#include <QFileDialog>

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


   signals:

   private:
       QTcpSocket* tcpApplication;
       QFile* localFile;
       qint64 totalBytes;
       qint64 bytesWritten;
       qint64 bytesToWrite;
       qint64 payloadSize;
       QString fileName;
       QByteArray outBlock;

       void setConnection(const QHostAddress &address);

   private slots:
       void startSendFile();
       void updateClientProgress(qint64);
       void displayError(QAbstractSocket::SocketError);
};

#endif // TCP_H
