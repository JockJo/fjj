#include "./inc/student.h"
#include "ui_student.h"

student::student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::student)
{
    setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->setupUi(this);

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

void student::set_top(){
    QImage image, result;
    image.load(":/myImages/images/云朵.jpg");
    result = image.scaled(ui->label_background->width(),ui->label_background->height(),Qt::IgnoreAspectRatio,
                          Qt::SmoothTransformation);
    ui->label_background->setPixmap(QPixmap::fromImage(result));

    ui->frame_background->setStyleSheet("QFrame{background-color:rgb(194,218,244);font-size:16px;font-weight:bold;}");
    ui->frame_top->setStyleSheet("QFrame{background-color:rgb(255,255,255);font-size:16px;font-weight:bold;}");

    QMenu *subMenu_select = new QMenu(this);
    subMenu_select->setTitle("选课报名");
    subMenu_select->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                  "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_select(subMenu_select);

    QMenu *subMenu_evaluate = new QMenu(this);
    subMenu_evaluate->setTitle("学生评教");
    subMenu_evaluate->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_evaluate(subMenu_evaluate);

    QMenu *subMenu_innovations = new QMenu(this);
    subMenu_innovations->setTitle("申请项目");
    subMenu_innovations->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_innovations(subMenu_innovations);

    QMenu *subMenu_regist = new QMenu(this);
    subMenu_regist->setTitle("修改项目");
    subMenu_regist->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                    "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    action_subMenu_regist(subMenu_regist);


    QMenu *menu_select_course = new QMenu(this);
    menu_select_course->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");

    menu_select_course->addMenu(subMenu_select);
    menu_select_course->addMenu(subMenu_evaluate);
    ui->button_select_course->setMenu(menu_select_course);

    QMenu *menu_innovations = new QMenu(this);
    ui->button_innovations->setMenu(menu_innovations);
    menu_innovations->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");
    menu_innovations->addMenu(subMenu_innovations);
    menu_innovations->addMenu(subMenu_regist);

    QMenu *menu_inforsearch = new QMenu(this);
    ui->button_infosearch->setMenu(menu_inforsearch);
    menu_inforsearch->setStyleSheet("QMenu{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:hover{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}"
                                      "QMenu:pressed{background-color:rgb(234,242,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;}");

    ui->button_select_course->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_innovations->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_more->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");
    ui->button_infosearch->setStyleSheet("background-color:rgb(194,218,244);border-color:rgb(194,218,244);font-size:16px;font-weight:bold;");

    ui->centralwidget->setWindowTitle("eduM:student");
}

void student::set_main(){
    ui->main_frame->setStyleSheet("QFrame{background-color:rgb(224,236,255);font-size:16px;font-weight:bold;}");
    ui->label_desktop->setStyleSheet("QLabel{background-color:rgb(246,249,255);font-size:16px;font-weight:bold;}");

}

void student::set_left(){
    ui->frame_left->setStyleSheet("QFrame{background-color:rgb(255,255,255);}");

    ui->button_infor_search->setStyleSheet("QPushButton{background-color:rgb(220,235,254);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:ridge;}"
                                           "QPushButton:hover{background-color:rgb(220,235,254);color:rgb(95,95,95);border-style:ridge;}"
                                           "QPushButton:pressed{background-color:rgb(220,235,254);color:rgb(95,95,95);border-style:ridge;}");

    ui->button_class_course->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                           "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                           "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_course_search->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                            "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                            "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_grade_course->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                           "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                           "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_grade_test->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                         "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                         "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_innovation->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                         "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                         "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_study_plan->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                         "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                         "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_test_scheme->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                          "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                          "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");

    ui->button_training_scheme->setStyleSheet("QPushButton{background-color:rgb(255,255,255);color:rgb(95,95,95);font-size:16px;font-weight:bold;border-style:inset;}"
                                              "QPushButton:hover{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}"
                                              "QPushButton:pressed{background-color:rgb(251,236,136);color:rgb(95,95,95);border-style:inset;}");


    ui->button_class_course->setVisible(state);
    ui->button_course_search->setVisible(state);
    ui->button_grade_course->setVisible(state);
    ui->button_grade_test->setVisible(state);
    ui->button_innovation->setVisible(state);
    ui->button_study_plan->setVisible(state);
    ui->button_test_scheme->setVisible(state);
    ui->button_training_scheme->setVisible(state);
}


void student::classCourseSlot(){
    qDebug() << "a";
}

void student::gradeTestSlot(){
    qDebug() << "a";
}

void student::gradeCourseSlot(){
    qDebug() << "b";
}

void student::innovationSlot(){
    qDebug() << "c";
}

void student::studyTaskSlot(){
    qDebug() << "d";
}

void student::courseTaskSlot(){
    qDebug() << "e";
}

void student::testSchemeSlot(){
    qDebug() << "f";
}

void student::cardSlot(){
    qDebug() << "g";
}

void student::trainingSchemeSlot(){
    qDebug() << "h";
}



void student::on_button_infor_search_clicked()
{
    static int i = 1;
    if(i == 1){
        state = true;
        i = 0;
    }else{
        state = false;
        i = 1;
    }
    ui->button_class_course->setVisible(state);
    ui->button_course_search->setVisible(state);
    ui->button_grade_course->setVisible(state);
    ui->button_grade_test->setVisible(state);
    ui->button_innovation->setVisible(state);
    ui->button_study_plan->setVisible(state);
    ui->button_test_scheme->setVisible(state);
    ui->button_training_scheme->setVisible(state);
}

void student::action_subMenu_select(QMenu *m){
    QList<QAction*> action_list;
    QAction *select_course = new QAction(m);
    QAction *reset_make_up = new QAction(m);
    QAction *graduation_topics = new QAction(m);
    QAction *grade_test = new QAction(m);
    QAction *test = new QAction(m);

    select_course->setText("个人选课");
    reset_make_up->setText("补重修报名");
    graduation_topics->setText("毕业选题");
    grade_test->setText("考级报名");
    test->setText("考试报名");

    action_list.push_front(select_course);
    action_list.push_front(reset_make_up);
    action_list.push_front(graduation_topics);
    action_list.push_front(grade_test);
    action_list.push_front(test);
    m->addActions(action_list);

    connect(select_course, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(reset_make_up, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(graduation_topics, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(grade_test, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
    connect(test, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
}

void student::action_subMenu_evaluate(QMenu *m){
    QList<QAction*> action_list;
    QAction *teacher_evaluate = new QAction(m);
    QAction *other_question = new QAction(m);
    QAction *course_evaluate = new QAction(m);
    QAction *class_evaluate = new QAction(m);

    teacher_evaluate->setText("教师评教");
    other_question->setText("其他问卷");
    course_evaluate->setText("课程评价");
    class_evaluate->setText("课堂评价");

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

void student::action_subMenu_regist(QMenu *m){
    QList<QAction*> action_list;
    QAction *write = new QAction(m);

    write->setText("项目修改");

    action_list.push_front(write);
    m->addActions(action_list);

    connect(write, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
}

void student::action_subMenu_innovations(QMenu *m){
    QList<QAction*> action_list;
    QAction *apply= new QAction(m);

    apply->setText("申请项目");

    action_list.push_front(apply);
    m->addActions(action_list);

    connect(apply, SIGNAL(triggered()), this, SLOT(classCourseSlot()));
}
