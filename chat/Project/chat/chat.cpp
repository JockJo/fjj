#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->show();

    //设置关闭按钮
    ui->exitButton->setCursor(Qt::PointingHandCursor);
    ui->exitButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                  "QPushButton:hover{background-color:rgb(255,79,82);color:rgb(245,245,245);border-style:inset;}"
                                  "QPushButton:pressed{background-color:rgb(255,79,82);color:rgb(245,245,245);border-style:inset;}");
    //设置放大按钮
    ui->maxSizeButton->setCursor(Qt::PointingHandCursor);
    ui->maxSizeButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(95,95,95);font-size:13px;font-weight:bold;border-style:inset;}"
                                     "QPushButton:hover{background-color:rgb(227,227,227);color:rgb(134,134,134);border-style:inset;}"
                                     "QPushButton:pressed{background-color:rgb(227,227,227);color:rgb(134,134,134);border-style:inset;}");
    //设置缩小按钮
    ui->minSizeButton->setCursor(Qt::PointingHandCursor);
    ui->minSizeButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(95,95,95);font-size:13px;font-weight:bold;border-style:inset;}"
                                     "QPushButton:hover{background-color:rgb(227,227,227);color:rgb(134,134,134);border-style:inset;}"
                                     "QPushButton:pressed{background-color:rgb(227,227,227);color:rgb(134,134,134);border-style:inset;}");
    //设置聊天设置按钮
    ui->takingToolButton->setCursor(Qt::PointingHandCursor);
    ui->takingToolButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(95,95,95);font-size:13px;font-weight:bold;border-style:inset;}"
                                        "QPushButton:hover{color:rgb(10,206,8);border-style:inset;}"
                                        "QPushButton:pressed{color:rgb(10,206,8);border-style:inset;}");
    //设置表情图标按钮
    ui->emojiButton->setCursor(Qt::PointingHandCursor);
    ui->emojiButton->setStyleSheet("QPushButton{background-color:rgb(255,255,255);border-image:url(:/myImages/label/Smile.png);border-style:inset;}"
                                   "QPushButton:hover{background-color:rgb(255,255,255);border-image:url(:/myImages/label/Smile2.png);border-style:inset;}");
    //设置文件图标按钮
    ui->sendFileButton->setCursor(Qt::PointingHandCursor);
    ui->sendFileButton->setStyleSheet("QPushButton{background-color:rgb(255,255,255);border-image:url(:/myImages/label/folder.png);border-style:inset;}"
                                   "QPushButton:hover{background-color:rgb(255,255,255);border-image:url(:/myImages/label/folder2.png);border-style:inset;}");

    //设置电话图标按钮
    ui->phoneButton->setCursor(Qt::PointingHandCursor);
    ui->phoneButton->setStyleSheet("QPushButton{background-color:rgb(255,255,255);border-image:url(:/myImages/label/phone2.png);border-style:inset;}"
                                   "QPushButton:hover{background-color:rgb(255,255,255);border-image:url(:/myImages/label/phone.png);border-style:inset;}");
    //设置发送按钮
    ui->sendButton->setCursor(Qt::PointingHandCursor);
    ui->sendButton->setStyleSheet("QPushButton{background-color:rgb(245,245,245);color:rgb(96,96,96);font-size:16px;font-weight:bold;border-color:rgb(229,229,229);border-style:inset;}"
                                  "QPushButton:hover{background-color:rgb(18,150,17);color:rgb(255,255,255);font-size:16px;font-weight:bold;border-style:inset;}"
                                  "QPushButton:pressed{background-color:rgb(26,173,25);color:rgb(255,255,255);font-size:16px;font-weight:bold;border-style:inset;}");
    //设置显示框
    ui->listView->setStyleSheet("border:none");

    //设置输入框
    ui->textEdit->setStyleSheet("border:none");

    //设置朋友列表框
    ui->friendsListWidget->setFrameShape(QListWidget::NoFrame);
    ui->fListWidget->setFrameShape(QListWidget::NoFrame);

    //设置工具列表框
    ui->toolListWidget->setFrameShape(QListWidget::NoFrame);

    //设置选择对话按钮
    ui->tolkingButton->setCursor(Qt::PointingHandCursor);
    ui->tolkingButton->setStyleSheet("QPushButton{background-color:rgb(42,42,42);border-image:url(:/myImages/label/comments.png);border-style:inset;}"
                                     "QPushButton:hover{background-color:rgb(42,42,42);border-image:url(:/myImages/label/comments2.png);border-style:inset;}"
                                     "QPushButton:pressed{background-color:rgb(42,42,42);border-image:url(:/myImages/label/comments3.png);border-style:inset;}");
    //设置用户按钮
    ui->friendButton->setCursor(Qt::PointingHandCursor);
    ui->friendButton->setStyleSheet("QPushButton{background-color:rgb(42,42,42);border-image:url(:/myImages/label/friends.png);border-style:inset;}"
                                    "QPushButton:hover{background-color:rgb(42,42,42);border-image:url(:/myImages/label/friends2.png);border-style:inset;}"
                                    "QPushButton:pressed{background-color:rgb(42,42,42);border-image:url(:/myImages/label/friends3.png);border-style:inset;}");

    //设置收藏按钮
    ui->collectionButton->setCursor(Qt::PointingHandCursor);
    ui->collectionButton->setStyleSheet("QPushButton{background-color:rgb(42,42,42);border-image:url(:/myImages/label/box.png);border-style:inset;}"
                                        "QPushButton:hover{background-color:rgb(42,42,42);border-image:url(:/myImages/label/box2.png);border-style:inset;}"
                                        "QPushButton:pressed{background-color:rgb(42,42,42);border-image:url(:/myImages/label/box3.png);border-style:inset;}");

    //设置设置按钮
    ui->settingButton->setCursor(Qt::PointingHandCursor);
    ui->settingButton->setStyleSheet("QPushButton{background-color:rgb(42,42,42);border-image:url(:/myImages/label/list.png);border-style:inset;}"
                                     "QPushButton:hover{background-color:rgb(42,42,42);border-image:url(:/myImages/label/list2.png);border-style:inset;}");
    //设置添加好友按钮
    ui->addfriendButton->setCursor(Qt::PointingHandCursor);
    ui->addfriendButton->setStyleSheet("QPushButton{background-color:rgb(230,227,226);color:rgb(96,96,96);font-size:25px;font-weight:bold;border-color:rgb(218,215,214);border-width:2px;border-style:solid}"
                                       "QPushButton:hover{background-color:rgb(230,227,226);color:rgb(96,96,96);font-size:25px;font-weight:bold;border-color:rgb(202,202,202);border-width:2px;border-style:solid}");

    //设置搜索输入框
    ui->searchLineEdit->setStyleSheet("QLineEdit{background-color:rgb(230,227,226);color:rgb(96,96,96);font-size:16px;font-weight:bold;border-color:rgb(218,215,214);border-width:2px;border-style:solid}"
                                       "QLineEdit:hover{background-color:rgb(230,227,226);color:rgb(96,96,96);font-size:16px;font-weight:bold;border-color:rgb(202,202,202);border-width:2px;border-style:solid}");

    //设置用户头像
    ui->userPhotolabel->setCursor(Qt::PointingHandCursor);
    QImage image, result;
    image.load(":/myImages/1.jpg");
    result = image.scaled(ui->userPhotolabel->width(),ui->userPhotolabel->height(),Qt::IgnoreAspectRatio,
                          Qt::SmoothTransformation);
    ui->userPhotolabel->setPixmap(QPixmap::fromImage(result));

    tc = new tcp(this);
    ud = new udp(this);
}

