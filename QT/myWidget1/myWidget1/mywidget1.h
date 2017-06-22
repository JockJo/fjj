#ifndef MYWIDGET1_H
#define MYWIDGET1_H

#include <QWidget>

namespace Ui {
class myWidget1;
}

class myWidget1 : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget1(QWidget *parent = 0);
    ~myWidget1();

private:
    Ui::myWidget1 *ui;
};

#endif // MYWIDGET1_H
