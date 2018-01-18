#include "./inc/login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    //设置关闭按钮
    ui->exitButton->setCursor(Qt::PointingHandCursor);
    ui->exitButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                  "QPushButton:hover{background-color:rgb(255,79,82);color:rgb(245,245,245);border-style:inset;}"
                                  "QPushButton:pressed{background-color:rgb(255,79,82);color:rgb(245,245,245);border-style:inset;}");
    //设置登陆按钮
    ui->loginButton->setCursor(Qt::PointingHandCursor);
    ui->loginButton->setStyleSheet("QPushButton{background-color:rgb(61,206,61);color:rgb(255,255,255);font-size:16px;font-weight:bold;border-style:inset;}"
                                   "QPushButton:hover{background-color:rgb(56,199,56);color:rgb(245,245,245);border-style:inset;}"
                                   "QPushButton:pressed{background-color:rgb(56,199,56);color:rgb(245,245,245);border-style:inset;}");
    //设置用户头像标签
    QImage image, result;
    image.load(":/myImages/images/1.jpg");
    result = image.scaled(ui->userPhoto->width(),ui->userPhoto->height(),Qt::IgnoreAspectRatio,
                          Qt::SmoothTransformation);
    ui->userPhoto->setPixmap(QPixmap::fromImage(result));

    //设置用户名字标签
    ui->userNameLabel->setStyleSheet("QLabel{background-color:rgb(245,245,245);color:rgb(135,135,135);font-size:16px;font-weight:bold;border-style:inset}");
    ui->userNameLabel->setAlignment(Qt::AlignCenter);
    ui->userNameLabel->setText("JockJo");

    //设置切换账号按钮
    ui->changAccountButton->setCursor(Qt::PointingHandCursor);
    ui->changAccountButton->setStyleSheet("QPushButton{color:rgb(67,104,149);font-size:16px;font-weight:bold;border-style:inset;}");


    //隐藏边框
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->show();

}

void login::mousePressEvent(QMouseEvent* event)
{
    if(event->button() == Qt::LeftButton)
    {
        mousePress = true;
        mousePos = event->pos();
    }
}

void login::mouseMoveEvent(QMouseEvent* event)
{
    if(mousePress)
    {
        move(event->pos()-mousePos+pos());
    }
}

void login::mouseReleaseEvent(QMouseEvent* event)
{
    Q_UNUSED(event);
    mousePress = false;
}

login::~login()
{
    delete ui;
}

void login::on_loginButton_clicked()
{
    /*开启新的进程，进入主界面*/
    delete ui;
    this->close();
    s = new student();
 //   t = new teacher();
}

void login::on_exitButton_clicked()
{
    delete ui;
    this->close();
}

void login::on_changAccountButton_clicked()
{
    delete ui;
    this->close();
    set* s = new set();
}
