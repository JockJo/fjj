#ifndef EDUMANA_H
#define EDUMANA_H

#include <QMainWindow>

namespace Ui {
class edumana;
}

class edumana : public QMainWindow
{
    Q_OBJECT

public:
    explicit edumana(QWidget *parent = 0);
    ~edumana();

private:
    Ui::edumana *ui;
};

#endif // EDUMANA_H
