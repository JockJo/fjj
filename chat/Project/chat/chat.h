#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QLabel>
#include <QtGui>
#include <QSizePolicy>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QKeyEvent>

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

protected:
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
};

#endif // CHAT_H
