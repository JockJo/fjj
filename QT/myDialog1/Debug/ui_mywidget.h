/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QLabel *label;
    QPushButton *showChildButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QString::fromUtf8("myWidget"));
        myWidget->resize(400, 300);
        label = new QLabel(myWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 200, 261, 20));
        showChildButton = new QPushButton(myWidget);
        showChildButton->setObjectName(QString::fromUtf8("showChildButton"));
        showChildButton->setGeometry(QRect(130, 90, 251, 28));
        pushButton = new QPushButton(myWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 30, 231, 28));
        pushButton_2 = new QPushButton(myWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 160, 93, 28));

        retranslateUi(myWidget);
        QObject::connect(pushButton_2, SIGNAL(clicked()), myWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myWidget", "I am main screen", 0, QApplication::UnicodeUTF8));
        showChildButton->setText(QApplication::translate("myWidget", "display child window", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myWidget", "reload", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myWidget", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
