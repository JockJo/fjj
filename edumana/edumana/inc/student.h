#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include <QDebug>
#include <QMenu>
#include <QBoxLayout>
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
    void on_button_grade_search_clicked();
    void on_button_roll_search_clicked();

protected slots:
    void familyinfoSlot();
    void schoolinfoSlot();
    void rollallSlot();
    void srcinfoSlot();
    void applyInnovation();
    void searchInnovationSlot();
    void updateInnovationSlot();



private:
    Ui::student *ui;
    bool state=false;
    void set_left();
    void set_top();
    void set_main();
    void mana_roll_set();
    void innovation_set();
    void infosearch_set();
    void action_subMenu_family_info(QMenu *m);
    void action_subMenu_school_info(QMenu *m);
    void action_subMenu_roll_all(QMenu *m);
    void action_subMenu_src_info(QMenu *m);
    void action_subMenu_apply(QMenu *m);
    void action_subMenu_search(QMenu *m);
    void action_subMenu_update(QMenu *m);
};

#endif // STUDENT_H
