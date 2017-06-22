#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QPixmap>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("C:/Users/JackJo/Desktop/snipaste_20170604_220904.png"));
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::red,
                                          this,tr("color dialog box"));
    qDebug() << "color: " << color;
}

void MyWidget::on_pushButton_8_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("file dialog box"),
                                                    "C:", tr("image file( *png *jpg)"));
    qDebug() << "fileName:" << fileName;
}

void MyWidget::on_pushButton_7_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok) ui->pushButton_7->setFont(font);
    else qDebug() << tr("did not chose font!");
}


void MyWidget::on_pushButton_6_clicked()
{
    bool ok;
    QString string = QInputDialog::getText(this, tr("input string dialog box"),
                                           tr("please input username:"),
                                           QLineEdit::Normal,tr("admin"),
                                           &ok);
    if(ok) qDebug() << "string: " << string;

    int value1 = QInputDialog::getInt(this, tr("input integar dialog box"),
                                      tr("please input number from -1000 to 1000"),
                                      100,-1000,1000,10,&ok);
    if(ok) qDebug() << "value:" << value1;

    QStringList items;
    QString item = QInputDialog::getItem(this, tr("input item dialog box"),
                                         tr("please select a item"), items,
                                         0,true,&ok);
    if(ok) qDebug()<< "item:" << item;

}

void MyWidget::on_pushButton_5_clicked()
{
    int ret1 = QMessageBox::question(this, tr("question dialog box"),
                                     tr("do you know Qt?"),QMessageBox::Yes,QMessageBox::No);
    if(ret1 == QMessageBox::Yes) qDebug()<<tr("question!");

    int ret2 = QMessageBox::information(this, tr("tips"),
                                        tr("this is a book about Qt!"),
                                        QMessageBox::Ok);
    if(ret2 == QMessageBox::Ok) qDebug()<<tr("tips!");

    int ret3 = QMessageBox::warning(this, tr("warning"),
                                        tr("you can not give up!"),
                                        QMessageBox::Abort);
    if(ret3 == QMessageBox::Abort) qDebug() << tr("warning!");





}
