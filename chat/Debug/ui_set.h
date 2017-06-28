/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_set
{
public:
    QLabel *windowsNameLabel_2;
    QPushButton *exitButton;
    QPushButton *returnButton;
    QPushButton *loginButton;
    QLineEdit *lineEdit;
    QPushButton *userPhotoButton;

    void setupUi(QDialog *set)
    {
        if (set->objectName().isEmpty())
            set->setObjectName(QString::fromUtf8("set"));
        set->resize(349, 497);
        set->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        windowsNameLabel_2 = new QLabel(set);
        windowsNameLabel_2->setObjectName(QString::fromUtf8("windowsNameLabel_2"));
        windowsNameLabel_2->setGeometry(QRect(20, 20, 91, 21));
        windowsNameLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        exitButton = new QPushButton(set);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(310, -1, 41, 41));
        exitButton->setStyleSheet(QString::fromUtf8(""));
        exitButton->setCheckable(false);
        exitButton->setAutoDefault(false);
        exitButton->setDefault(false);
        exitButton->setFlat(true);
        returnButton = new QPushButton(set);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(109, 430, 131, 21));
        returnButton->setStyleSheet(QString::fromUtf8("color: rgb(67, 107, 149);\n"
"font: 10pt \"\345\271\274\345\234\206\";\n"
""));
        returnButton->setFlat(true);
        loginButton = new QPushButton(set);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setEnabled(true);
        loginButton->setGeometry(QRect(43, 324, 262, 50));
        loginButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(254, 254, 254);"));
        loginButton->setFlat(false);
        lineEdit = new QLineEdit(set);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(114, 276, 121, 21));
        userPhotoButton = new QPushButton(set);
        userPhotoButton->setObjectName(QString::fromUtf8("userPhotoButton"));
        userPhotoButton->setGeometry(QRect(117, 130, 114, 114));

        retranslateUi(set);

        QMetaObject::connectSlotsByName(set);
    } // setupUi

    void retranslateUi(QDialog *set)
    {
        set->setWindowTitle(QApplication::translate("set", "Dialog", 0, QApplication::UnicodeUTF8));
        windowsNameLabel_2->setText(QApplication::translate("set", "<html><head/><body><p><span style=\" font-size:12pt; color:#4a4a4a;\">QG Chat</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("set", "\303\227", 0, QApplication::UnicodeUTF8));
        returnButton->setText(QApplication::translate("set", "return", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("set", "Login", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("set", "input username", 0, QApplication::UnicodeUTF8));
        userPhotoButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class set: public Ui_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
