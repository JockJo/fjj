/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacher
{
public:
    QWidget *centralwidget;
    QFrame *frame_main;
    QPushButton *size_putton;
    QPushButton *putton_delete;
    QTableWidget *main_table;
    QFrame *main_frame;
    QLabel *label_desktop;
    QFrame *frame_top;
    QLabel *label_background;
    QFrame *frame_background;
    QPushButton *button_select_course;
    QPushButton *button_innovations;
    QPushButton *button_infosearch;
    QPushButton *button_more;
    QFrame *frame_left;
    QPushButton *button_infor_search;
    QPushButton *button_course_search;
    QPushButton *button_class_course;
    QPushButton *button_grade_test;
    QPushButton *button_grade_course;
    QPushButton *button_test_scheme;
    QPushButton *button_study_plan;
    QPushButton *button_innovation;
    QPushButton *button_training_scheme;

    void setupUi(QMainWindow *teacher)
    {
        if (teacher->objectName().isEmpty())
            teacher->setObjectName(QStringLiteral("teacher"));
        teacher->resize(1026, 600);
        centralwidget = new QWidget(teacher);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame_main = new QFrame(centralwidget);
        frame_main->setObjectName(QStringLiteral("frame_main"));
        frame_main->setGeometry(QRect(139, 99, 891, 500));
        frame_main->setFrameShape(QFrame::StyledPanel);
        frame_main->setFrameShadow(QFrame::Raised);
        size_putton = new QPushButton(frame_main);
        size_putton->setObjectName(QStringLiteral("size_putton"));
        size_putton->setGeometry(QRect(843, 0, 46, 35));
        putton_delete = new QPushButton(frame_main);
        putton_delete->setObjectName(QStringLiteral("putton_delete"));
        putton_delete->setGeometry(QRect(800, 0, 46, 35));
        main_table = new QTableWidget(frame_main);
        main_table->setObjectName(QStringLiteral("main_table"));
        main_table->setGeometry(QRect(0, 35, 891, 466));
        main_frame = new QFrame(frame_main);
        main_frame->setObjectName(QStringLiteral("main_frame"));
        main_frame->setGeometry(QRect(0, 0, 891, 35));
        main_frame->setFrameShape(QFrame::StyledPanel);
        main_frame->setFrameShadow(QFrame::Raised);
        label_desktop = new QLabel(main_frame);
        label_desktop->setObjectName(QStringLiteral("label_desktop"));
        label_desktop->setEnabled(true);
        label_desktop->setGeometry(QRect(0, 0, 100, 35));
        frame_top = new QFrame(centralwidget);
        frame_top->setObjectName(QStringLiteral("frame_top"));
        frame_top->setGeometry(QRect(0, 0, 1026, 100));
        frame_top->setFrameShape(QFrame::StyledPanel);
        frame_top->setFrameShadow(QFrame::Raised);
        label_background = new QLabel(frame_top);
        label_background->setObjectName(QStringLiteral("label_background"));
        label_background->setGeometry(QRect(445, 0, 601, 65));
        frame_background = new QFrame(frame_top);
        frame_background->setObjectName(QStringLiteral("frame_background"));
        frame_background->setGeometry(QRect(452, 65, 574, 35));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        button_select_course = new QPushButton(frame_background);
        button_select_course->setObjectName(QStringLiteral("button_select_course"));
        button_select_course->setGeometry(QRect(0, 0, 120, 35));
        button_innovations = new QPushButton(frame_background);
        button_innovations->setObjectName(QStringLiteral("button_innovations"));
        button_innovations->setGeometry(QRect(118, 0, 120, 35));
        button_infosearch = new QPushButton(frame_background);
        button_infosearch->setObjectName(QStringLiteral("button_infosearch"));
        button_infosearch->setGeometry(QRect(236, 0, 120, 35));
        button_more = new QPushButton(frame_background);
        button_more->setObjectName(QStringLiteral("button_more"));
        button_more->setGeometry(QRect(354, 0, 120, 35));
        frame_background->raise();
        label_background->raise();
        frame_left = new QFrame(centralwidget);
        frame_left->setObjectName(QStringLiteral("frame_left"));
        frame_left->setGeometry(QRect(0, 100, 141, 500));
        frame_left->setFrameShape(QFrame::StyledPanel);
        frame_left->setFrameShadow(QFrame::Raised);
        button_infor_search = new QPushButton(frame_left);
        button_infor_search->setObjectName(QStringLiteral("button_infor_search"));
        button_infor_search->setGeometry(QRect(0, 0, 141, 35));
        button_infor_search->setAutoDefault(false);
        button_course_search = new QPushButton(frame_left);
        button_course_search->setObjectName(QStringLiteral("button_course_search"));
        button_course_search->setGeometry(QRect(0, 32, 141, 35));
        button_course_search->setAutoDefault(false);
        button_class_course = new QPushButton(frame_left);
        button_class_course->setObjectName(QStringLiteral("button_class_course"));
        button_class_course->setGeometry(QRect(0, 64, 141, 35));
        button_class_course->setAutoDefault(false);
        button_grade_test = new QPushButton(frame_left);
        button_grade_test->setObjectName(QStringLiteral("button_grade_test"));
        button_grade_test->setGeometry(QRect(0, 96, 141, 35));
        button_grade_test->setAutoDefault(false);
        button_grade_course = new QPushButton(frame_left);
        button_grade_course->setObjectName(QStringLiteral("button_grade_course"));
        button_grade_course->setGeometry(QRect(0, 128, 141, 35));
        button_grade_course->setAutoDefault(false);
        button_test_scheme = new QPushButton(frame_left);
        button_test_scheme->setObjectName(QStringLiteral("button_test_scheme"));
        button_test_scheme->setGeometry(QRect(0, 256, 141, 35));
        button_test_scheme->setAutoDefault(false);
        button_study_plan = new QPushButton(frame_left);
        button_study_plan->setObjectName(QStringLiteral("button_study_plan"));
        button_study_plan->setGeometry(QRect(0, 192, 141, 35));
        button_study_plan->setAutoDefault(false);
        button_innovation = new QPushButton(frame_left);
        button_innovation->setObjectName(QStringLiteral("button_innovation"));
        button_innovation->setGeometry(QRect(0, 160, 141, 35));
        button_innovation->setAutoDefault(false);
        button_training_scheme = new QPushButton(frame_left);
        button_training_scheme->setObjectName(QStringLiteral("button_training_scheme"));
        button_training_scheme->setGeometry(QRect(0, 224, 141, 35));
        button_training_scheme->setAutoDefault(false);
        teacher->setCentralWidget(centralwidget);

        retranslateUi(teacher);

        QMetaObject::connectSlotsByName(teacher);
    } // setupUi

    void retranslateUi(QMainWindow *teacher)
    {
        teacher->setWindowTitle(QApplication::translate("teacher", "MainWindow", nullptr));
        size_putton->setText(QString());
        putton_delete->setText(QString());
        label_desktop->setText(QApplication::translate("teacher", " \346\210\221\347\232\204\346\241\214\351\235\242", nullptr));
        label_background->setText(QString());
        button_select_course->setText(QApplication::translate("teacher", "\346\210\220\347\273\251\350\257\276\347\250\213", nullptr));
        button_innovations->setText(QApplication::translate("teacher", "\345\210\233\346\226\260\351\241\271\347\233\256", nullptr));
        button_infosearch->setText(QApplication::translate("teacher", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        button_more->setText(QString());
        button_infor_search->setText(QApplication::translate("teacher", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        button_course_search->setText(QApplication::translate("teacher", "\350\257\276\350\241\250\346\237\245\350\257\242", nullptr));
        button_class_course->setText(QApplication::translate("teacher", "\347\217\255\347\272\247\350\257\276\350\241\250", nullptr));
        button_grade_test->setText(QApplication::translate("teacher", "\350\200\203\347\272\247\346\210\220\347\273\251", nullptr));
        button_grade_course->setText(QApplication::translate("teacher", "\350\257\276\347\250\213\346\210\220\347\273\251", nullptr));
        button_test_scheme->setText(QApplication::translate("teacher", "\350\200\203\350\257\225\345\256\211\346\216\222", nullptr));
        button_study_plan->setText(QApplication::translate("teacher", "\345\255\246\344\271\240\350\256\241\345\210\222", nullptr));
        button_innovation->setText(QApplication::translate("teacher", "\345\210\233\346\226\260\351\241\271\347\233\256", nullptr));
        button_training_scheme->setText(QApplication::translate("teacher", "\345\237\271\345\205\273\346\226\271\346\241\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacher: public Ui_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
