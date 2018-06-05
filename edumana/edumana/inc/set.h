#ifndef SET_H
#define SET_H

#include <QDialog>
#include <QDebug>
#include <QFileDialog>
#include "login.h"


namespace Ui {
class set;
}

class set : public QDialog
{
    Q_OBJECT

public:
    explicit set(QWidget *parent = 0);
    ~set();

    QString gotFilename();
    QString gotUsername();

private slots:
    void on_returnButton_clicked();

    void on_loginButton_clicked();

    void on_exitButton_clicked();

    void on_userPhotoButton_clicked();

private:
    Ui::set *ui;
    QString fileName;
    QPixmap icon;
    bool mousePress;
    QPoint mousePos;
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
};

#endif // SET_H
