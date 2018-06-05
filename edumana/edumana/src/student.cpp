#include "./inc/student.h"
#include "ui_student.h"

student::student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::student)
{
    setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->setupUi(this);

    this->setWindowTitle(QStringLiteral("学生学籍管理系统-学生端"));
    this->set_left();
    this->set_top();
    this->set_main();

    this->show();
    db *d = new db();
    bool i = d->getStatus();
    qDebug() << i;
}

student::~student()
{
    delete ui;
}


void student::mana_roll_set(){
    QMenu *subMenu_family_info = new QMenu(this);
    subMenu_family_info->setTitle(QStringLiteral("家庭信息"));
    subMenu_family_info->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_family_info(subMenu_family_info);

    QMenu *subMenu_school_info = new QMenu(this);
    subMenu_school_info->setTitle(QStringLiteral("校内信息"));
    subMenu_school_info->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_school_info(subMenu_school_info);

    QMenu *subMenu_src_info = new QMenu(this);
    subMenu_src_info->setTitle(QStringLiteral("生源信息"));
    subMenu_src_info->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                       "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                       "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_src_info(subMenu_src_info);

    QMenu *subMenu_roll_all = new QMenu(this);
    subMenu_roll_all->setTitle(QStringLiteral("全部信息"));
    subMenu_roll_all->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_roll_all(subMenu_roll_all);


    QMenu *menu_manage_roll = new QMenu(this);
    menu_manage_roll->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_manage_roll->addMenu(subMenu_roll_all);
    menu_manage_roll->addMenu(subMenu_src_info);
    menu_manage_roll->addMenu(subMenu_school_info);
    menu_manage_roll->addMenu(subMenu_family_info);
    ui->button_manaRoll->setMenu(menu_manage_roll);
    ui->button_manaRoll->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");

}
void student::innovation_set(){
    QMenu *subMenu_apply = new QMenu(this);
    subMenu_apply->setTitle(QStringLiteral("申请项目"));
    subMenu_apply->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_apply(subMenu_apply);

    QMenu *subMenu_search = new QMenu(this);
    subMenu_search->setTitle(QStringLiteral("查询项目"));
    subMenu_search->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_search(subMenu_search);

    QMenu *subMenu_update = new QMenu(this);
    subMenu_update->setTitle(QStringLiteral("更新项目"));
    subMenu_update->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_update(subMenu_update);


    QMenu *menu_innovation = new QMenu(this);
    menu_innovation->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_innovation->addMenu(subMenu_apply);
    menu_innovation->addMenu(subMenu_search);
    menu_innovation->addMenu(subMenu_update);
    ui->button_innovation->setMenu(menu_innovation);
    ui->button_innovation->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");

}
void student::infosearch_set(){
    QMenu *menu_inforsearch = new QMenu(this);
    ui->button_infosearch->setMenu(menu_inforsearch);
    menu_inforsearch->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");

    ui->button_more->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_infosearch->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");

}
void student::set_top(){
    QImage image, result;
    image.load(":/myImages/images/clound.jpg");
    result = image.scaled(ui->label_background->width(),ui->label_background->height(),Qt::IgnoreAspectRatio,
                          Qt::SmoothTransformation);
    ui->label_background->setPixmap(QPixmap::fromImage(result));

    image.load(":/myImages/images/gdut.png");
    result = image.scaled(ui->label_background_2->width(),ui->label_background_2->height(),Qt::IgnoreAspectRatio,
                          Qt::SmoothTransformation);
    ui->label_background_2->setPixmap(QPixmap::fromImage(result));

    ui->frame_background->setStyleSheet("QFrame{background-color:rgb(194,218,244);font-size:16px;font-weight:bold;}");
    ui->frame_top->setStyleSheet("QFrame{background-color:rgb(255,255,255);font-size:16px;font-weight:bold;}");

    mana_roll_set();
    innovation_set();
    infosearch_set();
    ui->centralwidget->setWindowTitle("eduM:student");
}
void student::set_main(){
    ui->main_frame->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
}
void student::set_left(){
    ui->frame_left->setStyleSheet("QFrame{background-color:rgb(255,255,255);}");

    ui->button_infor_search->setStyleSheet("QPushButton{background-color:rgb(220,235,254);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:ridge;}"
                                           "QPushButton:hover{background-color:rgb(220,235,254);color:rgb(95,95,95);border-style:ridge;}"
                                           "QPushButton:pressed{background-color:rgb(220,235,254);color:rgb(95,95,95);border-style:ridge;}");

    ui->button_grade_search->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                           "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                           "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_roll_search->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                           "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                           "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");


    ui->button_grade_search->setVisible(state);
    ui->button_roll_search->setVisible(state);
}

void student::on_button_infor_search_clicked(){
    static int i = 1;
    if(i == 1){
        state = true;
        i = 0;
    }else{
        state = false;
        i = 1;
    }
    ui->button_grade_search->setVisible(state);
    ui->button_roll_search->setVisible(state);
}
void student::on_button_grade_search_clicked(){
    ui->label_grade_search->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
    ui->table_grade->setFrameShape(QFrame::NoFrame);
    ui->table_grade_2->setFrameShape(QFrame::NoFrame);


}
void student::on_button_roll_search_clicked(){
    qDebug() << "b";
}

void student::action_subMenu_family_info(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("家庭信息"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(familyinfoSlot()));
}
void student::action_subMenu_school_info(QMenu *m){
    QList<QAction*> action_list;
    QAction *apply= new QAction(m);

    apply->setText(QStringLiteral("学校信息"));

    action_list.push_front(apply);
    m->addActions(action_list);

    connect(apply, SIGNAL(triggered()), this, SLOT(schoolinfoSlot()));
}
void student::action_subMenu_roll_all(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("全部信息"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(rollallSlot()));
}
void student::action_subMenu_src_info(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("生源信息"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(srcinfoSlot()));
}
void student::action_subMenu_apply(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("项目申请"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(applyInnovation()));
}
void student::action_subMenu_search(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("项目查询"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(searchInnovationSlot()));
}
void student::action_subMenu_update(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("项目更新"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(updateInnovationSlot()));
}

void student::familyinfoSlot(){
    qDebug() << "a";
}
void student::schoolinfoSlot(){
    qDebug() << "b";
}
void student::rollallSlot(){
}
void student::srcinfoSlot(){
    qDebug() << "d";
}
void student::applyInnovation(){
    ui->main_frame_pro->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->label_innovation->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
    ui->label_apply_pro->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
}
void student::searchInnovationSlot(){
    ui->main_frame_pro->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->label_innovation->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
    ui->label_search_pro->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
}
void student::updateInnovationSlot(){
    ui->main_frame_pro->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->label_innovation->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
    ui->label_update_pro->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
    ui->table_grade->setFrameShape(QFrame::NoFrame);
    ui->table_grade_2->setFrameShape(QFrame::NoFrame);
    ui->table_grade_3->setFrameShape(QFrame::NoFrame);
    ui->table_grade_4->setFrameShape(QFrame::NoFrame);
}
