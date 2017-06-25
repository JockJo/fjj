#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QtGui>
#include <QSizePolicy>
#include <QHBoxLayout>
#include <QDebug>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_loginButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::login *ui;
    bool mousePress;
    QPoint mousePos;

protected:
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
};

#endif // LOGIN_H
