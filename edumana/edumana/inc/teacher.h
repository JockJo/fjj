#ifndef TEACHER_H
#define TEACHER_H

#include <QMainWindow>
#include <QDebug>
#include <QMenu>

namespace Ui {
class teacher;
}

class teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit teacher(QWidget *parent = 0);
    ~teacher();
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
    Ui::teacher *ui;
    bool state=false;
    void set_left();
    void set_top();
    void set_main();
    void action_subMenu_select(QMenu *m);
    void action_subMenu_evaluate(QMenu *m);
    void action_subMenu_innovations(QMenu *m);
    void action_subMenu_regist(QMenu *m);
};

#endif // TEACHER_H