//全屏显示
void chat::fullScreen()
{
    ui->toolListWidget->showMaximized();
    this->showFullScreen();
}

//移动窗口
void chat::mousePressEvent(QMouseEvent* event)
{
    if(event->button() == Qt::LeftButton)
    {
        mousePress = true;
        mousePos = event->pos();
    }
}

void chat::mouseMoveEvent(QMouseEvent* event)
{
    if(mousePress)
    {
        move(event->pos()-mousePos+pos());
    }
}

void chat::mouseReleaseEvent(QMouseEvent* event)
{
    Q_UNUSED(event);
    mousePress = false;
}

chat::~chat()
{
    delete ui;
}

//关闭窗口
void chat::on_exitButton_clicked()
{
    delete ui;
    this->close();
}

//显示全屏
void chat::on_maxSizeButton_clicked()
{
 //   this->fullScreen();
}

//打开文件
void chat::on_sendFileButton_clicked()
{
    QString filename;
    tc->openFile();
    if( !(filename = tc->gotFilename()).isEmpty() )
    {
       ui->textEdit->setText(tc->gotFilename());
    }
}

void chat::setProgressBar(qint64 max, qint64 value)
{
    ui->sendFileProgressBar->setMaximum(max);
    ui->sendFileProgressBar->setValue(value);
}

//发送内容
void chat::on_sendButton_clicked()
{
    tc->startSendFile();
    qDebug() << tc->gotFilename();
}

void chat::on_addfriendButton_clicked()
{
    ud->send();
    displayFriends();
}

//更新朋友列表
void chat::displayFriends()
{
    QStringList addressList;
   /*  ui->friendsListWidget->clear();
    QSqlDatabase db = QSqlDatabase::database("connection1");
    QSqlQuery query(db);
    while(query.next())
    {
        addressList.append( query.value(0).toString() );
    }
    */
    QString address;
    addressList.append(address.append(ud->gotDebugIp()));
    ui->friendsListWidget->addItems(addressList);

}

void chat::on_collectionButton_clicked()
{
    QByteArray ip = ud->gotDebugIp();
    QString address;
    address.append(ip);
    tc->setConnection(address);
}

void chat::on_tolkingButton_clicked()
{
    displayFriends();
}
