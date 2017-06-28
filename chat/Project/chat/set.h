#ifndef SET_H
#define SET_H

#include <QDialog>
#include <main.h>

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
};

#endif // SET_H
