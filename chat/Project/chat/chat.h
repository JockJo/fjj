#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QLabel>
#include <QtGui>
#include <QSizePolicy>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QKeyEvent>
#include <main.h>
#include <QDialog>
#include <QList>

class tcp;
class udp;

namespace Ui {
class chat;
}

class chat : public QWidget
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = 0);
    ~chat();

private:
    Ui::chat *ui;
    bool mousePress;
    QPoint mousePos;
    tcp* tc;
    udp* ud;

    void setProgressBar(qint64 max, qint64 value);

protected:
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void fullScreen();

private slots:
    void on_exitButton_clicked();
    void on_maxSizeButton_clicked();
    void on_sendFileButton_clicked();
    void on_sendButton_clicked();
    void on_addfriendButton_clicked();
    void on_collectionButton_clicked();
};

#endif // CHAT_H
