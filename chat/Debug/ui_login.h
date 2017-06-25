/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *userPhoto;
    QLabel *userNameLabel;
    QPushButton *loginButton;
    QLabel *windowsNameLabel;
    QPushButton *changAccountButton;
    QPushButton *exitButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(349, 497);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setFocusPolicy(Qt::WheelFocus);
        login->setContextMenuPolicy(Qt::NoContextMenu);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
""));
        userPhoto = new QLabel(login);
        userPhoto->setObjectName(QString::fromUtf8("userPhoto"));
        userPhoto->setGeometry(QRect(117, 130, 114, 114));
        userNameLabel = new QLabel(login);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(114, 276, 121, 21));
        loginButton = new QPushButton(login);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setEnabled(true);
        loginButton->setGeometry(QRect(43, 324, 262, 50));
        loginButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(254, 254, 254);"));
        loginButton->setFlat(false);
        windowsNameLabel = new QLabel(login);
        windowsNameLabel->setObjectName(QString::fromUtf8("windowsNameLabel"));
        windowsNameLabel->setGeometry(QRect(20, 20, 91, 21));
        windowsNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(74, 74, 74);"));
        changAccountButton = new QPushButton(login);
        changAccountButton->setObjectName(QString::fromUtf8("changAccountButton"));
        changAccountButton->setGeometry(QRect(109, 430, 131, 21));
        changAccountButton->setStyleSheet(QString::fromUtf8("color: rgb(67, 107, 149);\n"
"font: 10pt \"\345\271\274\345\234\206\";\n"
""));
        changAccountButton->setFlat(true);
        exitButton = new QPushButton(login);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(310, -1, 41, 41));
        exitButton->setStyleSheet(QString::fromUtf8(""));
        exitButton->setCheckable(false);
        exitButton->setAutoDefault(false);
        exitButton->setDefault(false);
        exitButton->setFlat(true);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "QG Chat", 0, QApplication::UnicodeUTF8));
        userPhoto->setText(QApplication::translate("login", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        userNameLabel->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#878787;\">userName</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("login", "Login", 0, QApplication::UnicodeUTF8));
        windowsNameLabel->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:12pt; color:#4a4a4a;\">QG Chat</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        changAccountButton->setText(QApplication::translate("login", "Switch Account", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("login", "\303\227", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
