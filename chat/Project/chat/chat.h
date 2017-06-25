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
};

#endif // CHAT_H
