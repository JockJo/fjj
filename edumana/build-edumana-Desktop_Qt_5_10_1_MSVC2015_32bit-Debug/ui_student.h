/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

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

class Ui_student
{
public:
    QWidget *centralwidget;
    QFrame *frame_top;
    QLabel *label_background;
    QFrame *frame_background;
    QPushButton *button_manaRoll;
    QPushButton *button_innovation;
    QPushButton *button_infosearch;
    QPushButton *button_more;
    QLabel *label_background_2;
    QFrame *frame_left;
    QPushButton *button_infor_search;
    QPushButton *button_grade_search;
    QPushButton *button_roll_search;
    QFrame *frame_main;
    QPushButton *size_putton;
    QPushButton *putton_delete;
    QFrame *main_frame;
    QLabel *label_desktop;
    QLabel *label_innovation;
    QLabel *label_grade_search;
    QTableWidget *table_grade;
    QTableWidget *table_grade_2;
    QFrame *main_frame_pro;
    QLabel *label_apply_pro;
    QLabel *label_search_pro;
    QLabel *label_update_pro;
    QTableWidget *table_grade_3;
    QTableWidget *table_grade_4;

    void setupUi(QMainWindow *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName(QStringLiteral("student"));
        student->resize(1026, 600);
        centralwidget = new QWidget(student);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
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
        button_manaRoll = new QPushButton(frame_background);
        button_manaRoll->setObjectName(QStringLiteral("button_manaRoll"));
        button_manaRoll->setGeometry(QRect(0, 0, 120, 35));
        button_innovation = new QPushButton(frame_background);
        button_innovation->setObjectName(QStringLiteral("button_innovation"));
        button_innovation->setGeometry(QRect(118, 0, 120, 35));
        button_infosearch = new QPushButton(frame_background);
        button_infosearch->setObjectName(QStringLiteral("button_infosearch"));
        button_infosearch->setGeometry(QRect(236, 0, 120, 35));
        button_more = new QPushButton(frame_background);
        button_more->setObjectName(QStringLiteral("button_more"));
        button_more->setGeometry(QRect(354, 0, 120, 35));
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
        button_roll_search = new QPushButton(frame_left);
        button_roll_search->setObjectName(QStringLiteral("button_roll_search"));
        button_roll_search->setGeometry(QRect(0, 64, 141, 35));
        button_roll_search->setAutoDefault(false);
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
        label_innovation = new QLabel(main_frame);
        label_innovation->setObjectName(QStringLiteral("label_innovation"));
        label_innovation->setEnabled(true);
        label_innovation->setGeometry(QRect(200, 0, 100, 35));
        label_grade_search = new QLabel(main_frame);
        label_grade_search->setObjectName(QStringLiteral("label_grade_search"));
        label_grade_search->setEnabled(true);
        label_grade_search->setGeometry(QRect(100, 0, 100, 35));
        table_grade = new QTableWidget(frame_main);
        if (table_grade->columnCount() < 7)
            table_grade->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(241, 241, 241, 0));
        table_grade->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_grade->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_grade->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_grade->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_grade->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_grade->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_grade->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        table_grade->setObjectName(QStringLiteral("table_grade"));
        table_grade->setGeometry(QRect(2, 70, 891, 35));
        table_grade_2 = new QTableWidget(frame_main);
        if (table_grade_2->columnCount() < 7)
            table_grade_2->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setBackground(QColor(241, 241, 241, 0));
        table_grade_2->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_grade_2->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_grade_2->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_grade_2->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_grade_2->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_grade_2->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table_grade_2->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        table_grade_2->setObjectName(QStringLiteral("table_grade_2"));
        table_grade_2->setGeometry(QRect(2, 105, 891, 35));
        main_frame_pro = new QFrame(frame_main);
        main_frame_pro->setObjectName(QStringLiteral("main_frame_pro"));
        main_frame_pro->setGeometry(QRect(0, 35, 891, 35));
        main_frame_pro->setFrameShape(QFrame::StyledPanel);
        main_frame_pro->setFrameShadow(QFrame::Raised);
        label_apply_pro = new QLabel(main_frame_pro);
        label_apply_pro->setObjectName(QStringLiteral("label_apply_pro"));
        label_apply_pro->setEnabled(true);
        label_apply_pro->setGeometry(QRect(0, 0, 100, 35));
        label_search_pro = new QLabel(main_frame_pro);
        label_search_pro->setObjectName(QStringLiteral("label_search_pro"));
        label_search_pro->setEnabled(true);
        label_search_pro->setGeometry(QRect(100, 0, 100, 35));
        label_update_pro = new QLabel(main_frame_pro);
        label_update_pro->setObjectName(QStringLiteral("label_update_pro"));
        label_update_pro->setEnabled(true);
        label_update_pro->setGeometry(QRect(200, 0, 100, 35));
        table_grade_3 = new QTableWidget(frame_main);
        if (table_grade_3->columnCount() < 7)
            table_grade_3->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setBackground(QColor(241, 241, 241, 0));
        table_grade_3->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table_grade_3->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table_grade_3->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table_grade_3->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table_grade_3->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table_grade_3->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table_grade_3->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        table_grade_3->setObjectName(QStringLiteral("table_grade_3"));
        table_grade_3->setGeometry(QRect(2, 140, 891, 35));
        table_grade_4 = new QTableWidget(frame_main);
        if (table_grade_4->columnCount() < 7)
            table_grade_4->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setBackground(QColor(241, 241, 241, 0));
        table_grade_4->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        table_grade_4->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        table_grade_4->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        table_grade_4->setHorizontalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        table_grade_4->setHorizontalHeaderItem(4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        table_grade_4->setHorizontalHeaderItem(5, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        table_grade_4->setHorizontalHeaderItem(6, __qtablewidgetitem27);
        table_grade_4->setObjectName(QStringLiteral("table_grade_4"));
        table_grade_4->setGeometry(QRect(2, 170, 891, 331));
        student->setCentralWidget(centralwidget);
        frame_top->raise();
        frame_main->raise();
        frame_left->raise();

        retranslateUi(student);

        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QMainWindow *student)
    {
        student->setWindowTitle(QApplication::translate("student", "MainWindow", nullptr));
        label_background->setText(QString());
        button_manaRoll->setText(QApplication::translate("student", "\345\255\246\347\261\215\347\256\241\347\220\206", nullptr));
        button_innovation->setText(QApplication::translate("student", "\345\210\233\346\226\260\351\241\271\347\233\256", nullptr));
        button_infosearch->setText(QApplication::translate("student", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        button_more->setText(QString());
        label_background_2->setText(QString());
        button_infor_search->setText(QApplication::translate("student", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        button_grade_search->setText(QApplication::translate("student", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        button_roll_search->setText(QApplication::translate("student", "\345\255\246\347\261\215\346\237\245\350\257\242", nullptr));
        size_putton->setText(QString());
        putton_delete->setText(QString());
        label_desktop->setText(QApplication::translate("student", "  \346\210\221\347\232\204\346\241\214\351\235\242", nullptr));
        label_innovation->setText(QApplication::translate("student", "  \345\210\233\346\226\260\351\241\271\347\233\256", nullptr));
        label_grade_search->setText(QApplication::translate("student", "  \346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_grade->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("student", "\347\224\263\346\212\245\344\272\272\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_grade->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("student", "\347\224\263\346\212\245\344\272\272\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_grade->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("student", "\350\257\276\351\242\230\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_grade->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("student", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_grade->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("student", "\346\211\271\346\254\241\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_grade->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("student", "\350\257\276\351\242\230\347\256\200\344\273\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_grade->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("student", "\346\214\207\345\257\274\346\225\231\345\270\210\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table_grade_2->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("student", "3214002920", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table_grade_2->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("student", "\345\274\240\345\260\217\350\275\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table_grade_2->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("student", "A1111", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table_grade_2->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("student", "\346\265\201\350\241\214\351\237\263\344\271\220\347\240\224\347\251\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table_grade_2->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("student", "2018\346\230\245\345\255\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table_grade_2->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("student", "\346\232\202\346\227\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table_grade_2->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("student", "\351\231\210\345\245\225\350\277\205", nullptr));
        label_apply_pro->setText(QApplication::translate("student", "  \347\224\263\346\212\245\351\241\271\347\233\256", nullptr));
        label_search_pro->setText(QApplication::translate("student", "  \345\267\262\351\200\211\350\257\276\351\242\230", nullptr));
        label_update_pro->setText(QApplication::translate("student", "  \344\277\256\346\224\271\351\241\271\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table_grade_3->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("student", "\346\214\207\345\257\274\346\225\231\345\270\210\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table_grade_3->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("student", "\346\225\231\345\270\210\350\201\224\347\263\273\346\226\271\345\274\217\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = table_grade_3->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("student", "\351\200\211\351\242\230\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = table_grade_3->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("student", "\351\200\211\351\242\230\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = table_grade_3->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("student", "\347\224\263\346\212\245\350\265\204\351\207\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = table_grade_3->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("student", "\345\256\241\346\240\270\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = table_grade_3->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QApplication::translate("student", "\346\223\215\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = table_grade_4->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("student", "\345\221\250\346\235\260\344\274\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = table_grade_4->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("student", "13387987892", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = table_grade_4->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("student", "2018.1.1", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = table_grade_4->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QApplication::translate("student", "2019.1.1", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = table_grade_4->horizontalHeaderItem(4);
        ___qtablewidgetitem25->setText(QApplication::translate("student", "10000", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = table_grade_4->horizontalHeaderItem(5);
        ___qtablewidgetitem26->setText(QApplication::translate("student", "\345\217\227\345\256\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = table_grade_4->horizontalHeaderItem(6);
        ___qtablewidgetitem27->setText(QApplication::translate("student", "\346\232\202\346\227\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
