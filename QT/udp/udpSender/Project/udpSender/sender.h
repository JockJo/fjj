#ifndef SENDER_H
#define SENDER_H

#include <QDialog>

class QUdpSocket;

namespace Ui {
class Sender;
}

class Sender : public QDialog
{
    Q_OBJECT

public:
    explicit Sender(QWidget *parent = 0);
    ~Sender();

private slots:
    void on_pushButton_clicked();
    void processPendingDatagram();

private:
    Ui::Sender *ui;
    QUdpSocket* sender;
    QString QHostAddressIPv4;
};

#endif // SENDER_H
