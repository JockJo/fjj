/********************************************************************************
** Form generated from reading UI file 'mywidget1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET1_H
#define UI_MYWIDGET1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget1
{
public:

    void setupUi(QWidget *myWidget1)
    {
        if (myWidget1->objectName().isEmpty())
            myWidget1->setObjectName(QString::fromUtf8("myWidget1"));
        myWidget1->resize(400, 300);

        retranslateUi(myWidget1);

        QMetaObject::connectSlotsByName(myWidget1);
    } // setupUi

    void retranslateUi(QWidget *myWidget1)
    {
        myWidget1->setWindowTitle(QApplication::translate("myWidget1", "myWidget1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myWidget1: public Ui_myWidget1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET1_H
