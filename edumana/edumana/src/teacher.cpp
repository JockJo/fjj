#include "./inc/teacher.h"
#include "ui_teacher.h"

teacher::teacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::teacher)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("学生学籍管理系统-管理员端"));
    this->set_left();
    this->set_main();
    this->set_top();
    this->show();
}

teacher::~teacher()
{
    delete ui;
}

void teacher::set_top(){
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

    QMenu *subMenu_inputgrade = new QMenu(this);
    subMenu_inputgrade->setTitle(QStringLiteral("录入分数"));
    subMenu_inputgrade->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_select(subMenu_inputgrade);

    QMenu *subMenu_changegrade = new QMenu(this);
    subMenu_changegrade->setTitle(QStringLiteral("修改分数"));
    subMenu_changegrade->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_evaluate(subMenu_changegrade);

    QMenu *subMenu_innovations = new QMenu(this);
    subMenu_innovations->setTitle(QStringLiteral("申请项目"));
    subMenu_innovations->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_innovations(subMenu_innovations);

    QMenu *subMenu_regist = new QMenu(this);
    subMenu_regist->setTitle(QStringLiteral("修改项目"));
    subMenu_regist->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_regist(subMenu_regist);


    QMenu *subMenu_infosrc= new QMenu(this);
    subMenu_infosrc->setTitle(QStringLiteral("导入学生生源信息"));
    subMenu_infosrc->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
//    action_subMenu_infosrc(subMenu_infosrc);

    QMenu *subMenu_infointer = new QMenu(this);
    subMenu_infointer->setTitle(QStringLiteral("学生校内信息"));
    subMenu_infointer->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
//    action_subMenu_infointer(subMenu_infointer);

    QMenu *subMenu_searchinfo = new QMenu(this);
    subMenu_searchinfo->setTitle(QStringLiteral("学籍查找"));
    subMenu_searchinfo->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
//    action_subMenu_searchinfo(subMenu_searchinfo);

    QMenu *subMenu_changepasswd = new QMenu(this);
    subMenu_changepasswd->setTitle(QStringLiteral("修改密码"));
    subMenu_changepasswd->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
//    action_subMenu_searchinfo(subMenu_searchinfo);


    QMenu *subMenu_adduser = new QMenu(this);
    subMenu_adduser->setTitle(QStringLiteral("增加用户"));
    subMenu_adduser->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
//    action_subMenu_searchinfo(subMenu_searchinfo);

    QMenu *subMenu_deleteuser = new QMenu(this);
    subMenu_deleteuser ->setTitle(QStringLiteral("删除用户"));
    subMenu_deleteuser ->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
//    action_subMenu_searchinfo(subMenu_searchinfo);

    QMenu *menu_managrade = new QMenu(this);
    menu_managrade->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_managrade->addMenu(subMenu_inputgrade);
    menu_managrade->addMenu(subMenu_changegrade);
    ui->button_managrade->setMenu(menu_managrade);

    QMenu *menu_innovations = new QMenu(this);
    ui->button_innovations->setMenu(menu_innovations);
    menu_innovations->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_innovations->addMenu(subMenu_innovations);
    menu_innovations->addMenu(subMenu_regist);


    QMenu *menu_manaroll = new QMenu(this);
    ui->button_manaroll->setMenu(menu_manaroll);
    menu_manaroll->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_manaroll->addMenu(subMenu_infosrc);
    menu_manaroll->addMenu(subMenu_infointer);
    menu_manaroll->addMenu(subMenu_searchinfo);


    QMenu *menu_manage = new QMenu(this);
    ui->button_manage->setMenu(menu_manage);
    menu_manage->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_manage->addMenu(subMenu_changepasswd);
    menu_manage->addMenu(subMenu_adduser);
    menu_manage->addMenu(subMenu_deleteuser);

    ui->button_managrade->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_innovations->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_manage->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_manaroll->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");

    ui->centralwidget->setWindowTitle("eduM:teacher");

}

