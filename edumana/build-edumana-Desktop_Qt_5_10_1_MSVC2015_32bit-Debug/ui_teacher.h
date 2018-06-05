/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacher
{
public:
    QWidget *centralwidget;
    QFrame *frame_main;
    QPushButton *size_putton;
    QPushButton *putton_delete;
    QFrame *main_frame;
    QLabel *label_desktop;
    QLabel *label_grade_mana;
    QLabel *label_roll;
    QLabel *label_user_man;
    QFrame *main_frame_grade;
    QLabel *label_logal;
    QFrame *main_frame_grade_3;
    QLabel *label_year_14;
    QLabel *label_year_15;
    QLabel *label_year_16;
    QFrame *main_frame_grade_2;
    QLabel *label_year_18;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLabel *label_year_17;
    QFrame *main_frame_grade_4;
    QFrame *frame_top;
    QLabel *label_background;
    QFrame *frame_background;
    QPushButton *button_managrade;
    QPushButton *button_innovations;
    QPushButton *button_manaroll;
    QPushButton *button_manage;
    QLabel *label_background_2;
    QFrame *frame_left;
    QPushButton *button_infor_search;
    QPushButton *button_grade_search;
    QPushButton *button_roll_school;
    QPushButton *button_innovation;

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
        main_frame = new QFrame(frame_main);
        main_frame->setObjectName(QStringLiteral("main_frame"));
        main_frame->setGeometry(QRect(0, 0, 891, 35));
        main_frame->setFrameShape(QFrame::StyledPanel);
        main_frame->setFrameShadow(QFrame::Raised);
        label_desktop = new QLabel(main_frame);
        label_desktop->setObjectName(QStringLiteral("label_desktop"));
        label_desktop->setEnabled(true);
        label_desktop->setGeometry(QRect(0, 0, 100, 35));
        label_grade_mana = new QLabel(main_frame);
        label_grade_mana->setObjectName(QStringLiteral("label_grade_mana"));
        label_grade_mana->setEnabled(true);
        label_grade_mana->setGeometry(QRect(100, 0, 100, 35));
        label_roll = new QLabel(main_frame);
        label_roll->setObjectName(QStringLiteral("label_roll"));
        label_roll->setEnabled(true);
        label_roll->setGeometry(QRect(200, 0, 100, 35));
        label_user_man = new QLabel(main_frame);
        label_user_man->setObjectName(QStringLiteral("label_user_man"));
        label_user_man->setEnabled(true);
        label_user_man->setGeometry(QRect(300, 0, 100, 35));
        main_frame_grade = new QFrame(frame_main);
        main_frame_grade->setObjectName(QStringLiteral("main_frame_grade"));
        main_frame_grade->setGeometry(QRect(0, 35, 891, 35));
        main_frame_grade->setFrameShape(QFrame::StyledPanel);
        main_frame_grade->setFrameShadow(QFrame::Raised);
        label_logal = new QLabel(main_frame_grade);
        label_logal->setObjectName(QStringLiteral("label_logal"));
        label_logal->setEnabled(true);
        label_logal->setGeometry(QRect(0, 0, 100, 35));
        main_frame_grade_3 = new QFrame(frame_main);
        main_frame_grade_3->setObjectName(QStringLiteral("main_frame_grade_3"));
        main_frame_grade_3->setGeometry(QRect(0, 231, 891, 35));
        main_frame_grade_3->setFrameShape(QFrame::StyledPanel);
        main_frame_grade_3->setFrameShadow(QFrame::Raised);
        label_year_14 = new QLabel(main_frame_grade_3);
        label_year_14->setObjectName(QStringLiteral("label_year_14"));
        label_year_14->setEnabled(true);
        label_year_14->setGeometry(QRect(0, 0, 100, 35));
        label_year_15 = new QLabel(main_frame_grade_3);
        label_year_15->setObjectName(QStringLiteral("label_year_15"));
        label_year_15->setEnabled(true);
        label_year_15->setGeometry(QRect(100, 0, 120, 35));
        label_year_16 = new QLabel(main_frame_grade_3);
        label_year_16->setObjectName(QStringLiteral("label_year_16"));
        label_year_16->setEnabled(true);
        label_year_16->setGeometry(QRect(220, 0, 120, 35));
        main_frame_grade_2 = new QFrame(frame_main);
        main_frame_grade_2->setObjectName(QStringLiteral("main_frame_grade_2"));
        main_frame_grade_2->setGeometry(QRect(0, 70, 891, 161));
        main_frame_grade_2->setFrameShape(QFrame::StyledPanel);
        main_frame_grade_2->setFrameShadow(QFrame::Raised);
        label_year_18 = new QLabel(main_frame_grade_2);
        label_year_18->setObjectName(QStringLiteral("label_year_18"));
        label_year_18->setEnabled(true);
        label_year_18->setGeometry(QRect(430, 0, 30, 35));
        dateEdit = new QDateEdit(main_frame_grade_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(300, 0, 118, 35));
        dateEdit_2 = new QDateEdit(main_frame_grade_2);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(472, 0, 118, 35));
        label_year_17 = new QLabel(main_frame_grade_2);
        label_year_17->setObjectName(QStringLiteral("label_year_17"));
        label_year_17->setEnabled(true);
        label_year_17->setGeometry(QRect(220, 0, 71, 35));
        main_frame_grade_4 = new QFrame(frame_main);
        main_frame_grade_4->setObjectName(QStringLiteral("main_frame_grade_4"));
        main_frame_grade_4->setGeometry(QRect(0, 266, 891, 241));
        main_frame_grade_4->setFrameShape(QFrame::StyledPanel);
        main_frame_grade_4->setFrameShadow(QFrame::Raised);
        size_putton->raise();
        putton_delete->raise();
        main_frame_grade->raise();
        main_frame->raise();
        main_frame_grade_3->raise();
        main_frame_grade_2->raise();
        main_frame_grade_4->raise();
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
        button_managrade = new QPushButton(frame_background);
        button_managrade->setObjectName(QStringLiteral("button_managrade"));
        button_managrade->setGeometry(QRect(0, 0, 120, 35));
        button_innovations = new QPushButton(frame_background);
        button_innovations->setObjectName(QStringLiteral("button_innovations"));
        button_innovations->setGeometry(QRect(118, 0, 120, 35));
        button_manaroll = new QPushButton(frame_background);
        button_manaroll->setObjectName(QStringLiteral("button_manaroll"));
        button_manaroll->setGeometry(QRect(236, 0, 120, 35));
        button_manage = new QPushButton(frame_background);
        button_manage->setObjectName(QStringLiteral("button_manage"));
        button_manage->setGeometry(QRect(354, 0, 120, 35));
        label_background_2 = new QLabel(frame_top);
        label_background_2->setObjectName(QStringLiteral("label_background_2"));
        label_background_2->setGeometry(QRect(-2, 10, 239, 53));
        frame_background->raise();
        label_background->raise();
        label_background_2->raise();
        frame_left = new QFrame(centralwidget);
        frame_left->setObjectName(QStringLiteral("frame_left"));
        frame_left->setGeometry(QRect(0, 100, 141, 500));
        frame_left->setFrameShape(QFrame::StyledPanel);
        frame_left->setFrameShadow(QFrame::Raised);
        button_infor_search = new QPushButton(frame_left);
        button_infor_search->setObjectName(QStringLiteral("button_infor_search"));
        button_infor_search->setGeometry(QRect(0, 0, 141, 35));
        button_infor_search->setAutoDefault(false);
        button_grade_search = new QPushButton(frame_left);
        button_grade_search->setObjectName(QStringLiteral("button_grade_search"));
        button_grade_search->setGeometry(QRect(0, 32, 141, 35));
        button_grade_search->setAutoDefault(false);
        button_roll_school = new QPushButton(frame_left);
        button_roll_school->setObjectName(QStringLiteral("button_roll_school"));
        button_roll_school->setGeometry(QRect(0, 64, 141, 35));
        button_roll_school->setAutoDefault(false);
        button_innovation = new QPushButton(frame_left);
        button_innovation->setObjectName(QStringLiteral("button_innovation"));
        button_innovation->setEnabled(true);
        button_innovation->setGeometry(QRect(0, 96, 141, 35));
        button_innovation->setAutoDefault(false);
        teacher->setCentralWidget(centralwidget);

        retranslateUi(teacher);

        QMetaObject::connectSlotsByName(teacher);
    } // setupUi

    void retranslateUi(QMainWindow *teacher)
    {
        teacher->setWindowTitle(QApplication::translate("teacher", "MainWindow", nullptr));
        size_putton->setText(QString());
        putton_delete->setText(QString());
        label_desktop->setText(QApplication::translate("teacher", "  \346\210\221\347\232\204\346\241\214\351\235\242", nullptr));
        label_grade_mana->setText(QApplication::translate("teacher", "  \346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        label_roll->setText(QApplication::translate("teacher", "  \345\255\246\347\261\215\347\256\241\347\220\206", nullptr));
        label_user_man->setText(QApplication::translate("teacher", "  \347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        label_logal->setText(QApplication::translate("teacher", "  \346\223\215\344\275\234\346\227\245\345\277\227", nullptr));
        label_year_14->setText(QApplication::translate("teacher", "  \347\224\250\346\210\267\346\237\245\350\257\242", nullptr));
        label_year_15->setText(QApplication::translate("teacher", "  \346\211\271\351\207\217\345\242\236\345\212\240\347\224\250\346\210\267", nullptr));
        label_year_16->setText(QApplication::translate("teacher", "  \345\210\240\351\231\244\346\214\207\345\256\232\347\224\250\346\210\267", nullptr));
        label_year_18->setText(QApplication::translate("teacher", " --", nullptr));
        label_year_17->setText(QApplication::translate("teacher", "\350\265\267\346\255\242\346\227\266\351\227\264\357\274\232", nullptr));
        label_background->setText(QString());
        button_managrade->setText(QApplication::translate("teacher", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        button_innovations->setText(QApplication::translate("teacher", "\345\210\233\346\226\260\351\241\271\347\233\256", nullptr));
        button_manaroll->setText(QApplication::translate("teacher", "\345\255\246\347\261\215\347\256\241\347\220\206", nullptr));
        button_manage->setText(QApplication::translate("teacher", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        label_background_2->setText(QString());
        button_infor_search->setText(QApplication::translate("teacher", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        button_grade_search->setText(QApplication::translate("teacher", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        button_roll_school->setText(QApplication::translate("teacher", "\345\255\246\347\261\215\346\237\245\350\257\242", nullptr));
        button_innovation->setText(QApplication::translate("teacher", "\345\210\233\346\226\260\351\241\271\347\233\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacher: public Ui_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
