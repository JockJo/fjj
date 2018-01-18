#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include <QDebug>
#include <QMenu>
#include "db.h"

namespace Ui {
class student;
}

class student : public QMainWindow
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = 0);
    ~student();

private slots:

    void on_button_infor_search_clicked();

protected slots:
    void classCourseSlot();
    void gradeTestSlot();
    void gradeCourseSlot();
    void innovationSlot();
    void studyTaskSlot();
    void courseTaskSlot();
    void testSchemeSlot();
    void cardSlot();
    void trainingSchemeSlot();



private:
    Ui::student *ui;
    bool state=false;
    void set_left();
    void set_top();
    void set_main();
    void action_subMenu_select(QMenu *m);
    void action_subMenu_evaluate(QMenu *m);
    void action_subMenu_innovations(QMenu *m);
    void action_subMenu_regist(QMenu *m);
};

#endif // STUDENT_H