void teacher::set_main(){
    ui->main_frame->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->main_frame_grade->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->main_frame_grade_2->setStyleSheet("QFrame{background-color:rgb(255,255,255);font-size:16px;font-weight:bold;}");
    ui->main_frame_grade_3->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->main_frame_grade_4->setStyleSheet("QFrame{background-color:rgb(255,255,255);font-size:16px;font-weight:bold;}");


}

void teacher::set_left(){
    ui->frame_left->setStyleSheet("QFrame{background-color:rgb(255,255,255);}");

    ui->button_infor_search->setStyleSheet("QPushButton{background-color:rgb(220,235,254);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:ridge;}"
                                           "QPushButton:hover{background-color:rgb(220,235,254);color:rgb(95,95,95);border-style:ridge;}"
                                           "QPushButton:pressed{background-color:rgb(220,235,254);color:rgb(95,95,95);border-style:ridge;}");

    ui->button_grade_search->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                           "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                           "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_roll_school->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                            "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                            "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_innovation->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                         "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                         "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");



    ui->button_grade_search->setVisible(state);
    ui->button_roll_school->setVisible(state);
    ui->button_innovation->setVisible(state);

}


void teacher::classCourseSlot(){
    ui->label_user_man->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
    ui->label_logal->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");
}

void teacher::gradeTestSlot(){
    qDebug() << "a";
}

void teacher::gradeCourseSlot(){
    qDebug() << "b";
}

void teacher::innovationSlot(){
    qDebug() << "c";
}

void teacher::studyTaskSlot(){
    qDebug() << "d";
}

void teacher::courseTaskSlot(){
    qDebug() << "e";
}

void teacher::testSchemeSlot(){
    qDebug() << "f";
}

void teacher::cardSlot(){
    qDebug() << "g";
}

void teacher::trainingSchemeSlot(){
    qDebug() << "h";
}



void teacher::on_button_infor_search_clicked()
{
    static int i = 1;
    if(i == 1){
        state = true;
        i = 0;
    }else{
        state = false;
        i = 1;
    }
//    ui->button_class_course->setVisible(state);
    ui->button_grade_search->setVisible(state);
    ui->button_roll_school->setVisible(state);
    ui->button_innovation->setVisible(state);
//    ui->button_grade_test->setVisible(state);
//    ui->button_study_plan->setVisible(state);
//    ui->button_test_scheme->setVisible(state);
//    ui->button_training_scheme->setVisible(state);
}

void teacher::action_subMenu_select(QMenu *m){
    QList<QAction*> action_list;
    QAction *select_course = new QAction(m);


    select_course->setText(QStringLiteral("课程选择"));


    action_list.push_front(select_course);
    m->addActions(action_list);


    connect(select_course, SIGNAL(triggered()), this, SLOT(classCourseSlot()));

}

void teacher::action_subMenu_evaluate(QMenu *m){
    QList<QAction*> action_list;
    QAction *teacher_evaluate = new QAction(m);
    QAction *other_question = new QAction(m);
    QAction *course_evaluate = new QAction(m);
    QAction *class_evaluate = new QAction(m);

    teacher_evaluate->setText(QStringLiteral("修改成绩"));
    other_question->setText(QStringLiteral("查看成绩"));
    course_evaluate->setText(QStringLiteral("登记平时分"));
    class_evaluate->setText(QStringLiteral("登记理论成绩"));

    action_list.push_front(teacher_evaluate);
    action_list.push_front(other_question);
    action_list.push_front(course_evaluate);
    action_list.push_front(class_evaluate);
    m->addActions(action_list);

    connect(teacher_evaluate, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(other_question, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(course_evaluate, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(class_evaluate, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
}

void teacher::action_subMenu_regist(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText(QStringLiteral("项目修改"));

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
}

void teacher::action_subMenu_innovations(QMenu *m){
    QList<QAction*> action_list;
    QAction *apply= new QAction(m);
    QAction *search= new QAction(m);
    QAction *access= new QAction(m);

    apply->setText(QStringLiteral("申请项目"));
    search->setText(QStringLiteral("查询项目"));
    access->setText(QStringLiteral("考核项目"));

    action_list.push_front(apply);
    action_list.push_front(search);
    action_list.push_front(access);

    m->addActions(action_list);

    connect(apply, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
}
