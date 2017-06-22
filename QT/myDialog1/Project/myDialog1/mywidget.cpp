#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>
#include "mydialog.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    connect(ui->showChildButton, SIGNAL(clicked()),
            this, SLOT(showChildDialog()));
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::showChildDialog()
{
    QDialog* dialog = new QDialog(this);
    //设置为模态方式
    //dialog->setModal(true);
    dialog->show();
}



void myWidget::on_pushButton_clicked()
{
    close();
    MyDialog dlg;
    if(dlg.exec() == QDialog::Accepted)
        show();
}
