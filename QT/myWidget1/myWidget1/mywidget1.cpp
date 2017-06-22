#include "mywidget1.h"
#include "ui_mywidget1.h"

myWidget1::myWidget1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget1)
{
    ui->setupUi(this);
}

myWidget1::~myWidget1()
{
    delete ui;
}
