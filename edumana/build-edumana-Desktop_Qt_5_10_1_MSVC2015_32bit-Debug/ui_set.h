/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

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
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *set)
    {
        if (set->objectName().isEmpty())
            set->setObjectName(QStringLiteral("set"));
        set->resize(349, 497);
        set->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        windowsNameLabel_2 = new QLabel(set);
        windowsNameLabel_2->setObjectName(QStringLiteral("windowsNameLabel_2"));
        windowsNameLabel_2->setGeometry(QRect(20, 20, 131, 21));
        windowsNameLabel_2->setStyleSheet(QStringLiteral("color: rgb(74, 74, 74);"));
        exitButton = new QPushButton(set);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(310, -1, 41, 41));
        exitButton->setStyleSheet(QStringLiteral(""));
        exitButton->setCheckable(false);
        exitButton->setAutoDefault(false);
        exitButton->setFlat(true);
        returnButton = new QPushButton(set);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(109, 430, 131, 21));
        returnButton->setStyleSheet(QString::fromUtf8("color: rgb(67, 107, 149);\n"
"font: 10pt \"\345\271\274\345\234\206\";\n"
""));
        returnButton->setFlat(true);
        loginButton = new QPushButton(set);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setEnabled(true);
        loginButton->setGeometry(QRect(43, 360, 262, 50));
        loginButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(254, 254, 254);"));
        loginButton->setFlat(false);
        lineEdit = new QLineEdit(set);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(114, 276, 121, 21));
        userPhotoButton = new QPushButton(set);
        userPhotoButton->setObjectName(QStringLiteral("userPhotoButton"));
        userPhotoButton->setGeometry(QRect(117, 130, 114, 114));
        lineEdit_2 = new QLineEdit(set);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(114, 320, 121, 21));

        retranslateUi(set);

        exitButton->setDefault(false);


        QMetaObject::connectSlotsByName(set);
    } // setupUi

    void retranslateUi(QDialog *set)
    {
        set->setWindowTitle(QApplication::translate("set", "Dialog", nullptr));
        windowsNameLabel_2->setText(QApplication::translate("set", "<html><head/><body><p>\345\255\246\347\261\215\347\256\241\347\220\206\347\263\273\347\273\237-\346\263\250\345\206\214</p></body></html>", nullptr));
        exitButton->setText(QApplication::translate("set", "\303\227", nullptr));
        returnButton->setText(QApplication::translate("set", "return", nullptr));
        loginButton->setText(QApplication::translate("set", "Login", nullptr));
        lineEdit->setText(QString());
        userPhotoButton->setText(QString());
        lineEdit_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class set: public Ui_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
