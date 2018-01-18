#include "./inc/edumana.h"
#include "ui_edumana.h"

edumana::edumana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::edumana)
{
    ui->setupUi(this);
}

edumana::~edumana()
{
    delete ui;
}
