#include "./inc/set.h"
#include "ui_set.h"

set::set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->show();

    //设置关闭按钮
    ui->exitButton->setCursor(Qt::PointingHandCursor);
    ui->exitButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                  "QPushButton:hover{background-color:rgb(255,79,82);color:rgb(245,245,245);border-style:inset;}"
                                  "QPushButton:pressed{background-color:rgb(255,79,82);color:rgb(245,245,245);border-style:inset;}");
    //设置头像设置按钮
    ui->userPhotoButton->setCursor(Qt::PointingHandCursor);
    QSize* iconSize = new QSize(114,114);
    ui->userPhotoButton->setIconSize(*iconSize);
    icon = (tr(":/myImages/images/1.jpg"));
    fileName = ":/myImages/images/1.jpg";
    ui->userPhotoButton->setIcon(icon);

    //设置内容显示居中
    ui->lineEdit->setAlignment(Qt::AlignCenter);
    ui->lineEdit->setStyleSheet("QLabel{background-color:rgb(245,245,245);color:rgb(135,135,135);font-size:16px;font-weight:bold;border-style:inset}");
    ui->lineEdit->setStyleSheet("border:none");

    //设置登陆按钮
    ui->loginButton->setCursor(Qt::PointingHandCursor);
    ui->loginButton->setStyleSheet("QPushButton{background-color:rgb(61,206,61);color:rgb(255,255,255);font-size:16px;font-weight:bold;border-style:inset;}"
                                   "QPushButton:hover{background-color:rgb(56,199,56);color:rgb(245,245,245);border-style:inset;}"
                                   "QPushButton:pressed{background-color:rgb(56,199,56);color:rgb(245,245,245);border-style:inset;}");
    //设置切换账号按钮
    ui->returnButton->setCursor(Qt::PointingHandCursor);
    ui->returnButton->setStyleSheet("QPushButton{color:rgb(67,104,149);font-size:16px;font-weight:bold;border-style:inset;}");

}

set::~set()
{
    delete ui;
}

void set::on_returnButton_clicked()
{
    delete ui;
    this->close();
    login* lg = new login();
}

void set::on_loginButton_clicked()
{
    if( ui->lineEdit->text() == "input username")
    {
        qDebug() << "please input username";
    }
    else
    {
        /*开启新的进程，进入主界面*/
        delete ui;
        this->close();
//        chat* ch = new chat();
    }
}

void set::on_exitButton_clicked()
{
    delete ui;
    this->close();
}

void set::on_userPhotoButton_clicked()
{
    fileName = QFileDialog::getOpenFileName(this);
    if( !fileName.isEmpty() && (fileName.contains(".png") || fileName.contains(".jpg")) )
    {
        icon = (tr(fileName.toUtf8()));
        ui->userPhotoButton->setIcon(icon);
    }
}

QString set::gotUsername()
{
    return ui->lineEdit->text();
}

QString set::gotFilename()
{
    return fileName;
}

